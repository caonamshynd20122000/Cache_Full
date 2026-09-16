`timescale 1ns / 100ps

module cache_system_top #(
    parameter TOTAL_SIZE    = 524288, // 64 KB = 64 * 1024 * 8 bits
    parameter ADDR_SIZE     = 32,
    parameter DATA_SIZE     = 32,
    parameter DATA_ELEMENTS = 64,
    parameter LATENCY       = 2,
    parameter BOUND_SIZE    = 4,
    parameter NUM_WAYS      = 16,
    parameter MEM_DEPTH     = 65536
) (
    input wire                   clk_h,
    input wire                   clk_l,
    input wire                   rst_n,

    // Configuration Interface
    input wire  [7 : 0]          cfg_addr,
    input wire  [31 : 0]         cfg_data_in,
    output wire [31 : 0]         cfg_data_out,
    input wire                   cfg_valid,
    output wire                  cfg_ready,

    // Core / CPU Interface
    input wire  [ADDR_SIZE-1 : 0]          in_addr,
    input wire  [DATA_SIZE-1 : 0]          in_data,
    input wire  [(DATA_SIZE/8)-1 : 0]      in_byteen,
    input wire                             in_valid,
    input wire                             in_write,
    output wire                            in_ready,

    output wire [ADDR_SIZE-1 : 0]          out_addr,
    output wire [DATA_SIZE-1 : 0]          out_data,
    output wire                            out_valid,
    input wire                             out_ready
);

    // Interconnect Wires
    wire [ADDR_SIZE-1 : 0] read_addr;
    wire [DATA_SIZE-1 : 0] read_data;
    wire                   read_valid;
    wire                   read_ready;

    wire [ADDR_SIZE-1 : 0] write_addr;
    wire [DATA_SIZE-1 : 0] write_data;
    //Namcv10 added
    wire [(DATA_SIZE/8)-1:0] write_byteen;
    wire                   write_valid;
    wire                   write_ready;

    // Cache Controller Instance
    cache_controller #(
        .TOTAL_SIZE   (TOTAL_SIZE),
        .ADDR_SIZE    (ADDR_SIZE),
        .DATA_SIZE    (DATA_SIZE),
        .DATA_ELEMENTS(DATA_ELEMENTS),
        .LATENCY      (LATENCY),
        .BOUND_SIZE   (BOUND_SIZE),
        .NUM_WAYS     (NUM_WAYS)
    ) cache_inst (
        .clk_h       (clk_h),
        .clk_l       (clk_l),
        .rst_n       (rst_n),

        .cfg_addr    (cfg_addr),
        .cfg_data_in (cfg_data_in),
        .cfg_data_out(cfg_data_out),
        .cfg_valid   (cfg_valid),
        .cfg_ready   (cfg_ready),

        .in_addr     (in_addr),
        .in_data     (in_data),
        .in_byteen   (in_byteen),
        .in_valid    (in_valid),
        .in_write    (in_write),
        .in_ready    (in_ready),

        .out_addr    (out_addr),
        .out_data    (out_data),
        .out_valid   (out_valid),
        .out_ready   (out_ready),

        .read_addr   (read_addr),
        .read_data   (read_data),
        .read_valid  (read_valid),
        .read_ready  (read_ready),

        .write_addr  (write_addr),
        .write_data  (write_data),
        //Namcv10 added
        .write_byteen(write_byteen),
        .write_valid (write_valid),
        .write_ready (write_ready)
    );

    // Hardware Main Memory BRAM Instance
    main_memory_bram #(
        .ADDR_SIZE(ADDR_SIZE),
        .DATA_SIZE(DATA_SIZE),
        .MEM_DEPTH(MEM_DEPTH)
    ) dram_inst (
        .clk        (clk_l),
        .rst_n      (rst_n),

        .read_addr  (read_addr),
        .read_data  (read_data),
        .read_valid (read_valid),
        .read_ready (read_ready),

        .write_addr (write_addr),
        .write_data (write_data),
        //Namcv10 added
        .write_byteen(write_byteen),
        .write_valid(write_valid),
        .write_ready(write_ready)
    );

endmodule