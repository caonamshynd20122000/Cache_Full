`timescale 1ns / 1ps

module random_fill_engine #(
    parameter BOUND_SIZE = 8,
    parameter ADDR_SIZE = 32
) (
    input wire                          clk,
    input wire                          rst_n,
    input wire                          en,
    input wire        [ADDR_SIZE-1 : 0] addr,
    input wire signed [BOUND_SIZE-1 : 0] low_bound,
    input wire        [BOUND_SIZE-1 : 0] high_bound,
    input wire        [BOUND_SIZE-1 : 0] rng_val,
    input wire                          valid,
    output wire       [ADDR_SIZE-1 : 0] out,
    output wire                         done
);

wire signed [ADDR_SIZE-1 : 0]   add_addr    = addr + (rng_val & high_bound);
wire signed [ADDR_SIZE-1 : 0]   cal_addr    = add_addr + low_bound;

reg         [ADDR_SIZE-1 : 0]   out_ff;
reg                             done_ff;

assign                          out         = out_ff;
assign                          done        = done_ff;

always @(posedge clk, negedge rst_n) begin
    out_ff  <= (!rst_n) ? 0 : (valid) ? (en) ? cal_addr : addr : out_ff;
    done_ff <= (!rst_n) ? 0 : (valid) ? 1 : 0;
end

endmodule