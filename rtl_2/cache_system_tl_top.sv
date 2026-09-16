// ============================================================================
// File: cache_system_tl_top.sv
// Description: Non-Blocking TileLink L2 Cache Top (Direct MSHR Integration)
// Architecture:
//   - Direct Channel A & D binding to cache_controller_nb
//   - Native out-of-order Channel D routing via out_source & out_opcode
//   - Eliminates legacy blocking adapter bottleneck
// ============================================================================

`timescale 1ns / 100ps

module cache_system_tl_top 
  import tl_pkg::*;
#(
  parameter TOTAL_SIZE    = 524288, // 64 KB
  parameter ADDR_SIZE     = 32,
  parameter DATA_SIZE     = 32,
  parameter DATA_ELEMENTS = 64,     // 64 Bytes per line
  parameter LATENCY       = 2,
  parameter BOUND_SIZE    = 4,
  parameter NUM_WAYS      = 16,
  parameter MEM_DEPTH     = 65536
) (
  input  wire                           clk_h,
  input  wire                           clk_l,
  input  wire                           rst_n,

  // Configuration Ports
  input  wire [7 : 0]                   cfg_addr,
  input  wire [31 : 0]                  cfg_data_in,
  output wire [31 : 0]                  cfg_data_out,
  input  wire                           cfg_valid,
  output wire                           cfg_ready,

  // ==========================================================================
  // TileLink Channel A: Request (Discrete Ports for Cocotb)
  // ==========================================================================
  input  wire                           a_valid,
  output wire                           a_ready,
  input  wire [2 : 0]                   a_opcode,
  input  wire [2 : 0]                   a_param,
  input  wire [2 : 0]                   a_size,
  input  wire [3 : 0]                   a_source,
  input  wire [ADDR_SIZE-1 : 0]         a_address,
  input  wire [(DATA_SIZE/8)-1 : 0]     a_mask,
  input  wire [DATA_SIZE-1 : 0]         a_data,

  // ==========================================================================
  // TileLink Channel D: Response (Discrete Ports for Cocotb)
  // ==========================================================================
  output wire                           d_valid,
  input  wire                           d_ready,
  output wire [2 : 0]                   d_opcode,
  output wire [1 : 0]                   d_param,
  output wire [2 : 0]                   d_size,
  output wire [3 : 0]                   d_source,
  output wire [3 : 0]                   d_sink,
  output wire                           d_denied,
  output wire [DATA_SIZE-1 : 0]         d_data,
  output wire                           d_corrupt
);

  // ==========================================================================
  // Channel A Decode: Determine Read vs Write
  // ==========================================================================
  wire is_write_req = (a_opcode == TL_A_PUT_FULL_DATA) || (a_opcode == TL_A_PUT_PARTIAL_DATA);

  // ==========================================================================
  // Channel D Signals from Non-Blocking Cache Controller
  // ==========================================================================
  wire [ADDR_SIZE-1 : 0] core_out_addr;
  wire [DATA_SIZE-1 : 0] core_out_data;
  wire [3 : 0]           core_out_source;
  wire [2 : 0]           core_out_opcode;
  wire                   core_out_valid;

  // Channel D Output Packet Assembly
  assign d_valid   = core_out_valid;
  assign d_data    = core_out_data;
  assign d_source  = core_out_source; // Directly preserves Client ID out-of-order!
  assign d_param   = 2'b00;
  assign d_size    = 3'd2; // 4 Bytes beat
  assign d_sink    = 4'd0;
  assign d_denied  = 1'b0;
  assign d_corrupt = 1'b0;

  // Map request opcode to TileLink response opcode (Get -> AccessAckData; Put -> AccessAck)
  assign d_opcode  = (core_out_opcode == TL_A_GET) ? TL_D_ACCESS_ACK_DATA : TL_D_ACCESS_ACK;

  // ==========================================================================
  // Downstream Memory Wires
  // ==========================================================================
  wire [ADDR_SIZE-1 : 0]     read_addr;
  wire [DATA_SIZE-1 : 0]     read_data;
  wire                       read_valid;
  wire                       read_ready;

  wire [ADDR_SIZE-1 : 0]     write_addr;
  wire [DATA_SIZE-1 : 0]     write_data;
  wire [(DATA_SIZE/8)-1 : 0] write_byteen;
  wire                       write_valid;
  wire                       write_ready;

  // ==========================================================================
  // Instance: Non-Blocking Cache Controller (with Integrated tl_mshr)
  // ==========================================================================
  cache_controller_nb #(
    .TOTAL_SIZE     (TOTAL_SIZE),
    .ADDR_SIZE      (ADDR_SIZE),
    .DATA_SIZE      (DATA_SIZE),
    .DATA_ELEMENTS  (DATA_ELEMENTS),
    .LATENCY        (LATENCY),
    .BOUND_SIZE     (BOUND_SIZE),
    .NUM_WAYS       (NUM_WAYS)
  ) cache_inst (
    .clk_h          (clk_h),
    .clk_l          (clk_l),
    .rst_n          (rst_n),

    // Configuration Ports
    .cfg_addr       (cfg_addr),
    .cfg_data_in    (cfg_data_in),
    .cfg_data_out   (cfg_data_out),
    .cfg_valid      (cfg_valid),
    .cfg_ready      (cfg_ready),

    // Channel A directly drives Controller (No blocking adapter in between!)
    .in_addr        (a_address),
    .in_data        (a_data),
    .in_byteen      (a_mask),
    .in_source      (a_source),
    .in_opcode      (a_opcode),
    .in_valid       (a_valid),
    .in_write       (is_write_req),
    .in_ready       (a_ready),       // Gated by MSHR capacity (a_ready stays 1 on Miss!)

    // Channel D directly driven by Controller Arbiter
    .out_addr       (core_out_addr),
    .out_data       (core_out_data),
    .out_source     (core_out_source),
    .out_opcode     (core_out_opcode),
    .out_valid      (core_out_valid),
    .out_ready      (d_ready),

    // Downstream Memory Ports
    .read_addr      (read_addr),
    .read_data      (read_data),
    .read_valid     (read_valid),
    .read_ready     (read_ready),

    .write_addr     (write_addr),
    .write_data     (write_data),
    .write_byteen   (write_byteen),
    .write_valid    (write_valid),
    .write_ready    (write_ready)
  );

  // ==========================================================================
  // Instance: Main Memory BRAM (50 MHz clk_l Domain)
  // ==========================================================================
  main_memory_bram #(
    .ADDR_SIZE      (ADDR_SIZE),
    .DATA_SIZE      (DATA_SIZE),
    .MEM_DEPTH      (MEM_DEPTH)
  ) dram_inst (
    .clk            (clk_l),
    .rst_n          (rst_n),

    .read_addr      (read_addr),
    .read_data      (read_data),
    .read_valid     (read_valid),
    .read_ready     (read_ready),

    .write_addr     (write_addr),
    .write_data     (write_data),
    .write_byteen   (write_byteen),
    .write_valid    (write_valid),
    .write_ready    (write_ready)
  );

endmodule: cache_system_tl_top