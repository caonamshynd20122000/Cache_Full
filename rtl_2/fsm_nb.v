// // ============================================================================
// File: fsm_nb.sv
// Module: fsm_nb
// Description: Fully Pipelined Non-Blocking Cache Controller FSM
// Architecture:
//   - Synchronous Hit-under-Miss pipeline supporting concurrent transactions
//   - Direct tag_array.fsm_accessed handshake eliminating counter phase lag
//   - Request attribute preservation across tag comparison latency
//   - Early MSHR release upon cache hit / Background refill trigger upon miss
// Standards: TileLink Specification v1.8.1 (Preserves a_source for Out-of-Order D)
// ============================================================================

`timescale 1ns / 100ps

// ============================================================================
// Terminal / CLI Macro Definitions for Parameter Overrides
// Can be overridden via simulator flags: e.g. -DCFG_NUM_WAYS=8 -DCFG_MSHR_SIZE=8
// ============================================================================
`ifndef CFG_TOTAL_SIZE
    `define CFG_TOTAL_SIZE 262144        // Default: 32 KiB (262,144 bits)
`endif

`ifndef CFG_NUM_WAYS
    `define CFG_NUM_WAYS 8               // Default: 8-Way Set-Associative
`endif

`ifndef CFG_MSHR_SIZE
    `define CFG_MSHR_SIZE 8              // Default: 8 MSHRs (Matching PDF spec)
`endif

`ifndef CFG_DATA_ELEMENTS
    `define CFG_DATA_ELEMENTS 64         // Default: 64 Bytes per line (16 words)
`endif

`ifndef CFG_LATENCY
    `define CFG_LATENCY 2                // Default: 2-cycle BRAM read latency
`endif

module fsm_nb #(
    // ------------------------------------------------------------------------
    // Top-Level Configurable Parameters (Overridable via CLI Macros)
    // ------------------------------------------------------------------------
    parameter   ADDR_SIZE              = 32,
    parameter   DATA_SIZE              = 32,
    parameter   DATA_ELEMENTS          = `CFG_DATA_ELEMENTS,
    parameter   TOTAL_SIZE             = `CFG_TOTAL_SIZE,
    parameter   LATENCY                = `CFG_LATENCY,
    parameter   NUM_WAYS               = `CFG_NUM_WAYS,
    parameter   MSHR_SIZE              = `CFG_MSHR_SIZE,
    parameter   MSHR_ADDR_W            = $clog2(MSHR_SIZE),
    parameter   SET_REPLACEMENT_POLICY = "NMRU",

    // ------------------------------------------------------------------------
    // Derived Architectural Geometry and Bit-Widths
    // ------------------------------------------------------------------------
    localparam  _BLOCK_SIZE            = DATA_ELEMENTS * 8,                     // Cache block in bits (512 bits)
    localparam  _NUM_LINES             = TOTAL_SIZE / _BLOCK_SIZE / NUM_WAYS,   // Sets count (64 sets)
    localparam  _OFFSET_BITS           = $clog2(DATA_ELEMENTS),                 // Byte offset width (6 bits)
    localparam  _LINE_BITS             = $clog2(_NUM_LINES),                    // Set index width (6 bits)
    localparam  _TAG_BITS              = ADDR_SIZE - _LINE_BITS - _OFFSET_BITS, // Tag width (20 bits)
    localparam  _NUM_TRANSFER          = _BLOCK_SIZE / DATA_SIZE,               // Refill words count (16 words)
    localparam  _TRANSFER_BITS         = (_NUM_TRANSFER > 1) ? $clog2(_NUM_TRANSFER) : 1
) (
    // Clock and Reset
    input  wire                                     clk,
    input  wire                                     rst_n,

    // Upstream Request Interface (From Core / TileLink Channel A)
    input  wire                                     in_rw,            // 0 = Read, 1 = Write
    input  wire [ADDR_SIZE-1 : 0]                   in_addr,          // Target memory address
    input  wire [DATA_SIZE-1 : 0]                   in_data,          // Write data payload
    input  wire [3 : 0]                             in_source,        // Client transaction ID (preserved for OoO Channel D)
    input  wire [2 : 0]                             in_opcode,        // TileLink Channel A opcode (Get/Put)
    input  wire [MSHR_ADDR_W-1 : 0]                 in_mshr_id,       // Allocated MSHR slot index for this transaction
    input  wire                                     in_valid,         // Request valid qualifier
    output wire                                     in_ready,         // FSM acceptance handshake

    // Upstream Fast-Path Response Interface (TileLink Channel D Hit Path)
    output reg  [ADDR_SIZE-1 : 0]                   out_addr,         // Response address
    output reg  [DATA_SIZE-1 : 0]                   out_data,         // Target read word payload extracted from hit line
    output reg  [3 : 0]                             out_source,       // Return client transaction ID
    output reg  [2 : 0]                             out_opcode,       // Return TileLink Channel D opcode (AccessAckData)
    output reg                                      out_valid,        // Hit response valid qualifier
    input  wire                                     out_ready,        // Downstream acceptance backpressure

    // SRAM Tag & Data Arrays Forwarding Interface
    output reg                                      fw_rw,            // Forwarded read/write command to arrays
    output reg  [ADDR_SIZE-1 : 0]                   fw_addr,          // Forwarded address to Tag/Data BRAMs
    output reg  [DATA_SIZE-1 : 0]                   fw_data,          // Forwarded store payload
    output reg                                      fw_valid,         // Forwarded valid strobe
    input  wire                                     fw_ready,         // Array readiness handshake

    // SRAM Data Array Readout Interface
    input  wire [ADDR_SIZE-1 : 0]                   ib_addr,          // SRAM readout line address
    input  wire [_BLOCK_SIZE-1 : 0]                 ib_data,          // 512-bit full line data readout from Data Array
    input  wire                                     ib_valid,         // Readout valid flag
    output reg                                      ib_ready,         // Readout acknowledge handshake

    // Direct Synchronous Status from tag_array
    input  wire                                     fsm_accessed,     // Tag lookup done pulse (synchronous single-cycle trigger)
    input  wire                                     fsm_hit,          // Tag hit evaluation result (1 = Hit, 0 = Miss)

    // MSHR Pipeline Tracking Interface
    output reg                                      mshr_fin_valid,   // Strobe indicating tag evaluation is finalized
    output reg                                      mshr_fin_is_hit,  // 1: Hit (triggers early MSHR release), 0: Miss (persists in MSHR)
    output reg  [MSHR_ADDR_W-1 : 0]                 mshr_fin_id,      // MSHR entry ID to finalize
    output reg                                      miss_trigger      // Trigger pulse to initiate background DRAM line refill
);

    // ========================================================================
    // Internal FSM State Encoding
    // ========================================================================
    localparam STATE_IDLE    = 1'b0; // Awaiting incoming request from Core / Channel A
    localparam STATE_COMPARE = 1'b1; // Dispatching to Tag Array and evaluating Hit/Miss

    reg cur_state, next_state;

    // ========================================================================
    // Request Context Holding Registers
    // Preserves incoming request qualifiers across multi-cycle Tag BRAM read latency
    // ========================================================================
    reg [ADDR_SIZE-1 : 0]       addr_keep;
    reg [DATA_SIZE-1 : 0]       data_keep;
    reg [3 : 0]                 source_keep;
    reg [2 : 0]                 opcode_keep;
    reg [MSHR_ADDR_W-1 : 0]     mshr_id_keep; // Dynamically sized (eliminates 2-bit truncation)
    reg                         write_keep;

    // Ready handshake: Only ready when idle AND downstream SRAM Tag Array is ready
    assign in_ready = fw_ready && (cur_state == STATE_IDLE);

    // Context sampling sequential logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            cur_state    <= STATE_IDLE;
            addr_keep    <= '0;
            data_keep    <= '0;
            source_keep  <= '0;
            opcode_keep  <= '0;
            mshr_id_keep <= '0;
            write_keep   <= 1'b0;
        end else begin
            cur_state <= next_state;
            // Latch request context synchronously on accepted handshake
            if (in_valid && in_ready) begin
                addr_keep    <= in_addr;
                data_keep    <= in_data;
                source_keep  <= in_source;
                opcode_keep  <= in_opcode;
                mshr_id_keep <= in_mshr_id;
                write_keep   <= in_rw;
            end
        end
    end

    // ========================================================================
    // Sub-Word Target Extraction
    // Calculates the word index [5:2] within the 64-byte line to extract 32-bit data
    // ========================================================================
    wire [_TRANSFER_BITS-1 : 0] word_idx = addr_keep[_OFFSET_BITS-1 -: _TRANSFER_BITS];

    // ========================================================================
    // Combinational Next-State and Datapath Routing Logic
    // ========================================================================
    always @* begin
        // Default register driving (preventing inferring latches)
        out_addr        = '0;
        out_data        = '0;
        out_source      = '0;
        out_opcode      = '0;
        out_valid       = 1'b0;

        fw_rw           = 1'b0;
        fw_addr         = '0;
        fw_data         = '0;
        fw_valid        = 1'b0;

        ib_ready        = 1'b0;

        mshr_fin_valid  = 1'b0;
        mshr_fin_is_hit = 1'b0;
        mshr_fin_id     = mshr_id_keep;
        miss_trigger    = 1'b0;

        next_state      = cur_state;

        case (cur_state)
            // ----------------------------------------------------------------
            // STATE_IDLE: Receive request and forward immediately to Tag Array
            // ----------------------------------------------------------------
            STATE_IDLE: begin
                if (in_valid && fw_ready) begin
                    fw_rw      = in_rw;
                    fw_addr    = in_addr;
                    fw_data    = in_data;
                    fw_valid   = 1'b1;

                    next_state = STATE_COMPARE;
                end
            end

            // ----------------------------------------------------------------
            // STATE_COMPARE: Synchronously evaluate Hit/Miss using fsm_accessed
            // ----------------------------------------------------------------
            STATE_COMPARE: begin
                // Maintain SRAM array strobe throughout the lookup cycle
                fw_rw    = write_keep;
                fw_addr  = addr_keep;
                fw_data  = data_keep;
                fw_valid = 1'b1;

                // Directly qualify evaluation with fsm_accessed to eliminate counter skew
                if (fsm_accessed) begin
                    mshr_fin_valid = 1'b1;
                    mshr_fin_id    = mshr_id_keep;

                    if (fsm_hit) begin
                        // ----------------------------------------------------
                        // CACHE HIT PATH: Immediate output and early MSHR release
                        // ----------------------------------------------------
                        mshr_fin_is_hit = 1'b1;
                        ib_ready        = out_ready;

                        out_addr        = addr_keep;
                        out_source      = source_keep;
                        out_opcode      = opcode_keep;
                        // Extract target 32-bit word from the 512-bit SRAM line readout
                        out_data        = ib_data[(word_idx + 1) * DATA_SIZE - 1 -: DATA_SIZE];
                        out_valid       = 1'b1;

                        // Return to IDLE once response handshake completes
                        if (out_ready) begin
                            next_state = STATE_IDLE;
                        end
                    end else begin
                        // ----------------------------------------------------
                        // CACHE MISS PATH: Trigger background refill & free FSM
                        // ----------------------------------------------------
                        mshr_fin_is_hit = 1'b0;
                        miss_trigger    = 1'b1; // Signals controller to start DRAM fetch

                        // Immediately return to IDLE to accept next request (Hit-under-Miss)
                        next_state      = STATE_IDLE;
                    end
                end
            end

            default: next_state = STATE_IDLE;
        endcase
    end

endmodule: fsm_nb