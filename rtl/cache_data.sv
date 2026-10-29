`timescale 1ns / 1ps

// ============================================================================
// File Name   : cache_data.sv
// Module Name : cache_data
// Description : Parameterized N-Way Cache Data Store.
//               Direct implementation from open-source GPGPU cache architecture.
// Reference   : Open-Source GPGPU Cache Subsystem
// ============================================================================

`include "cache_define.vh"

module cache_data import cache_pkg::*; #(
    parameter CACHE_SIZE        = 1024,       // cache size in bytes
    parameter LINE_SIZE         = 16,         // line size in bytes
    parameter NUM_BANKS         = 1,          // number of banks
    parameter NUM_WAYS          = 1,          // number of associative ways
    parameter WORD_SIZE         = 1,          // size of a word in bytes
    parameter SECTOR_SIZE       = LINE_SIZE,  // sector size in bytes
    parameter WRITE_ENABLE      = 1,          // enable cache writeable
    parameter WRITEBACK         = 0,          // enable cache writeback
    parameter DIRTY_BYTES       = 0           // enable dirty bytes on writeback
) (
    input wire                          clk,
    input wire                          reset,

    // control inputs
    input wire                          init,
    input wire                          fill,
    input wire                          flush,
    input wire                          read,
    input wire                          write,
    input wire [`CS_LINE_SEL_BITS-1:0]  line_idx,
    input wire [`CS_WAY_SEL_WIDTH-1:0]  evict_way,
    input wire [NUM_WAYS-1:0]           tag_matches,
    input wire [`CS_WORDS_PER_LINE-1:0][`CS_WORD_WIDTH-1:0] fill_data,
    input wire [`CS_WORD_WIDTH-1:0]     write_word,
    input wire [WORD_SIZE-1:0]          write_byteen,
    input wire [`UP(`CS_WORD_SEL_BITS)-1:0] word_idx,
    input wire [`UP(`CS_SECTOR_SEL_BITS)-1:0] sector_idx,
    input wire [`CS_WAY_SEL_WIDTH-1:0]  way_idx_r,

    // data outputs
    output wire [`CS_LINE_WIDTH-1:0]    read_data,
    output wire [LINE_SIZE-1:0]         evict_byteen
);

    localparam WAY_SEL_BITS    = `CS_WAY_SEL_BITS;
    localparam DATA_RAM_DEPTH  = `CS_LINES_PER_BANK * NUM_WAYS;
    localparam DATA_ADDR_WIDTH = `LOG2UP(DATA_RAM_DEPTH);

    wire [`CS_WAY_SEL_WIDTH-1:0] hit_way;

    // Use priority encoder to find the hit way
    onehot_encoder #(
        .N (NUM_WAYS)
    ) hit_way_enc (
        .data_in  (tag_matches),
        .data_out (hit_way),
        `UNUSED_PIN (valid_out)
    );

    wire is_evict = fill || flush;
    wire hit_any  = (| tag_matches);
    wire [`CS_WAY_SEL_WIDTH-1:0] way_sel = is_evict ? evict_way : hit_way;

    // Fold way index and set index into physical address
    wire [DATA_ADDR_WIDTH-1:0] data_addr;
    if (NUM_WAYS > 1) begin : g_way_addr
        assign data_addr = DATA_ADDR_WIDTH'({way_sel[WAY_SEL_BITS-1:0], line_idx});
    end else begin : g_no_way_addr
        `UNUSED_VAR (way_sel)
        assign data_addr = line_idx;
    end

    // Decoupled per-byte dirty tracking (Write-back only)
    if (DIRTY_BYTES != 0) begin : g_dirty_bytes
        wire [`CS_WORDS_PER_LINE-1:0][WORD_SIZE-1:0] write_mask;
        for (genvar i = 0; i < `CS_WORDS_PER_LINE; ++i) begin : g_write_mask
            wire word_en = (`CS_WORDS_PER_LINE == 1) || (word_idx == i);
            assign write_mask[i] = write_byteen & {WORD_SIZE{word_en}};
        end

        wire [NUM_WAYS-1:0][LINE_SIZE-1:0] byteen_rdata;
        for (genvar i = 0; i < NUM_WAYS; ++i) begin : g_byteen_store
            wire [LINE_SIZE-1:0] byteen_wdata = {LINE_SIZE{write}};
            wire [LINE_SIZE-1:0] byteen_wren  = {LINE_SIZE{init || fill || flush}} | write_mask;
            wire byteen_write = ((fill || flush) && ((NUM_WAYS == 1) || (evict_way == i)))
                             || (write && tag_matches[i])
                             || init;
            wire byteen_read  = fill || flush;

            sp_ram #(
                .DATAW   (LINE_SIZE),
                .WRENW   (LINE_SIZE),
                .SIZE    (`CS_LINES_PER_BANK),
                .OUT_REG (1),
                .LUTRAM  (1),
                .RDW_MODE ("R")
            ) byteen_store (
                .clk   (clk),
                .reset (reset),
                .read  (byteen_read),
                .write (byteen_write),
                .wren  (byteen_wren),
                .addr  (line_idx),
                .wdata (byteen_wdata),
                .rdata (byteen_rdata[i])
            );
        end
        assign evict_byteen = byteen_rdata[way_idx_r];
    end else begin : g_no_dirty_bytes
        `UNUSED_VAR (init)
        `UNUSED_VAR (flush)
        `UNUSED_VAR (way_idx_r)
        assign evict_byteen = '1;
    end

    // Main Data Store RAM slices
    wire [`CS_WORDS_PER_LINE-1:0][`CS_WORD_WIDTH-1:0] line_rdata;

    for (genvar s = 0; s < `CS_WORDS_PER_LINE; ++s) begin : g_data_slice
        localparam WRENW = WRITE_ENABLE ? WORD_SIZE : 1;
        localparam SLICE_SECTOR = s / `CS_WORDS_PER_SECTOR;

        wire word_en = (`CS_WORDS_PER_LINE == 1) || (word_idx == s);
        wire fill_sec_en = (`CS_SECTORS_PER_LINE == 1)
                        || (sector_idx == `UP(`CS_SECTOR_SEL_BITS)'(SLICE_SECTOR));

        wire slice_read = (read && word_en) || ((fill || flush) && WRITEBACK);

        wire slice_write;
        wire [WRENW-1:0]          slice_wren;
        wire [`CS_WORD_WIDTH-1:0] slice_wdata;

        if (WRITE_ENABLE) begin : g_wren
            assign slice_write = (fill && fill_sec_en) || (write && hit_any && word_en);
            assign slice_wren  = fill ? {WORD_SIZE{1'b1}} : write_byteen;
            assign slice_wdata = fill ? fill_data[s] : write_word;
        end else begin : g_no_wren
            `UNUSED_VAR (write)
            `UNUSED_VAR (write_word)
            `UNUSED_VAR (write_byteen)
            `UNUSED_VAR (hit_any)
            assign slice_write = fill && fill_sec_en;
            assign slice_wren  = 1'b1;
            assign slice_wdata = fill_data[s];
        end

        sp_ram #(
            .DATAW   (`CS_WORD_WIDTH),
            .WRENW   (WRENW),
            .SIZE    (DATA_RAM_DEPTH),
            .OUT_REG (1),
            .RDW_MODE ("R")
        ) data_store (
            .clk   (clk),
            .reset (reset),
            .read  (slice_read),
            .write (slice_write),
            .wren  (slice_wren),
            .addr  (data_addr),
            .wdata (slice_wdata),
            .rdata (line_rdata[s])
        );
    end

    assign read_data = line_rdata;

endmodule