`timescale 1ps/1ps

module D_FF #(
    parameter SIZE = 1
)(
    input clk,
    input rst_n,
    input set,
    input [SIZE-1 : 0] din,
    output wire [SIZE-1 : 0] dout
);

    reg [SIZE-1 : 0] data;

    assign dout = data;

    always @(posedge clk, negedge rst_n) begin
        data <= (!rst_n) ? 0: (set) ? din : data;
    end
endmodule