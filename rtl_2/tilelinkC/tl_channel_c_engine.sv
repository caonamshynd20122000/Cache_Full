// ============================================================================
// File: tl_channel_c_engine.sv
// Module: tl_channel_c_engine
// Description: TileLink-C Channel C Eviction Engine (Replaces write_controller.v)
// Sub-Phase: Sub-Phase C - Channel C Dirty Line Eviction Deployment
// Architecture:
//   - Transforms 512-bit dirty lines into 16-beat TileLink Channel C ReleaseData bursts
//   - Fully manages the ReleaseData -> ReleaseAck transaction handshake lifecycle
//   - Backpressure-resilient with synchronous beat counters
// Standards: SiFive TileLink Specification v1.8.1 (Section 3.6 & 3.8)
// ============================================================================

`timescale 1ns / 100ps

// ============================================================================
// Terminal / CLI Macro Definitions for Dynamic Parameter Overrides
// Can be overridden via simulator flags: e.g. -DCFG_DATA_ELEMENTS=64
// ============================================================================
`ifndef CFG_DATA_ELEMENTS
    `define CFG_DATA_ELEMENTS 64         // Default: 64 Bytes per line (16 beats)
`endif

module tl_channel_c_engine 
  import tl_pkg::*;
#(
  // --------------------------------------------------------------------------
  // Top-Level Configurable Parameters (Overridable via CLI Macros)
  // --------------------------------------------------------------------------
  parameter ADDR_SIZE        = 32,
  parameter DATA_SIZE        = 32,
  parameter DATA_ELEMENTS    = `CFG_DATA_ELEMENTS,

  // --------------------------------------------------------------------------
  // Derived Architectural Constants
  // --------------------------------------------------------------------------
  localparam BLOCK_SIZE      = DATA_ELEMENTS * 8,                     // 512 bits
  localparam NUM_BEATS       = BLOCK_SIZE / DATA_SIZE,                // 16 beats
  localparam BEAT_CNT_WIDTH  = $clog2(NUM_BEATS)                      // 4 bits
) (
  input  wire                           clk,
  input  wire                           rst_n,

  // ==========================================================================
  // Internal Handshake with Cache Controller & Eviction Buffer
  // ==========================================================================
  input  wire                           evict_start,    // Strobe to trigger dirty line eviction
  input  wire [ADDR_SIZE-1 : 0]         evict_addr,     // Stable line address from evict_addr_buffer
  input  wire [BLOCK_SIZE-1 : 0]        evict_data,     // 512-bit dirty line from evict_data_buffer
  output wire                           evict_ready,    // 1: Ready to accept new eviction request
  output wire                           evict_done,     // 1-cycle pulse asserting upon ReleaseAck arrival

  // ==========================================================================
  // TileLink Channel C Master Interface (Client -> Manager / L2)
  // ==========================================================================
  output reg                            c_valid,        // Channel C burst beat valid strobe
  input  wire                           c_ready,        // Downstream manager acceptance handshake
  output wire [2 : 0]                   c_opcode,       // TL_C_RELEASE_DATA (3'd7)
  output wire [2 : 0]                   c_param,        // TL_SHRINK_TtoN (3'd1: Relinquish Trunk to Nothing)
  output wire [TL_SIZE_WIDTH-1 : 0]     c_size,         // Transfer size: 2^size = 64 Bytes (3'd6)
  output wire [TL_SOURCE_WIDTH-1 : 0]   c_source,       // Client transaction ID
  output wire [ADDR_SIZE-1 : 0]         c_address,      // Line-aligned target physical address
  output wire [DATA_SIZE-1 : 0]         c_data,         // 32-bit current beat data payload
  output wire                           c_corrupt,      // 1: Data corrupt error flag (always 1'b0)

  // ==========================================================================
  // TileLink Channel D Snoop Interface (Awaiting ReleaseAck)
  // ==========================================================================
  input  wire                           d_valid,        // Channel D valid strobe from manager
  input  wire [2 : 0]                   d_opcode,       // Opcode (expects TL_D_RELEASE_ACK = 3'd6)
  input  wire [TL_SOURCE_WIDTH-1 : 0]   d_source        // Returning transaction ID
);

  // ==========================================================================
  // Internal State Machine Definitions
  // ==========================================================================
  typedef enum logic [1:0] {
    STATE_IDLE       = 2'd0,  // Awaiting eviction trigger from Cache Controller
    STATE_BURST_C    = 2'd1,  // Streaming 16-beat ReleaseData burst onto Channel C
    STATE_WAIT_D_ACK = 2'd2   // Holding state awaiting TL_D_RELEASE_ACK completion
  } c_state_t;

  c_state_t state_q, state_d;

  reg [BEAT_CNT_WIDTH-1 : 0] beat_cnt_q, beat_cnt_d;
  reg [ADDR_SIZE-1 : 0]      addr_q, addr_d;
  reg [BLOCK_SIZE-1 : 0]     data_q, data_d;

  // Constant TileLink Channel C Protocol Packet Qualifiers
  assign c_opcode  = TL_C_RELEASE_DATA; // 3'd7
  assign c_param   = TL_SHRINK_TtoN;    // 3'd1 (Downgrade privilege from Trunk to Nothing)
  assign c_size    = 3'd6;              // 64 Bytes total transfer size
  assign c_source  = 4'd0;              // Default tile client ID
  assign c_corrupt = 1'b0;
  assign c_address = addr_q;

  // Dynamic multiplexer extracting 32-bit beat from 512-bit line buffer
  assign c_data    = data_q[(beat_cnt_q + 1) * DATA_SIZE - 1 -: DATA_SIZE];

  assign evict_ready = (state_q == STATE_IDLE);
  assign evict_done  = (state_q == STATE_WAIT_D_ACK) && d_valid && (d_opcode == TL_D_RELEASE_ACK);

  // ==========================================================================
  // Combinational State Transition and Burst Logic
  // ==========================================================================
  always_comb begin
    state_d    = state_q;
    beat_cnt_d = beat_cnt_q;
    addr_d     = addr_q;
    data_d     = data_q;
    c_valid    = 1'b0;

    case (state_q)
      // ----------------------------------------------------------------------
      // STATE_IDLE: Await eviction start signal and latch stable line data
      // ----------------------------------------------------------------------
      STATE_IDLE: begin
        beat_cnt_d = '0;
        if (evict_start) begin
          addr_d  = evict_addr;
          data_d  = evict_data;
          state_d = STATE_BURST_C;
        end
      end

      // ----------------------------------------------------------------------
      // STATE_BURST_C: Stream 16 consecutive 32-bit data beats onto Channel C
      // ----------------------------------------------------------------------
      STATE_BURST_C: begin
        c_valid = 1'b1;
        if (c_ready) begin
          if (beat_cnt_q == NUM_BEATS - 1) begin
            // Beat 15 successfully transmitted -> transition to await ReleaseAck
            state_d = STATE_WAIT_D_ACK;
          end else begin
            beat_cnt_d = beat_cnt_q + 1'b1;
          end
        end
      end

      // ----------------------------------------------------------------------
      // STATE_WAIT_D_ACK: Await matching TL_D_RELEASE_ACK to complete transaction
      // ----------------------------------------------------------------------
      STATE_WAIT_D_ACK: begin
        if (d_valid && (d_opcode == TL_D_RELEASE_ACK)) begin
          state_d = STATE_IDLE; // Eviction lifecycle complete!
        end
      end

      default: state_d = STATE_IDLE;
    endcase
  end

  // ==========================================================================
  // Sequential Registers Clocking
  // ==========================================================================
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      state_q    <= STATE_IDLE;
      beat_cnt_q <= '0;
      addr_q     <= '0;
      data_q     <= '0;
    end else begin
      state_q    <= state_d;
      beat_cnt_q <= beat_cnt_d;
      addr_q     <= addr_d;
      data_q     <= data_d;
    end
  end

endmodule: tl_channel_c_engine