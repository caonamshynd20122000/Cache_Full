// ============================================================================
// File: cache_system_tl_top.sv
// Module: cache_system_tl_top
// Description: Non-Blocking TileLink L2 Cache Subsystem Top-Level
// Architecture:
//   - Discrete TileLink Channel A (Request) and Channel D (Response) Interfaces
//   - Integrated Non-Blocking Controller with MSHR-backed Out-of-Order Execution
//   - Dual-Clock Domain Crossing (CDC): 100 MHz Cache Core / 50 MHz DRAM BRAM
//   - Eliminates legacy blocking adapter bottleneck for multi-master concurrency
// Standards: TileLink Specification v1.8.1 (Get, PutFullData, PutPartialData)
// ============================================================================

`timescale 1ns / 100ps

// ============================================================================
// Terminal / CLI Macro Definitions for Dynamic Parameter Overrides
// Use compiler flags from CLI: e.g. -DCFG_TOTAL_SIZE=262144 -DCFG_NUM_WAYS=8
// ============================================================================
`ifndef CFG_TOTAL_SIZE
    `define CFG_TOTAL_SIZE 262144        // Default: 32 KiB (262,144 bits, Matching spec)
`endif

`ifndef CFG_NUM_WAYS
    `define CFG_NUM_WAYS 8               // Default: 8-Way Set-Associative (Matching spec)
`endif

`ifndef CFG_MSHR_SIZE
    `define CFG_MSHR_SIZE 8              // Default: 8 MSHRs (Matching spec)
`endif

`ifndef CFG_DATA_ELEMENTS
    `define CFG_DATA_ELEMENTS 64         // Default: 64 Bytes per line (16 words)
`endif

`ifndef CFG_LATENCY
    `define CFG_LATENCY 2                // Default: 2-cycle SRAM read latency
`endif

`ifndef CFG_BOUND_SIZE
    `define CFG_BOUND_SIZE 4             // Default: 4-bit security address bounds
`endif

`ifndef CFG_MEM_DEPTH
    `define CFG_MEM_DEPTH 65536          // Default: 64K words (256 KB Main Memory BRAM)
`endif

module cache_system_tl_top 
  import tl_pkg::*;
#(
  // --------------------------------------------------------------------------
  // Top-Level Configurable Parameters (Overridable via CLI Macros)
  // --------------------------------------------------------------------------
  parameter TOTAL_SIZE    = `CFG_TOTAL_SIZE,
  parameter ADDR_SIZE     = 32,
  parameter DATA_SIZE     = 32,
  parameter DATA_ELEMENTS = `CFG_DATA_ELEMENTS,
  parameter LATENCY       = `CFG_LATENCY,
  parameter BOUND_SIZE    = `CFG_BOUND_SIZE,
  parameter NUM_WAYS      = `CFG_NUM_WAYS,
  parameter MSHR_SIZE     = `CFG_MSHR_SIZE,
  parameter MEM_DEPTH     = `CFG_MEM_DEPTH
) (
  // --------------------------------------------------------------------------
  // Dual-Clock and Asynchronous Reset
  // --------------------------------------------------------------------------
  input  wire                           clk_h,          // 100 MHz Cache Pipeline Clock Domain
  input  wire                           clk_l,          // 50 MHz Downstream DRAM Clock Domain
  input  wire                           rst_n,          // Active-low asynchronous reset

  // --------------------------------------------------------------------------
  // Memory-Mapped Configuration Port
  // --------------------------------------------------------------------------
  input  wire [7 : 0]                   cfg_addr,
  input  wire [31 : 0]                  cfg_data_in,
  output wire [31 : 0]                  cfg_data_out,
  input  wire                           cfg_valid,
  output wire                           cfg_ready,

  // ==========================================================================
  // TileLink Channel A: Request (Discrete Ports for Cocotb Testbench Driving)
  // ==========================================================================
  input  wire                           a_valid,        // Channel A request valid strobe
  output wire                           a_ready,        // Channel A acceptance backpressure from MSHR
  input  wire [2 : 0]                   a_opcode,       // Opcode: PutFullData (0), PutPartialData (1), Get (4)
  input  wire [2 : 0]                   a_param,        // Permission parameters (e.g. TL_GROW_NtoB)
  input  wire [2 : 0]                   a_size,         // Transfer size: 2^size bytes (2 = 4 Bytes)
  input  wire [3 : 0]                   a_source,       // Client transaction ID (preserves request origin)
  input  wire [ADDR_SIZE-1 : 0]         a_address,      // Target physical address
  input  wire [(DATA_SIZE/8)-1 : 0]     a_mask,         // Byte-enable strobe mask
  input  wire [DATA_SIZE-1 : 0]         a_data,         // Store data payload

  // ==========================================================================
  // TileLink Channel D: Response (Discrete Ports for Cocotb Monitor Checking)
  // ==========================================================================
  output wire                           d_valid,        // Channel D response valid strobe
  input  wire                           d_ready,        // Upstream client acceptance backpressure
  output wire [2 : 0]                   d_opcode,       // Opcode: AccessAck (0), AccessAckData (1)
  output wire [1 : 0]                   d_param,        // Response parameter (2'b00 default)
  output wire [2 : 0]                   d_size,         // Response size (3'd2 = 4 Bytes beat)
  output wire [3 : 0]                   d_source,       // Preserved Client ID returned Out-of-Order
  output wire [3 : 0]                   d_sink,         // Manager transaction ID
  output wire                           d_denied,       // 1: Transaction denied by slave
  output wire [DATA_SIZE-1 : 0]         d_data,         // Read response data payload
  output wire                           d_corrupt,      // 1: Data corrupt error flag

  output wire [ADDR_SIZE-1 : 0]         read_addr,
  input  wire [DATA_SIZE-1 : 0]         read_data,
  output wire                           read_valid,
  input  wire                           read_ready,

  output wire [ADDR_SIZE-1 : 0]         write_addr,
  output wire [DATA_SIZE-1 : 0]         write_data,
  output wire [(DATA_SIZE/8)-1 : 0]     write_byteen,
  output wire                           write_valid,
  input  wire                           write_ready,

  output wire                           perf_miss
);

  // ==========================================================================
  // Channel A Request Decode: Distinguish Write vs Read Transactions
  // ==========================================================================
  wire is_write_req = (a_opcode == TL_A_PUT_FULL_DATA) || (a_opcode == TL_A_PUT_PARTIAL_DATA);

  // ==========================================================================
  // Internal Channel D Signals from Non-Blocking Cache Controller Arbiter
  // ==========================================================================
  wire [ADDR_SIZE-1 : 0] core_out_addr;
  wire [DATA_SIZE-1 : 0] core_out_data;
  wire [3 : 0]           core_out_source;
  wire [2 : 0]           core_out_opcode;
  wire                   core_out_valid;

  // Assembly of the TileLink Channel D Output Packet
  assign d_valid   = core_out_valid;
  assign d_data    = core_out_data;
  assign d_source  = core_out_source; // Directly routes preserved Client ID out-of-order!
  assign d_param   = 2'b00;
  assign d_size    = 3'd2;            // 4 Bytes beat
  assign d_sink    = 4'd0;
  assign d_denied  = 1'b0;
  assign d_corrupt = 1'b0;

  // Opcode Mapping: TL_A_GET -> TL_D_ACCESS_ACK_DATA (1); Stores -> TL_D_ACCESS_ACK (0)
  assign d_opcode  = (core_out_opcode == TL_A_GET) ? TL_D_ACCESS_ACK_DATA : TL_D_ACCESS_ACK;

  // ==========================================================================
  // Instance: Non-Blocking Cache Controller with Integrated MSHR
  // ==========================================================================
  cache_controller_nb #(
    .TOTAL_SIZE     (TOTAL_SIZE),
    .ADDR_SIZE      (ADDR_SIZE),
    .DATA_SIZE      (DATA_SIZE),
    .DATA_ELEMENTS  (DATA_ELEMENTS),
    .LATENCY        (LATENCY),
    .BOUND_SIZE     (BOUND_SIZE),
    .NUM_WAYS       (NUM_WAYS),
    .MSHR_SIZE      (MSHR_SIZE)        // Forwarded MSHR capacity parameter
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

    // TileLink Channel A directly drives Controller (No blocking adapter bottleneck)
    .in_addr        (a_address),
    .in_data        (a_data),
    .in_byteen      (a_mask),
    .in_source      (a_source),
    .in_opcode      (a_opcode),
    .in_valid       (a_valid),
    .in_write       (is_write_req),
    .in_ready       (a_ready),         // Gated by MSHR capacity (stays 1 on Miss for Hit-under-Miss)

    // TileLink Channel D directly driven by Controller Arbiter
    .out_addr       (core_out_addr),
    .out_data       (core_out_data),
    .out_source     (core_out_source),
    .out_opcode     (core_out_opcode),
    .out_valid      (core_out_valid),
    .out_ready      (d_ready),

    // Downstream DRAM Refill and Eviction Ports
    .read_addr      (read_addr),
    .read_data      (read_data),
    .read_valid     (read_valid),
    .read_ready     (read_ready),

    .write_addr     (write_addr),
    .write_data     (write_data),
    .write_byteen   (write_byteen),
    .write_valid    (write_valid),
    .write_ready    (write_ready),

    .perf_miss      (perf_miss)
  );

endmodule: cache_system_tl_top