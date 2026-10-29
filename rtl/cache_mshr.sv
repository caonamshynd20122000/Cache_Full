`timescale 1ns / 1ps

// ============================================================================
// File Name   : cache_mshr.sv
// Module Name : cache_mshr
// Description : Miss Status Holding Register (MSHR) for Non-blocking Cache.
//               Handles miss allocation, same-line request coalescing, and 
//               replaying pending requests upon memory refill completion.
// ============================================================================

`include "cache_define.vh"

module cache_mshr import cache_pkg::*; #(
    parameter `STRING INSTANCE_ID = "",
    parameter BANK_ID           = 0,
    parameter LINE_SIZE         = 16,
    parameter SECTOR_SIZE       = LINE_SIZE,
    parameter NUM_BANKS         = 1,
    parameter MSHR_SIZE         = 1,
    parameter WRITEBACK         = 0,
    parameter AMO_ENABLE        = 0,
    parameter AMO_PASSTHRU      = 0,
    parameter DATA_WIDTH        = 1,
    parameter MSHR_ADDR_WIDTH   = `LOG2UP(MSHR_SIZE)
) (
    input wire                          clk,
    input wire                          reset,

    input wire [`UP(UUID_WIDTH)-1:0]    deq_req_uuid,
    input wire [`UP(UUID_WIDTH)-1:0]    alc_req_uuid,
    input wire [`UP(UUID_WIDTH)-1:0]    fin_req_uuid,

    // Fill input from memory response
    input wire                          fill_valid,
    input wire [MSHR_ADDR_WIDTH-1:0]    fill_id,
    input wire [`CS_LINE_ADDR_WIDTH-1:0] fill_addr,
    input wire [`UP(`CS_SECTOR_SEL_BITS)-1:0] fill_sector,

    // Probe input for pending checks
    input wire [`CS_LINE_ADDR_WIDTH-1:0] probe_addr,
    output wire                         probe_pending_ld,
    output wire                         probe_pending_amo,

    // Dequeue output (Replay to cache pipeline)
    output wire                         dequeue_valid,
    output wire [`CS_LINE_ADDR_WIDTH-1:0] dequeue_addr,
    output wire                         dequeue_rw,
    output wire [DATA_WIDTH-1:0]        dequeue_data,
    output wire [MSHR_ADDR_WIDTH-1:0]   dequeue_id,
    input wire                          dequeue_ready,

    // Allocate input (S0 stage)
    input wire                          allocate_valid,
    input wire [`CS_LINE_ADDR_WIDTH-1:0] allocate_addr,
    input wire [`UP(`CS_SECTOR_SEL_BITS)-1:0] allocate_sector,
    input wire                          allocate_rw,
    input wire                          allocate_is_amo,
    input wire [DATA_WIDTH-1:0]         allocate_data,
    output wire [MSHR_ADDR_WIDTH-1:0]   allocate_id,
    output wire                         allocate_pending,
    output wire [MSHR_ADDR_WIDTH-1:0]   allocate_previd,
    output wire                         allocate_ready,

    // Finalize input (S1 stage)
    input wire                          finalize_valid,
    input wire                          finalize_is_release,
    input wire                          finalize_is_pending,
    input wire [MSHR_ADDR_WIDTH-1:0]    finalize_id,
    input wire [MSHR_ADDR_WIDTH-1:0]    finalize_previd
);

    localparam ADDR_WIDTH = `CS_LINE_ADDR_WIDTH;

    typedef struct packed {
        logic                  valid;
        logic [ADDR_WIDTH-1:0] addr;
        logic                  rw;
        logic [DATA_WIDTH-1:0] data;
        logic [MSHR_ADDR_WIDTH-1:0] next_id;
        logic                  has_next;
    } mshr_entry_t;

    mshr_entry_t entries [MSHR_SIZE-1:0];
    logic [MSHR_SIZE-1:0] free_mask;

    // Allocation logic
    wire [MSHR_ADDR_WIDTH-1:0] alloc_entry_id;
    priority_encoder #(
        .N (MSHR_SIZE)
    ) alloc_enc (
        .data_in   (free_mask),
        .index_out (alloc_entry_id),
        .valid_out (allocate_ready),
        `UNUSED_PIN (onehot_out)
    );

    // Address matching for coalescing
    logic [MSHR_ADDR_WIDTH-1:0] match_entry_id;
    always_comb begin
        match_entry_id = MSHR_SIZE[MSHR_ADDR_WIDTH-1:0];
        for (integer i = 0; i < MSHR_SIZE; i++) begin
            if (entries[i].valid && (entries[i].addr == allocate_addr)) begin
                match_entry_id = i[MSHR_ADDR_WIDTH-1:0];
            end
        end
    end

    assign allocate_id      = alloc_entry_id;
    assign allocate_pending = (match_entry_id != MSHR_SIZE[MSHR_ADDR_WIDTH-1:0]) && ~allocate_is_amo;
    assign allocate_previd  = match_entry_id;

    // Probe status
    logic pending_ld, pending_amo;
    always_comb begin
        pending_ld  = 1'b0;
        pending_amo = 1'b0;
        for (integer i = 0; i < MSHR_SIZE; i++) begin
            if (entries[i].valid && (entries[i].addr == probe_addr)) begin
                if (entries[i].rw) pending_amo = 1'b1;
                else pending_ld = 1'b1;
            end
        end
    end

    assign probe_pending_ld  = pending_ld;
    assign probe_pending_amo = pending_amo;

    // Dequeue logic for replaying requests
    reg [MSHR_ADDR_WIDTH-1:0] deq_head_r;
    reg deq_valid_r;

    assign dequeue_valid = deq_valid_r;
    assign dequeue_id    = deq_head_r;
    assign dequeue_addr  = entries[deq_head_r].addr;
    assign dequeue_rw    = entries[deq_head_r].rw;
    assign dequeue_data  = entries[deq_head_r].data;

    // Update state & Entry table management
    always_ff @(posedge clk) begin
        if (reset) begin
            free_mask   <= '1;
            deq_valid_r <= 1'b0;
            for (integer i = 0; i < MSHR_SIZE; i++) begin
                entries[i].valid    <= 1'b0;
                entries[i].has_next <= 1'b0;
            end
        end else begin
            // Allocate entry
            if (allocate_valid && allocate_ready) begin
                entries[alloc_entry_id].valid    <= 1'b1;
                entries[alloc_entry_id].addr     <= allocate_addr;
                entries[alloc_entry_id].rw       <= allocate_rw;
                entries[alloc_entry_id].data     <= allocate_data;
                entries[alloc_entry_id].has_next <= 1'b0;
                free_mask[alloc_entry_id]        <= 1'b0;
            end

            // Finalize entry (link list update or release hit)
            if (finalize_valid) begin
                if (finalize_is_release) begin
                    entries[finalize_id].valid <= 1 me_0;
                    free_mask[finalize_id]     <= 1'b1;
                end else if (finalize_is_pending) begin
                    entries[finalize_previd].next_id  <= finalize_id;
                    entries[finalize_previd].has_next <= 1'b1;
                end
            end

            // Memory fill response triggers dequeue
            if (fill_valid) begin
                deq_valid_r <= 1'b1;
                deq_head_r  <= fill_id;
            end else if (dequeue_valid && dequeue_ready) begin
                if (entries[deq_head_r].has_next) begin
                    deq_head_r <= entries[deq_head_r].next_id;
                end else begin
                    deq_valid_r <= 1'b0;
                end
                entries[deq_head_r].valid <= 1'b0;
                free_mask[deq_head_r]     <= 1'b1;
            end
        end
    end

endmodule