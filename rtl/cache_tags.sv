`timescale 1ns / 1ps

// ============================================================================
// File Name   : cache_tags.sv
// Module Name : cache_tags
// Description : Parameterized N-Way Cache Tag Store and Match Logic.
// ============================================================================

`include "cache_define.vh"

module cache_tags import cache_pkg::*; #(
    parameter CACHE_SIZE        = 1024,       // cache size in bytes
    parameter LINE_SIZE         = 16,         // line size in bytes
    parameter NUM_BANKS         = 1,          // number of banks
    parameter NUM_WAYS          = 1,          // number of associative ways
    parameter WORD_SIZE         = 1,          // size of a word in bytes
    parameter SECTOR_SIZE       = LINE_SIZE,  // sector size in bytes
    parameter WRITEBACK         = 0,          // enable cache writeback
    parameter DIRTY_BYTES       = 0           // enable dirty bytes on writeback
) (
    input wire                          clk,
    input wire                          reset,

    // control inputs
    input wire                          init,
    input wire                          fill,
    input wire                          flush,
    input wire                          lookup,
    input wire                          write,
    input wire [`CS_LINE_SEL_BITS-1:0]  line_idx,
    input wire [`CS_WAY_SEL_WIDTH-1:0]  evict_way,
    input wire [`CS_TAG_WIDTH-1:0]      addr_tag,
    input wire [WORD_SIZE-1:0]          write_byteen,
    input wire [`UP(`CS_WORD_SEL_BITS)-1:0] word_idx,
    input wire [`UP(`CS_SECTOR_SEL_BITS)-1:0] sector_idx,

    // outputs
    output wire [NUM_WAYS-1:0]          tag_matches,
    output wire [`CS_WAY_SEL_WIDTH-1:0] hit_way,
    output wire                         tag_hit,
    output wire [`CS_TAG_WIDTH-1:0]     tag_rdata,
    output wire [`CS_SECTOR_MASK_WIDTH-1:0] sector_matches,
    output wire                         sector_hit,
    output wire                         dirty_rdata
);

    localparam TAG_RAM_DEPTH = `CS_LINES_PER_BANK;

    wire [NUM_WAYS-1:0][`CS_TAG_WIDTH-1:0] way_tags_rdata;
    wire [NUM_WAYS-1:0][`CS_SECTOR_MASK_WIDTH-1:0] way_valid_rdata;
    wire [NUM_WAYS-1:0][`CS_SECTOR_MASK_WIDTH-1:0] way_dirty_rdata;

    // Way match detection logic
    wire [NUM_WAYS-1:0] way_tag_matches;
    wire [NUM_WAYS-1:0] way_sector_matches;

    for (genvar i = 0; i < NUM_WAYS; ++i) begin : g_way_matches
        wire is_fill_way = fill && ((NUM_WAYS == 1) || (evict_way == i));
        wire tag_write   = is_fill_way;
        wire tag_read    = lookup || fill || flush;

        // Tag Store RAM per Way
        sp_ram #(
            .DATAW   (`CS_TAG_WIDTH),
            .SIZE    (TAG_RAM_DEPTH),
            .OUT_REG (1),
            .RDW_MODE ("R")
        ) tag_store (
            .clk   (clk),
            .reset (reset),
            .read  (tag_read),
            .write (tag_write),
            .wren  (1'b1),
            .addr  (line_idx),
            .wdata (addr_tag),
            .rdata (way_tags_rdata[i])
        );

        // Valid Bit Store per Way and Sector
        wire [`CS_SECTOR_MASK_WIDTH-1:0] valid_wdata;
        wire [`CS_SECTOR_MASK_WIDTH-1:0] valid_wren;

        if (`CS_SECTORS_PER_LINE > 1) begin : g_multi_sector_valid
            for (genvar s = 0; s < `CS_SECTORS_PER_LINE; ++s) begin : g_sector
                assign valid_wdata[s] = fill;
                assign valid_wren[s]  = init || flush || (fill && (sector_idx == `UP(`CS_SECTOR_SEL_BITS)'(s)));
            end
        end else begin : g_single_sector_valid
            assign valid_wdata = fill;
            assign valid_wren  = init || flush || fill;
        end

        wire valid_write = init || flush || is_fill_way;
        wire valid_read  = lookup || fill || flush;

        sp_ram #(
            .DATAW   (`CS_SECTOR_MASK_WIDTH),
            .WRENW   (`CS_SECTOR_MASK_WIDTH),
            .SIZE    (TAG_RAM_DEPTH),
            .OUT_REG (1),
            .LUTRAM  (1),
            .RDW_MODE ("R")
        ) valid_store (
            .clk   (clk),
            .reset (reset),
            .read  (valid_read),
            .write (valid_write),
            .wren  (valid_wren),
            .addr  (line_idx),
            .wdata (valid_wdata),
            .rdata (way_valid_rdata[i])
        );

        // Dirty Bit Store per Way (Write-back only)
        if (WRITEBACK && (DIRTY_BYTES == 0)) begin : g_dirty_store
            wire [`CS_SECTOR_MASK_WIDTH-1:0] dirty_wdata;
            wire [`CS_SECTOR_MASK_WIDTH-1:0] dirty_wren;

            for (genvar s = 0; s < `CS_SECTORS_PER_LINE; ++s) begin : g_sector
                localparam SLICE_WORD_START = s * `CS_WORDS_PER_SECTOR;
                localparam SLICE_WORD_END   = SLICE_WORD_START + `CS_WORDS_PER_SECTOR - 1;

                wire word_in_sector = (`CS_WORDS_PER_LINE == 1) ||
                    ((word_idx >= `UP(`CS_WORD_SEL_BITS)'(SLICE_WORD_START)) &&
                     (word_idx <= `UP(`CS_WORD_SEL_BITS)'(SLICE_WORD_END)));

                wire is_write_hit = write && tag_matches[i] && word_in_sector && (| write_byteen);

                assign dirty_wdata[s] = is_write_hit;
                assign dirty_wren[s]  = init || flush || is_fill_way || is_write_hit;
            end

            wire dirty_write = init || flush || is_fill_way || (write && tag_matches[i]);
            wire dirty_read  = lookup || fill || flush;

            sp_ram #(
                .DATAW   (`CS_SECTOR_MASK_WIDTH),
                .WRENW   (`CS_SECTOR_MASK_WIDTH),
                .SIZE    (TAG_RAM_DEPTH),
                .OUT_REG (1),
                .LUTRAM  (1),
                .RDW_MODE ("R")
            ) dirty_store (
                .clk   (clk),
                .reset (reset),
                .read  (dirty_read),
                .write (dirty_write),
                .wren  (dirty_wren),
                .addr  (line_idx),
                .wdata (dirty_wdata),
                .rdata (way_dirty_rdata[i])
            );
        end else begin : g_no_dirty_store
            assign way_dirty_rdata[i] = '0;
        end

        // Tag match evaluation
        assign way_tag_matches[i]    = (| way_valid_rdata[i]) && (way_tags_rdata[i] == addr_tag);
        assign way_sector_matches[i] = way_valid_rdata[i][sector_idx];

    end

    // Priority encoder for hit way detection
    onehot_encoder #(
        .N (NUM_WAYS)
    ) hit_way_enc (
        .data_in  (way_tag_matches),
        .data_out (hit_way),
        `UNUSED_PIN (valid_out)
    );

    assign tag_matches    = way_tag_matches;
    assign tag_hit        = (| way_tag_matches);
    assign sector_matches = way_sector_matches;
    assign sector_hit     = way_sector_matches[hit_way];
    assign tag_rdata      = way_tags_rdata[hit_way];
    assign dirty_rdata    = way_dirty_rdata[evict_way][sector_idx];

endmodule