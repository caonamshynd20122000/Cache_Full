// ============================================================================
// File: tl_adapter.sv
// Description: TileLink Channel A/D Adapter for Blocking L2 Cache Controller
// References:
//   - SiFive TileLink Specification v1.8.1 (Decoupled Handshake & Opcode Mapping)
//   - HuanCun SinkA.sv / SourceD.sv (Transaction tracking & Backpressure)
// Target: Heterogeneous L2 Cache (CVA6 Scalar Core + Ara Vector Engine)
// ============================================================================

`timescale 1ns / 100ps

module tl_adapter 
  import tl_pkg::*;
#(
  parameter ADDR_SIZE = tl_pkg::TL_ADDR_WIDTH,
  parameter DATA_SIZE = tl_pkg::TL_DATA_WIDTH
) (
  input  wire                           clk,
  input  wire                           rst_n,

  // ==========================================================================
  // TileLink Interface (Upstream Client Side: CVA6 L1 / Ara VLSU)
  // ==========================================================================
  // Channel A: Request
  input  wire                           a_valid,
  output reg                            a_ready,
  input  tl_a_chan_t                    a_bits,

  // Channel D: Response
  output reg                            d_valid,
  input  wire                           d_ready,
  output tl_d_chan_t                    d_bits,

  // ==========================================================================
  // Legacy Core Interface (Connected to user's cache_controller.v)
  // ==========================================================================
  output reg  [ADDR_SIZE-1 : 0]         core_in_addr,
  output reg  [DATA_SIZE-1 : 0]         core_in_data,
  output reg  [(DATA_SIZE/8)-1 : 0]     core_in_byteen,
  output reg                            core_in_valid,
  output reg                            core_in_write,
  input  wire                           core_in_ready,

  input  wire [ADDR_SIZE-1 : 0]         core_out_addr,
  input  wire [DATA_SIZE-1 : 0]         core_out_data,
  input  wire                           core_out_valid,
  output reg                            core_out_ready
);

  // ==========================================================================
  // Internal State Machine Definitions
  // ==========================================================================
  typedef enum logic [1:0] {
    STATE_IDLE     = 2'd0, // Ready to accept new Channel A request
    STATE_WAIT_MEM = 2'd1, // Request passed to cache, awaiting core_out_valid
    STATE_RESP     = 2'd2  // Holding response on Channel D until d_ready asserts
  } state_t;

  state_t state_q, state_d;

  // Latched request attributes to build Channel D response
  reg [2:0]                 latched_opcode_q, latched_opcode_d;
  reg [TL_SIZE_WIDTH-1:0]   latched_size_q,   latched_size_d;
  reg [TL_SOURCE_WIDTH-1:0] latched_source_q, latched_source_d;
  reg [DATA_SIZE-1:0]       latched_data_q,   latched_data_d;

  // ==========================================================================
  // Combinational Protocol Translation Logic
  // ==========================================================================
  always_comb begin
    // Default register retentions
    state_d          = state_q;
    latched_opcode_d = latched_opcode_q;
    latched_size_d   = latched_size_q;
    latched_source_d = latched_source_q;
    latched_data_d   = latched_data_q;

    // Default interface driving
    a_ready          = 1'b0;
    d_valid          = 1'b0;

    core_in_valid    = 1'b0;
    core_in_addr     = a_bits.address;
    core_in_data     = a_bits.data;
    core_in_byteen   = a_bits.mask;
    core_in_write    = 1'b0;
    core_out_ready   = 1'b0;

    // Channel D response packing
    d_bits.opcode    = TL_D_ACCESS_ACK;
    d_bits.param     = 2'b00;
    d_bits.size      = latched_size_q;
    d_bits.source    = latched_source_q;
    d_bits.sink      = '0;
    d_bits.denied    = 1'b0;
    d_bits.data      = (state_q == STATE_RESP) ? latched_data_q : core_out_data;
    d_bits.corrupt   = 1'b0;

    // Determine target Channel D opcode based on original Channel A request
    case (latched_opcode_q)
      TL_A_GET: begin
        d_bits.opcode = TL_D_ACCESS_ACK_DATA;
      end
      TL_A_PUT_FULL_DATA,
      TL_A_PUT_PARTIAL_DATA: begin
        d_bits.opcode = TL_D_ACCESS_ACK;
      end
      TL_A_ACQUIRE_BLOCK: begin
        d_bits.opcode = TL_D_GRANT_DATA;
      end
      default: begin
        d_bits.opcode = TL_D_ACCESS_ACK;
      end
    endcase

    // FSM Execution
    case (state_q)
      // ----------------------------------------------------------------------
      // STATE_IDLE: Await incoming request on Channel A
      // ----------------------------------------------------------------------
      STATE_IDLE: begin
        // Only accept if underlying cache controller is ready
        a_ready = core_in_ready;

        if (a_valid && a_ready) begin
          // Latch transaction tags for response generation
          latched_opcode_d = a_bits.opcode;
          latched_size_d   = a_bits.size;
          latched_source_d = a_bits.source;

          // Forward transaction directly to core cache_controller
          core_in_valid  = 1'b1;
          core_in_addr   = a_bits.address;
          core_in_data   = a_bits.data;

          // Decode write vs read
          if (a_bits.opcode == TL_A_PUT_FULL_DATA) begin
            core_in_write  = 1'b1;
            core_in_byteen = {(DATA_SIZE/8){1'b1}};
          end else if (a_bits.opcode == TL_A_PUT_PARTIAL_DATA) begin
            core_in_write  = 1'b1;
            core_in_byteen = a_bits.mask;
          end else begin
            // Get, AcquireBlock, etc. are read transactions
            core_in_write  = 1'b0;
            core_in_byteen = {(DATA_SIZE/8){1'b1}};
          end

          // Advance to memory wait state
          state_d = STATE_WAIT_MEM;
        end
      end

      // ----------------------------------------------------------------------
      // STATE_WAIT_MEM: Await read/write response from cache_controller
      // ----------------------------------------------------------------------
      STATE_WAIT_MEM: begin
        // Keep a_ready = 0 to enforce blocking operation
        a_ready = 1'b0;

        if (core_out_valid) begin
          // Data is valid from cache
          core_out_ready = 1'b1;
          d_valid        = 1'b1;

          if (d_ready) begin
            // Handshake completed immediately in the same cycle
            state_d = STATE_IDLE;
          end else begin
            // Downstream client backpressure: latch data and enter hold state
            latched_data_d = core_out_data;
            state_d        = STATE_RESP;
          end
        end
      end

      // ----------------------------------------------------------------------
      // STATE_RESP: Hold response data until client asserts d_ready
      // ----------------------------------------------------------------------
      STATE_RESP: begin
        a_ready = 1'b0;
        d_valid = 1'b1;

        if (d_ready) begin
          state_d = STATE_IDLE;
        end
      end

      default: state_d = STATE_IDLE;
    endcase
  end

  // ==========================================================================
  // Sequential Clocking & Reset
  // ==========================================================================
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      state_q          <= STATE_IDLE;
      latched_opcode_q <= '0;
      latched_size_q   <= '0;
      latched_source_q <= '0;
      latched_data_q   <= '0;
    end else begin
      state_q          <= state_d;
      latched_opcode_q <= latched_opcode_d;
      latched_size_q   <= latched_size_d;
      latched_source_q <= latched_source_d;
      latched_data_q   <= latched_data_d;
    end
  end

endmodule: tl_adapter