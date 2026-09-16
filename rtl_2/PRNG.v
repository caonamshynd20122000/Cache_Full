`timescale 1ns / 1ps

module PRNG #(
    parameter BOUND_SIZE = 8
) (
    input wire                  clk,
    input wire                  rst_n,
    input wire [167 : 0]        in,
    input wire                  valid,
    input wire                  request,
    output wire [BOUND_SIZE-1 : 0] out
);

wire [31 : 0] out_w;
reg [167 : 0] lfsr_reg;

assign out = out_w[BOUND_SIZE-1 : 0];

generate
    genvar i;

    for(i = 0; i < 32; i = i + 1) begin
        assign out_w[i] = !(^lfsr_reg[i + 136 -: 32]);
    end
endgenerate

always @(posedge clk, negedge rst_n) begin
    if(!rst_n) begin
        lfsr_reg <= 0;
    end else if(valid) begin
        lfsr_reg <= in;
    end else if(request) begin
        lfsr_reg[167 : 32] <= lfsr_reg[135 : 0];
        lfsr_reg[31 : 0]   <= out_w;
    end
end

endmodule