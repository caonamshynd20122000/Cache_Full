`timescale 1ns / 1ps

// ============================================================================
// File Name   : amo_unit.sv
// Module Name : amo_unit
// Description : Atomic Memory Operation Helper with LR/SC Reservation Station.
//               Exact line-by-line conversion from open-source GPGPU AMO unit.
// ============================================================================

`include "cache_define.vh"

module amo_unit import gpu_pkg::*; #(
    parameter NUM_RES_ENTRIES = 4,   // reservation stations per bank (NUM_RS)
    parameter LINE_ADDR_BITS  = 32,
    parameter DATA_WIDTH      = 64   // ALU operand width (cache word, capped at 64)
) (
    input  wire                          clk,
    input  wire                          reset,
    input  wire                          pipe_stall,

    // Combinational compute kernel.
    input  amo_op_e                      compute_op,
    input  wire                          compute_unsigned,
    input  wire [1:0]                    compute_width,
    input  wire [63:0]                   compute_old,
    input  wire [63:0]                   compute_rhs,
    output wire [63:0]                   compute_new_word,
    output wire [63:0]                   compute_ret_word,

    // Reservation activity (single-fire per cycle).
    input  wire                          res_reserve,    // LR commit
    input  wire                          res_clear,      // SC commit (success or fail)
    input  wire                          res_invalidate, // committed write to res_line_addr
    input  wire [HART_ID_WIDTH-1:0]      res_hart_id,
    input  wire [LINE_ADDR_BITS-1:0]     res_line_addr,   // committed line (stC)
    input  wire [LINE_ADDR_BITS-1:0]     res_line_addr_n, // line entering stC next cycle
    output wire                          res_check        // SC outcome (1 = match)
);

    // Pure ALU (no state, no clock).
    amo_alu #(
        .DATA_WIDTH (DATA_WIDTH)
    ) alu (
        .op          (compute_op),
        .is_unsigned (compute_unsigned),
        .width       (compute_width),
        .old_word    (compute_old),
        .rhs         (compute_rhs),
        .new_word    (compute_new_word),
        .ret_word    (compute_ret_word)
    );

    // ============================================================
    // Reservation cache: NUM_RS stations, line-indexed.
    // ============================================================
    localparam RS_ADDRW    = `UP(`CLOG2(NUM_RES_ENTRIES));
    localparam RS_DEPTH    = 1 << RS_ADDRW;
    localparam RS_TAG_BITS = LINE_ADDR_BITS - RS_ADDRW;   // {tag,idx} = full line
    localparam RS_DATA_W   = HART_ID_WIDTH + RS_TAG_BITS;  // BRAM payload: {hart, tag}

    wire en = ~pipe_stall;

    wire [RS_ADDRW-1:0]    rs_idx   = res_line_addr  [RS_ADDRW-1:0];
    wire [RS_ADDRW-1:0]    rs_idx_n = res_line_addr_n[RS_ADDRW-1:0];
    wire [RS_TAG_BITS-1:0] rs_tag   = res_line_addr[LINE_ADDR_BITS-1:RS_ADDRW];
    `UNUSED_VAR (res_line_addr_n)

    wire                 rs_we;
    wire [RS_DATA_W-1:0] rs_wdata = {res_hart_id, rs_tag};
    wire [RS_DATA_W-1:0] rs_rdata;

    dp_ram #(
        .DATAW    (RS_DATA_W),
        .SIZE     (RS_DEPTH),
        .OUT_REG  (1),
        .RDW_MODE ("R")
    ) rs_store (
        .clk   (clk),
        .reset (reset),
        .read  (en),
        .write (rs_we),
        .wren  (1'b1),
        .waddr (rs_idx),
        .raddr (rs_idx_n),
        .wdata (rs_wdata),
        .rdata (rs_rdata)
    );

    // Read-during-write forward logic
    wire                 rdw_set = rs_we && (rs_idx == rs_idx_n);
    reg                  rdw_valid_r;
    reg [RS_DATA_W-1:0]  rdw_data_r;

    always @(posedge clk) begin
        if (reset) begin
            rdw_valid_r <= 1'b0;
        end else if (en) begin
            rdw_valid_r <= rdw_set;
            rdw_data_r  <= rs_wdata;
        end
    end

    wire [RS_DATA_W-1:0] rs_data = rdw_valid_r ? rdw_data_r : rs_rdata;

    // Current entry status at the committed line index
    reg  [RS_DEPTH-1:0]      rs_valid;
    wire                     e_valid = rs_valid[rs_idx];
    wire [HART_ID_WIDTH-1:0] e_hart  = rs_data[RS_TAG_BITS +: HART_ID_WIDTH];
    wire [RS_TAG_BITS-1:0]   e_tag   = rs_data[RS_TAG_BITS-1:0];

    wire line_match = e_valid && (e_tag == rs_tag);            // slot holds this line
    wire own_match  = line_match && (e_hart == res_hart_id);   // ...reserved by this hart

    // SC outcome: this hart's reservation on this line is still live.
    assign res_check = own_match;

    // LR installs the payload; a matching SC/store clears the valid bit.
    assign rs_we = res_reserve && en;
    wire   rs_clr = en && ((res_invalidate && line_match)      // any write breaks the reserver
                        || (res_clear && own_match));          // SC clears its own

    always @(posedge clk) begin
        if (reset) begin
            rs_valid <= '0;
        end else begin
            if (rs_we) begin
                rs_valid[rs_idx] <= 1'b1;
            end else if (rs_clr) begin
                rs_valid[rs_idx] <= 1'b0;
            end
        end
    end

endmodule