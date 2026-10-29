`timescale 1ns / 1ps

// ============================================================================
// File Name   : amo_alu.sv
// Module Name : amo_alu
// Description : Pure Combinational RVA RMW ALU Kernel.
//               Exact line-by-line conversion from open-source GPGPU AMO ALU.
// ============================================================================

`include "define.vh"

module amo_alu import gpu_pkg::*; #(
    parameter DATA_WIDTH = 64
) (
    input  amo_op_e     op,
    input  wire         is_unsigned, // selects MIN/MAX variant
    input  wire [1:0]   width,        // 2 = .W, 3 = .D
    input  wire [63:0]  old_word,
    input  wire [63:0]  rhs,
    output wire [63:0]  new_word,
    output wire [63:0]  ret_word
);
    localparam AW = DATA_WIDTH;

    // .W and .D only differ when the datapath is wider than 32 bits;
    // a <= 32-bit operand width can only ever be a .W atomic.
    wire is_w = (AW > 32) ? (width == 2'd2) : 1'b1;
    if (AW <= 32) begin : g_w_only
        `UNUSED_VAR (width)
    end
    if (AW < 64) begin : g_hi_unused
        `UNUSED_VAR (old_word[63:AW])
        `UNUSED_VAR (rhs[63:AW])
    end

    wire [AW-1:0] a = old_word[AW-1:0];
    wire [AW-1:0] b = rhs[AW-1:0];

    // Mask to width-sized values; sign-extend at the 32-bit boundary for MIN/MAX.
    wire [AW-1:0] a_u = is_w ? {{(AW-32){1'b0}},  a[31:0]} : a;
    wire [AW-1:0] b_u = is_w ? {{(AW-32){1'b0}},  b[31:0]} : b;
    wire signed [AW-1:0] a_s = is_w ? {{(AW-32){a[31]}}, a[31:0]} : a;
    wire signed [AW-1:0] b_s = is_w ? {{(AW-32){b[31]}}, b[31:0]} : b;

    reg [AW-1:0] res;
    always @(*) begin
        case (op)
            AMO_OP_LR:    res = a_u;
            AMO_OP_SC:    res = b_u;
            AMO_OP_SWAP:  res = b_u;
            AMO_OP_ADD:   res = a_u + b_u;
            AMO_OP_AND:   res = a_u & b_u;
            AMO_OP_OR:    res = a_u | b_u;
            AMO_OP_XOR:   res = a_u ^ b_u;
            AMO_OP_MIN:   res = is_unsigned ? ((a_u < b_u) ? a_u : b_u)
                                            : ((a_s < b_s) ? a_s : b_s);
            AMO_OP_MAX:   res = is_unsigned ? ((a_u > b_u) ? a_u : b_u)
                                            : ((a_s > b_s) ? a_s : b_s);
            default:      res = a_u;
        endcase
        if (is_w) res = {{(AW-32){1'b0}}, res[31:0]};
    end

    // Zero-extend the AW-sized results back to the 64-bit port.
    // For SC the bank overrides ret_word with 0/1.
    assign new_word = 64'(res);
    assign ret_word = 64'(is_w ? {{(AW-32){1'b0}}, a[31:0]} : a);

endmodule