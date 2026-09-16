// ============================================================================
// File: fsm_nb.sv
// Description: Fully Pipelined Non-Blocking Cache FSM with Synchronous Hit Path
// References:
//   - Vortex GPGPU Cache: VX_cache_bank.sv (Hit-under-Miss pipeline)
//   - SiFive TileLink Spec v1.8.1 (Client Transaction ID preservation)
// Fix:
//   - Directly synchronizes to fsm_accessed (eliminates 1-cycle counter lag)
// ============================================================================

`timescale 1ns / 100ps

module fsm_nb #(
    parameter   ADDR_SIZE              = 32,
    parameter   DATA_SIZE              = 32,
    parameter   DATA_ELEMENTS          = 64,
    parameter   TOTAL_SIZE             = 524288,
    parameter   LATENCY                = 2,
    parameter   NUM_WAYS               = 16,
    parameter   SET_REPLACEMENT_POLICY = "NMRU",
    localparam  _BLOCK_SIZE            = DATA_ELEMENTS * 8,
    localparam  _NUM_LINES             = TOTAL_SIZE / _BLOCK_SIZE / NUM_WAYS,
    localparam  _OFFSET_BITS           = $clog2(DATA_ELEMENTS),
    localparam  _LINE_BITS             = $clog2(_NUM_LINES),
    localparam  _TAG_BITS              = ADDR_SIZE - _LINE_BITS - _OFFSET_BITS,
    localparam  _NUM_TRANSFER          = _BLOCK_SIZE / DATA_SIZE,
    localparam  _TRANSFER_BITS         = (_NUM_TRANSFER > 1) ? $clog2(_NUM_TRANSFER) : 1
) (
    input  wire                                     clk,
    input  wire                                     rst_n,

    // Core / TileLink Request Interface
    input  wire                                     in_rw,
    input  wire [ADDR_SIZE-1 : 0]                   in_addr,
    input  wire [DATA_SIZE-1 : 0]                   in_data,
    input  wire [3 : 0]                             in_source,
    input  wire [2 : 0]                             in_opcode,
    input  wire [1 : 0]                             in_mshr_id,
    input  wire                                     in_valid,
    output wire                                     in_ready,

    // Hit Response Output Interface (Channel D Hit Path)
    output reg  [ADDR_SIZE-1 : 0]                   out_addr,
    output reg  [DATA_SIZE-1 : 0]                   out_data,
    output reg  [3 : 0]                             out_source,
    output reg  [2 : 0]                             out_opcode,
    output reg                                      out_valid,
    input  wire                                     out_ready,

    // SRAM Tag & Data Arrays Interface
    output reg                                      fw_rw,
    output reg  [ADDR_SIZE-1 : 0]                   fw_addr,
    output reg  [DATA_SIZE-1 : 0]                   fw_data,
    output reg                                      fw_valid,
    input  wire                                     fw_ready,

    input  wire [ADDR_SIZE-1 : 0]                   ib_addr,
    input  wire [_BLOCK_SIZE-1 : 0]                 ib_data,
    input  wire                                     ib_valid,
    output reg                                      ib_ready,

    // Direct synchronization from tag_array
    input  wire                                     fsm_accessed,     // tag_access_done from tag_array
    input  wire                                     fsm_hit,          // Hit status from tag_array

    // MSHR Pipeline Tracking Interface
    output reg                                      mshr_fin_valid,
    output reg                                      mshr_fin_is_hit,
    output reg  [1 : 0]                             mshr_fin_id,
    output reg                                      miss_trigger
);

    localparam STATE_IDLE    = 1'b0;
    localparam STATE_COMPARE = 1'b1;

    reg cur_state, next_state;

    // Holding registers to preserve request context during tag lookup
    reg [ADDR_SIZE-1 : 0]   addr_keep;
    reg [DATA_SIZE-1 : 0]   data_keep;
    reg [3 : 0]             source_keep;
    reg [2 : 0]             opcode_keep;
    reg [1 : 0]             mshr_id_keep;
    reg                     write_keep;

    // Gated in_ready: only ready when idle AND downstream Tag Array is ready
    assign in_ready = fw_ready && (cur_state == STATE_IDLE);

    // Sequential holding registers
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

    // Word selection index for Hit Data extraction from cache line
    wire [_TRANSFER_BITS-1 : 0] word_idx = addr_keep[_OFFSET_BITS-1 -: _TRANSFER_BITS];

    // Combinational next-state and datapath routing
    always @* begin
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
            // STATE_IDLE: Await new request and dispatch immediately to Tag Array
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
            // STATE_COMPARE: Synchronously evaluate Hit/Miss on fsm_accessed
            // ----------------------------------------------------------------
            STATE_COMPARE: begin
                fw_rw   = write_keep;
                fw_addr = addr_keep;
                fw_data = data_keep;
                fw_valid = 1'b1;

                // Directly qualify with fsm_accessed to eliminate cycle lag
                if (fsm_accessed) begin
                    mshr_fin_valid = 1'b1;
                    mshr_fin_id    = mshr_id_keep;

                    if (fsm_hit) begin
                        // ----------------------------------------------------
                        // HIT PATH: Immediate output and early MSHR release
                        // ----------------------------------------------------
                        mshr_fin_is_hit = 1'b1;
                        ib_ready        = out_ready;

                        out_addr        = addr_keep;
                        out_source      = source_keep;
                        out_opcode      = opcode_keep;
                        out_data        = ib_data[(word_idx + 1) * DATA_SIZE - 1 -: DATA_SIZE];
                        out_valid       = 1'b1;

                        if (out_ready) begin
                            next_state = STATE_IDLE;
                        end
                    end else begin
                        // ----------------------------------------------------
                        // MISS PATH: Trigger background DRAM refill & free FSM
                        // ----------------------------------------------------
                        mshr_fin_is_hit = 1'b0;
                        miss_trigger    = 1'b1;

                        next_state      = STATE_IDLE;
                    end
                end
            end

            default: next_state = STATE_IDLE;
        endcase
    end

endmodule: fsm_nb