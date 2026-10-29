// ============================================================================
// File: tl_mshr.sv
// Module: tl_mshr
// Description: Non-Blocking Miss Status Holding Register (MSHR) for TileLink L2
// Architecture:
//   - Fully associative CAM matching across in-flight line addresses
//   - Linked-list chaining for same-line Miss Coalescing
//   - Hit-under-Miss support with zero-cycle Early Release on cache hits
//   - Out-of-Order Channel D transaction tracking via TileLink a_source IDs
// Standards: TileLink Specification v1.8.1 / Vortex GPGPU Cache Architecture
// ============================================================================

`timescale 1ns / 100ps

// ============================================================================
// Terminal / CLI Macro Definitions for Dynamic Parameter Overrides
// Can be overridden via simulator flags: e.g. -DCFG_MSHR_SIZE=8
// ============================================================================
`ifndef CFG_MSHR_SIZE
    `define CFG_MSHR_SIZE 8              // Default: 8 MSHRs (Matching PDF spec)
`endif

`ifndef CFG_LINE_OFFSET_BITS
    `define CFG_LINE_OFFSET_BITS 6       // Default: 6 bits for 64-byte cache line
`endif

module tl_mshr 
  import tl_pkg::*;
#(
  // --------------------------------------------------------------------------
  // Top-Level Configurable Parameters (Overridable via CLI Macros)
  // --------------------------------------------------------------------------
  parameter MSHR_SIZE        = `CFG_MSHR_SIZE,            // Number of concurrent in-flight misses
  parameter ADDR_SIZE        = tl_pkg::TL_ADDR_WIDTH,     // Physical address width (32-bit)
  parameter DATA_SIZE        = tl_pkg::TL_DATA_WIDTH,     // Data word width (32-bit)
  parameter SOURCE_WIDTH     = tl_pkg::TL_SOURCE_WIDTH,   // TileLink Client ID width (a_source)
  parameter LINE_OFFSET_BITS = `CFG_LINE_OFFSET_BITS,     // Byte offset bits within line (6 for 64B)

  // --------------------------------------------------------------------------
  // Derived Architectural Constants
  // --------------------------------------------------------------------------
  localparam LINE_ADDR_WIDTH = ADDR_SIZE - LINE_OFFSET_BITS, // Truncated line address width (26 bits)
  localparam MSHR_ADDR_WIDTH = $clog2(MSHR_SIZE)             // Pointer index width (3 bits for 8 entries)
) (
  input  wire                           clk,
  input  wire                           rst_n,

  // ==========================================================================
  // 1. ALLOCATION INTERFACE (Front-End Pipeline / TileLink Channel A)
  // Invoked when an incoming request is accepted by the cache pipeline
  // ==========================================================================
  input  wire                           alloc_valid,    // Allocation strobe (valid read request)
  input  wire                           alloc_rw,       // Read/Write qualifier (0 = Read/Get, 1 = Write/Put)
  input  wire [ADDR_SIZE-1:0]           alloc_addr,     // Full 32-bit request address
  input  wire [SOURCE_WIDTH-1:0]        alloc_source,   // Client transaction ID (preserved for response)
  input  wire [2:0]                     alloc_opcode,   // Channel A opcode (e.g. TL_A_GET)
  input  wire [(DATA_SIZE/8)-1:0]       alloc_byteen,   // Byte-enable mask
  input  wire [DATA_SIZE-1:0]           alloc_data,     // Request data payload (if applicable)

  output wire                           alloc_ready,    // 1: Free MSHR entry available
  output wire [MSHR_ADDR_WIDTH-1:0]     alloc_id,       // Index of the allocated MSHR entry
  output wire                           alloc_match,    // 1: Target line matches an in-flight miss (Coalesce candidate)
  output wire [MSHR_ADDR_WIDTH-1:0]     alloc_match_id, // Index of the existing line entry to link behind

  // ==========================================================================
  // 2. FINALIZE INTERFACE (Tag Lookup Evaluation / Cache Controller Pipeline)
  // Invoked after SRAM Tag comparison is complete
  // ==========================================================================
  input  wire                           fin_valid,       // Finalize strobe upon tag lookup completion
  input  wire [MSHR_ADDR_WIDTH-1:0]     fin_id,          // MSHR slot index to finalize
  input  wire                           fin_is_hit,      // 1 = HIT -> Early Release; 0 = MISS -> Persist in MSHR
  input  wire                           fin_is_coalesced,// 1 = Link behind existing predecessor entry
  input  wire [MSHR_ADDR_WIDTH-1:0]     fin_prev_id,     // Predecessor slot index in linked-list chain

  // ==========================================================================
  // 3. MEMORY FILL INTERFACE (Downstream DRAM Refill Complete)
  // Invoked when full line refill has finished loading from memory
  // ==========================================================================
  input  wire                           fill_valid,      // Refill done pulse (from CDC req_done_pulse)
  input  wire [MSHR_ADDR_WIDTH-1:0]     fill_id,         // MSHR slot index that initiated this refill
  output wire [ADDR_SIZE-1:0]           fill_addr,       // 64B-aligned line address for SRAM data array write

  // ==========================================================================
  // 4. DEQUEUE / REPLAY INTERFACE (TileLink Channel D Driver)
  // Sequentially drains the linked-list chain onto Channel D
  // ==========================================================================
  output reg                            deq_valid,       // Response valid strobe to Channel D
  output reg                            deq_rw,          // Read/Write type của request đang dequeue
  input  wire                           deq_ready,       // Downstream acceptance handshake (out_ready)
  output reg  [SOURCE_WIDTH-1:0]        deq_source,      // Preserved Client ID for out-of-order routing
  output reg  [2:0]                     deq_opcode,      // Preserved Channel A opcode (mapped to AccessAckData)
  output reg  [ADDR_SIZE-1:0]           deq_addr,        // Exact target address containing word offset [5:2]
  output reg  [(DATA_SIZE/8)-1:0]       deq_byteen,      // Preserved byte-enable mask
  output reg  [DATA_SIZE-1:0]           deq_data,        // Preserved request payload
  output reg  [MSHR_ADDR_WIDTH-1:0]     deq_id,          // Current entry index being dequeued

  // ==========================================================================
  // MSHR Capacity Status Outputs
  // ==========================================================================
  output wire                           empty,           // 1: No entries pending
  output wire                           full             // 1: All entries occupied (backpressures Channel A)
);

  // ==========================================================================
  // Internal MSHR Storage Arrays
  // ==========================================================================
  reg [MSHR_SIZE-1:0]         valid_table;                     // Entry occupancy flags
  reg [ADDR_SIZE-1:0]         addr_table   [0:MSHR_SIZE-1];   // Full 32-bit address (preserves word offset!)
  reg [MSHR_SIZE-1:0]         rw_table; 
  reg [SOURCE_WIDTH-1:0]      source_table [0:MSHR_SIZE-1];   // Client transaction IDs
  reg [2:0]                   opcode_table [0:MSHR_SIZE-1];   // Channel A request opcodes
  reg [(DATA_SIZE/8)-1:0]     byteen_table [0:MSHR_SIZE-1];   // Byte-enable qualifiers
  reg [DATA_SIZE-1:0]         data_table   [0:MSHR_SIZE-1];   // Target store payloads

  // Linked-List Chaining Table for Miss Coalescing
  reg [MSHR_SIZE-1:0]         next_table;                     // 1 if this entry points to a succeeding entry
  reg [MSHR_ADDR_WIDTH-1:0]   next_index   [0:MSHR_SIZE-1];   // Pointer index of the succeeding entry

  // Extract upper line address bits for CAM associative matching
  wire [LINE_ADDR_WIDTH-1:0] incoming_line_addr = alloc_addr[ADDR_SIZE-1 : LINE_OFFSET_BITS];

  // ==========================================================================
  // Logic 1: Associative CAM Line Matching
  // Compares incoming request line address against all valid in-flight miss entries
  // ==========================================================================
  wire [MSHR_SIZE-1:0] addr_matches;
  genvar i;
  generate
    for (i = 0; i < MSHR_SIZE; i = i + 1) begin : g_cam_matches
      // Match line address while ignoring lower byte/word offset bits [5:0]
      assign addr_matches[i] = valid_table[i] && 
                               (addr_table[i][ADDR_SIZE-1 : LINE_OFFSET_BITS] == incoming_line_addr);
    end
  endgenerate

  assign alloc_match = |addr_matches;

  // Find the tail entry in the chain to link onto (entry with matching line and next_table == 0)
  wire [MSHR_SIZE-1:0] tail_candidates = addr_matches & ~next_table;
  wire [MSHR_ADDR_WIDTH-1:0] tail_idx;

  priority_encoder #(
    .WIDTH        (MSHR_SIZE),
    .LSB_PRIORITY ("HIGH")
  ) tail_encoder (
    .input_unencoded  (tail_candidates),
    .output_valid     (),
    .output_encoded   (tail_idx),
    .output_unencoded ()
  );

  assign alloc_match_id = tail_idx;

  // ==========================================================================
  // Logic 2: Free Slot Selection
  // Selects the next available entry using a priority encoder over inverted valid_table
  // ==========================================================================
  wire [MSHR_SIZE-1:0] free_slots = ~valid_table;
  wire [MSHR_ADDR_WIDTH-1:0] next_free_id;
  wire free_slot_exists;

  priority_encoder #(
    .WIDTH        (MSHR_SIZE),
    .LSB_PRIORITY ("HIGH")
  ) free_slot_encoder (
    .input_unencoded  (free_slots),
    .output_valid     (free_slot_exists),
    .output_encoded   (next_free_id),
    .output_unencoded ()
  );

  assign alloc_ready = free_slot_exists;
  assign alloc_id    = next_free_id;
  assign full        = &valid_table;
  assign empty       = ~(|valid_table);

  // Line-aligned address output for SRAM data array writeback
  assign fill_addr   = {addr_table[fill_id][ADDR_SIZE-1 : LINE_OFFSET_BITS], {LINE_OFFSET_BITS{1'b0}}};

  // ==========================================================================
  // Logic 3: Sequential Dequeue Engine and Linked-List Traversal
  // ==========================================================================
  reg [MSHR_ADDR_WIDTH-1:0] deq_ptr_q, deq_ptr_d;
  reg                       deq_active_q, deq_active_d;

  wire alloc_fire = alloc_valid && alloc_ready;
  wire deq_fire   = deq_valid && deq_ready;

  always_comb begin
    deq_ptr_d    = deq_ptr_q;
    deq_active_d = deq_active_q;
    deq_valid    = deq_active_q;

    // Output packet driving from current dequeue pointer
    deq_id       = deq_ptr_q;
    deq_rw      = rw_table[deq_ptr_q];
    deq_source   = source_table[deq_ptr_q];
    deq_opcode   = opcode_table[deq_ptr_q];
    deq_byteen   = byteen_table[deq_ptr_q];
    deq_data     = data_table[deq_ptr_q];
    // Output full address so controller can extract target word index [5:2]
    deq_addr     = addr_table[deq_ptr_q];

    // Trigger dequeue traversal when DRAM refill completes
    if (fill_valid) begin
      deq_active_d = 1'b1;
      deq_ptr_d    = fill_id;
    end else if (deq_fire) begin
      // Step to the next coalesced entry if linked-list chain continues
      if (next_table[deq_ptr_q]) begin
        deq_ptr_d    = next_index[deq_ptr_q];
        deq_active_d = 1'b1;
      end else begin
        // Reached end of linked-list chain
        deq_active_d = 1'b0;
      end
    end
  end

  // Synchronous State & Storage Table Updates
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      valid_table  <= '0;
      next_table   <= '0;
      deq_ptr_q    <= '0;
      deq_active_q <= 1'b0;
    end else begin
      deq_ptr_q    <= deq_ptr_d;
      deq_active_q <= deq_active_d;

      // ----------------------------------------------------------------------
      // ALLOCATION: Install new incoming request into allocated entry
      // ----------------------------------------------------------------------
      if (alloc_fire) begin
        valid_table[alloc_id]  <= 1'b1;
        next_table[alloc_id]   <= 1'b0;
        addr_table[alloc_id]   <= alloc_addr;   // Full 32-bit address preserved!
        rw_table[alloc_id]     <= alloc_rw;
        source_table[alloc_id] <= alloc_source;
        opcode_table[alloc_id] <= alloc_opcode;
        byteen_table[alloc_id] <= alloc_byteen;
        data_table[alloc_id]   <= alloc_data;
      end

      // ----------------------------------------------------------------------
      // FINALIZE: Evaluate hit/miss status from Tag Array
      // ----------------------------------------------------------------------
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

      // ----------------------------------------------------------------------
      // DEQUEUE: Invalidate entry once successfully transmitted on Channel D
      // ----------------------------------------------------------------------
      if (deq_fire) begin
        valid_table[deq_id] <= 1'b0;
      end
    end
  end

endmodule: tl_mshr