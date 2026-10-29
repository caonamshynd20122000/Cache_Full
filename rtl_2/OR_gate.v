`timescale 1ns / 1ps

module OR_gate #(
    parameter type   D_TYPE = logic[1:0],
    // parameter int    WIDTH  = 1,
    parameter int    SIZE   = 8,
    parameter string LSB_PRIORITY = "LOW"
) (
    input  logic                        clk,
    input  D_TYPE [SIZE-1 : 0]          sig_in,
    output logic                        sig_out,
    output logic [$clog2(SIZE)-1 : 0]   idx
);

logic [0 : SIZE-1] sig_processed;

genvar i;
generate

    for(i=0; i<SIZE; i+=1)begin
        assign sig_processed[i] = !(|(sig_in[i]));
    end

endgenerate

// logic [$clog2(SIZE)-1 : 0] idx_;

// always_ff @(posedge clk) begin
//     idx <= idx_;
// end

priority_encoder #(.WIDTH           (SIZE),
                   .LSB_PRIORITY    (LSB_PRIORITY))
idx_tracker(.input_unencoded        (sig_processed),
            .output_valid           (sig_out),
            .output_encoded         (idx),
            .output_unencoded       ());

endmodule