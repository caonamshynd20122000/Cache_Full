`timescale 1ns / 100ps

module main_memory_bram #(
    parameter ADDR_SIZE = 32,
    parameter DATA_SIZE = 32,
    parameter MEM_DEPTH = 65536 // 64K words (256KB Main Memory BRAM)
) (
    input wire                     clk,
    input wire                     rst_n,

    // Read channel from Cache Controller
    input wire  [ADDR_SIZE-1 : 0]  read_addr,
    output wire [DATA_SIZE-1 : 0]  read_data,
    input wire                     read_valid,
    output reg                     read_ready,

    // Write channel from Cache Controller
    input wire  [ADDR_SIZE-1 : 0]  write_addr,
    input wire  [DATA_SIZE-1 : 0]  write_data,
    //FIXME:
    input wire  [(DATA_SIZE/8)-1 : 0] write_byteen,
    input wire                     write_valid,
    output reg                     write_ready
);

    wire [$clog2(MEM_DEPTH)-1 : 0] r_addr = read_addr[ADDR_SIZE-1 : 2] % MEM_DEPTH;
    wire [$clog2(MEM_DEPTH)-1 : 0] w_addr = write_addr[ADDR_SIZE-1 : 2] % MEM_DEPTH;

    // Instance of True Dual-Port RAM Primitive (ram_dp.v) from your RTL directory
    ram_dp #(
        .DATA_WIDTH(DATA_SIZE),
        .ADDR_WIDTH($clog2(MEM_DEPTH))
    ) main_mem_dp (
        // Port A: Dedicated Read Channel
        .a_clk (clk),
        .a_we  (1'b0),
        .a_addr(r_addr),
        .a_din ({DATA_SIZE{1'b0}}),
        .a_dout(read_data),

        // Port B: Dedicated Write Channel
        .b_clk (clk),
        .b_we  (write_valid ? write_byteen : {(DATA_SIZE/8){1'b0}}),
        .b_addr(w_addr),
        .b_din (write_data),
        .b_dout()
    );

    // Hardware Handshake Delays for Read and Write (1-cycle BRAM latency)
    always @(posedge clk, negedge rst_n) begin
        if (!rst_n) begin
            read_ready  <= 1'b0;
            write_ready <= 1'b0;
        end else begin
            read_ready  <= read_valid;
            write_ready <= write_valid;
        end
    end

endmodule