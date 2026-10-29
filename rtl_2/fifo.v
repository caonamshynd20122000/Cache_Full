`timescale 1ps/1ps

module fifo #(
    parameter DATA_SIZE = 32,
    parameter DEPTH     = 1
) (
    input  wire                 clk,
    input  wire                 rst_n,

    input  wire                 push,
    output wire                 full,

    input  wire                 pop,
    output wire                 empty,

    input  wire [DATA_SIZE-1:0] d_in,
    output wire [DATA_SIZE-1:0] d_out
);

    generate
        if (DEPTH == 0) begin : gen_bypass
            assign full  = 1'b0;
            assign empty = 1'b1;
            assign d_out = d_in;
            
        end else begin : gen_fifo
            reg [$clog2(DATA_SIZE)-1:0] cursor, next_cursor;
            reg [0:DEPTH-1]             valid;
            reg [DATA_SIZE-1:0]         data [0:DEPTH-1];
            reg [DATA_SIZE-1:0]         reg_out;

            assign full  = &valid;
            assign empty = (valid == 0);
            assign d_out = reg_out;

            always @(posedge clk, negedge rst_n) begin
                if (!rst_n) begin
                    cursor  <= 0;
                    valid   <= 0;
                    reg_out <= 0;
                end else begin
                    if (push && pop && empty) begin
                        reg_out <= d_in;
                    end else begin
                        
                        if (pop && valid[cursor]) begin
                            reg_out       <= data[cursor];
                            valid[cursor] <= 0;
                            cursor        <= (cursor + 1) % DEPTH;
                        end

                        if (push && !full) begin
                            if (empty) begin
                                valid[cursor]      <= 1;
                                data[cursor]       <= d_in;
                                next_cursor        <= (cursor + 1) % DEPTH;
                            end else begin
                                valid[next_cursor] <= 1;
                                data[next_cursor]  <= d_in;
                                next_cursor        <= (next_cursor + 1) % DEPTH;
                            end
                        end
                        
                    end
                end
            end
        end
    endgenerate

endmodule