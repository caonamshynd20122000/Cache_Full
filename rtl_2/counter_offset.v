`timescale 1ns / 100ps

module counter_offset #(
    parameter COUNT_LIMIT = 1
) (
    input clk,
    input rst_n,
    input start,
    output reg [$clog2(COUNT_LIMIT) : 0] counter,
    output reg done
);

wire done_w = (counter == COUNT_LIMIT) && start;

always @(posedge clk, negedge rst_n) begin
    counter <= (rst_n == 1'b0) ? 0 : (done_w) ? counter : counter + start;
    done <= (rst_n == 1'b0) ? 0 : (done_w) ? 1 : done;
end

endmodule