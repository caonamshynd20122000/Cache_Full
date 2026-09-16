// ============================================================================
// File: tl_mshr.sv
// Description: Non-Blocking Miss Status Holding Register (MSHR) for TileLink L2
// Architecture: Streamlined from Vortex GPGPU Cache (VX_cache_mshr.sv)
// Features:
//   - 4-entry storage array (matched to Ara vector coprocessor osmax = 3)
//   - Hit-under-Miss (early release on cache hit)
//   - Miss Coalescing (linked-list chaining for same-line misses)
//   - Out-of-Order transaction tracking via TileLink a_source IDs
// ============================================================================

`timescale 1ns / 100ps

module tl_mshr 
  import tl_pkg::*;
#(
  parameter MSHR_SIZE       = 4,                         // 4 entries (sufficient for Ara osmax=3)
  parameter ADDR_SIZE       = tl_pkg::TL_ADDR_WIDTH,     // 32-bit physical address
  parameter DATA_SIZE       = tl_pkg::TL_DATA_WIDTH,     // 32-bit word width
  parameter SOURCE_WIDTH    = tl_pkg::TL_SOURCE_WIDTH,   // 4-bit Client ID (a_source)
  parameter LINE_OFFSET_BITS = 6,                        // 64-byte line (bits [5:0])
  localparam LINE_ADDR_WIDTH = ADDR_SIZE - LINE_OFFSET_BITS, // 26 bits
  localparam MSHR_ADDR_WIDTH = $clog2(MSHR_SIZE)         // 2 bits for 4 entries
) (
  input  wire                           clk,
  input  wire                           rst_n,

  // ==========================================================================
  // 1. ALLOCATION INTERFACE (Front-End Pipeline / TileLink Channel A)
  // Invoked when an incoming request enters the L2 pipeline
  // ==========================================================================
  input  wire                           alloc_valid,
  input  wire [ADDR_SIZE-1:0]           alloc_addr,
  input  wire [SOURCE_WIDTH-1:0]        alloc_source,
  input  wire [2:0]                     alloc_opcode,
  input  wire [(DATA_SIZE/8)-1:0]       alloc_byteen,
  input  wire [DATA_SIZE-1:0]           alloc_data,
  
  output wire                           alloc_ready,    // 1 if at least 1 free slot exists
  output wire [MSHR_ADDR_WIDTH-1:0]     alloc_id,       // Allocated slot ID (0..3)
  output wire                           alloc_match,    // 1 if address matches an in-flight miss (Coalesce)
  output wire [MSHR_ADDR_WIDTH-1:0]     alloc_match_id, // Matching slot ID to link behind

  // ==========================================================================
  // 2. FINALIZE INTERFACE (Tag Lookup Result / Cache Controller Pipeline)
  // Invoked after SRAM Tag comparison is complete
  // ==========================================================================
  input  wire                           fin_valid,
  input  wire [MSHR_ADDR_WIDTH-1:0]     fin_id,
  input  wire                           fin_is_hit,      // 1 = HIT -> Early Release; 0 = MISS -> Persist
  input  wire                           fin_is_coalesced,// 1 = Linked behind an existing pending entry
  input  wire [MSHR_ADDR_WIDTH-1:0]     fin_prev_id,     // Predecessor slot in linked-list

  // ==========================================================================
  // 3. MEMORY FILL INTERFACE (Downstream DRAM Refill Complete)
  // Invoked when 16 beats from DRAM have finished loading
  // ==========================================================================
  input  wire                           fill_valid,
  input  wire [MSHR_ADDR_WIDTH-1:0]     fill_id,         // MSHR entry that initiated this fill
  output wire [ADDR_SIZE-1:0]           fill_addr,       // Full line address to write to SRAM

  // ==========================================================================
  // 4. DEQUEUE / REPLAY INTERFACE (TileLink Channel D Response Driver)
  // Sequentially drains the linked-list chain onto Channel D
  // ==========================================================================
  output reg                            deq_valid,
  input  wire                           deq_ready,
  output reg  [SOURCE_WIDTH-1:0]        deq_source,
  output reg  [2:0]                     deq_opcode,
  output reg  [ADDR_SIZE-1:0]           deq_addr,
  output reg  [(DATA_SIZE/8)-1:0]       deq_byteen,
  output reg  [DATA_SIZE-1:0]           deq_data,
  output reg  [MSHR_ADDR_WIDTH-1:0]     deq_id,

  // ==========================================================================
  // Status Outputs
  // ==========================================================================
  output wire                           empty,
  output wire                           full
);

  // ==========================================================================
  // Internal MSHR Storage Arrays (Ref: VX_cache_mshr.sv)
  // ==========================================================================
  reg [MSHR_SIZE-1:0]         valid_table;
  reg [LINE_ADDR_WIDTH-1:0]   addr_table   [0:MSHR_SIZE-1];
  reg [SOURCE_WIDTH-1:0]      source_table [0:MSHR_SIZE-1];
  reg [2:0]                   opcode_table [0:MSHR_SIZE-1];
  reg [(DATA_SIZE/8)-1:0]     byteen_table [0:MSHR_SIZE-1];
  reg [DATA_SIZE-1:0]         data_table   [0:MSHR_SIZE-1];

  // Linked-List Chaining Table for Miss Coalescing
  reg [MSHR_SIZE-1:0]         next_table;
  reg [MSHR_ADDR_WIDTH-1:0]   next_index   [0:MSHR_SIZE-1];

  // Truncated line address of incoming request
  wire [LINE_ADDR_WIDTH-1:0] incoming_line_addr = alloc_addr[ADDR_SIZE-1 : LINE_OFFSET_BITS];

  // ==========================================================================
  // Logic 1: CAM Associative Matching (Ref: VX_cache_mshr.sv line 131)
  // Detects if an incoming request accesses the same 64B line as a pending miss
  // ==========================================================================
  wire [MSHR_SIZE-1:0] addr_matches;
  genvar i;
  generate
    for (i = 0; i < MSHR_SIZE; i = i + 1) begin : g_cam_matches
      assign addr_matches[i] = valid_table[i] && (addr_table[i] == incoming_line_addr);
    end
  endgenerate

  assign alloc_match = |addr_matches;

  // Find the tail entry in the chain to link onto (using user's priority_encoder)
  wire [MSHR_SIZE-1:0] tail_candidates = addr_matches & ~next_table;
  wire [MSHR_ADDR_WIDTH-1:0] tail_idx;

  priority_encoder #(
    .WIDTH(MSHR_SIZE),
    .LSB_PRIORITY("HIGH")
  ) tail_encoder (
    .input_unencoded (tail_candidates),
    .output_valid    (),
    .output_encoded  (tail_idx),
    .output_unencoded()
  );

  assign alloc_match_id = tail_idx;

  // ==========================================================================
  // Logic 2: Free Slot Selection (Ref: VX_cache_mshr.sv line 150)
  // Uses priority encoder over ~valid_table to find next available slot
  // ==========================================================================
  wire [MSHR_SIZE-1:0] free_slots = ~valid_table;
  wire [MSHR_ADDR_WIDTH-1:0] next_free_id;
  wire free_slot_exists;

  priority_encoder #(
    .WIDTH(MSHR_SIZE),
    .LSB_PRIORITY("HIGH")
  ) free_slot_encoder (
    .input_unencoded (free_slots),
    .output_valid    (free_slot_exists),
    .output_encoded  (next_free_id),
    .output_unencoded()
  );

  assign alloc_ready = free_slot_exists;
  assign alloc_id    = next_free_id;
  assign full        = &valid_table;
  assign empty       = ~(|valid_table);

  // Line address output for DRAM fill commit
  assign fill_addr   = {addr_table[fill_id], {LINE_OFFSET_BITS{1'b0}}};

  // ==========================================================================
  // Logic 3: Sequential Table Updates & Linked-List Dequeue FSM
  // ==========================================================================
  // Internal Dequeue Pointer Registers
  reg [MSHR_ADDR_WIDTH-1:0] deq_ptr_q, deq_ptr_d;
  reg                       deq_active_q, deq_active_d;

  wire alloc_fire = alloc_valid && alloc_ready;
  wire deq_fire   = deq_valid && deq_ready;

  always_comb begin
    deq_ptr_d    = deq_ptr_q;
    deq_active_d = deq_active_q;
    deq_valid    = deq_active_q;

    // Output payload generation from current dequeue pointer
    deq_id     = deq_ptr_q;
    deq_source = source_table[deq_ptr_q];
    deq_opcode = opcode_table[deq_ptr_q];
    deq_byteen = byteen_table[deq_ptr_q];
    deq_data   = data_table[deq_ptr_q];
    deq_addr   = {addr_table[deq_ptr_q], {LINE_OFFSET_BITS{1'b0}}};

    // Trigger dequeue traversal when DRAM refill completes
    if (fill_valid) begin
      deq_active_d = 1'b1;
      deq_ptr_d    = fill_id;
    end else if (deq_fire) begin
      // Step to the next chained entry if one exists
      if (next_table[deq_ptr_q]) begin
        deq_ptr_d    = next_index[deq_ptr_q];
        deq_active_d = 1'b1;
      end else begin
        // Reached end of linked-list chain
        deq_active_d = 1'b0;
      end
    end
  end

  // Synchronous State & Table Register Updates
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      valid_table  <= '0;
      next_table   <= '0;
      deq_ptr_q    <= '0;
      deq_active_q <= 1'b0;
    end else begin
      deq_ptr_q    <= deq_ptr_d;
      deq_active_q <= deq_active_d;

      // 1. ALLOCATE
      if (alloc_fire) begin
        valid_table[alloc_id]  <= 1'b1;
        next_table[alloc_id]   <= 1'b0;
        addr_table[alloc_id]   <= incoming_line_addr;
        source_table[alloc_id] <= alloc_source;
        opcode_table[alloc_id] <= alloc_opcode;
        byteen_table[alloc_id] <= alloc_byteen;
        data_table[alloc_id]   <= alloc_data;
      end

      // 2. FINALIZE
      if (fin_valid) begin
        if (fin_is_hit) begin
          // Early Release: Cache Hit frees the MSHR slot immediately!
          valid_table[fin_id] <= 1'b0;
        end else if (fin_is_coalesced) begin
          // Link this request onto the predecessor's chain
          next_table[fin_prev_id] <= 1'b1;
          next_index[fin_prev_id] <= fin_id;
        end
      end

      // 3. DEQUEUE
      if (deq_fire) begin
        valid_table[deq_id] <= 1'b0;
      end
    end
  end

endmodule: tl_mshr