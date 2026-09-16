// Copyright © 2019-2023
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

`include "VX_define.vh"

// Pure combinational RVA RMW kernel. Given the cache line's current word
// at the AMO byte offset and the rs2 operand, derives:
//   - new_word: the value to write back for store-bearing AMOs (all except LR).
//   - ret_word: the original loaded value, sign-extended into rd.
//               For SC the bank overrides this with 0/1 outside this module.
// DATA_WIDTH is the synthesized operand width (= the cache word width, capped
// at 64): a 32-bit-word cache can only carry .W atomics, so the adder and
// comparators are built 32-bit rather than 64-bit. width selects .W vs .D and
// is only meaningful when DATA_WIDTH > 32.
module VX_amo_alu import VX_gpu_pkg::*; #(
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
// Copyright © 2019-2023
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

`include "VX_cache_define.vh"

// Per-LLC-bank AMO helper: the RVA RMW kernel + a small reservation cache.
//
// Reservations are tracked by a bounded, fixed-size set of stations per bank
// (NUM_RS, default load-matched to system concurrency) rather than a slot per
// hart. The cache is line-indexed (direct-mapped on the reserved line's low
// address bits): the {hart,tag} payload lives in a synchronous block RAM read
// one stage ahead (look-ahead address, the VX_cache_tags pattern) so the
// registered output lands the same cycle the SC commit decision is made; the
// valid bits live in resettable flops (BRAM contents are not reset).
//
//   LR  : claim the slot for {hart, line}  (overwrites any prior occupant).
//   SC  : succeeds iff the slot still holds {hart, line}; the success store
//         then clears it through the write path below.
//   write: a committed store/RMW to a line clears the slot iff it holds that
//          line (tag match) — breaks the reserver, any hart.
//
// A bounded set with conflict/capacity eviction is RISC-V-legal: SC may fail
// spuriously for any reason, and forward progress is a system property (some
// hart's SC wins each round). This is how real GPUs/CPUs implement LR/SC, and
// it removes the per-hart table's O(NUM_HARTS) storage and CAM.
module VX_amo_unit import VX_gpu_pkg::*; #(
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
    VX_amo_alu #(
        .DATA_WIDTH (DATA_WIDTH)
    ) alu (
        .op       (compute_op),
        .is_unsigned (compute_unsigned),
        .width    (compute_width),
        .old_word (compute_old),
        .rhs      (compute_rhs),
        .new_word (compute_new_word),
        .ret_word (compute_ret_word)
    );

    // ============================================================
    // Reservation cache: NUM_RS stations, line-indexed.
    // ============================================================
    // Effective capacity is the next power-of-two >= NUM_RS (>=2), so the line
    // index fully covers the storage depth for any requested NUM_RS.
    localparam RS_ADDRW    = `UP(`CLOG2(NUM_RES_ENTRIES));
    localparam RS_DEPTH    = 1 << RS_ADDRW;
    localparam RS_TAG_BITS = LINE_ADDR_BITS - RS_ADDRW;   // {tag,idx} = full line
    localparam RS_DATA_W   = HART_ID_WIDTH + RS_TAG_BITS;  // BRAM payload: {hart, tag}

    wire en = ~pipe_stall;

    // index by the reserved line's low bits; the rest is the stored tag.
    // (only the index bits of the look-ahead address are needed)
    wire [RS_ADDRW-1:0]    rs_idx   = res_line_addr  [RS_ADDRW-1:0];
    wire [RS_ADDRW-1:0]    rs_idx_n = res_line_addr_n[RS_ADDRW-1:0];
    wire [RS_TAG_BITS-1:0] rs_tag   = res_line_addr[LINE_ADDR_BITS-1:RS_ADDRW];
    `UNUSED_VAR (res_line_addr_n)

    // Look-ahead BRAM payload (cache_tags pattern): read at the next index so
    // the registered output presents the entry at the commit cycle (stC); the
    // LR installs {hart,tag} at the committed index.
    wire                 rs_we;
    wire [RS_DATA_W-1:0] rs_wdata = {res_hart_id, rs_tag};
    wire [RS_DATA_W-1:0] rs_rdata;
    VX_dp_ram #(
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

    // Read-during-write forward: an LR installs at the committed index the same
    // cycle the next op prefetches it; the registered read would miss it, so
    // forward the just-written payload for one cycle.
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

    // current entry at the committed line index: valid from flops, payload from BRAM
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
// Copyright © 2019-2023
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

`include "VX_cache_define.vh"

// Per-bank AMO engine, instantiated by the bank only when atomics are
// enabled. A bank plays exactly one of two roles:
//
//   IS_LLC=1 (commit): perform the read-modify-write on the line word
//     resident at S1, maintain the per-hart reservation table (via
//     VX_amo_unit), and inject the result back through the bank pipeline
//     as a single-outstanding synthetic writeback.
//
//   IS_LLC=0 (passthrough): forward the AMO downstream (the LLC does the
//     RMW), latch the returned result word, and replay it back to the
//     requester. Also enforces same-hart program order at the bank input.
//
// The two roles are mutually exclusive, so each ties off the other's
// outputs and the synthesizer keeps only the selected datapath.
module VX_cache_amo import VX_gpu_pkg::*; #(
    parameter IS_LLC          = 0,
    parameter NUM_RES_ENTRIES = 4,
    parameter LINE_ADDR_BITS  = 32,
    parameter WORD_WIDTH      = 32,
    parameter WORD_SIZE       = 4,
    parameter WORD_SEL_WIDTH  = 1,
    parameter TAG_WIDTH       = 1,
    parameter REQ_SEL_WIDTH   = 1,
    parameter ATTR_WIDTH      = 1,
    parameter MSHR_SIZE       = 1,
    parameter MSHR_ADDR_WIDTH = 1,
    parameter WORDS_PER_LINE  = 1,
    parameter WORDS_PER_SECTOR = WORDS_PER_LINE, // words per fill/eviction sector (= WORDS_PER_LINE when 1 sector/line)
    parameter PIPE_EX         = 0             // deferred-commit depth: _st1 ports lag the S0 lookup by PIPE_EX+1 cycles (0 = classic 2-stage)
) (
    input  wire                          clk,
    input  wire                          reset,
    input  wire                          pipe_stall,

    // pipeline view
    input  amo_req_t                     amo_st0,
    input  wire                          valid_st0,
    input  wire                          is_creq_st0,
    input  wire                          is_hit_st0,
    input  wire                          is_replay_st0,
    input  amo_req_t                     amo_st1,
    input  wire                          valid_st1,
    input  wire                          is_creq_st1,
    input  wire                          is_hit_st1,
    input  wire                          is_replay_st1,
    input  wire                          do_write_st1,
    input  wire [WORD_WIDTH-1:0]         read_word_st1,
    input  wire [WORD_SIZE-1:0]          byteen_st1,
    input  wire [WORD_WIDTH-1:0]         write_word_st1,
    input  wire [WORD_SEL_WIDTH-1:0]     word_idx_st0,
    input  wire [WORD_SEL_WIDTH-1:0]     word_idx_st1,
    input  wire [LINE_ADDR_BITS-1:0]     addr_st0,
    input  wire [LINE_ADDR_BITS-1:0]     addr_st1,
    input  wire [LINE_ADDR_BITS-1:0]     res_addr_n,   // line entering the commit stage next cycle
    input  wire [TAG_WIDTH-1:0]          tag_st1,
    input  wire [REQ_SEL_WIDTH-1:0]      req_idx_st1,
    input  wire [ATTR_WIDTH-1:0]         attr_st1,

    // commit handshake: the bank grants the synthetic writeback this cycle
    input  wire                          wb_fire,

    // mshr / memory fill (passthrough)
    input  wire                          mshr_allocate_st0,
    input  wire [MSHR_ADDR_WIDTH-1:0]    mshr_alloc_id_st0,
    input  wire [MSHR_ADDR_WIDTH-1:0]    mshr_id_st1,
    input  wire                          mem_rsp_fire,
    input  wire [MSHR_ADDR_WIDTH-1:0]    mem_rsp_id,
    input  wire [WORDS_PER_SECTOR*WORD_WIDTH-1:0] mem_rsp_data,
    input  wire                          is_fill_sel,

    // input arbitration (passthrough age-ordering)
    input  wire                          core_req_valid,
    input  wire                          core_req_is_amo,
    input  wire                          core_req_rw,
    input  wire [LINE_ADDR_BITS-1:0]     core_req_addr,
    input  wire                          rw_st0,
    input  wire                          mshr_probe_pending_ld,
    input  wire                          mshr_probe_pending_amo,

    // commit outputs (tied off when IS_LLC=0)
    output wire                          amo_hit_st1,    // AMO commits locally at S1
    output wire                          commit_busy,    // commit in flight
    output wire                          chain_stall,    // pace same-line chained AMO
    output wire                          wb_pending,     // writeback request live
    output wire [WORD_WIDTH-1:0]         rsp_data,       // response word on amo_hit_st1
    // Read forward: a request reading the AMO'd word while the result is still
    // queued/settling must observe those bytes (replays are admitted during
    // the writeback window). The bank byte-merges these over the array word.
    output wire [WORD_SIZE-1:0]          rd_fwd_mask,
    output wire [WORD_WIDTH-1:0]         rd_fwd_data,
    output wire [LINE_ADDR_BITS-1:0]     wb_addr,
    output wire [WORD_SEL_WIDTH-1:0]     wb_word_idx,
    output wire [WORD_SIZE-1:0]          wb_byteen,
    output wire [WORD_WIDTH-1:0]         wb_data,
    output wire [TAG_WIDTH-1:0]          wb_tag,
    output wire [REQ_SEL_WIDTH-1:0]      wb_idx,
    output wire [ATTR_WIDTH-1:0]         wb_attr,

    // passthrough outputs (tied off when IS_LLC=1)
    output wire                          is_amo_fwd_st0,    // AMO first pass (S0)
    output wire                          is_amo_fwd_st1,    // AMO first pass (S1)
    output wire                          is_amo_replay_st1, // result replay
    output wire                          is_passthru_fill_sel,
    output wire [WORD_WIDTH-1:0]         amo_ptw_word_st1,
    output wire                          req_input_defer
);
    if (IS_LLC != 0) begin : g_commit
        // ----------------------------------------------------------------
        // LLC commit: RMW on the resident line + synthetic writeback
        // ----------------------------------------------------------------
        localparam BIT_OFF_BITS = `CLOG2(WORD_WIDTH);
        localparam AMO_OLD_BITS = (WORD_WIDTH < 64) ? WORD_WIDTH : 64;

        // Writeback queue: a completed AMO pushes its result here instead of
        // overwriting a still-draining writeback. The head (slot 0) drains
        // through the bank's synthetic-write path; pushes never clobber a pending
        // entry, so writebacks pipeline without stalling any replay (coalescer-
        // safe) or the pipe (deadlock-free). Entries are keyed per WORD: a
        // same-line AMO burst (the coalescer forces one lane per line-word past
        // no_merge, and the MSHR replays them back to back) leaves one writeback
        // per distinct word in flight, so the queue is sized to a full line's
        // words. Repeated/adjacent sub-word AMOs to one word byte-merge into that
        // word's single entry, so the queue never needs more than WORDS_PER_LINE.
        localparam WBQ_SIZE = (WORDS_PER_LINE < 2) ? 2 : WORDS_PER_LINE;
        localparam WBQ_CNTW = `CLOG2(WBQ_SIZE+1);
        localparam WBQ_IDXW = `CLOG2(WBQ_SIZE);
        reg [WBQ_CNTW-1:0]           wbq_count;
        reg [LINE_ADDR_BITS-1:0]     wbq_addr   [WBQ_SIZE];
        reg [WORD_SEL_WIDTH-1:0]     wbq_wsel   [WBQ_SIZE];
        reg [WORD_SIZE-1:0]          wbq_byteen [WBQ_SIZE];
        reg [WORD_WIDTH-1:0]         wbq_data   [WBQ_SIZE];
        reg [TAG_WIDTH-1:0]          wbq_tag    [WBQ_SIZE];
        reg [REQ_SEL_WIDTH-1:0]      wbq_idx    [WBQ_SIZE];
        reg [ATTR_WIDTH-1:0]         wbq_attr   [WBQ_SIZE];

        // Head aliases (slot 0 = oldest = the entry currently draining).
        wire                         wb_pending_r  = (wbq_count != '0);
        wire [LINE_ADDR_BITS-1:0]    wb_addr_r     = wbq_addr[0];
        wire [WORD_SEL_WIDTH-1:0]    wb_word_idx_r = wbq_wsel[0];
        wire [WORD_SIZE-1:0]         wb_byteen_r   = wbq_byteen[0];
        wire [WORD_WIDTH-1:0]        wb_data_r     = wbq_data[0];
        wire [TAG_WIDTH-1:0]         wb_tag_r      = wbq_tag[0];
        wire [REQ_SEL_WIDTH-1:0]     wb_idx_r      = wbq_idx[0];
        wire [ATTR_WIDTH-1:0]        wb_attr_r     = wbq_attr[0];

        // BRAM-settle window: a fired writeback takes a couple cycles to land
        // in cache_data; commit_busy stays high across it so the next AMO reads
        // the committed line. post_wb_{addr,data} hold the just-drained entry.
        reg [1:0]                    post_wb_age;
        reg [LINE_ADDR_BITS-1:0]     post_wb_addr;
        reg [WORD_SEL_WIDTH-1:0]     post_wb_wsel;
        reg [WORD_SIZE-1:0]          post_wb_byteen;
        reg [WORD_WIDTH-1:0]         post_wb_data;
        wire                         post_wb_valid = (post_wb_age != 2'd0);

        // Compute stage: S1 latches the aligned operands, the RMW ALU + the
        // re-align shift run the next cycle, off the S1 critical path. AMO
        // commits are serialized by commit_busy (the bank holds off core
        // requests), so the stage holds at most one operation; the old operand
        // is byte-forwarded from the writeback queue when a prior AMO to the same
        // bytes has not yet reached the array (see line_word_st1).
        reg                          cmp_valid;
        reg [63:0]                   cmp_old, cmp_rhs;
        amo_op_e                     cmp_op;
        reg [1:0]                    cmp_width;
        reg                          cmp_unsigned;
        reg [BIT_OFF_BITS-1:0]       cmp_bit_off;
        reg [LINE_ADDR_BITS-1:0]     cmp_addr;
        reg [WORD_SIZE-1:0]          cmp_byteen;
        reg [WORD_SEL_WIDTH-1:0]     cmp_wsel;
        reg [TAG_WIDTH-1:0]          cmp_tag;
        reg [REQ_SEL_WIDTH-1:0]      cmp_idx;
        reg [ATTR_WIDTH-1:0]         cmp_attr;

        // Byte-offset alignment: shift the target down to bit 0 for compute,
        // and shift results back for response/writeback.
        wire [`UP(`CLOG2(WORD_SIZE))-1:0] byte_off_st1;
        VX_priority_encoder #(
            .N (WORD_SIZE)
        ) byte_off_enc (
            .data_in    (byteen_st1),
            .index_out  (byte_off_st1),
            `UNUSED_PIN (valid_out),
            `UNUSED_PIN (onehot_out)
        );
        wire [BIT_OFF_BITS-1:0] bit_off_st1 = BIT_OFF_BITS'({byte_off_st1, 3'b0});

        // Forward the newest in-flight value covering this AMO's bytes. The
        // match is byte-granular ({line, word_idx} and the queued entry covers
        // our byteen): two AMOs to different words/bytes of the same line are
        // independent RMWs, so only an entry that actually wrote our exact bytes
        // may feed its result in as this AMO's old operand. The queue holds the
        // freshest values (newest = highest index), then the just-drained
        // (settling) entry, else the cache array.
        reg                    fwd_hit;
        reg [WORD_WIDTH-1:0]   fwd_word;
        always @(*) begin
            fwd_hit  = 1'b0;
            fwd_word = read_word_st1;
            for (integer i = 0; i < WBQ_SIZE; ++i) begin
                if ((WBQ_CNTW'(i) < wbq_count) && (wbq_addr[i] == addr_st1)
                 && (wbq_wsel[i] == word_idx_st1) && ((wbq_byteen[i] & byteen_st1) == byteen_st1)) begin
                    fwd_hit  = 1'b1;   // higher index wins (newest)
                    fwd_word = wbq_data[i];
                end
            end
            if (~fwd_hit && post_wb_valid && (post_wb_addr == addr_st1)
             && (post_wb_wsel == word_idx_st1) && ((post_wb_byteen & byteen_st1) == byteen_st1)) begin
                fwd_word = post_wb_data;
            end
        end
        wire [WORD_WIDTH-1:0] line_word_st1 = fwd_word;

        // Read-forward network: newest queued/settling writer of each byte of
        // {addr_st1, word_idx_st1} wins (scan oldest -> newest). Bytes with no
        // in-flight writer come from the array (mask bit stays 0).
        reg [WORD_SIZE-1:0]  rd_fwd_mask_w;
        reg [WORD_WIDTH-1:0] rd_fwd_data_w;
        always @(*) begin
            rd_fwd_mask_w = '0;
            rd_fwd_data_w = '0;
            if (post_wb_valid && (post_wb_addr == addr_st1) && (post_wb_wsel == word_idx_st1)) begin
                for (integer b = 0; b < WORD_SIZE; ++b) begin
                    if (post_wb_byteen[b]) begin
                        rd_fwd_mask_w[b] = 1'b1;
                        rd_fwd_data_w[b*8 +: 8] = post_wb_data[b*8 +: 8];
                    end
                end
            end
            for (integer i = 0; i < WBQ_SIZE; ++i) begin
                if ((WBQ_CNTW'(i) < wbq_count) && (wbq_addr[i] == addr_st1) && (wbq_wsel[i] == word_idx_st1)) begin
                    for (integer b = 0; b < WORD_SIZE; ++b) begin
                        if (wbq_byteen[i][b]) begin
                            rd_fwd_mask_w[b] = 1'b1;
                            rd_fwd_data_w[b*8 +: 8] = wbq_data[i][b*8 +: 8];
                        end
                    end
                end
            end
        end
        assign rd_fwd_mask = rd_fwd_mask_w;
        assign rd_fwd_data = rd_fwd_data_w;

        // A younger plain store to queued/settling bytes supersedes them (its
        // array write is later in pipeline order): clear those byte lanes so
        // neither the writeback nor the read forward resurrects them. The
        // engine's own synthetic writeback commit is excluded -- it IS the
        // settling entry, not a younger writer -- identified by its fixed
        // fire->commit pipeline distance.
        wire wb_self_stc;
        VX_pipe_register #(
            .DATAW  (1),
            .RESETW (1),
            .DEPTH  (2 + PIPE_EX)
        ) reg_wb_self (
            .clk      (clk),
            .reset    (reset),
            .enable   (~pipe_stall),
            .data_in  (wb_fire),
            .data_out (wb_self_stc)
        );
        wire store_supersede = do_write_st1 && ~wb_self_stc && ~pipe_stall;
        reg [WBQ_SIZE-1:0] wbq_clr_hit;
        always @(*) begin
            for (integer i = 0; i < WBQ_SIZE; ++i) begin
                wbq_clr_hit[i] = store_supersede && (WBQ_CNTW'(i) < wbq_count)
                              && (wbq_addr[i] == addr_st1) && (wbq_wsel[i] == word_idx_st1);
            end
        end
        wire post_wb_clr = store_supersede && post_wb_valid
                        && (post_wb_addr == addr_st1) && (post_wb_wsel == word_idx_st1);

        wire [WORD_WIDTH-1:0] line_word_shifted_st1 = line_word_st1 >> bit_off_st1;
        wire [WORD_WIDTH-1:0] rhs_word_shifted_st1  = write_word_st1 >> bit_off_st1;

        // width from byteen popcount (.W -> 4 bytes, .D -> 8); operands top at .D.
        wire [1:0] width_st1 = ($countones(byteen_st1) == 8) ? 2'd3 : 2'd2;
        wire [63:0] rhs_st1 = (width_st1 == 2'd2)
                            ? 64'({32'h0, rhs_word_shifted_st1[31:0]})
                            : 64'(rhs_word_shifted_st1[AMO_OLD_BITS-1:0]);
        wire [63:0] old_st1 = (width_st1 == 2'd2)
                            ? 64'({32'h0, line_word_shifted_st1[31:0]})
                            : 64'(line_word_shifted_st1[AMO_OLD_BITS-1:0]);
        if (WORD_WIDTH > 64) begin : g_upper_unused
            `UNUSED_VAR (line_word_shifted_st1[WORD_WIDTH-1:64])
            `UNUSED_VAR (rhs_word_shifted_st1[WORD_WIDTH-1:64])
        end

        wire        res_check;

        // commit conditions (from the original AMO at S1; amo_st1.hart_id is
        // valid there, not on the compute/writeback cycle).
        wire amo_hit_w = amo_st1.amo_valid && is_hit_st1 && valid_st1 && is_creq_st1;
        wire sc_fail_st1 = (amo_st1.amo_op == AMO_OP_SC) && ~res_check;
        wire do_store_st1 = amo_hit_w && (amo_st1.amo_op != AMO_OP_LR) && ~sc_fail_st1;
        wire do_store_st0 = amo_st0.amo_valid && valid_st0 && is_creq_st0 && is_hit_st0
                         && (amo_st0.amo_op != AMO_OP_LR);

        wire res_reserve    = amo_hit_w && (amo_st1.amo_op == AMO_OP_LR);
        wire res_clear      = amo_hit_w && (amo_st1.amo_op == AMO_OP_SC);
        // any committed write to the line breaks other harts' reservations;
        // AMOs ride the load path (rw=0) so do_write_st1 is plain stores only.
        wire res_invalidate = do_store_st1 || do_write_st1;

        // RMW ALU runs on the registered compute-stage operands (off the S1
        // path); the reservation table is driven from S1 so the SC outcome is
        // ready for the response. ret_word is unused — the response old value
        // comes straight from S1 (no ALU).
        wire [63:0] new_word;
        wire [63:0] ret_word_unused;
        VX_amo_unit #(
            .NUM_RES_ENTRIES (NUM_RES_ENTRIES),
            .LINE_ADDR_BITS  (LINE_ADDR_BITS),
            .DATA_WIDTH      (AMO_OLD_BITS)  // 32-bit word cache -> 32-bit RMW datapath
        ) amo_unit (
            .clk           (clk),
            .reset         (reset),
            .pipe_stall    (pipe_stall),
            .compute_op    (cmp_op),
            .compute_unsigned (cmp_unsigned),
            .compute_width (cmp_width),
            .compute_old   (cmp_old),
            .compute_rhs   (cmp_rhs),
            .compute_new_word (new_word),
            .compute_ret_word (ret_word_unused),
            .res_reserve   (res_reserve),
            .res_clear     (res_clear),
            .res_invalidate(res_invalidate),
            .res_hart_id   (amo_st1.hart_id),
            .res_line_addr (addr_st1),
            .res_line_addr_n (res_addr_n),  // look-ahead for the sync-BRAM read (lands at stC)
            .res_check     (res_check)
        );
        `UNUSED_VAR (ret_word_unused)

        // place the computed word at its byte offset within the cache word
        wire [WORD_WIDTH-1:0] wb_data_w = WORD_WIDTH'(new_word) << cmp_bit_off;

        // Compute finished this cycle (result ready to enqueue): the compute
        // stage is occupied and not being reloaded by a fresh latch.
        wire wb_push = cmp_valid && ~(do_store_st1 && ~pipe_stall);
        // A same-WORD result coalesces into that word's existing entry, byte-
        // merging its bytes (see the enqueue) so repeated or adjacent sub-word
        // AMOs to one word collapse to a single writeback. Different words of the
        // same line stay in separate entries (each is an independent write). The
        // head cannot be coalesced the cycle it drains.
        reg                 wb_coalesce;
        reg [WBQ_IDXW-1:0]  wb_coal_idx;    // pre-shift index of the coalesce target
        always @(*) begin
            wb_coalesce = 1'b0;
            wb_coal_idx = '0;
            for (integer i = 0; i < WBQ_SIZE; ++i) begin
                if ((WBQ_CNTW'(i) < wbq_count) && (wbq_addr[i] == cmp_addr)
                 && (wbq_wsel[i] == cmp_wsel) && ~(wb_fire && (i == 0))) begin
                    wb_coalesce = 1'b1;
                    wb_coal_idx = WBQ_IDXW'(i);
                end
            end
        end
        // Merge source: the pre-shift coalesce-target entry (old value).
        wire [WORD_WIDTH-1:0] coal_src_data   = wbq_data[wb_coal_idx];
        wire [WORD_SIZE-1:0]  coal_src_byteen = wbq_byteen[wb_coal_idx];
        // New entry lands at the post-pop tail; a coalesce slot shifts down on a pop.
        wire [WBQ_IDXW-1:0] wb_new_idx  = WBQ_IDXW'(wb_fire ? (wbq_count - WBQ_CNTW'(1)) : wbq_count);
        wire [WBQ_IDXW-1:0] wb_slot     = wb_coalesce ? WBQ_IDXW'(wb_fire ? (wb_coal_idx - WBQ_IDXW'(1)) : wb_coal_idx)
                                                      : wb_new_idx;

        always @(posedge clk) begin
            if (reset) begin
                cmp_valid   <= 1'b0;
                wbq_count   <= '0;
                post_wb_age <= 2'd0;
            end else begin
                if (wb_fire) begin
                    post_wb_age    <= 2'd2;
                    post_wb_addr   <= wbq_addr[0];
                    post_wb_wsel   <= wbq_wsel[0];
                    post_wb_byteen <= wbq_byteen[0] & ~(wbq_clr_hit[0] ? byteen_st1 : {WORD_SIZE{1'b0}});
                    post_wb_data   <= wbq_data[0];
                end else begin
                    if (post_wb_valid) begin
                        post_wb_age <= post_wb_age - 2'd1;
                    end
                    if (post_wb_clr) begin
                        post_wb_byteen <= post_wb_byteen & ~byteen_st1;
                    end
                end

                // Compute stage (single): latch a new AMO, else retire the result.
                if (do_store_st1 && ~pipe_stall) begin
                    cmp_valid    <= 1'b1;
                    cmp_old      <= old_st1;
                    cmp_rhs      <= rhs_st1;
                    cmp_op       <= amo_st1.amo_op;
                    cmp_width    <= width_st1;
                    cmp_unsigned <= amo_st1.amo_unsigned;
                    cmp_bit_off  <= bit_off_st1;
                    cmp_addr     <= addr_st1;
                    cmp_byteen   <= byteen_st1;
                    cmp_wsel     <= word_idx_st1;
                    cmp_tag      <= tag_st1;
                    cmp_idx      <= req_idx_st1;
                    cmp_attr     <= attr_st1;
                end else if (cmp_valid) begin
                    cmp_valid <= 1'b0;
                end

                // Writeback queue: a drain (wb_fire) shifts every entry toward
                // the head; a completed compute (wb_push) enqueues at the tail or
                // byte-merges into its word's entry. The push is written after
                // the shift so it wins when both target the same slot.
                if (wb_fire) begin
                    for (integer i = 0; i < WBQ_SIZE-1; ++i) begin
                        wbq_addr[i]   <= wbq_addr[i+1];
                        wbq_wsel[i]   <= wbq_wsel[i+1];
                        wbq_byteen[i] <= wbq_byteen[i+1] & ~(wbq_clr_hit[i+1] ? byteen_st1 : {WORD_SIZE{1'b0}});
                        wbq_data[i]   <= wbq_data[i+1];
                        wbq_tag[i]    <= wbq_tag[i+1];
                        wbq_idx[i]    <= wbq_idx[i+1];
                        wbq_attr[i]   <= wbq_attr[i+1];
                    end
                end else begin
                    for (integer i = 0; i < WBQ_SIZE; ++i) begin
                        if (wbq_clr_hit[i]) begin
                            wbq_byteen[i] <= wbq_byteen[i] & ~byteen_st1;
                        end
                    end
                end
                if (wb_push) begin
                    wbq_addr[wb_slot] <= cmp_addr;
                    wbq_wsel[wb_slot] <= cmp_wsel;
                    wbq_tag[wb_slot]  <= cmp_tag;
                    wbq_idx[wb_slot]  <= cmp_idx;
                    wbq_attr[wb_slot] <= cmp_attr;
                    // byte-merge: this AMO's bytes take the new result; a coalesce
                    // keeps the target entry's other bytes; a fresh entry zero-fills.
                    wbq_byteen[wb_slot] <= cmp_byteen | (wb_coalesce ? coal_src_byteen : {WORD_SIZE{1'b0}});
                    for (integer b = 0; b < WORD_SIZE; ++b) begin
                        if (cmp_byteen[b])
                            wbq_data[wb_slot][b*8 +: 8] <= wb_data_w[b*8 +: 8];
                        else if (wb_coalesce)
                            wbq_data[wb_slot][b*8 +: 8] <= coal_src_data[b*8 +: 8];
                    end
                end
                // Count grows only on a new (non-coalescing) enqueue; a coalesce
                // updates in place. Pop removes the head.
                if (wb_push && ~wb_coalesce && ~wb_fire)
                    wbq_count <= wbq_count + WBQ_CNTW'(1);
                else if (~(wb_push && ~wb_coalesce) && wb_fire)
                    wbq_count <= wbq_count - WBQ_CNTW'(1);
            end
        end

        // Response (fired at S1; in-place, no ALU): the requester extracts its
        // target word by byte offset, so the old value can stay where it sits in
        // the line with the other bytes masked off -- this avoids a full-width
        // barrel shift on the hot read->response path (read_word -> rsp_data was
        // the critical path: a >>bit_off then <<bit_off round-trip just to mask).
        // The byte mask comes straight from byteen (one line bit per set byte);
        // masking is bit-identical to (old_st1 << bit_off) for the consumed bytes.
        // SC returns 0/1 placed at the offset (rare path, 1-bit shift input).
        wire [WORD_WIDTH-1:0] rsp_byte_mask;
        for (genvar b = 0; b < WORD_SIZE; ++b) begin : g_rsp_mask
            assign rsp_byte_mask[b*8 +: 8] = {8{byteen_st1[b]}};
        end
        wire [WORD_WIDTH-1:0] amo_old_inplace = line_word_st1 & rsp_byte_mask;
        wire [WORD_WIDTH-1:0] sc_rsp_inplace  = WORD_WIDTH'(sc_fail_st1) << bit_off_st1;

        assign amo_hit_st1 = amo_hit_w;
        assign rsp_data    = (amo_st1.amo_op == AMO_OP_SC) ? sc_rsp_inplace : amo_old_inplace;
        // Bridge the S0 prediction across the deferred lookup->commit window:
        // with PIPE_EX>0 the AMO sits in the commit bubble for PIPE_EX cycles
        // between do_store_st0 (S0) and do_store_st1 (stC), so commit_busy would
        // gap and let a same-line request race the writeback. A PIPE_EX-deep
        // shift of do_store_st0 fills the gap (continuous S0..stC hold).
        wire amo_inflight;
        if (PIPE_EX == 0) begin : g_no_bridge
            assign amo_inflight = 1'b0;
        end else begin : g_bridge
            reg [PIPE_EX-1:0] store_inflight;
            always @(posedge clk) begin
                if (reset) begin
                    store_inflight <= '0;
                end else if (~pipe_stall) begin
                    store_inflight[0] <= do_store_st0;
                    for (int i = 1; i < PIPE_EX; ++i) begin
                        store_inflight[i] <= store_inflight[i-1];
                    end
                end
            end
            assign amo_inflight = (| store_inflight);
        end

        // Commit in flight: holds off new core-request admission from the S0
        // prediction through the deferred bubble, the compute stage and the
        // writeback. Replays are NOT blocked (the MSHR streams coalesced same-
        // line AMOs back to back); those are paced instead by chain_stall.
        assign commit_busy = do_store_st0 || amo_inflight || do_store_st1 || cmp_valid || wb_pending_r;
        // Pace any same-line request sitting behind an in-flight compute by one
        // cycle, so the result lands in wb_data_r and forwards cleanly. Gated on
        // cmp_valid (an AMO is computing), so it never fires for baseline traffic.
        assign chain_stall = cmp_valid && valid_st1 && is_creq_st1 && (cmp_addr == addr_st1);

        // Invariants: a store-bearing AMO is only ever accepted into a free
        // compute stage (the queue absorbs different-line writebacks behind it),
        // and the writeback queue must never overflow.
        `RUNTIME_ASSERT (~(do_store_st1 && ~pipe_stall && cmp_valid),
            ("%t: AMO compute-stage overwrite (addr=0x%0h)", $time, addr_st1))
        `RUNTIME_ASSERT (~(wb_push && ~wb_coalesce && ~wb_fire && (wbq_count == WBQ_CNTW'(WBQ_SIZE))),
            ("%t: AMO writeback queue overflow (addr=0x%0h)", $time, cmp_addr))
        assign wb_pending  = wb_pending_r;
        assign wb_addr     = wb_addr_r;
        assign wb_word_idx = wb_word_idx_r;
        assign wb_byteen   = wb_byteen_r;
        assign wb_data     = wb_data_r;
        assign wb_tag      = wb_tag_r;
        assign wb_idx      = wb_idx_r;
        assign wb_attr     = wb_attr_r;

        // passthrough outputs unused in this role
        assign is_amo_fwd_st0       = 1'b0;
        assign is_amo_fwd_st1       = 1'b0;
        assign is_amo_replay_st1    = 1'b0;
        assign is_passthru_fill_sel = 1'b0;
        assign amo_ptw_word_st1     = '0;

        // Same-line ordering guard: a request must not enter the pipe while
        // an AMO to its line waits in the MSHR (or is allocating at S0) — it
        // would read or write the line before the replayed AMO commits. The
        // registered probe covers the AMO through its dequeue cycle;
        // commit_busy covers it from S0 onward.
        wire alloc_same_line = mshr_allocate_st0 && ~pipe_stall && (addr_st0 == core_req_addr);
        wire st0_amo_alloc   = alloc_same_line && amo_st0.amo_valid;
        assign req_input_defer = core_req_valid && (mshr_probe_pending_amo || st0_amo_alloc);

        `UNUSED_VAR (amo_st0) // only amo_valid/amo_op are consumed at S0
        `UNUSED_VAR (is_replay_st0)
        `UNUSED_VAR (is_replay_st1)
        `UNUSED_VAR (word_idx_st0)
        `UNUSED_VAR (mshr_alloc_id_st0)
        `UNUSED_VAR (mshr_id_st1)
        `UNUSED_VAR (mem_rsp_fire)
        `UNUSED_VAR (mem_rsp_id)
        `UNUSED_VAR (mem_rsp_data)
        `UNUSED_VAR (is_fill_sel)
        `UNUSED_VAR (core_req_is_amo)
        `UNUSED_VAR (core_req_rw)
        `UNUSED_VAR (rw_st0)
        `UNUSED_VAR (mshr_probe_pending_ld)
    end else begin : g_passthru
        // ----------------------------------------------------------------
        // Non-LLC passthrough: forward downstream, replay the result word
        // ----------------------------------------------------------------
        assign is_amo_fwd_st0    = amo_st0.amo_valid && valid_st0 && is_creq_st0 && ~is_replay_st0;
        assign is_amo_fwd_st1    = amo_st1.amo_valid && valid_st1 && is_creq_st1 && ~is_replay_st1;
        assign is_amo_replay_st1 = amo_st1.amo_valid && valid_st1 && is_creq_st1 && is_replay_st1;

        reg [MSHR_SIZE-1:0]      ptw_flag;   // entry awaits a passthru fill
        reg [WORD_SEL_WIDTH-1:0] ptw_wsel [MSHR_SIZE];
        reg [WORD_WIDTH-1:0]     ptw_word [MSHR_SIZE];

        wire [WORDS_PER_SECTOR-1:0][WORD_WIDTH-1:0] mem_rsp_words = mem_rsp_data;

        assign is_passthru_fill_sel = is_fill_sel && ptw_flag[mem_rsp_id];
        assign amo_ptw_word_st1     = ptw_word[mshr_id_st1];

        always @(posedge clk) begin
            if (reset) begin
                ptw_flag <= '0;
            end else begin
                // mark the AMO's MSHR entry on allocation
                if (is_amo_fwd_st0 && mshr_allocate_st0 && ~pipe_stall) begin
                    ptw_flag[mshr_alloc_id_st0] <= 1'b1;
                    ptw_wsel[mshr_alloc_id_st0] <= word_idx_st0;
                end
                // latch the result word on the passthru fill, clear the flag
                if (mem_rsp_fire && ptw_flag[mem_rsp_id]) begin
                    ptw_word[mem_rsp_id] <= mem_rsp_words[ptw_wsel[mem_rsp_id]];
                    ptw_flag[mem_rsp_id] <= 1'b0;
                end
            end
        end

        // catch a same-line request mid-allocation at S0 (not yet visible to
        // the MSHR probe in the window between admit and allocate).
        wire alloc_same_line = mshr_allocate_st0 && ~pipe_stall && (addr_st0 == core_req_addr);
        wire st0_ld_alloc    = alloc_same_line && ~amo_st0.amo_valid && ~rw_st0;
        wire st0_amo_alloc   = alloc_same_line &&  amo_st0.amo_valid;

        wire amo_input_defer  = core_req_valid && core_req_is_amo
                             && (mshr_probe_pending_ld || st0_ld_alloc);
        wire load_input_defer = core_req_valid && ~core_req_is_amo && ~core_req_rw
                             && (mshr_probe_pending_amo || st0_amo_alloc);
        assign req_input_defer = amo_input_defer || load_input_defer;

        // commit outputs unused in this role
        assign amo_hit_st1 = 1'b0;
        assign commit_busy = 1'b0;
        assign chain_stall = 1'b0;
        assign wb_pending  = 1'b0;
        assign rsp_data    = '0;
        // no local commit window: loads are held at the input while a
        // forwarded AMO is pending on the line, so no read forward exists.
        assign rd_fwd_mask = '0;
        assign rd_fwd_data = '0;
        assign wb_addr     = '0;
        assign wb_word_idx = '0;
        assign wb_byteen   = '0;
        assign wb_data     = '0;
        assign wb_tag      = '0;
        assign wb_idx      = '0;
        assign wb_attr     = '0;

        `UNUSED_VAR (amo_st0) // only amo_valid gates the passthru path
        `UNUSED_VAR (amo_st1)
        `UNUSED_VAR (is_hit_st0)
        `UNUSED_VAR (is_hit_st1)
        `UNUSED_VAR (do_write_st1)
        `UNUSED_VAR (read_word_st1)
        `UNUSED_VAR (byteen_st1)
        `UNUSED_VAR (write_word_st1)
        `UNUSED_VAR (word_idx_st1)
        `UNUSED_VAR (addr_st1)
        `UNUSED_VAR (res_addr_n)
        `UNUSED_VAR (tag_st1)
        `UNUSED_VAR (req_idx_st1)
        `UNUSED_VAR (attr_st1)
        `UNUSED_VAR (wb_fire)
    end

endmodule
// Copyright © 2019-2023
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

`include "VX_cache_define.vh"

module VX_cache_bank import VX_gpu_pkg::*; #(
    parameter `STRING INSTANCE_ID= "",
    parameter BANK_ID           = 0,
    parameter NUM_REQS          = 1,
    parameter CACHE_SIZE        = 1024,     // cache size in bytes
    parameter LINE_SIZE         = 16,       // line size in bytes
    parameter NUM_BANKS         = 1,
    parameter NUM_WAYS          = 1,
    parameter WORD_SIZE         = 4,        // word size in bytes
    parameter SECTOR_SIZE       = LINE_SIZE,// sector (fill/eviction granule); = LINE_SIZE => 1 sector
    parameter CRSQ_SIZE         = 0,        // extra core-response queue slots over minimum
    parameter MSHR_SIZE         = 1,        // miss reservation queue size
    parameter MRSQ_SIZE         = 1,        // memory response queue size (sized at wrapper)
    parameter MREQ_SIZE         = 0,        // memory request queue size (0 = derived minimum)
    parameter WRITE_ENABLE      = 1,
    parameter WRITEBACK         = 0,
    parameter DIRTY_BYTES       = 0,
    parameter REPL_POLICY       = `CS_REPL_FIFO,
    parameter TAG_WIDTH         = UUID_WIDTH + 1,
    parameter CORE_OUT_BUF      = 0,
    parameter MEM_OUT_BUF       = 0,
    parameter IS_LLC            = 0,        // last-level cache: AMOs commit locally here
    parameter AMO_ENABLE        = 0,        // synthesize atomic-op logic
    parameter LATENCY           = 2,        // pipeline depth; >2 defers the data array to break the tag->data path
    parameter MSHR_ADDR_WIDTH   = `LOG2UP(MSHR_SIZE),
    parameter MEM_TAG_WIDTH     = UUID_WIDTH + MSHR_ADDR_WIDTH,
    parameter REQ_SEL_WIDTH     = `UP(`CS_REQ_SEL_BITS),
    parameter WORD_SEL_WIDTH    = `UP(`CS_WORD_SEL_BITS)
) (
    input wire clk,
    input wire reset,

`ifdef PERF_ENABLE
    output wire perf_read_miss,
    output wire perf_write_miss,
    output wire perf_evictions,
    output wire perf_mshr_stall,
`endif

    // Core request
    input wire                          core_req_valid,
    input wire [`CS_LINE_ADDR_WIDTH-1:0] core_req_addr,
    input wire                          core_req_rw,
    input wire [WORD_SEL_WIDTH-1:0]     core_req_wsel,
    input wire [WORD_SIZE-1:0]          core_req_byteen,
    input wire [`CS_WORD_WIDTH-1:0]     core_req_data,
    input wire [TAG_WIDTH-1:0]          core_req_tag,
    input wire [REQ_SEL_WIDTH-1:0]      core_req_idx,
    input wire [`UP(MEM_ATTR_WIDTH)-1:0] core_req_attr,
    output wire                         core_req_ready,

    // Core response
    output wire                         core_rsp_valid,
    output wire [`CS_WORD_WIDTH-1:0]    core_rsp_data,
    output wire [TAG_WIDTH-1:0]         core_rsp_tag,
    output wire [REQ_SEL_WIDTH-1:0]     core_rsp_idx,
    input  wire                         core_rsp_ready,

    // Memory request (sector-granular; = line when 1 sector/line)
    output wire                         mem_req_valid,
    output wire [`CS_LINE_SECTOR_ADDR_WIDTH-1:0] mem_req_addr,
    output wire                         mem_req_rw,
    output wire [SECTOR_SIZE-1:0]       mem_req_byteen,
    output wire [`CS_SECTOR_WIDTH-1:0]  mem_req_data,
    output wire [MEM_TAG_WIDTH-1:0]     mem_req_tag,
    output wire [`UP(MEM_ATTR_WIDTH)-1:0] mem_req_attr,
    input  wire                         mem_req_ready,

    // Memory response
    input wire                          mem_rsp_valid,
    input wire [`CS_SECTOR_WIDTH-1:0]   mem_rsp_data,
    input wire [MEM_TAG_WIDTH-1:0]      mem_rsp_tag,
    output wire                         mem_rsp_ready,

    // Flush
    input wire                          flush_begin,
    input wire [`UP(UUID_WIDTH)-1:0]    flush_uuid,
    output wire                         flush_end
);
    localparam PIPELINE_STAGES = LATENCY;
    localparam PIPE_EX = LATENCY - 2;       // extra data-deferral stages (0 = classic 2-stage)
    // mem-req queue depth (pow2): max of pipeline floor (2*PIPELINE) and writeback reservation (MSHR), plus MREQ_SIZE extra slots.
    // A writeback cache emits an eviction request alongside the fill on a dirty miss, so up to MSHR_SIZE writebacks can
    // enqueue at once (one per outstanding miss); reserving MSHR_SIZE slots keeps the queue from stalling the fill drain that frees them.
    localparam MREQ_QUEUE_SIZE = 1 << `CLOG2(`MAX(2 * PIPELINE_STAGES, WRITEBACK ? MSHR_SIZE : 0) + MREQ_SIZE);
    // core-rsp queue depth (pow2): registered-skid minimum (2) plus CRSQ_SIZE extra slots
    localparam CRSQ_QUEUE_SIZE = 1 << `CLOG2(2 + CRSQ_SIZE);
    `STATIC_ASSERT(LATENCY >= 2, ("invalid parameter: cache bank LATENCY must be >= 2"))
    `UNUSED_PARAM (MRSQ_SIZE)

    // ========================================================================
    // Pipeline payload types
    //
    // The request travels as a struct and the S0-computed lookup results are a
    // separate `lookup_t` delta, composed into `commit_t` for the response /
    // memory-request stage. Fill data never rides the pipeline: the sector is
    // staged in the fill buffer at accept and feeds the data array directly,
    // so `data_t` carries only the word payload and `tag_matches`.
    //   sel -> S0     : data_t  (st0)            -- request + word payload
    //   S0  -> stD    : data_t  (stD)            -- drives the data array
    //   S0  -> S1->stC: commit_t (st1, stC)      -- request + lookup delta
    // `way_idx` and `mshr_id` are reused across stages (flush_way/replay_id at
    // select; resolved way / allocated id at commit). PIPE_EX=0 collapses
    // stD->S0 and stC->S1: the classic 2-stage bank.
    // ========================================================================
    typedef struct packed {
        logic                           valid, is_init, is_fill, is_flush, is_creq, is_replay, is_passthru_fill, rw;
        logic [`UP(MEM_ATTR_WIDTH)-1:0] attr;
        logic [`CS_WAY_SEL_WIDTH-1:0]   way_idx;     // flush_way @sel, resolved way @S1
        logic [`CS_LINE_ADDR_WIDTH-1:0] addr;
        logic [WORD_SIZE-1:0]           byteen;
        logic [WORD_SEL_WIDTH-1:0]      word_idx;
        logic [REQ_SEL_WIDTH-1:0]       req_idx;
        logic [TAG_WIDTH-1:0]           tag;
        logic [MSHR_ADDR_WIDTH-1:0]     mshr_id;     // replay_id @sel, alloc/replay id @S1
        amo_req_t                       amo;
    } req_t;

    typedef struct packed {            // S0-computed lookup delta (commit side)
        logic                          is_hit, is_dirty, mshr_pending;
        logic                          is_refill; // fill into an already-resident line (sector refill)
        logic [`CS_SECTORS_PER_LINE-1:0] evict_dirty_mask; // per-sector dirty of the evict way
        logic [`CS_TAG_SEL_BITS-1:0]   evict_tag;
        logic [MSHR_ADDR_WIDTH-1:0]    mshr_previd;
    } lookup_t;

    typedef struct packed {            // data-array drive (S0 -> stD)
        req_t                          req;
        logic [`CS_WORD_WIDTH-1:0]     wdata;
        logic [NUM_WAYS-1:0]           tag_matches;
    } data_t;

    typedef struct packed {            // response + memory request (S0 -> S1 -> stC)
        req_t                          req;
        lookup_t                       lk;
    } commit_t;

    data_t   sel_req, st0, dat_in, stD;   // request + fill line: sel -> S0 -> stD
    commit_t cmt_in, st1, stC;            // request + lookup delta: S0 -> S1 -> stC
    lookup_t lk_st0;                      // S0 lookup results

    // ------------------------------------------------------------------------
    // Shared signals
    // ------------------------------------------------------------------------
    wire crsp_queue_stall, mshr_alm_full, mshr_empty;
    wire mshr_probe_pending_ld, mshr_probe_pending_amo;
    wire mreq_queue_empty, mreq_queue_alm_full;
    wire [`CS_LINE_ADDR_WIDTH-1:0] mem_rsp_addr;
    wire [`UP(`CS_SECTOR_SEL_BITS)-1:0] mem_rsp_sector; // sector this fill installs
    wire [MSHR_ADDR_WIDTH-1:0] mshr_alloc_id, mshr_previd;
    wire mshr_pending_raw;

    // MSHR replay (dequeue) sideband
    wire                           replay_valid, replay_ready, replay_rw;
    wire [`CS_LINE_ADDR_WIDTH-1:0] replay_addr;
    wire [WORD_SEL_WIDTH-1:0]      replay_wsel;
    wire [WORD_SIZE-1:0]           replay_byteen;
    wire [`CS_WORD_WIDTH-1:0]      replay_data;
    wire [TAG_WIDTH-1:0]           replay_tag;
    wire [REQ_SEL_WIDTH-1:0]       replay_idx;
    wire [MSHR_ADDR_WIDTH-1:0]     replay_id;
    amo_req_t                      replay_amo;

    // AMO engine interconnect (tied to 0 when the bank carries no AMO logic).
    wire                          amo_hit_st1, amo_commit_busy, amo_chain_stall, amo_wb_pending;
    wire [`CS_WORD_WIDTH-1:0]     amo_rsp_data;
    wire [WORD_SIZE-1:0]          amo_rd_fwd_mask;
    wire [`CS_WORD_WIDTH-1:0]     amo_rd_fwd_data;
    wire [`CS_LINE_ADDR_WIDTH-1:0] amo_wb_addr;
    wire [WORD_SEL_WIDTH-1:0]     amo_wb_word_idx;
    wire [WORD_SIZE-1:0]          amo_wb_byteen;
    wire [`CS_WORD_WIDTH-1:0]     amo_wb_data;
    wire [TAG_WIDTH-1:0]          amo_wb_tag;
    wire [REQ_SEL_WIDTH-1:0]      amo_wb_idx;
    wire [`UP(MEM_ATTR_WIDTH)-1:0] amo_wb_attr;
    wire                          is_amo_fwd_st0, is_amo_fwd_st1, is_amo_replay_st1;
    wire                          is_passthru_fill_sel, req_input_defer;
    wire [`CS_WORD_WIDTH-1:0]     amo_ptw_word_st1;

    wire flush_valid, flush_ready, init_valid;
    wire [`CS_LINE_SEL_BITS-1:0] flush_sel;
    wire [`CS_WAY_SEL_WIDTH-1:0] flush_way;

    // Fill-forwarding sideband.
    // fwd_head: the pending-chain head is a forwardable read this cycle;
    // fwd_fire: it completes at the forward-response port; fwd_pending: a
    // forward drain is in progress (blocks the next fill from re-staging).
    wire fwd_head, fwd_fire, fwd_pending;
    wire [`CS_WORD_WIDTH-1:0] fwd_word;

    // Fill buffer: the sector staged at fill accept owns all in-flight fill
    // data; it feeds the data-array fill port and the forward-response word.
    reg [`CS_SECTOR_WIDTH-1:0] fbuf_data_r;
    reg [`CS_LINE_ADDR_WIDTH-1:0] fbuf_addr_r;

    // AMO sideband, extracted from the attr field (gated by AMO_ENABLE).
    amo_req_t core_req_amo;
    assign core_req_amo = AMO_ENABLE ? amo_req_t'(core_req_attr[MEM_ATTR_AMO_OFFS +: AMO_REQ_BITS])
                                     : amo_req_t'('0);

    // ------------------------------------------------------------------------
    // Per-stage decoded operations
    // ------------------------------------------------------------------------
    wire do_init_st0  = st0.req.valid && st0.req.is_init;
    wire do_flush_st0 = st0.req.valid && st0.req.is_flush;
    wire do_read_st0  = st0.req.valid && st0.req.is_creq && ~st0.req.rw;
    wire do_write_st0 = st0.req.valid && st0.req.is_creq && st0.req.rw;
    wire do_fill_st0  = st0.req.valid && st0.req.is_fill;
    wire do_lookup_st0 = do_read_st0 || do_write_st0;

    wire do_read_st1  = st1.req.valid && st1.req.is_creq && ~st1.req.rw;
    wire do_write_st1 = st1.req.valid && st1.req.is_creq && st1.req.rw;
    wire do_lookup_st1 = do_read_st1 || do_write_st1;

    wire do_read_stc  = stC.req.valid && stC.req.is_creq && ~stC.req.rw;
    wire do_write_stc = stC.req.valid && stC.req.is_creq && stC.req.rw;

    wire do_init_std  = stD.req.valid && stD.req.is_init;
    wire do_fill_std  = stD.req.valid && stD.req.is_fill;
    wire do_flush_std = stD.req.valid && stD.req.is_flush;
    wire do_read_std  = stD.req.valid && stD.req.is_creq && ~stD.req.rw;
    wire do_write_std = stD.req.valid && stD.req.is_creq && stD.req.rw;

    wire [`CS_LINE_SEL_BITS-1:0] line_idx_st0 = st0.req.addr[`CS_LINE_SEL_BITS-1:0];
    wire [`CS_TAG_SEL_BITS-1:0]  line_tag_st0 = `CS_LINE_ADDR_TAG(st0.req.addr);
    // Requested sector = top CS_SECTOR_SEL_BITS of the in-line word offset.
    wire [`UP(`CS_SECTOR_SEL_BITS)-1:0] sector_idx_st0;
    if (`CS_SECTOR_SEL_BITS != 0) begin : g_sector_idx
        assign sector_idx_st0 = st0.req.word_idx[`CS_WORD_SEL_BITS-1 -: `CS_SECTOR_SEL_BITS];
    end else begin : g_sector_idx0
        assign sector_idx_st0 = '0;
    end
    wire [`CS_WORD_WIDTH-1:0]    write_word_st0 = st0.wdata;
    wire [`CS_LINE_ADDR_WIDTH-1:0] addr_stc = stC.req.addr;

    // ------------------------------------------------------------------------
    // Bank-empty detection (gates flush). A request occupies S0, S1 and the
    // PIPE_EX commit-bubble stages (valid_st1 delayed 1..PIPE_EX); the parallel
    // data bubble S0->stD is subsumed by this window.
    // ------------------------------------------------------------------------
    wire pipe_inflight;
    if (PIPE_EX == 0) begin : g_no_bubble_occ
        assign pipe_inflight = st0.req.valid || st1.req.valid;
    end else begin : g_bubble_occ
        reg [PIPE_EX-1:0] commit_valid;
        always @(posedge clk) begin
            if (reset) begin
                commit_valid <= '0;
            end else if (~pipe_stall) begin
                commit_valid[0] <= st1.req.valid;
                for (int i = 1; i < PIPE_EX; ++i) begin
                    commit_valid[i] <= commit_valid[i-1];
                end
            end
        end
        assign pipe_inflight = st0.req.valid || st1.req.valid || (| commit_valid);
    end
    wire no_pending_req = ~pipe_inflight && mreq_queue_empty;

    VX_cache_flush #(
        .BANK_ID    (BANK_ID),
        .CACHE_SIZE (CACHE_SIZE),
        .LINE_SIZE  (LINE_SIZE),
        .NUM_BANKS  (NUM_BANKS),
        .NUM_WAYS   (NUM_WAYS),
        .WRITEBACK  (WRITEBACK)
    ) cache_flush (
        .clk         (clk),
        .reset       (reset),
        .flush_begin (flush_begin),
        .flush_end   (flush_end),
        .flush_init  (init_valid),
        .flush_valid (flush_valid),
        .flush_line  (flush_sel),
        .flush_way   (flush_way),
        .flush_ready (flush_ready),
        .mshr_empty  (mshr_empty),
        .bank_empty  (no_pending_req)
    );

    // wb_hold pauses the commit while a multi-beat per-sector writeback drains
    // (0 for single-sector lines, so the baseline pipe is unaffected).
    wire wb_hold;
    // amo_chain_stall paces a same-line AMO behind an in-flight commit by one
    // cycle; it is 0 for non-AMO traffic, so the baseline pipe is unaffected.
    wire pipe_stall = crsp_queue_stall || amo_chain_stall || wb_hold;

    // ========================================================================
    // Input arbitration
    //   priority: init > replay > fill(mem_rsp) > flush > core-req
    // replay maximizes utilization (guaranteed hit); fill precedes flush/creq to
    // avoid deadlock on a miss; flush precedes creq for consistency.
    // ========================================================================
    // A chain head claimed by the forward port is masked from the arbiter
    // (it completes at the forward-response port instead of replaying); a
    // fill is held off while a forward drain is in progress so the staged
    // sector is not overwritten mid-chain.
    wire replay_mux    = replay_valid && ~fwd_head;
    wire fill_mux      = mem_rsp_valid && ~fwd_pending && ~fill_inflight;

    wire replay_grant  = ~init_valid;
    wire replay_enable = replay_grant && replay_mux;
    wire fill_grant    = replay_grant && ~replay_enable;
    wire fill_enable   = fill_grant && fill_mux;
    wire flush_grant   = fill_grant && ~fill_enable;
    wire flush_enable  = flush_grant && flush_valid;
    wire creq_grant    = flush_grant && ~flush_enable;

    // A core-request slot fires from a real core_req or a pending LLC AMO
    // writeback (synthetic write injected after a commit); mutually exclusive.
    // amo_commit_busy/req_input_defer enforce AMO ordering (0 for non-AMO banks).
    wire amo_creq_path = core_req_valid && ~amo_commit_busy && ~req_input_defer;
    wire amo_wb_path   = amo_wb_pending && ~amo_hit_st1;
    wire creq_enable   = creq_grant && (amo_creq_path || amo_wb_path);

    assign replay_ready   = replay_grant && ~fwd_head && ~(!WRITEBACK && replay_rw && mreq_queue_alm_full) && ~pipe_stall;
    assign mem_rsp_ready  = fill_grant && ~fwd_pending && ~fill_inflight && ~(WRITEBACK && mreq_queue_alm_full) && ~pipe_stall;
    assign flush_ready    = flush_grant && ~(WRITEBACK && mreq_queue_alm_full) && ~pipe_stall;
    assign core_req_ready = creq_grant && ~mreq_queue_alm_full && ~mshr_alm_full && ~pipe_stall
                         && ~amo_commit_busy && ~req_input_defer;

    wire init_fire    = init_valid;
    wire replay_fire  = replay_valid && replay_ready;
    wire mem_rsp_fire = mem_rsp_valid && mem_rsp_ready;
    wire flush_fire   = flush_valid && flush_ready;
    // amo_wb_path already excludes the cycle a fresh AMO commits at S1, so the
    // writeback never races the chain update.
    wire amo_wb_fire   = amo_wb_path && creq_grant && ~mreq_queue_alm_full && ~mshr_alm_full && ~pipe_stall;
    wire core_req_fire = (amo_creq_path || amo_wb_path) && creq_grant
                       && ~mreq_queue_alm_full && ~mshr_alm_full && ~pipe_stall;

    wire [MSHR_ADDR_WIDTH-1:0] mem_rsp_id = mem_rsp_tag[MSHR_ADDR_WIDTH-1:0];

    // A fill's sector lives only in the staging buffer until its data-array
    // write at stD, so with deferred stages (PIPE_EX>0) a back-to-back fill
    // must be held off while one is in flight. At PIPE_EX=0 the array write
    // samples the buffer on the same edge a new fill re-stages it (old value
    // read), so no interlock is needed.
    wire fill_inflight;
    if (PIPE_EX > 0) begin : g_fill_inflight
        reg [PIPE_EX-1:0] fill_busy;
        always @(posedge clk) begin
            if (reset) begin
                fill_busy <= '0;
            end else if (~pipe_stall) begin
                fill_busy <= PIPE_EX'({fill_busy, (mem_rsp_fire && ~is_passthru_fill_sel)});
            end
        end
        assign fill_inflight = (| fill_busy);
    end else begin : g_no_fill_inflight
        assign fill_inflight = 1'b0;
    end

    // Fill word_idx: place the installed sector in the high (sector) bits of the
    // in-line word offset; low (word-in-sector) bits are don't-care for a fill.
    wire [WORD_SEL_WIDTH-1:0] fill_word_idx;
    if (`CS_SECTOR_SEL_BITS != 0) begin : g_fill_word_idx
        assign fill_word_idx = WORD_SEL_WIDTH'(mem_rsp_sector) << (`CS_WORD_SEL_BITS - `CS_SECTOR_SEL_BITS);
    end else begin : g_fill_word_idx0
        `UNUSED_VAR (mem_rsp_sector)
        assign fill_word_idx = '0;
    end

    // generate-guarded width selects (the dead branch must not elaborate an
    // out-of-range slice when the other width path is taken).
    wire [TAG_WIDTH-1:0] mem_rsp_tag_s;
    if (TAG_WIDTH > MEM_TAG_WIDTH) begin : g_mem_rsp_tag_s_pad
        assign mem_rsp_tag_s = {mem_rsp_tag, (TAG_WIDTH-MEM_TAG_WIDTH)'(1'b0)};
    end else begin : g_mem_rsp_tag_s_cut
        assign mem_rsp_tag_s = mem_rsp_tag[MEM_TAG_WIDTH-1 -: TAG_WIDTH];
        `UNUSED_VAR (mem_rsp_tag)
    end

    wire [TAG_WIDTH-1:0] flush_tag;
    if (UUID_WIDTH != 0) begin : g_flush_tag_uuid
        if (TAG_WIDTH > UUID_WIDTH) begin : g_pad
            assign flush_tag = {flush_uuid, (TAG_WIDTH-UUID_WIDTH)'(1'b0)};
        end else begin : g_cut
            assign flush_tag = flush_uuid[UUID_WIDTH-1 -: TAG_WIDTH];
        end
    end else begin : g_flush_tag_0
        `UNUSED_VAR (flush_uuid)
        assign flush_tag = '0;
    end

    // Word payload mux (store / AMO-writeback data). Fill data does not ride
    // the pipeline: the staged fill buffer feeds the data array directly.
    wire [`CS_WORD_WIDTH-1:0] wdata_sel;
    if (WRITE_ENABLE) begin : g_wdata_sel
        assign wdata_sel = replay_mux ? replay_data
                         : (amo_wb_pending ? amo_wb_data : core_req_data);
    end else begin : g_wdata_sel_ro
        assign wdata_sel = '0;
        `UNUSED_VAR ({core_req_data, replay_data, amo_wb_data})
    end

    // Input mux -> arbitrated request (whole-struct populate). AMO priority
    // matches the mux (replay > wb > core_req): a replay can fire during a
    // pending wb (chained AMO replays from MSHR after a fill) and must not be
    // cleared by amo_wb_pending; the synthetic writeback carries amo.valid=0 so
    // it never re-commits at S1.
    always @(*) begin
        sel_req = '0;
        sel_req.req.valid    = init_fire || replay_fire || mem_rsp_fire || flush_fire || core_req_fire;
        sel_req.req.is_init  = init_valid;
        sel_req.req.is_fill  = fill_enable;
        sel_req.req.is_flush = flush_enable;
        sel_req.req.is_creq  = creq_enable || replay_enable;
        sel_req.req.is_replay = replay_enable;
        sel_req.req.is_passthru_fill = is_passthru_fill_sel;
        sel_req.req.rw       = replay_mux ? replay_rw : (amo_wb_pending ? 1'b1 : core_req_rw);
        sel_req.req.attr     = amo_wb_pending ? amo_wb_attr : (core_req_valid ? core_req_attr : '0);
        sel_req.req.way_idx  = flush_way;
        sel_req.req.addr     = (init_valid | flush_valid) ? `CS_LINE_ADDR_WIDTH'(flush_sel)
                             : (replay_mux ? replay_addr : (fill_mux ? mem_rsp_addr
                             : (amo_wb_pending ? amo_wb_addr : core_req_addr)));
        sel_req.req.byteen   = replay_mux ? replay_byteen : (amo_wb_pending ? amo_wb_byteen : core_req_byteen);
        // a fill carries the installed sector in its word_idx high bits so the
        // tag/data stages mark/write the right sector (0 when 1 sector/line).
        sel_req.req.word_idx = replay_mux ? replay_wsel
                             : (fill_mux ? fill_word_idx
                             : (amo_wb_pending ? amo_wb_word_idx : core_req_wsel));
        sel_req.req.req_idx  = replay_mux ? replay_idx : (amo_wb_pending ? amo_wb_idx : core_req_idx);
        sel_req.req.tag      = (init_valid | flush_valid) ? (flush_valid ? flush_tag : '0)
                             : (replay_mux ? replay_tag : (fill_mux ? mem_rsp_tag_s
                             : (amo_wb_pending ? amo_wb_tag : core_req_tag)));
        sel_req.req.mshr_id  = replay_id;
        sel_req.req.amo      = replay_mux ? replay_amo : (amo_wb_pending ? amo_req_t'('0)
                             : (core_req_valid ? core_req_amo : amo_req_t'('0)));
        sel_req.wdata        = wdata_sel;
        // tag_matches is computed at S0; left 0 here (overridden at the data bubble).
    end

    // UUID extraction (debug + MSHR ordering): per stage, from the carried tag.
    wire [`UP(UUID_WIDTH)-1:0] req_uuid_sel, req_uuid_st0, req_uuid_st1, req_uuid_stc;
    if (UUID_WIDTH != 0) begin : g_req_uuid
        assign req_uuid_sel = sel_req.req.tag[TAG_WIDTH-1 -: UUID_WIDTH];
        assign req_uuid_st0 = st0.req.tag[TAG_WIDTH-1 -: UUID_WIDTH];
        assign req_uuid_st1 = st1.req.tag[TAG_WIDTH-1 -: UUID_WIDTH];
        assign req_uuid_stc = stC.req.tag[TAG_WIDTH-1 -: UUID_WIDTH];
    end else begin : g_req_uuid_0
        assign {req_uuid_sel, req_uuid_st0, req_uuid_st1, req_uuid_stc} = '0;
    end
    `UNUSED_VAR ({req_uuid_st0, req_uuid_st1})

    // S0 register
    VX_pipe_register #(
        .DATAW  ($bits(data_t)),
        .RESETW (1)
    ) reg_s0 (
        .clk      (clk),
        .reset    (reset),
        .enable   (~pipe_stall),
        .data_in  (sel_req),
        .data_out (st0)
    );

    // ========================================================================
    // S0 lookup: replacement + tags + way-encode + MSHR allocate
    // ========================================================================
    wire [`CS_WAY_SEL_WIDTH-1:0] victim_way;
    wire [NUM_WAYS-1:0] tag_matches_st0;
    wire [NUM_WAYS-1:0] line_present_st0;
    wire [`CS_WAY_SEL_WIDTH-1:0] hit_idx_st0;
    wire evict_dirty_st0;
    wire [`CS_SECTORS_PER_LINE-1:0] evict_dirty_mask_st0;
    wire [`CS_TAG_SEL_BITS-1:0] evict_tag_st0;

    // A fill into a line that is already resident (a sector refill) must target
    // the resident way, not a fresh victim, so the new sector lands in the same
    // line copy. With 1 sector/line a fill's line is never already resident, so
    // this is gated off and the victim way is always used (legacy behavior).
    wire line_present_any_st0 = (`CS_SECTORS_PER_LINE > 1) && (| line_present_st0);
    wire [`CS_WAY_SEL_WIDTH-1:0] present_way_st0;
    VX_onehot_encoder #(
        .N (NUM_WAYS)
    ) present_way_enc (
        .data_in  (line_present_st0),
        .data_out (present_way_st0),
        `UNUSED_PIN (valid_out)
    );
    wire [`CS_WAY_SEL_WIDTH-1:0] fill_way_st0 = line_present_any_st0 ? present_way_st0 : victim_way;
    wire [`CS_WAY_SEL_WIDTH-1:0] evict_way_st0 = st0.req.is_fill ? fill_way_st0 : st0.req.way_idx;

    VX_cache_repl #(
        .CACHE_SIZE  (CACHE_SIZE),
        .LINE_SIZE   (LINE_SIZE),
        .NUM_BANKS   (NUM_BANKS),
        .NUM_WAYS    (NUM_WAYS),
        .REPL_POLICY (REPL_POLICY)
    ) cache_repl (
        .clk          (clk),
        .reset        (reset),
        .stall        (pipe_stall),
        .init         (do_init_st0),
        .lookup_valid (do_lookup_st1 && ~pipe_stall),
        .lookup_hit   (st1.lk.is_hit),
        .lookup_line  (st1.req.addr[`CS_LINE_SEL_BITS-1:0]),
        .lookup_way   (st1.req.way_idx),
        .repl_valid   (do_fill_st0 && ~st0.req.is_passthru_fill && ~pipe_stall),
        .repl_line    (line_idx_st0),
        .repl_line_n  (sel_req.req.addr[`CS_LINE_SEL_BITS-1:0]),
        .repl_way     (victim_way)
    );

    VX_cache_tags #(
        .CACHE_SIZE (CACHE_SIZE),
        .LINE_SIZE  (LINE_SIZE),
        .NUM_BANKS  (NUM_BANKS),
        .NUM_WAYS   (NUM_WAYS),
        .WORD_SIZE  (WORD_SIZE),
        .SECTOR_SIZE(SECTOR_SIZE),
        .WRITEBACK  (WRITEBACK),
        .AMO_ENABLE ((AMO_ENABLE != 0) && (IS_LLC == 0))
    ) cache_tags (
        .clk         (clk),
        .reset       (reset),
        .stall       (pipe_stall),
        .init        (do_init_st0),
        .flush       (do_flush_st0 && ~pipe_stall),
        .fill        (do_fill_st0 && ~st0.req.is_passthru_fill && ~pipe_stall),
        .read        (do_read_st0 && ~pipe_stall),
        .write       (do_write_st0 && ~pipe_stall),
        // non-LLC AMO forwards downstream and invalidates its own copy so the
        // issuer's later plain load refetches the new value.
        .invalidate  (is_amo_fwd_st0 && lk_st0.is_hit && ~pipe_stall),
        .line_idx    (line_idx_st0),
        .line_idx_n  (sel_req.req.addr[`CS_LINE_SEL_BITS-1:0]),
        .line_tag    (line_tag_st0),
        .sector_idx  (sector_idx_st0),
        .evict_way   (evict_way_st0),
        .tag_matches (tag_matches_st0),
        .line_present (line_present_st0),
        .evict_dirty (evict_dirty_st0),
        .evict_dirty_mask (evict_dirty_mask_st0),
        .evict_tag   (evict_tag_st0)
    );

    VX_onehot_encoder #(
        .N (NUM_WAYS)
    ) way_idx_enc (
        .data_in  (tag_matches_st0),
        .data_out (hit_idx_st0),
        `UNUSED_PIN (valid_out)
    );

    // S0 lookup delta (single combinational driver). The AMO requester is forced
    // non-pending so it never coalesces onto a prior same-line entry.
    always @(*) begin
        lk_st0 = '0;
        lk_st0.is_hit       = (| tag_matches_st0);
        lk_st0.is_dirty     = evict_dirty_st0;
        lk_st0.is_refill    = st0.req.is_fill && line_present_any_st0;
        lk_st0.evict_dirty_mask = evict_dirty_mask_st0;
        lk_st0.evict_tag    = evict_tag_st0;
        lk_st0.mshr_previd  = mshr_previd;
        lk_st0.mshr_pending = mshr_pending_raw && ~is_amo_fwd_st0;
    end

    // ========================================================================
    // Pipeline registration
    //
    // Tags / replacement / MSHR (allocate AND finalize) stay at S0/S1: the MSHR
    // coalescing chain requires allocate(S0)->finalize(S1) exactly one cycle
    // apart (deferring it orphans coalesced same-line entries -> deadlock). Only
    // the data array (stD) and the commit consumers (stC) defer by PIPE_EX, so
    // the array is driven by *registered* tag-compare results — breaking the
    // tag->data critical path. Read and write both move to the same deferred
    // stage, so pipeline order is preserved (no store->load hazard logic).
    // ========================================================================

    // data path: carry the request + fill line + tag compare, resolving the way
    // for the data array (victim way for fill/flush, hit way otherwise).
    always @(*) begin
        dat_in = st0;
        dat_in.req.way_idx = evict_way_st0;
        dat_in.tag_matches = tag_matches_st0;
    end

    // commit path: the request (with the resolved hit/victim way and MSHR id)
    // plus the lookup delta. The word payload is dropped here.
    always @(*) begin
        cmt_in.req = st0.req;
        cmt_in.req.way_idx = st0.req.is_creq ? hit_idx_st0 : evict_way_st0;
        cmt_in.req.mshr_id = st0.req.is_replay ? st0.req.mshr_id : mshr_alloc_id;
        cmt_in.lk = lk_st0;
    end

    VX_pipe_register #(
        .DATAW  ($bits(data_t)),
        .RESETW (1),
        .DEPTH  (PIPE_EX)
    ) reg_dat (
        .clk      (clk),
        .reset    (reset),
        .enable   (~pipe_stall),
        .data_in  (dat_in),
        .data_out (stD)
    );

    VX_pipe_register #(
        .DATAW  ($bits(commit_t)),
        .RESETW (1)
    ) reg_s1 (
        .clk      (clk),
        .reset    (reset),
        .enable   (~pipe_stall),
        .data_in  (cmt_in),
        .data_out (st1)
    );

    VX_pipe_register #(
        .DATAW  ($bits(commit_t)),
        .RESETW (1),
        .DEPTH  (PIPE_EX)
    ) reg_cmt (
        .clk      (clk),
        .reset    (reset),
        .enable   (~pipe_stall),
        .data_in  (st1),
        .data_out (stC)
    );

    // a passthru-AMO replay carries its result word instead of an installed
    // line, so it counts as a hit at the commit stage.
    wire eff_hit_st1 = st1.lk.is_hit || is_amo_replay_st1;
    wire eff_hit_stc = stC.lk.is_hit || is_amo_replay_st1;
    `RUNTIME_ASSERT (~(st1.req.valid && st1.req.is_replay && ~eff_hit_st1), ("missed mshr replay"))

    // ========================================================================
    // Data array (driven at stD; outputs land at stC)
    // ========================================================================
    wire[`CS_WORDS_PER_LINE-1:0][`CS_WORD_WIDTH-1:0] read_data_stc;
    wire [LINE_SIZE-1:0] evict_byteen_stc;
    wire [`CS_WORD_WIDTH-1:0] read_word_stc = read_data_stc[stC.req.word_idx];

    // Sector being accessed at the data-array stage = top bits of word_idx.
    wire [`UP(`CS_SECTOR_SEL_BITS)-1:0] sector_idx_std;
    if (`CS_SECTOR_SEL_BITS != 0) begin : g_sector_idx_std
        assign sector_idx_std = stD.req.word_idx[`CS_WORD_SEL_BITS-1 -: `CS_SECTOR_SEL_BITS];
    end else begin : g_sector_idx_std0
        assign sector_idx_std = '0;
    end

    // The staged fill sector, replicated across the line so each sector's
    // slices see their words; the data array writes only the installed sector
    // (per-slice gate). One copy == the full line when 1 sector/line.
    wire [`CS_LINE_WIDTH-1:0] fbuf_line = {`CS_SECTORS_PER_LINE{fbuf_data_r}};

    VX_cache_data #(
        .CACHE_SIZE   (CACHE_SIZE),
        .LINE_SIZE    (LINE_SIZE),
        .NUM_BANKS    (NUM_BANKS),
        .NUM_WAYS     (NUM_WAYS),
        .WORD_SIZE    (WORD_SIZE),
        .SECTOR_SIZE  (SECTOR_SIZE),
        .WRITE_ENABLE (WRITE_ENABLE),
        .WRITEBACK    (WRITEBACK),
        .DIRTY_BYTES  (DIRTY_BYTES)
    ) cache_data (
        .clk          (clk),
        .reset        (reset),
        .init         (do_init_std),
        .fill         (do_fill_std && ~stD.req.is_passthru_fill && ~pipe_stall),
        .flush        (do_flush_std && ~pipe_stall),
        .read         (do_read_std && ~pipe_stall),
        .write        (do_write_std && ~pipe_stall),
        .evict_way    (stD.req.way_idx),
        .tag_matches  (stD.tag_matches),
        .line_idx     (stD.req.addr[`CS_LINE_SEL_BITS-1:0]),
        .fill_data    (fbuf_line),
        .write_word   (stD.wdata),
        .word_idx     (stD.req.word_idx),
        .sector_idx   (sector_idx_std),
        .way_idx_r    (stC.req.way_idx),
        .write_byteen (stD.req.byteen),
        .read_data    (read_data_stc),
        .evict_byteen (evict_byteen_stc)
    );

    // stD write word delayed to stC for its consumers there (the AMO RMW
    // operand and the write-through memory payload); elided when no stC
    // consumer exists (write-through banks, or writeback banks with LLC AMO).
    wire [`CS_WORD_WIDTH-1:0] word_stc;
    if ((WRITE_ENABLE != 0) && (!WRITEBACK || (AMO_ENABLE != 0 && IS_LLC != 0))) begin : g_word_stc
        VX_pipe_register #(
            .DATAW (`CS_WORD_WIDTH)
        ) reg_word_stc (
            .clk      (clk),
            .reset    (1'b0),
            .enable   (~pipe_stall),
            .data_in  (stD.wdata),
            .data_out (word_stc)
        );
    end else begin : g_no_word_stc
        assign word_stc = '0;
        `UNUSED_VAR (word_stc)
    end

    // ========================================================================
    // MSHR (allocate at S0, finalize at S1)
    // ========================================================================
    wire mshr_allocate_st0 = st0.req.valid && st0.req.is_creq && ~st0.req.is_replay;
    wire mshr_finalize_st1 = st1.req.valid && st1.req.is_creq && ~st1.req.is_replay;

    // release the entry on a hit. A forwarded AMO keeps its entry until its
    // downstream response returns (fill/dequeue frees it), so never release it.
    wire mshr_release_st1;
    if (WRITEBACK) begin : g_mshr_release
        assign mshr_release_st1 = st1.lk.is_hit && ~is_amo_fwd_st1;
    end else begin : g_mshr_release_ro
        // keep missed writes in MSHR if a pending entry exists for the line, so a
        // pending fill arriving without the write content replays them locally.
        assign mshr_release_st1 = (st1.lk.is_hit || (st1.req.rw && ~st1.lk.mshr_pending)) && ~is_amo_fwd_st1;
    end
    wire mshr_release_fire = mshr_finalize_st1 && mshr_release_st1 && ~pipe_stall;

    wire [1:0] mshr_dequeue;
    `POP_COUNT(mshr_dequeue, {(replay_fire || fwd_fire), mshr_release_fire});

    VX_pending_size #(
        .SIZE  (MSHR_SIZE),
        .DECRW (2)
    ) mshr_pending_size (
        .clk   (clk),
        .reset (reset),
        .incr  (core_req_fire),
        .decr  (mshr_dequeue),
        .empty (mshr_empty),
        `UNUSED_PIN (alm_empty),
        .full  (mshr_alm_full),
        `UNUSED_PIN (alm_full),
        `UNUSED_PIN (size)
    );

    VX_cache_mshr #(
        .INSTANCE_ID (`SFORMATF(("%s-mshr", INSTANCE_ID))),
        .BANK_ID     (BANK_ID),
        .LINE_SIZE   (LINE_SIZE),
        .SECTOR_SIZE (SECTOR_SIZE),
        .NUM_BANKS   (NUM_BANKS),
        .MSHR_SIZE   (MSHR_SIZE),
        .WRITEBACK   (WRITEBACK),
        .AMO_ENABLE  (AMO_ENABLE != 0),
        .AMO_PASSTHRU ((AMO_ENABLE != 0) && (IS_LLC == 0)),
        .DATA_WIDTH  (WORD_SEL_WIDTH + WORD_SIZE + `CS_WORD_WIDTH + TAG_WIDTH + REQ_SEL_WIDTH + AMO_REQ_BITS)
    ) cache_mshr (
        .clk                 (clk),
        .reset               (reset),
        .deq_req_uuid        (req_uuid_sel),
        .alc_req_uuid        (req_uuid_st0),
        .fin_req_uuid        (req_uuid_st1),
        .fill_valid          (mem_rsp_fire),
        .fill_id             (mem_rsp_id),
        .fill_addr           (mem_rsp_addr),
        .fill_sector         (mem_rsp_sector),
        .probe_addr          (core_req_addr),
        .probe_pending_ld    (mshr_probe_pending_ld),
        .probe_pending_amo   (mshr_probe_pending_amo),
        .dequeue_valid       (replay_valid),
        .dequeue_addr        (replay_addr),
        .dequeue_rw          (replay_rw),
        .dequeue_data        ({replay_wsel, replay_byteen, replay_data, replay_tag, replay_idx, replay_amo}),
        .dequeue_id          (replay_id),
        .dequeue_ready       (replay_ready || fwd_fire),
        .allocate_valid      (mshr_allocate_st0 && ~pipe_stall),
        .allocate_addr       (st0.req.addr),
        .allocate_sector     (sector_idx_st0),
        .allocate_rw         (st0.req.rw),
        // Only non-LLC AMOs must not coalesce; at the LLC same-line AMOs coalesce
        // and serialize their commits on the single filled line.
        .allocate_is_amo     (AMO_ENABLE ? st0.req.amo.amo_valid : 1'b0),
        .allocate_data       ({st0.req.word_idx, st0.req.byteen, write_word_st0, st0.req.tag, st0.req.req_idx, st0.req.amo}),
        .allocate_id         (mshr_alloc_id),
        .allocate_pending    (mshr_pending_raw),
        .allocate_previd     (mshr_previd),
        `UNUSED_PIN (allocate_ready),
        .finalize_valid      (mshr_finalize_st1 && ~pipe_stall),
        .finalize_is_release (mshr_release_st1),
        // Only link an entry into the pending chain if it is KEPT (a miss). A
        // released (hit) entry must never become a chain member: otherwise the
        // prev's fill would later dequeue and replay the already-released slot
        // (double free -> MSHR pending-size underflow). This case arises when a
        // request hits a line that is still draining its fill chain — common
        // with sectoring, where a hot line accumulates a long same-line chain.
        .finalize_is_pending (st1.lk.mshr_pending && ~mshr_release_st1),
        .finalize_id         (st1.req.mshr_id),
        .finalize_previd     (st1.lk.mshr_previd)
    );

    // ========================================================================
    // AMO engine
    //
    // The read word lands at the deferred commit stage stC; the engine consumes
    // it at S1 (== stC when PIPE_EX=0, the validated case).
    // ========================================================================
    if (AMO_ENABLE) begin : g_amo
        // Look-ahead line address for the reservation cache's sync-BRAM read:
        // the line entering the commit stage (stC) next cycle, so the registered
        // read lands at stC. stC = st1 delayed by PIPE_EX; one stage earlier is
        // st0 (PIPE_EX=0) or st1 delayed by PIPE_EX-1 (PIPE_EX>0).
        wire [`CS_LINE_ADDR_WIDTH-1:0] amo_res_addr_n;
        if (PIPE_EX == 0) begin : g_resn0
            assign amo_res_addr_n = st0.req.addr;
        end else begin : g_resn
            VX_pipe_register #(
                .DATAW (`CS_LINE_ADDR_WIDTH),
                .DEPTH (PIPE_EX - 1)
            ) reg_resn (
                .clk      (clk),
                .reset    (reset),
                .enable   (~pipe_stall),
                .data_in  (st1.req.addr),
                .data_out (amo_res_addr_n)
            );
        end

        VX_cache_amo #(
            .IS_LLC          (IS_LLC),
            .NUM_RES_ENTRIES (`VX_CFG_AMO_RS_SIZE),
            .LINE_ADDR_BITS  (`CS_LINE_ADDR_WIDTH),
            .WORD_WIDTH      (`CS_WORD_WIDTH),
            .WORD_SIZE       (WORD_SIZE),
            .WORD_SEL_WIDTH  (WORD_SEL_WIDTH),
            .TAG_WIDTH       (TAG_WIDTH),
            .REQ_SEL_WIDTH   (REQ_SEL_WIDTH),
            .ATTR_WIDTH      (`UP(MEM_ATTR_WIDTH)),
            .MSHR_SIZE       (MSHR_SIZE),
            .MSHR_ADDR_WIDTH (MSHR_ADDR_WIDTH),
            .WORDS_PER_LINE  (`CS_WORDS_PER_LINE),
            .WORDS_PER_SECTOR(`CS_WORDS_PER_SECTOR),
            .PIPE_EX         (PIPE_EX)
        ) amo (
            .clk                    (clk),
            .reset                  (reset),
            .pipe_stall             (pipe_stall),
            .amo_st0                (st0.req.amo),
            .valid_st0              (st0.req.valid),
            .is_creq_st0            (st0.req.is_creq),
            .is_hit_st0             (lk_st0.is_hit),
            .is_replay_st0          (st0.req.is_replay),
            // Commit ports are fed from stC (the deferred data-output stage), so
            // the AMO RMW operands and the read word align at PIPE_EX>0. At
            // PIPE_EX=0, stC == S1 and this is identical to the classic bank.
            .amo_st1                (stC.req.amo),
            .valid_st1              (stC.req.valid),
            .is_creq_st1            (stC.req.is_creq),
            .is_hit_st1             (stC.lk.is_hit),
            .is_replay_st1          (stC.req.is_replay),
            .do_write_st1           (do_write_stc),
            .read_word_st1          (read_word_stc),
            .byteen_st1             (stC.req.byteen),
            .write_word_st1         (word_stc),
            .word_idx_st0           (st0.req.word_idx),
            .word_idx_st1           (stC.req.word_idx),
            .addr_st0               (st0.req.addr),
            .addr_st1               (addr_stc),
            .res_addr_n             (amo_res_addr_n),
            .tag_st1                (stC.req.tag),
            .req_idx_st1            (stC.req.req_idx),
            .attr_st1               (stC.req.attr),
            .wb_fire                (amo_wb_fire),
            .mshr_allocate_st0      (mshr_allocate_st0),
            .mshr_alloc_id_st0      (mshr_alloc_id),
            .mshr_id_st1            (stC.req.mshr_id),
            .mem_rsp_fire           (mem_rsp_fire),
            .mem_rsp_id             (mem_rsp_id),
            .mem_rsp_data           (mem_rsp_data),
            .is_fill_sel            (fill_enable),
            .core_req_valid         (core_req_valid),
            .core_req_is_amo        (core_req_amo.amo_valid),
            .core_req_rw            (core_req_rw),
            .core_req_addr          (core_req_addr),
            .rw_st0                 (st0.req.rw),
            .mshr_probe_pending_ld  (mshr_probe_pending_ld),
            .mshr_probe_pending_amo (mshr_probe_pending_amo),
            .amo_hit_st1            (amo_hit_st1),
            .commit_busy            (amo_commit_busy),
            .chain_stall            (amo_chain_stall),
            .wb_pending             (amo_wb_pending),
            .rsp_data               (amo_rsp_data),
            .rd_fwd_mask            (amo_rd_fwd_mask),
            .rd_fwd_data            (amo_rd_fwd_data),
            .wb_addr                (amo_wb_addr),
            .wb_word_idx            (amo_wb_word_idx),
            .wb_byteen              (amo_wb_byteen),
            .wb_data                (amo_wb_data),
            .wb_tag                 (amo_wb_tag),
            .wb_idx                 (amo_wb_idx),
            .wb_attr                (amo_wb_attr),
            .is_amo_fwd_st0         (is_amo_fwd_st0),
            .is_amo_fwd_st1         (is_amo_fwd_st1),
            .is_amo_replay_st1      (is_amo_replay_st1),
            .is_passthru_fill_sel   (is_passthru_fill_sel),
            .amo_ptw_word_st1       (amo_ptw_word_st1),
            .req_input_defer        (req_input_defer)
        );
    end else begin : g_no_amo
        assign {amo_hit_st1, amo_commit_busy, amo_wb_pending, amo_chain_stall} = '0;
        assign {amo_rd_fwd_mask, amo_rd_fwd_data} = '0;
        assign {amo_rsp_data, amo_wb_addr, amo_wb_word_idx, amo_wb_byteen} = '0;
        assign {amo_wb_data, amo_wb_tag, amo_wb_idx, amo_wb_attr} = '0;
        assign {is_amo_fwd_st0, is_amo_fwd_st1, is_amo_replay_st1} = '0;
        assign {is_passthru_fill_sel, amo_ptw_word_st1, req_input_defer} = '0;
        // S1-only signals consumed solely by the AMO engine.
        `UNUSED_VAR ({amo_wb_fire, mshr_probe_pending_ld, mshr_probe_pending_amo, st1.req.amo, st1.req.attr, st1.req.req_idx, st1.req.word_idx, st1.req.byteen})
    end

    // ========================================================================
    // Core response (stC)
    //
    // Fires for reads (and LLC AMO commits) on hit, never for the synthetic
    // writeback (rw=1). A non-LLC AMO's first pass forwards downstream and must
    // not respond locally (its result returns via the passthru replay). Suppress
    // while a same-line AMO is chain-stalled so a held read enqueues once.
    // ========================================================================
    wire crsp_queue_valid = do_read_stc && eff_hit_stc && ~is_amo_fwd_st1 && ~amo_chain_stall;
    wire crsp_queue_ready;
    // Plain-read responses byte-merge the AMO engine's in-flight writeback
    // bytes over the array word (stale until the writeback lands).
    wire [`CS_WORD_WIDTH-1:0] read_word_fwd_stc;
    if (AMO_ENABLE && IS_LLC) begin : g_read_word_fwd
        for (genvar b = 0; b < WORD_SIZE; ++b) begin : g_b
            assign read_word_fwd_stc[b*8 +: 8] = amo_rd_fwd_mask[b] ? amo_rd_fwd_data[b*8 +: 8]
                                                                    : read_word_stc[b*8 +: 8];
        end
    end else begin : g_read_word_raw
        assign read_word_fwd_stc = read_word_stc;
        `UNUSED_VAR ({amo_rd_fwd_mask, amo_rd_fwd_data})
    end

    wire [`CS_WORD_WIDTH-1:0] crsp_queue_data = is_amo_replay_st1 ? amo_ptw_word_st1
                                              : (amo_hit_st1 ? amo_rsp_data : read_word_fwd_stc);

    // ========================================================================
    // Fill forwarding
    //
    // The fill sector is staged at fill accept; the MSHR dequeue stream (which
    // walks the pending chain in order, including late joiners) then completes
    // its leading run of plain reads straight into the response queue — no
    // pipeline traversal, and the input arbiter stays open to new requests.
    // The first write/AMO head closes the window: it and every later chain
    // entry replay through the pipeline as usual, preserving program order
    // (an older store must merge before a younger same-line read responds).
    // ========================================================================
    reg fwd_active_r;

    wire fwd_stage = mem_rsp_fire && ~is_passthru_fill_sel;
    wire fwd_close = replay_valid && fwd_active_r
                  && (replay_rw || replay_amo.amo_valid);

    // every chain entry matches the staged {line, sector} by construction
    // (miss coalescing keys on both), so one staged sector serves them all.
    // The head is only claimed when the response slot is free this cycle
    // (the commit-stage response has priority); otherwise it stays visible
    // to the arbiter and drains through the replay path — a busy hit
    // stream must not starve the chain. The ~pipe_stall gate keeps the
    // dequeue aligned with S1 finalize so a stalled late joiner cannot be
    // orphaned mid-link.
    assign fwd_head    = fwd_active_r && replay_valid
                      && ~replay_rw && ~replay_amo.amo_valid
                      && ~crsp_queue_valid && ~pipe_stall;
    assign fwd_pending = fwd_active_r && replay_valid;
    assign fwd_fire    = fwd_head && crsp_queue_ready;

    always @(posedge clk) begin
        if (reset) begin
            fwd_active_r <= 1'b0;
        end else begin
            if (fwd_stage) begin
                fwd_active_r <= 1'b1;
            end else if (fwd_close) begin
                fwd_active_r <= 1'b0;
            end
        end
        if (fwd_stage) begin
            fbuf_data_r <= mem_rsp_data;
            fbuf_addr_r <= mem_rsp_addr;
        end
    end

    if (`CS_WORDS_PER_SECTOR > 1) begin : g_fwd_word
        wire [`CLOG2(`CS_WORDS_PER_SECTOR)-1:0] fwd_wsel = replay_wsel[`CLOG2(`CS_WORDS_PER_SECTOR)-1:0];
        assign fwd_word = fbuf_data_r[fwd_wsel * `CS_WORD_WIDTH +: `CS_WORD_WIDTH];
    end else begin : g_fwd_word_1
        assign fwd_word = fbuf_data_r[`CS_WORD_WIDTH-1:0];
    end

    `RUNTIME_ASSERT (~fwd_fire || (replay_addr == fbuf_addr_r), ("%t: %s fill-forward address mismatch: addr=0x%0h, staged=0x%0h", $time, INSTANCE_ID, `CS_BANK_TO_FULL_ADDR(replay_addr, BANK_ID), `CS_BANK_TO_FULL_ADDR(fbuf_addr_r, BANK_ID)))
    `RUNTIME_ASSERT (~(flush_fire && fwd_pending), ("%t: %s flush during fill-forward drain", $time, INSTANCE_ID))

    VX_elastic_buffer #(
        .DATAW   (TAG_WIDTH + `CS_WORD_WIDTH + REQ_SEL_WIDTH),
        .SIZE    (CRSQ_QUEUE_SIZE),
        .OUT_REG (`TO_OUT_BUF_REG(CORE_OUT_BUF))
    ) core_rsp_queue (
        .clk       (clk),
        .reset     (reset),
        .valid_in  (crsp_queue_valid || fwd_head),
        .ready_in  (crsp_queue_ready),
        .data_in   (crsp_queue_valid ? {stC.req.tag, crsp_queue_data, stC.req.req_idx}
                                     : {replay_tag, fwd_word, replay_idx}),
        .data_out  ({core_rsp_tag, core_rsp_data, core_rsp_idx}),
        .valid_out (core_rsp_valid),
        .ready_out (core_rsp_ready)
    );
    assign crsp_queue_stall = crsp_queue_valid && ~crsp_queue_ready;

    // ========================================================================
    // Memory request (stC) — sector-granular
    //
    // A read/write miss issues a fill request for the missed sector. A dirty
    // eviction writes back each dirty sector as its own sector-sized beat: the
    // sequencer below drains one dirty sector per cycle, holding the commit at
    // stC until the last beat is accepted. With 1 sector/line this is a single
    // beat (wb_hold never asserts) — byte-identical to the legacy path.
    // ========================================================================
    localparam SEC = `CS_SECTORS_PER_LINE;
    wire mreq_queue_push, mreq_queue_pop;
    wire [`CS_SECTOR_WIDTH-1:0] mreq_queue_data;
    wire [SECTOR_SIZE-1:0] mreq_queue_byteen;
    wire [`CS_LINE_SECTOR_ADDR_WIDTH-1:0] mreq_queue_addr;
    wire [MEM_TAG_WIDTH-1:0] mreq_queue_tag;
    wire mreq_queue_rw;

    wire is_fill_or_flush_stc = stC.req.is_fill || (stC.req.is_flush && WRITEBACK);
    wire do_fill_or_flush_stc = stC.req.valid && is_fill_or_flush_stc;
    // a sector refill keeps the resident line (no eviction), so never writes back.
    wire do_writeback_stc = do_fill_or_flush_stc && stC.lk.is_dirty && ~stC.lk.is_refill;
    wire [`CS_LINE_ADDR_WIDTH-1:0] evict_addr_stc = {stC.lk.evict_tag, stC.req.addr[`CS_LINE_SEL_BITS-1:0]};

    // sector of the request at commit (the missed sector of a fill request).
    wire [`UP(`CS_SECTOR_SEL_BITS)-1:0] sector_idx_stc;
    if (`CS_SECTOR_SEL_BITS != 0) begin : g_sector_idx_stc
        assign sector_idx_stc = stC.req.word_idx[`CS_WORD_SEL_BITS-1 -: `CS_SECTOR_SEL_BITS];
    end else begin : g_sector_idx_stc0
        assign sector_idx_stc = '0;
    end

    // Per-sector writeback sequencer. wb_mask_cur is the set of dirty sectors
    // still to write back; one is drained per cycle (lowest first). wb_done_r
    // latches once the current commit's writeback fully drains so an unrelated
    // hold of stC (crsp/amo) cannot re-inject it; it clears when the commit
    // finally advances.
    reg [SEC-1:0] wb_mask_r;
    reg wb_done_r;
    wire wb_active = (| wb_mask_r);
    wire [SEC-1:0] wb_mask_cur = wb_active ? wb_mask_r
                               : ((do_writeback_stc && ~wb_done_r) ? stC.lk.evict_dirty_mask : {SEC{1'b0}});
    wire is_wb_beat = (| wb_mask_cur);
    wire [`UP(`CS_SECTOR_SEL_BITS)-1:0] wb_sector;
    VX_priority_encoder #(
        .N (SEC)
    ) wb_sector_sel (
        .data_in   (wb_mask_cur),
        .index_out (wb_sector),
        `UNUSED_PIN (valid_out),
        `UNUSED_PIN (onehot_out)
    );
    wire [SEC-1:0] wb_sec_oh = SEC'(1) << wb_sector;
    wire wb_beat_accept = is_wb_beat && ~mreq_queue_alm_full;
    wire [SEC-1:0] wb_mask_nxt = wb_beat_accept ? (wb_mask_cur & ~wb_sec_oh) : wb_mask_cur;
    assign wb_hold = (| wb_mask_nxt); // beats remain after this cycle -> hold stC
    always @(posedge clk) begin
        if (reset) begin
            wb_mask_r <= '0;
            wb_done_r <= 1'b0;
        end else begin
            wb_mask_r <= wb_mask_nxt;
            // latch done on the last accepted beat while stC is still held;
            // clear once the commit advances (so the next commit starts fresh).
            if (is_wb_beat && ~wb_hold) begin
                wb_done_r <= 1'b1;
            end
            if (~pipe_stall) begin
                wb_done_r <= 1'b0;
            end
        end
    end

    // sector-granular addresses: {line, sector} with sector in the low bits
    // (cache.sv re-inserts the bank id above the sector).
    wire [`CS_LINE_SECTOR_ADDR_WIDTH-1:0] wb_mreq_addr, rd_mreq_addr;
    if (`CS_SECTOR_SEL_BITS != 0) begin : g_sec_addr
        assign wb_mreq_addr = {evict_addr_stc, wb_sector};
        assign rd_mreq_addr = {addr_stc, sector_idx_stc};
    end else begin : g_no_sec_addr
        `UNUSED_VAR (sector_idx_stc)
        assign wb_mreq_addr = evict_addr_stc;
        assign rd_mreq_addr = addr_stc;
    end

    // selected writeback sector: data slice + per-byte dirty mask of that sector.
    // flatten the packed word-array before bit-slicing the sector out.
    wire [`CS_LINE_WIDTH-1:0]   read_data_flat_stc = read_data_stc;
    wire [`CS_SECTOR_WIDTH-1:0] wb_data_sec = read_data_flat_stc[wb_sector*`CS_SECTOR_WIDTH +: `CS_SECTOR_WIDTH];
    wire [SECTOR_SIZE-1:0]      wb_byteen_sec = evict_byteen_stc[wb_sector*SECTOR_SIZE +: SECTOR_SIZE];

    if (WRITE_ENABLE) begin : g_mreq_queue
        if (WRITEBACK) begin : g_wb
            if (DIRTY_BYTES) begin : g_dirty_bytes
                wire has_dirty_bytes = (| evict_byteen_stc);
                `RUNTIME_ASSERT (~do_fill_or_flush_stc || (stC.lk.is_dirty == has_dirty_bytes), ("missmatch dirty bytes: dirty_line=%b, dirty_bytes=%b, addr=0x%0h", stC.lk.is_dirty, has_dirty_bytes, `CS_BANK_TO_FULL_ADDR(addr_stc, BANK_ID)))
            end
            // fill request on a read/write miss (one sector); multi-beat writeback
            // on a dirty eviction. The two are mutually exclusive (a writeback is a
            // fill/flush commit; a fill request is a creq commit).
            wire fill_req_push = (do_read_stc || do_write_stc) && ~stC.lk.is_hit && ~stC.lk.mshr_pending && ~pipe_stall;
            assign mreq_queue_push   = fill_req_push || wb_beat_accept;
            assign mreq_queue_addr   = is_wb_beat ? wb_mreq_addr : rd_mreq_addr;
            assign mreq_queue_rw     = is_wb_beat;
            assign mreq_queue_data   = wb_data_sec; // read fill request: data unused
            assign mreq_queue_byteen = is_wb_beat ? wb_byteen_sec : {SECTOR_SIZE{1'b1}};
            `UNUSED_VAR ({stC.req.byteen, stC.req.is_replay})
        end else begin : g_wt
            // word byte-enable demuxed over the line, then sliced to the word's sector.
            wire [LINE_SIZE-1:0] full_byteen;
            VX_demux #(
                .DATAW (WORD_SIZE),
                .N     (`CS_WORDS_PER_LINE)
            ) byteen_demux (
                .sel_in   (stC.req.word_idx),
                .data_in  (stC.req.byteen),
                .data_out (full_byteen)
            );
            wire [SECTOR_SIZE-1:0] sec_byteen = full_byteen[sector_idx_stc*SECTOR_SIZE +: SECTOR_SIZE];
            // fill on a read miss; memory write on a write (don't resend replays);
            // forward a non-LLC AMO downstream (its passthru replay must not refill).
            assign mreq_queue_push = ((do_read_stc && ~eff_hit_stc && ~stC.lk.mshr_pending)
                                  || (do_write_stc && ~stC.req.is_replay)
                                  || is_amo_fwd_st1) && ~pipe_stall;
            assign mreq_queue_addr = rd_mreq_addr;
            assign mreq_queue_rw = stC.req.rw;
            assign mreq_queue_data = {`CS_WORDS_PER_SECTOR{word_stc}};
            assign mreq_queue_byteen = (stC.req.rw || is_amo_fwd_st1) ? sec_byteen : {SECTOR_SIZE{1'b1}};
            `UNUSED_VAR ({is_wb_beat, wb_beat_accept, wb_mreq_addr, wb_data_sec, wb_byteen_sec, wb_sector, evict_addr_stc, stC.lk.evict_tag, stC.lk.is_dirty, stC.lk.evict_dirty_mask})
        end
    end else begin : g_mreq_queue_ro
        assign mreq_queue_push = (do_read_stc && ~stC.lk.is_hit && ~stC.lk.mshr_pending) && ~pipe_stall;
        assign mreq_queue_addr = rd_mreq_addr;
        assign mreq_queue_rw = 0;
        assign mreq_queue_data = '0;
        assign mreq_queue_byteen = {SECTOR_SIZE{1'b1}};
        `UNUSED_VAR ({is_wb_beat, wb_beat_accept, wb_mreq_addr, wb_data_sec, wb_byteen_sec, wb_sector, do_writeback_stc, evict_addr_stc, evict_byteen_stc, stC.lk.evict_tag, stC.lk.is_dirty, stC.lk.evict_dirty_mask, stC.req.byteen, stC.req.word_idx, stC.req.is_replay, do_write_stc})
    end

    if (UUID_WIDTH != 0) begin : g_mreq_queue_tag_uuid
        assign mreq_queue_tag = {req_uuid_stc, stC.req.mshr_id};
    end else begin : g_mreq_queue_tag
        assign mreq_queue_tag = stC.req.mshr_id;
    end

    assign mreq_queue_pop = mem_req_valid && mem_req_ready;

    VX_fifo_queue #(
        .DATAW    (1 + `CS_LINE_SECTOR_ADDR_WIDTH + SECTOR_SIZE + `CS_SECTOR_WIDTH + MEM_TAG_WIDTH + `UP(MEM_ATTR_WIDTH)),
        .DEPTH    (MREQ_QUEUE_SIZE),
        .ALM_FULL (MREQ_QUEUE_SIZE - PIPELINE_STAGES),
        .OUT_REG  (`TO_OUT_BUF_REG(MEM_OUT_BUF))
    ) mem_req_queue (
        .clk      (clk),
        .reset    (reset),
        .push     (mreq_queue_push),
        .pop      (mreq_queue_pop),
        .data_in  ({mreq_queue_rw, mreq_queue_addr, mreq_queue_byteen, mreq_queue_data, mreq_queue_tag, stC.req.attr}),
        .data_out ({mem_req_rw, mem_req_addr, mem_req_byteen, mem_req_data, mem_req_tag, mem_req_attr}),
        .empty    (mreq_queue_empty),
        .alm_full (mreq_queue_alm_full),
        `UNUSED_PIN (full),
        `UNUSED_PIN (alm_empty),
        `UNUSED_PIN (size)
    );
    assign mem_req_valid = ~mreq_queue_empty;

    `UNUSED_VAR (do_lookup_st0)

///////////////////////////////////////////////////////////////////////////////

`ifdef PERF_ENABLE
    assign perf_read_miss  = do_read_st1 && ~st1.lk.is_hit;
    assign perf_write_miss = do_write_st1 && ~st1.lk.is_hit;
    assign perf_evictions  = do_writeback_stc;
    assign perf_mshr_stall = mshr_alm_full;
`endif

`ifdef DBG_TRACE_CACHE
    wire crsp_queue_fire = crsp_queue_valid && crsp_queue_ready;
    wire input_stall = (replay_valid || mem_rsp_valid || core_req_valid || flush_valid)
                   && ~(replay_fire || mem_rsp_fire || core_req_fire || flush_fire);

    wire [`VX_CFG_XLEN-1:0] mem_rsp_full_addr = `CS_BANK_TO_FULL_ADDR(mem_rsp_addr, BANK_ID);
    wire [`VX_CFG_XLEN-1:0] replay_full_addr = `CS_BANK_TO_FULL_ADDR(replay_addr, BANK_ID);
    wire [`VX_CFG_XLEN-1:0] core_req_full_addr = `CS_BANK_TO_FULL_ADDR(core_req_addr, BANK_ID);
    wire [`VX_CFG_XLEN-1:0] full_addr_st0 = `CS_BANK_TO_FULL_ADDR(st0.req.addr, BANK_ID);
    wire [`VX_CFG_XLEN-1:0] full_addr_st1 = `CS_BANK_TO_FULL_ADDR(st1.req.addr, BANK_ID);
    wire [`VX_CFG_XLEN-1:0] mreq_queue_full_addr = `CS_BANK_TO_FULL_ADDR(mreq_queue_addr, BANK_ID);

    always @(posedge clk) begin
        if (input_stall || pipe_stall) begin
            `TRACE(4, ("%t: *** %s stall: crsq=%b, mreq=%b, mshr=%b\n", $time, INSTANCE_ID,
                crsp_queue_stall, mreq_queue_alm_full, mshr_alm_full))
        end
        if (mem_rsp_fire) begin
            `TRACE(2, ("%t: %s fill-rsp: addr=0x%0h, mshr_id=%0d, data=0x%h (#%0d)\n", $time, INSTANCE_ID,
                mem_rsp_full_addr, mem_rsp_id, mem_rsp_data, req_uuid_sel))
        end
        if (replay_fire) begin
            `TRACE(2, ("%t: %s mshr-pop: addr=0x%0h, tag=0x%0h, req_idx=%0d (#%0d)\n", $time, INSTANCE_ID,
                replay_full_addr, replay_tag, replay_idx, req_uuid_sel))
        end
        if (fwd_fire) begin
            `TRACE(2, ("%t: %s fwd-rsp: addr=0x%0h, tag=0x%0h, req_idx=%0d, data=0x%h\n", $time, INSTANCE_ID,
                replay_full_addr, replay_tag, replay_idx, fwd_word))
        end
        if (core_req_fire) begin
            if (core_req_rw) begin
                `TRACE(2, ("%t: %s core-wr-req: addr=0x%0h, tag=0x%0h, req_idx=%0d, byteen=0x%h, data=0x%h (#%0d)\n", $time, INSTANCE_ID,
                    core_req_full_addr, core_req_tag, core_req_idx, core_req_byteen, core_req_data, req_uuid_sel))
            end else begin
                `TRACE(2, ("%t: %s core-rd-req: addr=0x%0h, tag=0x%0h, req_idx=%0d (#%0d)\n", $time, INSTANCE_ID,
                    core_req_full_addr, core_req_tag, core_req_idx, req_uuid_sel))
            end
        end
        if (do_init_st0) begin
            `TRACE(3, ("%t: %s tags-init: addr=0x%0h, line=%0d\n", $time, INSTANCE_ID, full_addr_st0, line_idx_st0))
        end
        if (do_fill_st0 && ~pipe_stall) begin
            `TRACE(3, ("%t: %s tags-fill: addr=0x%0h, way=%0d, line=%0d, dirty=%b (#%0d)\n", $time, INSTANCE_ID,
                full_addr_st0, evict_way_st0, line_idx_st0, lk_st0.is_dirty, req_uuid_st0))
        end
        if (do_flush_st0 && ~pipe_stall) begin
            `TRACE(3, ("%t: %s tags-flush: addr=0x%0h, way=%0d, line=%0d, dirty=%b (#%0d)\n", $time, INSTANCE_ID,
                full_addr_st0, evict_way_st0, line_idx_st0, lk_st0.is_dirty, req_uuid_st0))
        end
        if (do_lookup_st0 && ~pipe_stall) begin
            if (lk_st0.is_hit) begin
                `TRACE(3, ("%t: %s tags-hit: addr=0x%0h, rw=%b, way=%0d, line=%0d, tag=0x%0h (#%0d)\n", $time, INSTANCE_ID,
                    full_addr_st0, st0.req.rw, hit_idx_st0, line_idx_st0, line_tag_st0, req_uuid_st0))
            end else begin
                `TRACE(3, ("%t: %s tags-miss: addr=0x%0h, rw=%b, way=%0d, line=%0d, tag=0x%0h (#%0d)\n", $time, INSTANCE_ID,
                    full_addr_st0, st0.req.rw, hit_idx_st0, line_idx_st0, line_tag_st0, req_uuid_st0))
            end
        end
        if (do_fill_st0 && ~pipe_stall) begin
            `TRACE(3, ("%t: %s data-fill: addr=0x%0h, way=%0d, line=%0d, data=0x%h (#%0d)\n", $time, INSTANCE_ID,
                full_addr_st0, evict_way_st0, line_idx_st0, fbuf_data_r, req_uuid_st0))
        end
        if (do_flush_st0 && ~pipe_stall) begin
            `TRACE(3, ("%t: %s data-flush: addr=0x%0h, way=%0d, line=%0d (#%0d)\n", $time, INSTANCE_ID,
                full_addr_st0, evict_way_st0, line_idx_st0, req_uuid_st0))
        end
        if (do_read_st1 && st1.lk.is_hit && ~pipe_stall) begin
            `TRACE(3, ("%t: %s data-read: addr=0x%0h, way=%0d, line=%0d, wsel=%0d (#%0d)\n", $time, INSTANCE_ID,
                full_addr_st1, st1.req.way_idx, st1.req.addr[`CS_LINE_SEL_BITS-1:0], st1.req.word_idx, req_uuid_st1))
        end
        if (do_write_st1 && st1.lk.is_hit && ~pipe_stall) begin
            `TRACE(3, ("%t: %s data-write: addr=0x%0h, way=%0d, line=%0d, wsel=%0d, byteen=0x%h (#%0d)\n", $time, INSTANCE_ID,
                full_addr_st1, st1.req.way_idx, st1.req.addr[`CS_LINE_SEL_BITS-1:0], st1.req.word_idx, st1.req.byteen, req_uuid_st1))
        end
        if (crsp_queue_fire) begin
            `TRACE(2, ("%t: %s core-rd-rsp: addr=0x%0h, tag=0x%0h, req_idx=%0d, data=0x%h (#%0d)\n", $time, INSTANCE_ID,
                addr_stc, stC.req.tag, stC.req.req_idx, crsp_queue_data, req_uuid_stc))
        end
        if (mreq_queue_push) begin
            if (!WRITEBACK && do_write_stc) begin
                `TRACE(2, ("%t: %s writethrough: addr=0x%0h, byteen=0x%h, data=0x%h (#%0d)\n", $time, INSTANCE_ID,
                    mreq_queue_full_addr, mreq_queue_byteen, mreq_queue_data, req_uuid_stc))
            end else if (WRITEBACK && do_writeback_stc) begin
                `TRACE(2, ("%t: %s writeback: addr=0x%0h, byteen=0x%h, data=0x%h (#%0d)\n", $time, INSTANCE_ID,
                    mreq_queue_full_addr, mreq_queue_byteen, mreq_queue_data, req_uuid_stc))
            end else begin
                `TRACE(2, ("%t: %s fill-req: addr=0x%0h, mshr_id=%0d (#%0d)\n", $time, INSTANCE_ID,
                    mreq_queue_full_addr, stC.req.mshr_id, req_uuid_stc))
            end
        end
    end
`endif

endmodule
// Copyright © 2019-2023
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

`include "VX_cache_define.vh"

module VX_cache_bypass import VX_gpu_pkg::*; #(
    parameter NUM_REQS          = 1,
    parameter MEM_PORTS         = 1,
    parameter TAG_SEL_IDX       = 0,

    parameter CACHE_ENABLE      = 0,

    parameter WORD_SIZE         = 1,
    parameter LINE_SIZE         = 1,

    parameter CORE_ADDR_WIDTH   = 1,

    parameter CORE_TAG_WIDTH    = 1,

    parameter MEM_ADDRW    = 1,
    parameter MEM_TAG_IN_WIDTH  = 1,

    parameter CORE_OUT_BUF      = 0,
    parameter MEM_OUT_BUF       = 0
 ) (
    input wire clk,
    input wire reset,

    VX_mem_bus_if.slave     core_bus_in_if [NUM_REQS],
    VX_mem_bus_if.master    core_bus_out_if [NUM_REQS],
    VX_mem_bus_if.slave     mem_bus_in_if [MEM_PORTS],
    VX_mem_bus_if.master    mem_bus_out_if [MEM_PORTS]
);
    localparam DIRECT_PASSTHRU   = !CACHE_ENABLE && (`CS_WORD_SEL_BITS == 0) && (NUM_REQS == MEM_PORTS);
    localparam CORE_DATA_WIDTH   = WORD_SIZE * 8;
    localparam WORDS_PER_LINE    = LINE_SIZE / WORD_SIZE;
    localparam WSEL_BITS         = `CLOG2(WORDS_PER_LINE);
    localparam CORE_TAG_ID_WIDTH = CORE_TAG_WIDTH - UUID_WIDTH;
    localparam MEM_TAG_ID_WIDTH  = `CLOG2(`CDIV(NUM_REQS, MEM_PORTS)) + CORE_TAG_ID_WIDTH;
    localparam MEM_TAG_NC1_WIDTH = UUID_WIDTH + MEM_TAG_ID_WIDTH;
    localparam MEM_TAG_NC2_WIDTH = MEM_TAG_NC1_WIDTH + WSEL_BITS;
    localparam MEM_TAG_OUT_WIDTH = CACHE_ENABLE ? `MAX(MEM_TAG_IN_WIDTH, MEM_TAG_NC2_WIDTH) : MEM_TAG_NC2_WIDTH;
    `STATIC_ASSERT(0 == (`VX_MEM_IO_BASE_ADDR % `VX_CFG_MEM_BLOCK_SIZE), ("invalid parameter"))
    VX_mem_bus_if #(
        .DATA_SIZE (WORD_SIZE),
        .TAG_WIDTH (CORE_TAG_WIDTH)
    ) core_bus_nc_switch_if[(CACHE_ENABLE ? 2 : 1) * NUM_REQS]();
    wire [NUM_REQS-1:0] core_req_nc_sel;
    for (genvar i = 0; i < NUM_REQS; ++i) begin : g_core_req_is_nc
        if (CACHE_ENABLE) begin : g_cache
            assign core_req_nc_sel[i] = ~core_bus_in_if[i].req_data.attr[MEM_ATTR_IO_OFFS];
        end else begin : g_no_cache
            assign core_req_nc_sel[i] = 1'b0;
        end
    end
    VX_mem_bus_switch #(
        .NUM_INPUTS  (NUM_REQS),
        .NUM_OUTPUTS ((CACHE_ENABLE ? 2 : 1) * NUM_REQS),
        .DATA_SIZE   (WORD_SIZE),
        .TAG_WIDTH   (CORE_TAG_WIDTH),
        .ARBITER     ("R"),
        .REQ_OUT_BUF (0),
        .RSP_OUT_BUF (DIRECT_PASSTHRU ? 0 : CORE_OUT_BUF)
    ) core_bus_nc_switch (
        .clk       (clk),
        .reset     (reset),
        .bus_sel   (core_req_nc_sel),
        .bus_in_if (core_bus_in_if),
        .bus_out_if(core_bus_nc_switch_if)
    );
    VX_mem_bus_if #(
        .DATA_SIZE (WORD_SIZE),
        .TAG_WIDTH (CORE_TAG_WIDTH)
    ) core_bus_in_nc_if[NUM_REQS]();
    for (genvar i = 0; i < NUM_REQS; ++i) begin : g_core_bus_nc_switch_if
        assign core_bus_in_nc_if[i].req_valid = core_bus_nc_switch_if[0 * NUM_REQS + i].req_valid;
        assign core_bus_in_nc_if[i].req_data  = core_bus_nc_switch_if[0 * NUM_REQS + i].req_data;
        assign core_bus_nc_switch_if[0 * NUM_REQS + i].req_ready = core_bus_in_nc_if[i].req_ready;
        assign core_bus_nc_switch_if[0 * NUM_REQS + i].rsp_valid = core_bus_in_nc_if[i].rsp_valid;
        assign core_bus_nc_switch_if[0 * NUM_REQS + i].rsp_data  = core_bus_in_nc_if[i].rsp_data;
        assign core_bus_in_nc_if[i].rsp_ready = core_bus_nc_switch_if[0 * NUM_REQS + i].rsp_ready;
        if (CACHE_ENABLE) begin : g_cache
            assign core_bus_out_if[i].req_valid = core_bus_nc_switch_if[1 * NUM_REQS + i].req_valid;
            assign core_bus_out_if[i].req_data  = core_bus_nc_switch_if[1 * NUM_REQS + i].req_data;
            assign core_bus_nc_switch_if[1 * NUM_REQS + i].req_ready = core_bus_out_if[i].req_ready;
            assign core_bus_nc_switch_if[1 * NUM_REQS + i].rsp_valid = core_bus_out_if[i].rsp_valid;
            assign core_bus_nc_switch_if[1 * NUM_REQS + i].rsp_data  = core_bus_out_if[i].rsp_data;
            assign core_bus_out_if[i].rsp_ready = core_bus_nc_switch_if[1 * NUM_REQS + i].rsp_ready;
        end else begin : g_no_cache
            `INIT_VX_MEM_BUS_IF (core_bus_out_if[i])
        end
    end
    VX_mem_bus_if #(
        .DATA_SIZE (WORD_SIZE),
        .TAG_WIDTH (MEM_TAG_NC1_WIDTH)
    ) core_bus_nc_arb_if[MEM_PORTS]();
    VX_mem_bus_arb #(
        .NUM_INPUTS (NUM_REQS),
        .NUM_OUTPUTS(MEM_PORTS),
        .DATA_SIZE  (WORD_SIZE),
        .TAG_WIDTH  (CORE_TAG_WIDTH),
        .TAG_SEL_IDX(TAG_SEL_IDX),
        .ARBITER    (CACHE_ENABLE ? "P" : "R"),
        .REQ_OUT_BUF(0),
        .RSP_OUT_BUF(0)
    ) core_bus_nc_arb (
        .clk        (clk),
        .reset      (reset),
        .bus_in_if  (core_bus_in_nc_if),
        .bus_out_if (core_bus_nc_arb_if)
    );
    VX_mem_bus_if #(
        .DATA_SIZE (LINE_SIZE),
        .TAG_WIDTH (MEM_TAG_NC2_WIDTH)
    ) mem_bus_out_nc_if[MEM_PORTS]();
    for (genvar i = 0; i < MEM_PORTS; ++i) begin : g_mem_bus_out_nc
        wire                        core_req_nc_arb_rw;
        wire [WORD_SIZE-1:0]        core_req_nc_arb_byteen;
        wire [CORE_ADDR_WIDTH-1:0]  core_req_nc_arb_addr;
        wire [MEM_ATTR_WIDTH-1:0] core_req_nc_arb_attr;
        wire [CORE_DATA_WIDTH-1:0]  core_req_nc_arb_data;
        wire [MEM_TAG_NC1_WIDTH-1:0] core_req_nc_arb_tag;
        assign {
            core_req_nc_arb_rw,
            core_req_nc_arb_addr,
            core_req_nc_arb_data,
            core_req_nc_arb_byteen,
            core_req_nc_arb_attr,
            core_req_nc_arb_tag
        } = core_bus_nc_arb_if[i].req_data;
        logic [MEM_ADDRW-1:0] core_req_nc_arb_addr_w;
        logic [WORDS_PER_LINE-1:0][WORD_SIZE-1:0] core_req_nc_arb_byteen_w;
        logic [WORDS_PER_LINE-1:0][CORE_DATA_WIDTH-1:0] core_req_nc_arb_data_w;
        logic [CORE_DATA_WIDTH-1:0] core_rsp_nc_arb_data_w;
        wire [MEM_TAG_NC2_WIDTH-1:0] core_req_nc_arb_tag_w;
        wire [MEM_TAG_NC1_WIDTH-1:0] core_rsp_nc_arb_tag_w;
        if (WORDS_PER_LINE > 1) begin : g_multi_word_line
            wire [WSEL_BITS-1:0] rsp_wsel;
            wire [WSEL_BITS-1:0] req_wsel = core_req_nc_arb_addr[WSEL_BITS-1:0];
            always @(*) begin
                core_req_nc_arb_byteen_w = '0;
                core_req_nc_arb_byteen_w[req_wsel] = core_req_nc_arb_byteen;
                core_req_nc_arb_data_w = 'x;
                core_req_nc_arb_data_w[req_wsel] = core_req_nc_arb_data;
            end
            VX_bits_insert #(
                .N   (MEM_TAG_NC1_WIDTH),
                .S   (WSEL_BITS),
                .POS (TAG_SEL_IDX)
            ) wsel_insert (
                .data_in  (core_req_nc_arb_tag),
                .ins_in   (req_wsel),
                .data_out (core_req_nc_arb_tag_w)
            );
            VX_bits_remove #(
                .N   (MEM_TAG_NC1_WIDTH + WSEL_BITS),
                .S   (WSEL_BITS),
                .POS (TAG_SEL_IDX)
            ) wsel_remove (
                .data_in  (mem_bus_out_nc_if[i].rsp_data.tag),
                .sel_out  (rsp_wsel),
                .data_out (core_rsp_nc_arb_tag_w)
            );
            assign core_req_nc_arb_addr_w   = core_req_nc_arb_addr[WSEL_BITS +: MEM_ADDRW];
            assign core_rsp_nc_arb_data_w   = mem_bus_out_nc_if[i].rsp_data.data[rsp_wsel * CORE_DATA_WIDTH +: CORE_DATA_WIDTH];
        end else begin : g_single_word_line
            assign core_req_nc_arb_addr_w   = core_req_nc_arb_addr;
            assign core_req_nc_arb_byteen_w = core_req_nc_arb_byteen;
            assign core_req_nc_arb_data_w   = core_req_nc_arb_data;
            assign core_req_nc_arb_tag_w    = MEM_TAG_NC2_WIDTH'(core_req_nc_arb_tag);
            assign core_rsp_nc_arb_data_w   = mem_bus_out_nc_if[i].rsp_data.data;
            assign core_rsp_nc_arb_tag_w    = MEM_TAG_NC1_WIDTH'(mem_bus_out_nc_if[i].rsp_data.tag);
        end
        assign mem_bus_out_nc_if[i].req_valid = core_bus_nc_arb_if[i].req_valid;
        assign mem_bus_out_nc_if[i].req_data = {
            core_req_nc_arb_rw,
            core_req_nc_arb_addr_w,
            core_req_nc_arb_data_w,
            core_req_nc_arb_byteen_w,
            core_req_nc_arb_attr,
            core_req_nc_arb_tag_w
        };
        assign core_bus_nc_arb_if[i].req_ready = mem_bus_out_nc_if[i].req_ready;
        assign core_bus_nc_arb_if[i].rsp_valid = mem_bus_out_nc_if[i].rsp_valid;
        assign core_bus_nc_arb_if[i].rsp_data = {
            core_rsp_nc_arb_data_w,
            core_rsp_nc_arb_tag_w
        };
        assign mem_bus_out_nc_if[i].rsp_ready = core_bus_nc_arb_if[i].rsp_ready;
    end
    VX_mem_bus_if #(
        .DATA_SIZE (LINE_SIZE),
        .TAG_WIDTH (MEM_TAG_OUT_WIDTH)
    ) mem_bus_out_src_if[(CACHE_ENABLE ? 2 : 1) * MEM_PORTS]();
    for (genvar i = 0; i < MEM_PORTS; ++i) begin : g_mem_bus_out_src
        `ASSIGN_VX_MEM_BUS_IF_EX(mem_bus_out_src_if[0 * MEM_PORTS + i], mem_bus_out_nc_if[i], MEM_TAG_OUT_WIDTH, MEM_TAG_NC2_WIDTH, UUID_WIDTH);
        if (CACHE_ENABLE) begin : g_cache
            `ASSIGN_VX_MEM_BUS_IF_EX(mem_bus_out_src_if[1 * MEM_PORTS + i], mem_bus_in_if[i], MEM_TAG_OUT_WIDTH, MEM_TAG_IN_WIDTH, UUID_WIDTH);
        end else begin : g_no_cache
            `UNUSED_VX_MEM_BUS_IF(mem_bus_in_if[i])
        end
    end
    VX_mem_bus_arb #(
        .NUM_INPUTS ((CACHE_ENABLE ? 2 : 1) * MEM_PORTS),
        .NUM_OUTPUTS(MEM_PORTS),
        .DATA_SIZE  (LINE_SIZE),
        .TAG_WIDTH  (MEM_TAG_OUT_WIDTH),
        .ARBITER    ("R"),
        .REQ_OUT_BUF(DIRECT_PASSTHRU ? 0 : MEM_OUT_BUF),
        .RSP_OUT_BUF(0)
    ) mem_bus_out_arb (
        .clk        (clk),
        .reset      (reset),
        .bus_in_if  (mem_bus_out_src_if),
        .bus_out_if (mem_bus_out_if)
    );
endmodule
// Copyright © 2019-2023
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

`include "VX_cache_define.vh"

module VX_cache_cluster import VX_gpu_pkg::*; #(
    parameter `STRING INSTANCE_ID    = "",

    parameter NUM_UNITS             = 1,
    parameter NUM_INPUTS            = 1,
    parameter TAG_SEL_IDX           = 0,

    parameter NUM_REQS              = 4,      // Number of requests per cycle

    parameter MEM_PORTS             = 1,      // Number of memory ports

    parameter CACHE_SIZE            = 32768,  // Size of cache in bytes
    parameter LINE_SIZE             = 64,     // Size of line inside a bank in bytes
    parameter NUM_BANKS             = 4,      // Number of banks
    parameter NUM_WAYS              = 4,      // Number of associative ways
    parameter WORD_SIZE             = 16,     // Size of a word in bytes
    parameter SECTOR_SIZE           = LINE_SIZE, // Size of a sector in bytes (mem-request granule); = LINE_SIZE => 1 sector

    parameter CRSQ_SIZE             = 0,      // Core Response Queue Size
    parameter MSHR_SIZE             = 16,     // Miss Reserv Queue Knob
    parameter MRSQ_SIZE             = 4,      // Memory Response Queue Size
    parameter MREQ_SIZE             = 0,      // Memory Request Queue Size (0 = derived minimum)

    parameter LATENCY               = 2,      // Bank pipeline depth (2 = classic lookup+commit; larger defers the data array)

    parameter WRITE_ENABLE          = 1,      // Enable cache writeable

    parameter WRITEBACK             = 0,      // Enable cache writeback

    parameter DIRTY_BYTES           = 0,      // Enable dirty bytes on writeback

    parameter REPL_POLICY           = `CS_REPL_FIFO, // Replacement policy

    parameter TAG_WIDTH             = UUID_WIDTH + 1, // core request tag size

    parameter NC_ENABLE             = 0,      // enable bypass for non-cacheable addresses

    parameter CORE_OUT_BUF          = 3,      // Core response output buffer

    parameter MEM_OUT_BUF           = 3,      // Memory request output buffer

    parameter IS_LLC                = 0,      // Indicates this cache cluster is the LLC (handles AMO completion).

    parameter AMO_ENABLE            = 0       // Enable atomic memory operations.
 ) (
    input wire clk,
    input wire reset,

`ifdef PERF_ENABLE
    output cache_perf_t     cache_perf,
`endif
    VX_mem_bus_if.slave     core_bus_if [NUM_INPUTS * NUM_REQS],
    VX_mem_bus_if.master    mem_bus_if [MEM_PORTS]
);
    localparam NUM_CACHES = `UP(NUM_UNITS);
    localparam PASSTHRU   = (NUM_UNITS == 0);
    localparam ARB_TAG_WIDTH = TAG_WIDTH + `ARB_SEL_BITS(NUM_INPUTS, NUM_CACHES);
    localparam CACHE_MEM_TAG_WIDTH = `CACHE_MEM_TAG_WIDTH(MSHR_SIZE, NUM_BANKS, MEM_PORTS, UUID_WIDTH);
    localparam BYPASS_TAG_WIDTH = `CACHE_BYPASS_TAG_WIDTH(NUM_REQS, MEM_PORTS, SECTOR_SIZE, WORD_SIZE, ARB_TAG_WIDTH);
    localparam NC_TAG_WIDTH = `MAX(CACHE_MEM_TAG_WIDTH, BYPASS_TAG_WIDTH) + 1;
    localparam MEM_TAG_WIDTH = PASSTHRU ? BYPASS_TAG_WIDTH : (NC_ENABLE ? NC_TAG_WIDTH : CACHE_MEM_TAG_WIDTH);
    `STATIC_ASSERT(NUM_INPUTS >= NUM_CACHES, ("invalid parameter"))
`ifdef PERF_ENABLE
    cache_perf_t perf_cache_unit[NUM_CACHES];
    `PERF_CACHE_ADD (cache_perf, perf_cache_unit, NUM_CACHES)
`endif
    VX_mem_bus_if #(
        .DATA_SIZE (SECTOR_SIZE),
        .TAG_WIDTH (MEM_TAG_WIDTH)
    ) cache_mem_bus_if[NUM_CACHES * MEM_PORTS]();
    VX_mem_bus_if #(
        .DATA_SIZE (WORD_SIZE),
        .TAG_WIDTH (ARB_TAG_WIDTH)
    ) arb_core_bus_if[NUM_CACHES * NUM_REQS]();
    for (genvar i = 0; i < NUM_REQS; ++i) begin : g_core_arb
        VX_mem_bus_if #(
            .DATA_SIZE (WORD_SIZE),
            .TAG_WIDTH (TAG_WIDTH)
        ) core_bus_tmp_if[NUM_INPUTS]();
        VX_mem_bus_if #(
            .DATA_SIZE (WORD_SIZE),
            .TAG_WIDTH (ARB_TAG_WIDTH)
        ) arb_core_bus_tmp_if[NUM_CACHES]();
        for (genvar j = 0; j < NUM_INPUTS; ++j) begin : g_core_bus_tmp_if
            `ASSIGN_VX_MEM_BUS_IF (core_bus_tmp_if[j], core_bus_if[j * NUM_REQS + i]);
        end
        VX_mem_bus_arb #(
            .NUM_INPUTS   (NUM_INPUTS),
            .NUM_OUTPUTS  (NUM_CACHES),
            .DATA_SIZE    (WORD_SIZE),
            .TAG_WIDTH    (TAG_WIDTH),
            .TAG_SEL_IDX  (TAG_SEL_IDX),
            .ARBITER      ("R"),
            .REQ_OUT_BUF  ((NUM_INPUTS != NUM_CACHES) ? 2 : 0),
            .RSP_OUT_BUF  ((NUM_INPUTS != NUM_CACHES) ? CORE_OUT_BUF : 0)
        ) core_arb (
            .clk        (clk),
            .reset      (reset),
            .bus_in_if  (core_bus_tmp_if),
            .bus_out_if (arb_core_bus_tmp_if)
        );
        for (genvar k = 0; k < NUM_CACHES; ++k) begin : g_arb_core_bus_if
            `ASSIGN_VX_MEM_BUS_IF (arb_core_bus_if[k * NUM_REQS + i], arb_core_bus_tmp_if[k]);
        end
    end
    for (genvar i = 0; i < NUM_CACHES; ++i) begin : g_cache_wrap
        VX_cache_wrap #(
            .INSTANCE_ID  (`SFORMATF(("%s%0d", INSTANCE_ID, i))),
            .CACHE_SIZE   (CACHE_SIZE),
            .LINE_SIZE    (LINE_SIZE),
            .NUM_BANKS    (NUM_BANKS),
            .NUM_WAYS     (NUM_WAYS),
            .WORD_SIZE    (WORD_SIZE),
            .SECTOR_SIZE  (SECTOR_SIZE),
            .NUM_REQS     (NUM_REQS),
            .MEM_PORTS    (MEM_PORTS),
            .WRITE_ENABLE (WRITE_ENABLE),
            .WRITEBACK    (WRITEBACK),
            .DIRTY_BYTES  (DIRTY_BYTES),
            .REPL_POLICY  (REPL_POLICY),
            .CRSQ_SIZE    (CRSQ_SIZE),
            .MSHR_SIZE    (MSHR_SIZE),
            .MRSQ_SIZE    (MRSQ_SIZE),
            .MREQ_SIZE    (MREQ_SIZE),
            .LATENCY      (LATENCY),
            .TAG_WIDTH    (ARB_TAG_WIDTH),
            .TAG_SEL_IDX  (TAG_SEL_IDX),
            .CORE_OUT_BUF ((NUM_INPUTS != NUM_CACHES) ? 2 : CORE_OUT_BUF),
            .MEM_OUT_BUF  ((NUM_CACHES > 1) ? 2 : MEM_OUT_BUF),
            .NC_ENABLE (NC_ENABLE),
            .PASSTHRU     (PASSTHRU),
            .IS_LLC       (IS_LLC),
            .AMO_ENABLE   (AMO_ENABLE)
        ) cache_wrap (
        `ifdef PERF_ENABLE
            .cache_perf  (perf_cache_unit[i]),
        `endif
            .clk         (clk),
            .reset       (reset),
            .core_bus_if (arb_core_bus_if[i * NUM_REQS +: NUM_REQS]),
            .mem_bus_if  (cache_mem_bus_if[i * MEM_PORTS +: MEM_PORTS])
        );
    end
    for (genvar i = 0; i < MEM_PORTS; ++i) begin : g_mem_bus_if
        VX_mem_bus_if #(
            .DATA_SIZE (SECTOR_SIZE),
            .TAG_WIDTH (MEM_TAG_WIDTH)
        ) arb_core_bus_tmp_if[NUM_CACHES]();
        VX_mem_bus_if #(
            .DATA_SIZE (SECTOR_SIZE),
            .TAG_WIDTH (MEM_TAG_WIDTH + `ARB_SEL_BITS(NUM_CACHES, 1))
        ) mem_bus_tmp_if[1]();
        for (genvar j = 0; j < NUM_CACHES; ++j) begin : g_arb_core_bus_tmp_if
            `ASSIGN_VX_MEM_BUS_IF (arb_core_bus_tmp_if[j], cache_mem_bus_if[j * MEM_PORTS + i]);
        end
        VX_mem_bus_arb #(
            .NUM_INPUTS  (NUM_CACHES),
            .NUM_OUTPUTS (1),
            .DATA_SIZE   (SECTOR_SIZE),
            .TAG_WIDTH   (MEM_TAG_WIDTH),
            .TAG_SEL_IDX (TAG_SEL_IDX),
            .ARBITER     ("R"),
            .REQ_OUT_BUF ((NUM_CACHES > 1) ? MEM_OUT_BUF : 0),
            .RSP_OUT_BUF ((NUM_CACHES > 1) ? 2 : 0)
        ) mem_arb (
            .clk        (clk),
            .reset      (reset),
            .bus_in_if  (arb_core_bus_tmp_if),
            .bus_out_if (mem_bus_tmp_if)
        );
        if (WRITE_ENABLE) begin : g_we
            `ASSIGN_VX_MEM_BUS_IF (mem_bus_if[i], mem_bus_tmp_if[0]);
        end else begin : g_ro
            `ASSIGN_VX_MEM_BUS_RO_IF (mem_bus_if[i], mem_bus_tmp_if[0]);
        end
    end
endmodule
// Copyright © 2019-2023
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

`include "VX_cache_define.vh"

// Word-sliced, way-indexed data array.
//
// The line is split into CS_WORDS_PER_LINE independent word slices, and the
// way dimension is folded into the array address as {way, line_idx} rather
// than replicated as NUM_WAYS parallel full-line arrays. The way is resolved
// at read-issue (the hit way for a core read/write, the victim way for a
// fill/flush), so the array is addressed directly:
//
//   * a load reads only the slice selected by word_idx -> one CS_WORD_WIDTH read
//   * a store writes only that slice (byte-enabled)
//   * a fill writes all slices in parallel (full line)
//   * a writeback/flush reads all slices in parallel (full line)
//
// This removes both the all-ways data read and the late NUM_WAYS:1 line mux of
// the previous parallel-access design: read_data carries the selected way's
// line directly.

module VX_cache_data import VX_gpu_pkg::*; #(
    parameter CACHE_SIZE        = 1024,       // Size of cache in bytes
    parameter LINE_SIZE         = 16,         // Size of line inside a bank in bytes
    parameter NUM_BANKS         = 1,          // Number of banks
    parameter NUM_WAYS          = 1,          // Number of associative ways
    parameter WORD_SIZE         = 1,          // Size of a word in bytes
    parameter SECTOR_SIZE       = LINE_SIZE,  // Size of a sector in bytes (fill granule); = LINE_SIZE => 1 sector
    parameter WRITE_ENABLE      = 1,          // Enable cache writeable
    parameter WRITEBACK         = 0,          // Enable cache writeback
    parameter DIRTY_BYTES       = 0           // Enable dirty bytes on writeback
) (
    input wire                          clk,
    input wire                          reset,
    // inputs
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
    input wire [`UP(`CS_SECTOR_SEL_BITS)-1:0] sector_idx, // sector being filled
    input wire [`CS_WAY_SEL_WIDTH-1:0]  way_idx_r,
    // outputs
    output wire [`CS_LINE_WIDTH-1:0]    read_data,
    output wire [LINE_SIZE-1:0]         evict_byteen
);
    // The main data array resolves the way at read-issue and folds it into the
    // array address, so the S1 output-way register is only used by the (narrow,
    // off-path) dirty-byte mask below.

    localparam WAY_SEL_BITS    = `CS_WAY_SEL_BITS;
    localparam DATA_RAM_DEPTH  = `CS_LINES_PER_BANK * NUM_WAYS;
    localparam DATA_ADDR_WIDTH = `LOG2UP(DATA_RAM_DEPTH);

    // Resolve the access way: hit way for core read/write, victim way for
    // fill/flush. Encoded combinationally from tag_matches so the data array
    // is addressed at read-issue (S0). This is the tag-compare -> way ->
    // data-address path (see redesign proposal, timing section).
    wire [`CS_WAY_SEL_WIDTH-1:0] hit_way;
    VX_onehot_encoder #(
        .N (NUM_WAYS)
    ) hit_way_enc (
        .data_in  (tag_matches),
        .data_out (hit_way),
        `UNUSED_PIN (valid_out)
    );

    wire is_evict = fill || flush;
    wire hit_any  = (| tag_matches);
    wire [`CS_WAY_SEL_WIDTH-1:0] way_sel = is_evict ? evict_way : hit_way;

    // {way, line} -> physical address
    wire [DATA_ADDR_WIDTH-1:0] data_addr;
    if (NUM_WAYS > 1) begin : g_way_addr
        assign data_addr = DATA_ADDR_WIDTH'({way_sel[WAY_SEL_BITS-1:0], line_idx});
    end else begin : g_no_way_addr
        `UNUSED_VAR (way_sel)
        assign data_addr = line_idx;
    end

    // Per-byte dirty mask (writeback only). Unlike the main data array this is
    // kept as one line-indexed array per way (evict way selected at S1): it is
    // narrow and off the load path, and -- crucially -- it must be cleared for
    // every way during the line-only init walk, which the way-folded data
    // layout cannot do in a single pass.
    if (DIRTY_BYTES != 0) begin : g_dirty_bytes
        wire [`CS_WORDS_PER_LINE-1:0][WORD_SIZE-1:0] write_mask;
        for (genvar i = 0; i < `CS_WORDS_PER_LINE; ++i) begin : g_write_mask
            wire word_en = (`CS_WORDS_PER_LINE == 1) || (word_idx == i);
            assign write_mask[i] = write_byteen & {WORD_SIZE{word_en}};
        end

        wire [NUM_WAYS-1:0][LINE_SIZE-1:0] byteen_rdata;
        for (genvar i = 0; i < NUM_WAYS; ++i) begin : g_byteen_store
            wire [LINE_SIZE-1:0] byteen_wdata = {LINE_SIZE{write}}; // only asserted on writes
            wire [LINE_SIZE-1:0] byteen_wren  = {LINE_SIZE{init || fill || flush}} | write_mask;
            wire byteen_write = ((fill || flush) && ((NUM_WAYS == 1) || (evict_way == i)))
                             || (write && tag_matches[i])
                             || init;
            wire byteen_read  = fill || flush;

            // The dirty mask has 1-bit (per-byte) write granularity, which
            // block RAM cannot do -- inferring BRAM shatters it into dozens of
            // tiny RAMB18 per way. It is small, so map it to distributed RAM.
            VX_sp_ram #(
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
        assign evict_byteen = '1; // update whole line
    end

    wire [`CS_WORDS_PER_LINE-1:0][`CS_WORD_WIDTH-1:0] line_rdata;

    for (genvar s = 0; s < `CS_WORDS_PER_LINE; ++s) begin : g_data_slice

        localparam WRENW = WRITE_ENABLE ? WORD_SIZE : 1;
        // sector this slice belongs to (high bits of its in-line word index).
        localparam SLICE_SECTOR = s / `CS_WORDS_PER_SECTOR;

        wire word_en = (`CS_WORDS_PER_LINE == 1) || (word_idx == s);
        // a fill installs only the fetched sector's slices (whole line when 1
        // sector/line, since every slice maps to sector 0).
        wire fill_sec_en = (`CS_SECTORS_PER_LINE == 1)
                        || (sector_idx == `UP(`CS_SECTOR_SEL_BITS)'(SLICE_SECTOR));

        // load reads the selected slice; writeback/flush reads all slices.
        wire slice_read = (read && word_en) || ((fill || flush) && WRITEBACK);

        wire slice_write;
        wire [WRENW-1:0]          slice_wren;
        wire [`CS_WORD_WIDTH-1:0] slice_wdata;

        if (WRITE_ENABLE) begin : g_wren
            // fill writes the fetched sector's slices; a store writes only the hit slice.
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

        VX_sp_ram #(
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
// Copyright © 2019-2023
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

`include "VX_cache_define.vh"

module VX_cache_flush import VX_gpu_pkg::*; #(
    parameter BANK_ID    = 0,
    parameter CACHE_SIZE = 1024,              // Size of cache in bytes
    parameter LINE_SIZE  = 64,                // Size of line inside a bank in bytes
    parameter NUM_BANKS  = 1,                 // Number of banks
    parameter NUM_WAYS   = 1,                 // Number of associative ways
    parameter WRITEBACK  = 0                  // Enable cache writeback
) (
    input  wire clk,
    input  wire reset,
    input  wire flush_begin,
    output wire flush_end,
    output wire flush_init,
    output wire flush_valid,
    output wire [`CS_LINE_SEL_BITS-1:0] flush_line,
    output wire [`CS_WAY_SEL_WIDTH-1:0] flush_way,
    input  wire flush_ready,
    input  wire mshr_empty,
    input  wire bank_empty
);
    // way iteration is only needed when eviction is enabled
    localparam CTR_WIDTH = `CS_LINE_SEL_BITS + (WRITEBACK ? `CS_WAY_SEL_BITS : 0);

    localparam STATE_IDLE  = 0;
    localparam STATE_INIT  = 1;
    localparam STATE_WAIT1 = 2;
    localparam STATE_FLUSH = 3;
    localparam STATE_WAIT2 = 4;
    localparam STATE_DONE  = 5;

    reg [2:0] state, state_n;

    reg [CTR_WIDTH-1:0] counter;

    // latch flush_begin that arrives while init is in progress
    reg flush_pending_r, flush_pending_n;

    always @(*) begin
        state_n = state;
        flush_pending_n = flush_pending_r;
        case (state)
            // STATE_IDLE:
            default : begin
                if (flush_begin) begin
                    state_n = STATE_WAIT1;
                end
            end
            STATE_INIT: begin
                if (flush_begin) begin
                    flush_pending_n = 1'b1;
                end
                if (counter == ((2 ** `CS_LINE_SEL_BITS)-1)) begin
                    // STATE_INIT already invalidated all lines, so if a flush
                    // was requested during init, generate flush_end now.
                    state_n = flush_pending_n ? STATE_DONE : STATE_IDLE;
                    flush_pending_n = 1'b0;
                end
            end
            STATE_WAIT1: begin
                // Wait for the bank to fully quiesce before evicting:
                // both MSHR must drain, and the bank pipeline as well to ensure no inflight misses.
                if (mshr_empty && bank_empty) begin
                    state_n = STATE_FLUSH;
                end
            end
            STATE_FLUSH: begin
                if (counter == ((2 ** CTR_WIDTH)-1) && flush_ready) begin
                    state_n = (BANK_ID == 0) ? STATE_DONE : STATE_WAIT2;
                end
            end
            STATE_WAIT2: begin
                // ensure the bank is empty before notifying the cache flush unit,
                // because the flush request to lower caches only goes through bank0
                // and it is important that request gets send out last.
                if (bank_empty) begin
                    state_n = STATE_DONE;
                end
            end
            STATE_DONE: begin
                // generate a completion pulse
                state_n = STATE_IDLE;
            end
        endcase
    end

    always @(posedge clk) begin
        if (reset) begin
            state          <= STATE_INIT;
            counter        <= '0;
            flush_pending_r <= 1'b0;
        end else begin
            state          <= state_n;
            flush_pending_r <= flush_pending_n;
            if (state != STATE_IDLE) begin
                if ((state == STATE_INIT)
                || ((state == STATE_FLUSH) && flush_ready)) begin
                    counter <= counter + CTR_WIDTH'(1);
                end
            end else begin
                counter <= '0;
            end
        end
    end

    assign flush_end   = (state == STATE_DONE);
    assign flush_init  = (state == STATE_INIT);
    assign flush_valid = (state == STATE_FLUSH);
    assign flush_line  = counter[`CS_LINE_SEL_BITS-1:0];

    if (WRITEBACK && (NUM_WAYS > 1)) begin : g_flush_way
        assign flush_way = counter[`CS_LINE_SEL_BITS +: `CS_WAY_SEL_BITS];
    end else begin : g_flush_way_all
        assign flush_way = '0;
    end

endmodule
// Copyright © 2019-2023
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

`include "VX_cache_define.vh"

module VX_cache_init import VX_gpu_pkg::*; #(
    parameter NUM_REQS  = 4,                  // Number of Word requests per cycle
    parameter NUM_BANKS = 1,                  // Number of banks
    parameter TAG_WIDTH = UUID_WIDTH + 1,     // core request tag size
    parameter BANK_SEL_LATENCY = 1            // Bank select latency
) (
    input wire              clk,
    input wire              reset,
    VX_mem_bus_if.slave     core_bus_in_if [NUM_REQS],
    VX_mem_bus_if.master    core_bus_out_if [NUM_REQS],
    input wire [NUM_BANKS-1:0] bank_req_fire,
    output wire [NUM_BANKS-1:0] flush_begin,
    output wire [`UP(UUID_WIDTH)-1:0] flush_uuid,
    input wire [NUM_BANKS-1:0] flush_end
);
    `UNUSED_PARAM (TAG_WIDTH)

    localparam STATE_IDLE  = 0;
    localparam STATE_WAIT1 = 1;
    localparam STATE_FLUSH = 2;
    localparam STATE_WAIT2 = 3;
    localparam STATE_DONE  = 4;

    reg [2:0] state, state_n;

    // track in-flight core requests

    wire no_inflight_reqs;

    if (BANK_SEL_LATENCY != 0) begin : g_bank_sel_latency

        localparam NUM_REQS_W  = `CLOG2(NUM_REQS+1);
        localparam NUM_BANKS_W = `CLOG2(NUM_BANKS+1);

        wire [NUM_REQS-1:0] core_bus_out_fire;
        for (genvar i = 0; i < NUM_REQS; ++i) begin : g_core_bus_out_fire
            assign core_bus_out_fire[i] = core_bus_out_if[i].req_valid && core_bus_out_if[i].req_ready;
        end

        wire [NUM_REQS_W-1:0] core_bus_out_cnt;
        wire [NUM_BANKS_W-1:0] bank_req_cnt;

        `POP_COUNT(core_bus_out_cnt, core_bus_out_fire);
        `POP_COUNT(bank_req_cnt, bank_req_fire);
        `UNUSED_VAR (core_bus_out_cnt)

        VX_pending_size #(
            .SIZE  (BANK_SEL_LATENCY * NUM_BANKS),
            .INCRW (NUM_BANKS_W),
            .DECRW (NUM_BANKS_W)
        ) pending_size (
            .clk   (clk),
            .reset (reset),
            .incr  (NUM_BANKS_W'(core_bus_out_cnt)),
            .decr  (bank_req_cnt),
            .empty (no_inflight_reqs),
            `UNUSED_PIN (alm_empty),
            `UNUSED_PIN (full),
            `UNUSED_PIN (alm_full),
            `UNUSED_PIN (size)
        );

    end else begin : g_no_bank_sel_latency
        assign no_inflight_reqs = 0;
        `UNUSED_VAR (bank_req_fire)
    end

    reg [NUM_BANKS-1:0] flush_done, flush_done_n;

    wire [NUM_REQS-1:0] flush_req_mask;
    for (genvar i = 0; i < NUM_REQS; ++i) begin : g_flush_req_mask
        assign flush_req_mask[i] = core_bus_in_if[i].req_valid && core_bus_in_if[i].req_data.attr[MEM_ATTR_FLUSH_OFFS];
    end
    wire flush_req_enable = (| flush_req_mask);

    reg [NUM_REQS-1:0] lock_released, lock_released_n;
    reg [`UP(UUID_WIDTH)-1:0] flush_uuid_r, flush_uuid_n;

    for (genvar i = 0; i < NUM_REQS; ++i) begin : g_core_bus_out_req
        // block core requests if a flush is active,
        // unless the lock for this specific request has been released
        wire input_enable = ~flush_req_enable || lock_released[i];

        assign core_bus_out_if[i].req_valid = core_bus_in_if[i].req_valid && input_enable;
        assign core_bus_out_if[i].req_data  = core_bus_in_if[i].req_data;
        assign core_bus_in_if[i].req_ready  = core_bus_out_if[i].req_ready && input_enable;
    end

    for (genvar i = 0; i < NUM_REQS; ++i) begin : g_core_bus_in_rsp
        assign core_bus_in_if[i].rsp_valid  = core_bus_out_if[i].rsp_valid;
        assign core_bus_in_if[i].rsp_data   = core_bus_out_if[i].rsp_data;
        assign core_bus_out_if[i].rsp_ready = core_bus_in_if[i].rsp_ready;
    end

    reg [NUM_REQS-1:0][`UP(UUID_WIDTH)-1:0] core_bus_out_uuid;
    wire [NUM_REQS-1:0] core_bus_out_ready;
    for (genvar i = 0; i < NUM_REQS; ++i) begin : g_core_bus_out_uuid
        if (UUID_WIDTH != 0) begin : g_uuid
            assign core_bus_out_uuid[i] = core_bus_in_if[i].req_data.tag.uuid;
        end else begin : g_no_uuid
            assign core_bus_out_uuid[i] = 0;
        end
    end

    for (genvar i = 0; i < NUM_REQS; ++i) begin : g_core_bus_out_ready
        assign core_bus_out_ready[i] = core_bus_out_if[i].req_ready;
    end

    always @(*) begin
        state_n = state;
        flush_done_n = flush_done;
        lock_released_n = lock_released;
        flush_uuid_n = flush_uuid_r;
        case (state)
            // STATE_IDLE:
            default: begin
                if (flush_req_enable) begin
                    state_n = (BANK_SEL_LATENCY != 0) ? STATE_WAIT1 : STATE_FLUSH;
                    for (integer i = NUM_REQS-1; i >= 0; --i) begin
                        if (flush_req_mask[i]) begin
                            flush_uuid_n = core_bus_out_uuid[i];
                        end
                    end
                end
            end
            STATE_WAIT1: begin
                if (no_inflight_reqs) begin
                    state_n = STATE_FLUSH;
                end
            end
            STATE_FLUSH: begin
                // generate a flush request pulse
                state_n = STATE_WAIT2;
            end
            STATE_WAIT2: begin
                // wait for all banks to finish flushing
                flush_done_n = flush_done | flush_end;
                if (flush_done_n == {NUM_BANKS{1'b1}}) begin
                    state_n = STATE_DONE;
                    flush_done_n = '0;
                    // only release current flush requests
                    // and keep normal requests locked
                    lock_released_n = flush_req_mask;
                end
            end
            STATE_DONE: begin
                // wait until released flush requests are issued
                // when returning to IDLE state other requests will unlock
                lock_released_n = lock_released & ~core_bus_out_ready;
                if (lock_released_n == 0) begin
                    state_n = STATE_IDLE;
                end
            end
        endcase
    end

    always @(posedge clk) begin
        if (reset) begin
            state <= STATE_IDLE;
            flush_done <= '0;
            lock_released <= '0;
        end else begin
            state <= state_n;
            flush_done <= flush_done_n;
            lock_released <= lock_released_n;
        end
        flush_uuid_r <= flush_uuid_n;
    end

    assign flush_begin = {NUM_BANKS{state == STATE_FLUSH}};
    assign flush_uuid = flush_uuid_r;

endmodule
// Copyright © 2019-2023
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

`include "VX_cache_define.vh"

// This is an implementation of a MSHR for pipelined multi-banked cache.
// We allocate a free slot from the MSHR before processing a core request
// and release the slot when we get a cache hit. This ensure that we do not
// enter the cache bank pipeline when the MSHR is full.
// During a memory fill response, we initiate the replay sequence
// and dequeue all pending entries for the given cache line.
//
// Pending core requests stored in the MSHR are sorted by the order of
// arrival and are dequeued in the same order.
// Each entry has a next pointer to the next entry pending for the same cache line.
//
// During the fill request, the MSHR will dequue the MSHR entry at the fill_id location
// which represents the first request in the pending list that initiated the memory fill.
//
// The dequeue response directly follows the fill request and will release
// all the subsequent entries linked to fill_id (pending the same cache line).
//
// During the allocation request, the MSHR will allocate the next free slot
// for the incoming core request. We return the allocated slot id as well as
// the slot id of the previous entry for the same cache line. This is used to
// link the new entry to the pending list.
//
// The finalize request is used to persit or release the currently allocated MSHR entry
// if we had a cache miss or a hit, respectively.
//
// Warning: This MSHR implementation is strongly coupled with the bank pipeline
// and as such changes to either module requires careful evaluation.
//

module VX_cache_mshr import VX_gpu_pkg::*; #(
    parameter `STRING INSTANCE_ID= "",
    parameter BANK_ID           = 0,
    parameter LINE_SIZE         = 16,         // Size of line inside a bank in bytes
    parameter SECTOR_SIZE       = LINE_SIZE,  // Size of a sector in bytes (coalescing/fill granule); = LINE_SIZE => 1 sector
    parameter NUM_BANKS         = 1,          // Number of banks
    parameter MSHR_SIZE         = 4,          // Miss Reserv Queue Knob
    parameter DATA_WIDTH        = 1,          // MSHR parameters
    parameter WRITEBACK         = 0,          // Enable cache writeback
    parameter AMO_ENABLE        = 0,          // Per-entry AMO tracking (probe outputs)
    parameter AMO_PASSTHRU      = 0,          // Non-LLC passthrough: AMO entries never coalesce

    parameter MSHR_ADDR_WIDTH   = `LOG2UP(MSHR_SIZE)
) (
    input wire clk,
    input wire reset,

`IGNORE_UNUSED_BEGIN
    input wire[`UP(UUID_WIDTH)-1:0]     deq_req_uuid,
    input wire[`UP(UUID_WIDTH)-1:0]     alc_req_uuid,
    input wire[`UP(UUID_WIDTH)-1:0]     fin_req_uuid,
`IGNORE_UNUSED_END

    // memory fill
    input wire                          fill_valid,
    input wire [MSHR_ADDR_WIDTH-1:0]    fill_id,
    output wire [`CS_LINE_ADDR_WIDTH-1:0] fill_addr,
    // sector of the entry that initiated this fill (which sector to install)
    output wire [`UP(`CS_SECTOR_SEL_BITS)-1:0] fill_sector,

    // probe: pending requests for `probe_addr`'s line, split by type.
    //   probe_pending_ld  : a non-AMO (line-filling) request is pending —
    //     age-order an incoming AMO behind it so its local invalidate lands
    //     on the installed line.
    //   probe_pending_amo : an AMO passthrough is pending — age-order an
    //     incoming plain load behind it so the load observes the AMO
    //     (same-hart same-address program order).
    input wire [`CS_LINE_ADDR_WIDTH-1:0] probe_addr,
    output wire                         probe_pending_ld,
    output wire                         probe_pending_amo,

    // dequeue
    output wire                         dequeue_valid,
    output wire [`CS_LINE_ADDR_WIDTH-1:0] dequeue_addr,
    output wire                         dequeue_rw,
    output wire [DATA_WIDTH-1:0]        dequeue_data,
    output wire [MSHR_ADDR_WIDTH-1:0]   dequeue_id,
    input wire                          dequeue_ready,

    // allocate
    input wire                          allocate_valid,
    input wire [`CS_LINE_ADDR_WIDTH-1:0] allocate_addr,
    input wire [`UP(`CS_SECTOR_SEL_BITS)-1:0] allocate_sector,
    input wire                          allocate_rw,
    input wire                          allocate_is_amo, // AMO: never coalesce
    input wire [DATA_WIDTH-1:0]         allocate_data,
    output wire [MSHR_ADDR_WIDTH-1:0]   allocate_id,
    output wire                         allocate_pending,
    output wire [MSHR_ADDR_WIDTH-1:0]   allocate_previd,
    output wire                         allocate_ready,

    // finalize
    input wire                          finalize_valid,
    input wire                          finalize_is_release,
    input wire                          finalize_is_pending,
    input wire [MSHR_ADDR_WIDTH-1:0]    finalize_previd,
    input wire [MSHR_ADDR_WIDTH-1:0]    finalize_id
);
    `UNUSED_PARAM (BANK_ID)

    reg [`CS_LINE_ADDR_WIDTH-1:0] addr_table [0:MSHR_SIZE-1];
    // Per-entry sector. Coalescing matches on {line, sector} so same-line
    // different-sector misses get independent fills (each replay then hits its
    // own filled sector). Zero-width-equivalent (1 bit, all 0) when 1 sector/line.
    reg [`UP(`CS_SECTOR_SEL_BITS)-1:0] sector_table [0:MSHR_SIZE-1];
    reg [MSHR_ADDR_WIDTH-1:0] next_index [0:MSHR_SIZE-1];

    reg [MSHR_SIZE-1:0] valid_table, valid_table_n;
    reg [MSHR_SIZE-1:0] next_table, next_table_x, next_table_n;
    reg [MSHR_SIZE-1:0] write_table;
    // AMO entries must never coalesce: each atomic needs its own
    // downstream round-trip (RVA is non-commutative). Excluding them
    // from addr_matches keeps later requests from linking onto an AMO
    // entry; the bank separately forces the AMO requester non-pending.
    // amo_mask is the per-entry AMO flag, zero when AMO_ENABLE=0 so the
    // mask folds out of addr_matches and the probe logic disappears.
    wire [MSHR_SIZE-1:0] amo_mask;

    reg allocate_rdy, allocate_rdy_n;
    reg [MSHR_ADDR_WIDTH-1:0] allocate_id_r, allocate_id_n;

    reg dequeue_val, dequeue_val_n;
    reg [MSHR_ADDR_WIDTH-1:0] dequeue_id_r, dequeue_id_n;

    wire [MSHR_ADDR_WIDTH-1:0] prev_idx;

    wire allocate_fire = allocate_valid && allocate_ready;
    wire dequeue_fire = dequeue_valid && dequeue_ready;

    wire [MSHR_SIZE-1:0] addr_matches;
    for (genvar i = 0; i < MSHR_SIZE; ++i) begin : g_addr_matches
        // Exclude the entry being consumed this cycle: an allocate that links
        // behind a chain tail draining right now would finalize one cycle
        // after the tail is invalidated and be orphaned (nothing would wake
        // it). Excluded, the requester proceeds as a fresh hit/miss, which is
        // safe — a draining chain implies its fill has already completed.
        assign addr_matches[i] = valid_table[i] && (addr_table[i] == allocate_addr)
                              && (sector_table[i] == allocate_sector) && ~amo_mask[i]
                              && ~(dequeue_fire && (dequeue_id == MSHR_ADDR_WIDTH'(i)));
    end

    VX_priority_encoder #(
        .N (MSHR_SIZE)
    ) allocate_sel (
        .data_in   (~valid_table_n),
        .index_out (allocate_id_n),
        .valid_out (allocate_rdy_n),
        `UNUSED_PIN (onehot_out)
    );

    // find matching tail-entry
    VX_priority_encoder #(
        .N (MSHR_SIZE)
    ) prev_sel (
        .data_in (addr_matches & ~next_table_x),
        .index_out (prev_idx),
        `UNUSED_PIN (valid_out),
        `UNUSED_PIN (onehot_out)
    );

    always @(*) begin
        valid_table_n = valid_table;
        next_table_x  = next_table;
        dequeue_val_n = dequeue_val;
        dequeue_id_n  = dequeue_id;

        if (fill_valid) begin
            dequeue_val_n = 1;
            dequeue_id_n = fill_id;
        end

        if (dequeue_fire) begin
            valid_table_n[dequeue_id] = 0;
            if (next_table[dequeue_id]) begin
                dequeue_id_n = next_index[dequeue_id];
            end else if (finalize_valid && finalize_is_pending && (finalize_previd == dequeue_id)) begin
                dequeue_id_n = finalize_id;
            end else begin
                dequeue_val_n = 0;
            end
        end

        if (finalize_valid) begin
            if (finalize_is_release) begin
                valid_table_n[finalize_id] = 0;
            end
            // 'finalize_is_pending' may be asserted regardless of hit/miss to reduce its
            // propagation delay; any spurious next_table_n updates are corrected at allocate_fire.
            if (finalize_is_pending) begin
                next_table_x[finalize_previd] = 1;
            end
        end

        next_table_n = next_table_x;
        if (allocate_fire) begin
            valid_table_n[allocate_id] = 1;
            next_table_n[allocate_id] = 0;
        end
    end

    always @(posedge clk) begin
        if (reset) begin
            valid_table  <= '0;
            allocate_rdy <= 0;
            dequeue_val  <= 0;
        end else begin
            valid_table  <= valid_table_n;
            allocate_rdy <= allocate_rdy_n;
            dequeue_val  <= dequeue_val_n;
        end

        if (allocate_fire) begin
            addr_table[allocate_id] <= allocate_addr;
            sector_table[allocate_id] <= allocate_sector;
            write_table[allocate_id] <= allocate_rw;
        end

        if (finalize_valid && finalize_is_pending) begin
            next_index[finalize_previd] <= finalize_id;
        end

        dequeue_id_r  <= dequeue_id_n;
        allocate_id_r <= allocate_id_n;
        next_table    <= next_table_n;
    end

    `RUNTIME_ASSERT(~(allocate_fire && valid_table[allocate_id_r]), ("*** %s inuse allocation: addr=0x%0h, id=%0d (#%0d)", INSTANCE_ID,
        `CS_BANK_TO_FULL_ADDR(allocate_addr, BANK_ID), allocate_id_r, alc_req_uuid))

    `RUNTIME_ASSERT(~(finalize_valid && ~valid_table[finalize_id]), ("*** %s invalid release: addr=0x%0h, id=%0d (#%0d)", INSTANCE_ID,
        `CS_BANK_TO_FULL_ADDR(addr_table[finalize_id], BANK_ID), finalize_id, fin_req_uuid))

    `RUNTIME_ASSERT(~(fill_valid && ~valid_table[fill_id]), ("*** %s invalid fill: addr=0x%0h, id=%0d", INSTANCE_ID,
        `CS_BANK_TO_FULL_ADDR(addr_table[fill_id], BANK_ID), fill_id))

    VX_dp_ram #(
        .DATAW (DATA_WIDTH),
        .SIZE  (MSHR_SIZE),
        .OUT_REG (1),
        .RDW_MODE ("W")
    ) mshr_store (
        .clk   (clk),
        .reset (reset),
        .read  (1'b1),
        .write (allocate_valid),
        .wren  (1'b1),
        .waddr (allocate_id_r),
        .wdata (allocate_data),
        .raddr (dequeue_id_n),
        .rdata (dequeue_data)
    );

    assign fill_addr = addr_table[fill_id];
    assign fill_sector = sector_table[fill_id];

    if (AMO_ENABLE != 0) begin : g_amo
        reg [MSHR_SIZE-1:0] amo_table;
        // An entry only participates in the pending-AMO probe once it has
        // persisted as a miss: transient hit-path pre-allocations (S0 to
        // finalize) are ordered by the bank's commit path, and probing them
        // would serialize hit AMOs at the input (starving LR/SC forward
        // progress under contention).
        reg [MSHR_SIZE-1:0] persisted_table;
        always @(posedge clk) begin
            if (reset) begin
                amo_table <= '0;
            end else if (allocate_fire) begin
                amo_table[allocate_id] <= allocate_is_amo;
            end
        end
        always @(posedge clk) begin
            if (reset) begin
                persisted_table <= '0;
            end else begin
                if (allocate_fire) begin
                    persisted_table[allocate_id] <= 1'b0;
                end
                if (finalize_valid && ~finalize_is_release) begin
                    persisted_table[finalize_id] <= 1'b1;
                end
            end
        end
        // Never-coalesce applies only to passthrough entries (non-LLC): each
        // atomic needs its own downstream round-trip. At the LLC, AMOs chain
        // in arrival order like any request; the probe outputs alone provide
        // the same-line ordering guard.
        assign amo_mask = (AMO_PASSTHRU != 0) ? amo_table : '0;

        wire [MSHR_SIZE-1:0] probe_ld, probe_amo;
        for (genvar i = 0; i < MSHR_SIZE; ++i) begin : g_probe_matches
            wire addr_match = valid_table[i] && persisted_table[i] && (addr_table[i] == probe_addr);
            assign probe_ld[i]  = addr_match && ~amo_table[i];
            assign probe_amo[i] = addr_match && amo_table[i];
        end
        assign probe_pending_ld  = (| probe_ld);
        assign probe_pending_amo = (| probe_amo);
    end else begin : g_no_amo
        assign amo_mask = '0;
        assign probe_pending_ld  = 1'b0;
        assign probe_pending_amo = 1'b0;
        `UNUSED_PARAM (AMO_PASSTHRU)
        `UNUSED_VAR ({allocate_is_amo, probe_addr})
    end

    assign allocate_ready = allocate_rdy;
    assign allocate_id = allocate_id_r;
    assign allocate_previd = prev_idx;

    if (WRITEBACK) begin : g_pending_wb
        assign allocate_pending = |addr_matches;
    end else begin : g_pending_wt
        // exclude write requests if writethrough
        assign allocate_pending = |(addr_matches & ~write_table);
    end

    assign dequeue_valid = dequeue_val;
    assign dequeue_addr  = addr_table[dequeue_id_r];
    assign dequeue_rw    = write_table[dequeue_id_r];
    assign dequeue_id    = dequeue_id_r;

`ifdef DBG_TRACE_CACHE
    reg show_table;
    always @(posedge clk) begin
        if (reset) begin
            show_table <= 0;
        end else begin
            show_table <= allocate_fire || finalize_valid || fill_valid || dequeue_fire;
        end
        if (allocate_fire) begin
            `TRACE(3, ("%t: %s allocate: addr=0x%0h, id=%0d, pending=%b, prev=%0d (#%0d)\n", $time, INSTANCE_ID,
                `CS_BANK_TO_FULL_ADDR(allocate_addr, BANK_ID), allocate_id, allocate_pending, prev_idx, alc_req_uuid))
        end
        if (finalize_valid && finalize_is_release) begin
            `TRACE(3, ("%t: %s release: id=%0d (#%0d)\n", $time, INSTANCE_ID, finalize_id, fin_req_uuid))
        end
        if (finalize_valid && finalize_is_pending) begin
            `TRACE(3, ("%t: %s finalize: id=%0d (#%0d)\n", $time, INSTANCE_ID, finalize_id, fin_req_uuid))
        end
        if (fill_valid) begin
            `TRACE(3, ("%t: %s fill: addr=0x%0h, id=%0d\n", $time, INSTANCE_ID,
                `CS_BANK_TO_FULL_ADDR(fill_addr, BANK_ID), fill_id))
        end
        if (dequeue_fire) begin
            `TRACE(3, ("%t: %s dequeue: addr=0x%0h, id=%0d (#%0d)\n", $time, INSTANCE_ID,
                `CS_BANK_TO_FULL_ADDR(dequeue_addr, BANK_ID), dequeue_id_r, deq_req_uuid))
        end
        if (show_table) begin
            `TRACE(3, ("%t: %s table: ", $time, INSTANCE_ID))
            for (integer i = 0; i < MSHR_SIZE; ++i) begin
                if (valid_table[i]) begin
                    `TRACE(3, (" %0d=0x%0h", i, `CS_BANK_TO_FULL_ADDR(addr_table[i], BANK_ID)))
                    if (write_table[i]) begin
                        `TRACE(3, ("(w)"))
                    end else begin
                        `TRACE(3, ("(r)"))
                    end
                    if (next_table[i])  begin
                        `TRACE(3, ("->%0d", next_index[i]))
                    end
                end
            end
            `TRACE(3, ("\n"))
        end
    end
`endif

endmodule
// Copyright © 2019-2023
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

`include "VX_cache_define.vh"

// Fast PLRU encoder and decoder utility
// Adapted from BaseJump STL: http://bjump.org/data_out.html

module plru_decoder import VX_gpu_pkg::*; #(
    parameter NUM_WAYS      = 1,
    parameter WAY_IDX_BITS  = $clog2(NUM_WAYS),
    parameter WAY_IDX_WIDTH = `UP(WAY_IDX_BITS)
) (
    input wire [WAY_IDX_WIDTH-1:0]    way_idx,
    output wire [`UP(NUM_WAYS-1)-1:0] lru_data,
    output wire [`UP(NUM_WAYS-1)-1:0] lru_mask
);
    if (NUM_WAYS > 1) begin : g_dec
        wire [`UP(NUM_WAYS-1)-1:0] data;
        wire [`UP(NUM_WAYS-1)-1:0] mask /* verilator split_var*/;
        for (genvar i = 0; i < NUM_WAYS-1; ++i) begin : g_i
            if (i == 0) begin : g_i_0
                assign mask[i] = 1'b1;
            end else if (i % 2 == 1) begin : g_i_odd
                assign mask[i] = mask[(i-1)/2] & ~way_idx[WAY_IDX_BITS-$clog2(i+2)+1];
            end else begin : g_i_even
                assign mask[i] = mask[(i-2)/2] & way_idx[WAY_IDX_BITS-$clog2(i+2)+1];
            end
            assign data[i] = ~way_idx[WAY_IDX_BITS-$clog2(i+2)];
        end
        assign lru_data = data;
        assign lru_mask = mask;
    end else begin : g_no_dec
        `UNUSED_VAR (way_idx)
        assign lru_data = '0;
        assign lru_mask = '0;
    end

endmodule

module plru_encoder #(
    parameter NUM_WAYS      = 1,
    parameter WAY_IDX_BITS  = $clog2(NUM_WAYS),
    parameter WAY_IDX_WIDTH = `UP(WAY_IDX_BITS)
) (
    input wire [`UP(NUM_WAYS-1)-1:0] lru_in,
    output wire [WAY_IDX_WIDTH-1:0] way_idx
);
    if (NUM_WAYS > 1) begin : g_enc
        wire [WAY_IDX_BITS-1:0] tmp;
        for (genvar i = 0; i < WAY_IDX_BITS; ++i) begin : g_i
            if (i == 0) begin : g_i_0
                assign tmp[WAY_IDX_WIDTH-1] = lru_in[0];
            end else begin : g_i_n
                VX_mux #(
                    .N (2**i)
                ) mux (
                    .data_in  (lru_in[((2**i)-1)+:(2**i)]),
                    .sel_in   (tmp[WAY_IDX_BITS-1-:i]),
                    .data_out (tmp[WAY_IDX_BITS-1-i])
                );
            end
        end
        assign way_idx = tmp;
    end else begin : g_no_enc
        `UNUSED_VAR (lru_in)
        assign way_idx = '0;
    end

endmodule

module VX_cache_repl #(
    parameter CACHE_SIZE = 1024,
    parameter LINE_SIZE  = 64,                // Size of line inside a bank in bytes
    parameter NUM_BANKS  = 1,                 // Number of banks
    parameter NUM_WAYS   = 1,                 // Number of associative ways
    parameter REPL_POLICY = `CS_REPL_FIFO     // replacement policy
) (
    input wire clk,
    input wire reset,
    input wire stall,
    input wire init,
    input wire lookup_valid,
    input wire lookup_hit,
    input wire [`CS_LINE_SEL_BITS-1:0] lookup_line,
    input wire [`CS_WAY_SEL_WIDTH-1:0] lookup_way,
    input wire repl_valid,
    input wire [`CS_LINE_SEL_BITS-1:0] repl_line,
    input wire [`CS_LINE_SEL_BITS-1:0] repl_line_n, // look-ahead (next) line for sync-BRAM read
    output wire [`CS_WAY_SEL_WIDTH-1:0] repl_way
);
    localparam WAY_SEL_WIDTH = `CS_WAY_SEL_WIDTH;
    `UNUSED_VAR (reset)
    `UNUSED_VAR (init)
    `UNUSED_VAR (stall)

    if (NUM_WAYS > 1) begin : g_enable
        if (REPL_POLICY == `CS_REPL_PLRU) begin : g_plru
            // Pseudo Least Recently Used replacement policy
            `UNUSED_VAR (repl_line) // read uses repl_line_n (look-ahead)
            localparam LRU_WIDTH = `UP(NUM_WAYS-1);

            wire [LRU_WIDTH-1:0] plru_rdata;
            wire [LRU_WIDTH-1:0] plru_wdata;
            wire [LRU_WIDTH-1:0] plru_wmask;

            // Look-ahead read advances every non-stalled cycle (same idiom as
            // the tag store) so the data always tracks the request entering
            // S0; gating it on repl_valid would leave the victim computed
            // from the line captured at the previous fill.
            VX_dp_ram #(
                .DATAW (LRU_WIDTH),
                .SIZE  (`CS_LINES_PER_BANK),
                .WRENW (LRU_WIDTH),
                .OUT_REG (1),
                .RDW_MODE ("R")
            ) plru_store (
                .clk   (clk),
                .reset (1'b0),
                .read  (~stall),
                .write (init || (lookup_valid && lookup_hit)),
                .wren  (init ? '1 : plru_wmask),
                .waddr (lookup_line),
                .raddr (repl_line_n),
                .wdata (init ? '0 : plru_wdata),
                .rdata (plru_rdata)
            );

            plru_decoder #(
                .NUM_WAYS (NUM_WAYS)
            ) plru_dec (
                .way_idx  (lookup_way),
                .lru_data (plru_wdata),
                .lru_mask (plru_wmask)
            );

            plru_encoder #(
                .NUM_WAYS (NUM_WAYS)
            ) plru_enc (
                .lru_in  (plru_rdata),
                .way_idx (repl_way)
            );

        end else if (REPL_POLICY == `CS_REPL_FIFO) begin : g_fifo
            // Fifo replacement policy
            `UNUSED_VAR (lookup_valid)
            `UNUSED_VAR (lookup_hit)
            `UNUSED_VAR (lookup_line)
            `UNUSED_VAR (lookup_way)

            wire [WAY_SEL_WIDTH-1:0] fifo_rdata;
            wire [WAY_SEL_WIDTH-1:0] fifo_wdata = fifo_rdata + 1;

            // Same per-cycle look-ahead as plru_store/tag store; read-first so
            // the fill's own increment is not bypassed into its victim read.
            VX_dp_ram #(
                .DATAW (WAY_SEL_WIDTH),
                .SIZE  (`CS_LINES_PER_BANK),
                .OUT_REG (1),
                .RDW_MODE ("R")
            ) fifo_store (
                .clk   (clk),
                .reset (1'b0),
                .read  (~stall),
                .write (init || repl_valid),
                .wren  (1'b1),
                .waddr (repl_line),
                .raddr (repl_line_n),
                .wdata (init ? '0 : fifo_wdata),
                .rdata (fifo_rdata)
            );

            assign repl_way = fifo_rdata;
        end else begin : g_random
            // Random replacement policy
            `UNUSED_VAR (lookup_valid)
            `UNUSED_VAR (lookup_hit)
            `UNUSED_VAR (lookup_line)
            `UNUSED_VAR (lookup_way)
            `UNUSED_VAR (repl_line)
            `UNUSED_VAR (repl_line_n)
            localparam STATE_W = 2 * WAY_SEL_WIDTH;
            reg [STATE_W-1:0] rng_state;
            // Maximal-period LFSR over STATE_W bits using xnor of top two bits.
            wire rng_fb = ~(rng_state[STATE_W-1] ^ rng_state[STATE_W-2]);
            always @(posedge clk) begin
                if (reset) begin
                    rng_state <= {STATE_W{1'b1}};
                end else if (repl_valid) begin
                    rng_state <= {rng_state[STATE_W-2:0], rng_fb};
                end
            end
            // XOR-mix LFSR with line index so different lines see different
            // victim sequences for the same RNG state.
            assign repl_way = rng_state[WAY_SEL_WIDTH-1:0]
                            ^ rng_state[STATE_W-1 -: WAY_SEL_WIDTH]
                            ^ repl_line[WAY_SEL_WIDTH-1:0];
        end
    end else begin : g_disable
        `UNUSED_VAR (clk)
        `UNUSED_VAR (lookup_valid)
        `UNUSED_VAR (lookup_hit)
        `UNUSED_VAR (lookup_line)
        `UNUSED_VAR (lookup_way)
        `UNUSED_VAR (repl_valid)
        `UNUSED_VAR (repl_line)
        `UNUSED_VAR (repl_line_n)
        assign repl_way = 1'b0;
    end

endmodule
// Copyright © 2019-2023
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

`include "VX_cache_define.vh"

module VX_cache import VX_gpu_pkg::*; #(
    parameter `STRING INSTANCE_ID   = "",

    parameter NUM_REQS              = 4,      // Number of Word requests per cycle

    parameter MEM_PORTS             = 1,      // Number of memory ports

    parameter CACHE_SIZE            = 32768,  // Size of cache in bytes
    parameter LINE_SIZE             = 64,     // Size of line inside a bank in bytes
    parameter NUM_BANKS             = 4,      // Number of banks
    parameter NUM_WAYS              = 4,      // Number of associative ways
    parameter WORD_SIZE             = 16,     // Size of a word in bytes
    parameter SECTOR_SIZE           = LINE_SIZE, // Size of a sector in bytes (fill/eviction/mem-request granule); = LINE_SIZE => 1 sector

    parameter CRSQ_SIZE             = 0,      // Core Response Queue Size
    parameter MSHR_SIZE             = 16,     // Miss Reserv Queue Knob
    parameter MRSQ_SIZE             = 4,      // Memory Response Queue Size
    parameter MREQ_SIZE             = 0,      // Memory Request Queue Size (0 = derived minimum)

    parameter LATENCY               = 2,      // Bank pipeline depth (2 = classic lookup+commit; larger defers the data array)

    parameter WRITE_ENABLE          = 1,      // Enable cache writeable

    parameter WRITEBACK             = 0,      // Enable cache writeback

    parameter DIRTY_BYTES           = 0,      // Enable dirty bytes on writeback

    parameter REPL_POLICY           = `CS_REPL_FIFO, // Replacement policy

    parameter TAG_WIDTH             = UUID_WIDTH + 1, // core request tag size

    parameter CORE_OUT_BUF          = 3,      // core response output buffer (bank-level buffering derived internally)
    parameter MEM_OUT_BUF           = 3,

    parameter IS_LLC                = 0,      // last-level cache: banks own AMO commit + RVA reservation tracking

    parameter AMO_ENABLE            = 0       // synthesize atomic-op logic in the banks
 ) (
`ifdef PERF_ENABLE
    output cache_perf_t     cache_perf,
`endif
    input wire clk,
    input wire reset,
    VX_mem_bus_if.slave     core_bus_if [NUM_REQS],
    VX_mem_bus_if.master    mem_bus_if [MEM_PORTS]
);
    `STATIC_ASSERT(NUM_BANKS == (1 << `CLOG2(NUM_BANKS)), ("invalid parameter: number of banks must be power of 2"))
    `STATIC_ASSERT(WRITE_ENABLE || !WRITEBACK, ("invalid parameter: writeback requires write enable"))
    `STATIC_ASSERT(WRITEBACK || !DIRTY_BYTES, ("invalid parameter: dirty bytes require writeback"))
    `STATIC_ASSERT(NUM_BANKS >= MEM_PORTS, ("invalid parameter: number of banks must be greater or equal to number of memory ports"))
    localparam REQ_SEL_WIDTH   = `UP(`CS_REQ_SEL_BITS);
    localparam WORD_SEL_WIDTH  = `UP(`CS_WORD_SEL_BITS);
    localparam MSHR_ADDR_WIDTH = `LOG2UP(MSHR_SIZE);
    localparam MEM_TAG_WIDTH   = `CACHE_MEM_TAG_WIDTH(MSHR_SIZE, NUM_BANKS, MEM_PORTS, UUID_WIDTH);
    localparam WORDS_PER_LINE  = LINE_SIZE / WORD_SIZE;
    localparam WORD_WIDTH      = WORD_SIZE * 8;
    localparam WORD_SEL_BITS   = `CLOG2(WORDS_PER_LINE);
    localparam BANK_SEL_BITS   = `CLOG2(NUM_BANKS);
    localparam BANK_SEL_WIDTH  = `UP(BANK_SEL_BITS);
    localparam LINE_ADDR_WIDTH = (`CS_WORD_ADDR_WIDTH - BANK_SEL_BITS - WORD_SEL_BITS);
    localparam CORE_REQ_DATAW  = LINE_ADDR_WIDTH + 1 + WORD_SEL_WIDTH + WORD_SIZE + WORD_WIDTH + TAG_WIDTH + `UP(MEM_ATTR_WIDTH);
    localparam CORE_RSP_DATAW  = WORD_WIDTH + TAG_WIDTH;
    localparam BANK_MEM_TAG_WIDTH = UUID_WIDTH + MSHR_ADDR_WIDTH;
    localparam MEM_REQ_DATAW   = (`CS_LINE_SECTOR_ADDR_WIDTH + 1 + SECTOR_SIZE + `CS_SECTOR_WIDTH + BANK_MEM_TAG_WIDTH + `UP(MEM_ATTR_WIDTH));
    localparam MEM_RSP_DATAW   = `CS_SECTOR_WIDTH + MEM_TAG_WIDTH;
    localparam MEM_PORTS_SEL_BITS = `CLOG2(MEM_PORTS);
    localparam MEM_PORTS_SEL_WIDTH = `UP(MEM_PORTS_SEL_BITS);
    localparam MEM_ARB_SEL_BITS = `CLOG2(`CDIV(NUM_BANKS, MEM_PORTS));
    localparam REQ_XBAR_BUF    = (NUM_REQS > 2) ? 2 : 0;
    localparam CORE_RSP_BUF_ENABLE = (NUM_BANKS != 1) || (NUM_REQS != 1);
    localparam MEM_REQ_BUF_ENABLE = (NUM_BANKS != 1);
`ifdef PERF_ENABLE
    wire [NUM_BANKS-1:0] perf_read_miss_per_bank;
    wire [NUM_BANKS-1:0] perf_write_miss_per_bank;
    wire [NUM_BANKS-1:0] perf_evictions_per_bank;
    wire [NUM_BANKS-1:0] perf_mshr_stall_per_bank;
`endif
    VX_mem_bus_if #(
        .DATA_SIZE (WORD_SIZE),
        .TAG_WIDTH (TAG_WIDTH)
    ) core_bus2_if[NUM_REQS]();
    wire [NUM_BANKS-1:0] per_bank_flush_begin;
    wire [`UP(UUID_WIDTH)-1:0] flush_uuid;
    wire [NUM_BANKS-1:0] per_bank_flush_end;
    wire [NUM_BANKS-1:0] per_bank_core_req_fire;
    VX_cache_init #(
        .NUM_REQS  (NUM_REQS),
        .NUM_BANKS (NUM_BANKS),
        .TAG_WIDTH (TAG_WIDTH),
        .BANK_SEL_LATENCY (`TO_OUT_BUF_REG(REQ_XBAR_BUF)) // request xbar latency
    ) cache_init (
        .clk             (clk),
        .reset           (reset),
        .core_bus_in_if  (core_bus_if),
        .core_bus_out_if (core_bus2_if),
        .bank_req_fire   (per_bank_core_req_fire),
        .flush_begin     (per_bank_flush_begin),
        .flush_uuid      (flush_uuid),
        .flush_end       (per_bank_flush_end)
    );
    VX_mem_bus_if #(
        .DATA_SIZE (SECTOR_SIZE),
        .TAG_WIDTH (MEM_TAG_WIDTH)
    ) mem_bus_tmp_if[MEM_PORTS]();
    wire [MEM_PORTS-1:0]                    mem_rsp_queue_valid;
    wire [MEM_PORTS-1:0][MEM_RSP_DATAW-1:0] mem_rsp_queue_data;
    wire [MEM_PORTS-1:0]                    mem_rsp_queue_ready;
    for (genvar i = 0; i < MEM_PORTS; ++i) begin : g_mem_rsp_queue
        VX_elastic_buffer #(
            .DATAW   (MEM_RSP_DATAW),
            .SIZE    (MRSQ_SIZE),
            .OUT_REG (MRSQ_SIZE > 2)
        ) mem_rsp_queue (
            .clk        (clk),
            .reset      (reset),
            .valid_in   (mem_bus_tmp_if[i].rsp_valid),
            .data_in    (mem_bus_tmp_if[i].rsp_data),
            .ready_in   (mem_bus_tmp_if[i].rsp_ready),
            .valid_out  (mem_rsp_queue_valid[i]),
            .data_out   (mem_rsp_queue_data[i]),
            .ready_out  (mem_rsp_queue_ready[i])
        );
    end
    wire [MEM_PORTS-1:0][MEM_RSP_DATAW-MEM_ARB_SEL_BITS-1:0] mem_rsp_queue_data_s;
    wire [MEM_PORTS-1:0][BANK_SEL_WIDTH-1:0] mem_rsp_queue_sel;
    for (genvar i = 0; i < MEM_PORTS; ++i) begin : g_mem_rsp_queue_data_s
        wire [BANK_MEM_TAG_WIDTH-1:0] mem_rsp_tag_s = mem_rsp_queue_data[i][MEM_TAG_WIDTH-1:MEM_ARB_SEL_BITS];
        wire [`CS_SECTOR_WIDTH-1:0] mem_rsp_data_s = mem_rsp_queue_data[i][MEM_RSP_DATAW-1:MEM_TAG_WIDTH];
        assign mem_rsp_queue_data_s[i] = {mem_rsp_data_s, mem_rsp_tag_s};
    end
    for (genvar i = 0; i < MEM_PORTS; ++i) begin : g_mem_rsp_queue_sel
        if (NUM_BANKS > 1) begin : g_multibanks
            if (NUM_BANKS != MEM_PORTS) begin : g_arb_sel
                VX_bits_concat #(
                    .L (MEM_ARB_SEL_BITS),
                    .R (MEM_PORTS_SEL_BITS)
                ) mem_rsp_sel_concat (
                    .left_in  (mem_rsp_queue_data[i][MEM_ARB_SEL_BITS-1:0]),
                    .right_in (MEM_PORTS_SEL_WIDTH'(i)),
                    .data_out (mem_rsp_queue_sel[i])
                );
            end else begin : g_no_arb_sel
                assign mem_rsp_queue_sel[i] = MEM_PORTS_SEL_WIDTH'(i);
            end
        end else begin : g_singlebank
            assign mem_rsp_queue_sel[i] = 0;
        end
    end
    wire [NUM_BANKS-1:0] per_bank_mem_rsp_valid;
    wire [NUM_BANKS-1:0][MEM_RSP_DATAW-MEM_ARB_SEL_BITS-1:0] per_bank_mem_rsp_pdata;
    wire [NUM_BANKS-1:0] per_bank_mem_rsp_ready;
    VX_stream_omega #(
        .NUM_INPUTS  (MEM_PORTS),
        .NUM_OUTPUTS (NUM_BANKS),
        .DATAW       (MEM_RSP_DATAW-MEM_ARB_SEL_BITS),
        .ARBITER     ("R"),
        .OUT_BUF     (3)
    ) mem_rsp_xbar (
        .clk       (clk),
        .reset     (reset),
        .valid_in  (mem_rsp_queue_valid),
        .data_in   (mem_rsp_queue_data_s),
        .sel_in    (mem_rsp_queue_sel),
        .ready_in  (mem_rsp_queue_ready),
        .valid_out (per_bank_mem_rsp_valid),
        .data_out  (per_bank_mem_rsp_pdata),
        `UNUSED_PIN (sel_out),
        .ready_out (per_bank_mem_rsp_ready),
        `UNUSED_PIN (collisions)
    );
    wire [NUM_BANKS-1:0][`CS_SECTOR_WIDTH-1:0] per_bank_mem_rsp_data;
    wire [NUM_BANKS-1:0][BANK_MEM_TAG_WIDTH-1:0] per_bank_mem_rsp_tag;
    for (genvar i = 0; i < NUM_BANKS; ++i) begin : g_per_bank_mem_rsp_data
        assign {
            per_bank_mem_rsp_data[i],
            per_bank_mem_rsp_tag[i]
        } = per_bank_mem_rsp_pdata[i];
    end
    wire [NUM_BANKS-1:0]                        per_bank_core_req_valid;
    wire [NUM_BANKS-1:0][`CS_LINE_ADDR_WIDTH-1:0] per_bank_core_req_addr;
    wire [NUM_BANKS-1:0]                        per_bank_core_req_rw;
    wire [NUM_BANKS-1:0][WORD_SEL_WIDTH-1:0]    per_bank_core_req_wsel;
    wire [NUM_BANKS-1:0][WORD_SIZE-1:0]         per_bank_core_req_byteen;
    wire [NUM_BANKS-1:0][`CS_WORD_WIDTH-1:0]    per_bank_core_req_data;
    wire [NUM_BANKS-1:0][TAG_WIDTH-1:0]         per_bank_core_req_tag;
    wire [NUM_BANKS-1:0][REQ_SEL_WIDTH-1:0]     per_bank_core_req_idx;
    wire [NUM_BANKS-1:0][`UP(MEM_ATTR_WIDTH)-1:0]  per_bank_core_req_attr;
    wire [NUM_BANKS-1:0]                        per_bank_core_req_ready;
    wire [NUM_BANKS-1:0]                        per_bank_core_rsp_valid;
    wire [NUM_BANKS-1:0][`CS_WORD_WIDTH-1:0]    per_bank_core_rsp_data;
    wire [NUM_BANKS-1:0][TAG_WIDTH-1:0]         per_bank_core_rsp_tag;
    wire [NUM_BANKS-1:0][REQ_SEL_WIDTH-1:0]     per_bank_core_rsp_idx;
    wire [NUM_BANKS-1:0]                        per_bank_core_rsp_ready;
    wire [NUM_BANKS-1:0]                        per_bank_mem_req_valid;
    wire [NUM_BANKS-1:0][`CS_LINE_SECTOR_ADDR_WIDTH-1:0] per_bank_mem_req_addr;
    wire [NUM_BANKS-1:0]                        per_bank_mem_req_rw;
    wire [NUM_BANKS-1:0][SECTOR_SIZE-1:0]       per_bank_mem_req_byteen;
    wire [NUM_BANKS-1:0][`CS_SECTOR_WIDTH-1:0]  per_bank_mem_req_data;
    wire [NUM_BANKS-1:0][BANK_MEM_TAG_WIDTH-1:0] per_bank_mem_req_tag;
    wire [NUM_BANKS-1:0][`UP(MEM_ATTR_WIDTH)-1:0]  per_bank_mem_req_attr;
    wire [NUM_BANKS-1:0]                        per_bank_mem_req_ready;
    wire [NUM_REQS-1:0]                      core_req_valid;
    wire [NUM_REQS-1:0][`CS_WORD_ADDR_WIDTH-1:0] core_req_addr;
    wire [NUM_REQS-1:0]                      core_req_rw;
    wire [NUM_REQS-1:0][WORD_SIZE-1:0]       core_req_byteen;
    wire [NUM_REQS-1:0][`CS_WORD_WIDTH-1:0]  core_req_data;
    wire [NUM_REQS-1:0][TAG_WIDTH-1:0]       core_req_tag;
    wire [NUM_REQS-1:0][`UP(MEM_ATTR_WIDTH)-1:0] core_req_attr;
    wire [NUM_REQS-1:0]                      core_req_ready;
    wire [NUM_REQS-1:0][LINE_ADDR_WIDTH-1:0] core_req_line_addr;
    wire [NUM_REQS-1:0][BANK_SEL_WIDTH-1:0]  core_req_bid;
    wire [NUM_REQS-1:0][WORD_SEL_WIDTH-1:0]  core_req_wsel;
    wire [NUM_REQS-1:0][CORE_REQ_DATAW-1:0]  core_req_data_in;
    wire [NUM_BANKS-1:0][CORE_REQ_DATAW-1:0] core_req_data_out;
    for (genvar i = 0; i < NUM_REQS; ++i) begin : g_core_req
        assign core_req_valid[i]  = core_bus2_if[i].req_valid;
        assign core_req_rw[i]     = core_bus2_if[i].req_data.rw;
        assign core_req_byteen[i] = core_bus2_if[i].req_data.byteen;
        assign core_req_addr[i]   = core_bus2_if[i].req_data.addr;
        assign core_req_data[i]   = core_bus2_if[i].req_data.data;
        assign core_req_tag[i]    = core_bus2_if[i].req_data.tag;
        assign core_req_attr[i]  = `UP(MEM_ATTR_WIDTH)'(core_bus2_if[i].req_data.attr);
        assign core_bus2_if[i].req_ready = core_req_ready[i];
    end
    for (genvar i = 0; i < NUM_REQS; ++i) begin : g_core_req_wsel
        if (WORDS_PER_LINE > 1) begin : g_wsel
            assign core_req_wsel[i] = core_req_addr[i][0 +: WORD_SEL_BITS];
        end else begin : g_no_wsel
            assign core_req_wsel[i] = '0;
        end
    end
    for (genvar i = 0; i < NUM_REQS; ++i) begin : g_core_req_line_addr
        assign core_req_line_addr[i] = core_req_addr[i][(BANK_SEL_BITS + WORD_SEL_BITS) +: LINE_ADDR_WIDTH];
    end
    for (genvar i = 0; i < NUM_REQS; ++i) begin : g_core_req_bid
        if (NUM_BANKS > 1) begin : g_multibanks
            assign core_req_bid[i] = core_req_addr[i][WORD_SEL_BITS +: BANK_SEL_BITS];
        end else begin : g_singlebank
            assign core_req_bid[i] = '0;
        end
    end
    for (genvar i = 0; i < NUM_REQS; ++i) begin : g_core_req_data_in
        assign core_req_data_in[i] = {
            core_req_line_addr[i],
            core_req_rw[i],
            core_req_wsel[i],
            core_req_byteen[i],
            core_req_data[i],
            core_req_tag[i],
            core_req_attr[i]
        };
    end
    assign per_bank_core_req_fire = per_bank_core_req_valid & per_bank_mem_req_ready;
`ifdef PERF_ENABLE
    wire [PERF_CTR_BITS-1:0] perf_collisions;
`endif
    VX_stream_xbar #(
        .NUM_INPUTS  (NUM_REQS),
        .NUM_OUTPUTS (NUM_BANKS),
        .DATAW       (CORE_REQ_DATAW),
        .PERF_CTR_BITS (PERF_CTR_BITS),
        .ARBITER     ("R"),
        .OUT_BUF     (REQ_XBAR_BUF)
    ) core_req_xbar (
        .clk       (clk),
        .reset     (reset),
    `ifdef PERF_ENABLE
        .collisions(perf_collisions),
    `else
        `UNUSED_PIN(collisions),
    `endif
        .valid_in  (core_req_valid),
        .data_in   (core_req_data_in),
        .sel_in    (core_req_bid),
        .ready_in  (core_req_ready),
        .valid_out (per_bank_core_req_valid),
        .data_out  (core_req_data_out),
        .sel_out   (per_bank_core_req_idx),
        .ready_out (per_bank_core_req_ready)
    );
    for (genvar i = 0; i < NUM_BANKS; ++i) begin : g_core_req_data_out
        assign {
            per_bank_core_req_addr[i],
            per_bank_core_req_rw[i],
            per_bank_core_req_wsel[i],
            per_bank_core_req_byteen[i],
            per_bank_core_req_data[i],
            per_bank_core_req_tag[i],
            per_bank_core_req_attr[i]
        } = core_req_data_out[i];
    end
    for (genvar bank_id = 0; bank_id < NUM_BANKS; ++bank_id) begin : g_banks
        VX_cache_bank #(
            .BANK_ID      (bank_id),
            .INSTANCE_ID  (`SFORMATF(("%s-bank%0d", INSTANCE_ID, bank_id))),
            .CACHE_SIZE   (CACHE_SIZE),
            .LINE_SIZE    (LINE_SIZE),
            .NUM_BANKS    (NUM_BANKS),
            .NUM_WAYS     (NUM_WAYS),
            .WORD_SIZE    (WORD_SIZE),
            .SECTOR_SIZE  (SECTOR_SIZE),
            .NUM_REQS     (NUM_REQS),
            .WRITE_ENABLE (WRITE_ENABLE),
            .WRITEBACK    (WRITEBACK),
            .DIRTY_BYTES  (DIRTY_BYTES),
            .REPL_POLICY  (REPL_POLICY),
            .CRSQ_SIZE    (CRSQ_SIZE),
            .MSHR_SIZE    (MSHR_SIZE),
            .MRSQ_SIZE    (MRSQ_SIZE),
            .MREQ_SIZE    (MREQ_SIZE),
            .LATENCY      (LATENCY),
            .TAG_WIDTH    (TAG_WIDTH),
            .CORE_OUT_BUF (CORE_RSP_BUF_ENABLE ? 3 : 0),
            .MEM_OUT_BUF  (MEM_REQ_BUF_ENABLE ? 3 : 0),
            .IS_LLC       (IS_LLC),
            .AMO_ENABLE   (AMO_ENABLE)
        ) bank (
            .clk                (clk),
            .reset              (reset),
        `ifdef PERF_ENABLE
            .perf_read_miss     (perf_read_miss_per_bank[bank_id]),
            .perf_write_miss    (perf_write_miss_per_bank[bank_id]),
            .perf_evictions     (perf_evictions_per_bank[bank_id]),
            .perf_mshr_stall    (perf_mshr_stall_per_bank[bank_id]),
        `endif
            .core_req_valid     (per_bank_core_req_valid[bank_id]),
            .core_req_addr      (per_bank_core_req_addr[bank_id]),
            .core_req_rw        (per_bank_core_req_rw[bank_id]),
            .core_req_wsel      (per_bank_core_req_wsel[bank_id]),
            .core_req_byteen    (per_bank_core_req_byteen[bank_id]),
            .core_req_data      (per_bank_core_req_data[bank_id]),
            .core_req_tag       (per_bank_core_req_tag[bank_id]),
            .core_req_idx       (per_bank_core_req_idx[bank_id]),
            .core_req_attr      (per_bank_core_req_attr[bank_id]),
            .core_req_ready     (per_bank_core_req_ready[bank_id]),
            .core_rsp_valid     (per_bank_core_rsp_valid[bank_id]),
            .core_rsp_data      (per_bank_core_rsp_data[bank_id]),
            .core_rsp_tag       (per_bank_core_rsp_tag[bank_id]),
            .core_rsp_idx       (per_bank_core_rsp_idx[bank_id]),
            .core_rsp_ready     (per_bank_core_rsp_ready[bank_id]),
            .mem_req_valid      (per_bank_mem_req_valid[bank_id]),
            .mem_req_addr       (per_bank_mem_req_addr[bank_id]),
            .mem_req_rw         (per_bank_mem_req_rw[bank_id]),
            .mem_req_byteen     (per_bank_mem_req_byteen[bank_id]),
            .mem_req_data       (per_bank_mem_req_data[bank_id]),
            .mem_req_tag        (per_bank_mem_req_tag[bank_id]),
            .mem_req_attr      (per_bank_mem_req_attr[bank_id]),
            .mem_req_ready      (per_bank_mem_req_ready[bank_id]),
            .mem_rsp_valid      (per_bank_mem_rsp_valid[bank_id]),
            .mem_rsp_data       (per_bank_mem_rsp_data[bank_id]),
            .mem_rsp_tag        (per_bank_mem_rsp_tag[bank_id]),
            .mem_rsp_ready      (per_bank_mem_rsp_ready[bank_id]),
            .flush_begin        (per_bank_flush_begin[bank_id]),
            .flush_uuid         (flush_uuid),
            .flush_end          (per_bank_flush_end[bank_id])
        );
    end
    wire [NUM_REQS-1:0]                  core_rsp_valid;
    wire [NUM_REQS-1:0][CORE_RSP_DATAW-1:0] core_rsp_pdata;
    wire [NUM_REQS-1:0]                  core_rsp_ready;
    wire [NUM_BANKS-1:0][CORE_RSP_DATAW-1:0] per_bank_core_rsp_pdata;
    for (genvar i = 0; i < NUM_BANKS; ++i) begin : g_per_bank_core_rsp_pdata
        assign per_bank_core_rsp_pdata[i] = {per_bank_core_rsp_data[i], per_bank_core_rsp_tag[i]};
    end
    VX_stream_omega #(
        .NUM_INPUTS  (NUM_BANKS),
        .NUM_OUTPUTS (NUM_REQS),
        .DATAW       (CORE_RSP_DATAW),
        .ARBITER     ("R"),
        .OUT_BUF     (CORE_OUT_BUF)
    ) core_rsp_xbar (
        .clk       (clk),
        .reset     (reset),
        .valid_in  (per_bank_core_rsp_valid),
        .data_in   (per_bank_core_rsp_pdata),
        .sel_in    (per_bank_core_rsp_idx),
        .ready_in  (per_bank_core_rsp_ready),
        .valid_out (core_rsp_valid),
        .data_out  (core_rsp_pdata),
        `UNUSED_PIN (sel_out),
        .ready_out (core_rsp_ready),
        `UNUSED_PIN (collisions)
    );
    for (genvar i = 0; i < NUM_REQS; ++i) begin : g_core_rsp
        assign core_bus2_if[i].rsp_valid = core_rsp_valid[i];
        assign {core_bus2_if[i].rsp_data.data, core_bus2_if[i].rsp_data.tag} = core_rsp_pdata[i];
        assign core_rsp_ready[i] = core_bus2_if[i].rsp_ready;
    end
    wire [NUM_BANKS-1:0][MEM_REQ_DATAW-1:0] per_bank_mem_req_pdata;
    for (genvar i = 0; i < NUM_BANKS; ++i) begin : g_per_bank_mem_req_pdata
        assign per_bank_mem_req_pdata[i] = {
            per_bank_mem_req_addr[i],
            per_bank_mem_req_rw[i],
            per_bank_mem_req_byteen[i],
            per_bank_mem_req_data[i],
            per_bank_mem_req_tag[i],
            per_bank_mem_req_attr[i]
        };
    end
    wire [NUM_BANKS-1:0][MEM_PORTS_SEL_WIDTH-1:0] per_bank_mem_req_bid;
    for (genvar i = 0; i < NUM_BANKS; ++i) begin : g_per_bank_mem_req_bid
        if (MEM_PORTS > 1) begin : g_multiports
            assign per_bank_mem_req_bid[i] = MEM_PORTS_SEL_WIDTH'(i[MEM_PORTS_SEL_BITS-1:0]);
        end else begin : g_singleport
            assign per_bank_mem_req_bid[i] = 0;
        end
    end
    wire [MEM_PORTS-1:0][MEM_REQ_DATAW-1:0] mem_req_pdata;
    wire [MEM_PORTS-1:0]                    mem_req_tmp_valid;
    wire [MEM_PORTS-1:0][`UP(`LOG2UP(NUM_BANKS))-1:0] mem_req_tmp_idx;
    wire [MEM_PORTS-1:0]                    mem_req_tmp_ready;
    VX_stream_omega #(
        .NUM_INPUTS  (NUM_BANKS),
        .NUM_OUTPUTS (MEM_PORTS),
        .DATAW       (MEM_REQ_DATAW),
        .ARBITER     ("R"),
        .OUT_BUF     (MEM_OUT_BUF)
    ) mem_req_xbar (
        .clk       (clk),
        .reset     (reset),
        .valid_in  (per_bank_mem_req_valid),
        .data_in   (per_bank_mem_req_pdata),
        .sel_in    (per_bank_mem_req_bid),
        .ready_in  (per_bank_mem_req_ready),
        .valid_out (mem_req_tmp_valid),
        .data_out  (mem_req_pdata),
        .sel_out   (mem_req_tmp_idx),
        .ready_out (mem_req_tmp_ready),
        `UNUSED_PIN (collisions)
    );
    for (genvar i = 0; i < MEM_PORTS; ++i) begin : g_mem_bus_tmp_if
        wire                            mem_req_rw_w;
        wire [`CS_LINE_SECTOR_ADDR_WIDTH-1:0] mem_req_addr_w;
        wire [SECTOR_SIZE-1:0]          mem_req_byteen_w;
        wire [`CS_SECTOR_WIDTH-1:0]     mem_req_data_w;
        wire [BANK_MEM_TAG_WIDTH-1:0]   mem_req_tag_w;
        wire [`UP(MEM_ATTR_WIDTH)-1:0]  mem_req_attr_w;
        assign {
            mem_req_addr_w,
            mem_req_rw_w,
            mem_req_byteen_w,
            mem_req_data_w,
            mem_req_tag_w,
            mem_req_attr_w
        } = mem_req_pdata[i];
        assign mem_bus_tmp_if[i].req_valid       = mem_req_tmp_valid[i];
        assign mem_bus_tmp_if[i].req_data.rw     = mem_req_rw_w;
        assign mem_bus_tmp_if[i].req_data.byteen = mem_req_byteen_w;
        assign mem_bus_tmp_if[i].req_data.data   = mem_req_data_w;
        assign mem_bus_tmp_if[i].req_data.attr   = mem_req_attr_w;
        wire [`CS_LINE_ADDR_WIDTH-1:0] mem_req_line_w = mem_req_addr_w[`CS_LINE_SECTOR_ADDR_WIDTH-1 -: `CS_LINE_ADDR_WIDTH];
        wire [`UP(`CS_SECTOR_SEL_BITS)-1:0] mem_req_sec_w;
        if (`CS_SECTOR_SEL_BITS != 0) begin : g_sec_w
            assign mem_req_sec_w = mem_req_addr_w[`CS_SECTOR_SEL_BITS-1:0];
        end else begin : g_no_sec_w
            assign mem_req_sec_w = '0;
        end
        if (NUM_BANKS > 1) begin : g_multibanks
            if (NUM_BANKS != MEM_PORTS) begin : g_arb_sel
                wire [MEM_ARB_SEL_BITS-1:0] mem_req_arb_sel;
                assign mem_req_arb_sel = mem_req_tmp_idx[i][`LOG2UP(NUM_BANKS)-1 -: MEM_ARB_SEL_BITS];
                assign mem_bus_tmp_if[i].req_data.addr = (`CS_MEM_SECTOR_ADDR_WIDTH'({mem_req_line_w, mem_req_tmp_idx[i]}) << `CS_SECTOR_SEL_BITS)
                                                       | `CS_MEM_SECTOR_ADDR_WIDTH'(mem_req_sec_w);
                assign mem_bus_tmp_if[i].req_data.tag  = {mem_req_tag_w, mem_req_arb_sel};
            end else begin : g_no_arb_sel
                `UNUSED_VAR (mem_req_tmp_idx)
                assign mem_bus_tmp_if[i].req_data.addr = (`CS_MEM_SECTOR_ADDR_WIDTH'({mem_req_line_w, MEM_PORTS_SEL_WIDTH'(i)}) << `CS_SECTOR_SEL_BITS)
                                                       | `CS_MEM_SECTOR_ADDR_WIDTH'(mem_req_sec_w);
                assign mem_bus_tmp_if[i].req_data.tag  = MEM_TAG_WIDTH'(mem_req_tag_w);
            end
        end else begin : g_singlebank
            `UNUSED_VAR (mem_req_tmp_idx)
            `UNUSED_VAR (mem_req_line_w)
            `UNUSED_VAR (mem_req_sec_w)
            assign mem_bus_tmp_if[i].req_data.addr = `CS_MEM_SECTOR_ADDR_WIDTH'(mem_req_addr_w);
            assign mem_bus_tmp_if[i].req_data.tag  = MEM_TAG_WIDTH'(mem_req_tag_w);
        end
        assign mem_req_tmp_ready[i] = mem_bus_tmp_if[i].req_ready;
    end
    for (genvar i = 0; i < MEM_PORTS; ++i) begin : g_mem_bus_if
        if (WRITE_ENABLE) begin : g_rw
            `ASSIGN_VX_MEM_BUS_IF (mem_bus_if[i], mem_bus_tmp_if[i]);
        end else begin : g_ro
            `ASSIGN_VX_MEM_BUS_RO_IF (mem_bus_if[i], mem_bus_tmp_if[i]);
        end
    end
`ifdef PERF_ENABLE
    wire [NUM_REQS-1:0]  perf_core_reads_per_req;
    wire [NUM_REQS-1:0]  perf_core_writes_per_req;
    wire [NUM_REQS-1:0]  perf_crsp_stall_per_req;
    wire [MEM_PORTS-1:0] perf_mem_stall_per_port;
    `BUFFER(perf_core_reads_per_req, core_req_valid & core_req_ready & ~core_req_rw);
    `BUFFER(perf_core_writes_per_req, core_req_valid & core_req_ready & core_req_rw);
    for (genvar i = 0; i < NUM_REQS; ++i) begin : g_perf_crsp_stall_per_req
        assign perf_crsp_stall_per_req[i] = core_bus_if[i].rsp_valid && ~core_bus_if[i].rsp_ready;
    end
    for (genvar i = 0; i < MEM_PORTS; ++i) begin : g_perf_mem_stall_per_port
        assign perf_mem_stall_per_port[i] = mem_bus_if[i].req_valid && ~mem_bus_if[i].req_ready;
    end
    wire [`CLOG2(NUM_REQS+1)-1:0]  perf_core_reads_per_cycle;
    wire [`CLOG2(NUM_REQS+1)-1:0]  perf_core_writes_per_cycle;
    wire [`CLOG2(NUM_REQS+1)-1:0]  perf_crsp_stall_per_cycle;
    wire [`CLOG2(NUM_BANKS+1)-1:0] perf_read_miss_per_cycle;
    wire [`CLOG2(NUM_BANKS+1)-1:0] perf_write_miss_per_cycle;
    wire [`CLOG2(NUM_BANKS+1)-1:0] perf_evictions_per_cycle;
    wire [`CLOG2(NUM_BANKS+1)-1:0] perf_mshr_stall_per_cycle;
    wire [`CLOG2(MEM_PORTS+1)-1:0] perf_mem_stall_per_cycle;
    `POP_COUNT(perf_core_reads_per_cycle, perf_core_reads_per_req);
    `POP_COUNT(perf_core_writes_per_cycle, perf_core_writes_per_req);
    `POP_COUNT(perf_read_miss_per_cycle, perf_read_miss_per_bank);
    `POP_COUNT(perf_write_miss_per_cycle, perf_write_miss_per_bank);
    `POP_COUNT(perf_evictions_per_cycle, perf_evictions_per_bank);
    `POP_COUNT(perf_mshr_stall_per_cycle, perf_mshr_stall_per_bank);
    `POP_COUNT(perf_crsp_stall_per_cycle, perf_crsp_stall_per_req);
    `POP_COUNT(perf_mem_stall_per_cycle, perf_mem_stall_per_port);
    reg [PERF_CTR_BITS-1:0] perf_core_reads;
    reg [PERF_CTR_BITS-1:0] perf_core_writes;
    reg [PERF_CTR_BITS-1:0] perf_read_misses;
    reg [PERF_CTR_BITS-1:0] perf_write_misses;
    reg [PERF_CTR_BITS-1:0] perf_evictions;
    reg [PERF_CTR_BITS-1:0] perf_mshr_stalls;
    reg [PERF_CTR_BITS-1:0] perf_mem_stalls;
    reg [PERF_CTR_BITS-1:0] perf_crsp_stalls;
    always @(posedge clk) begin
        if (reset) begin
            perf_core_reads   <= '0;
            perf_core_writes  <= '0;
            perf_read_misses  <= '0;
            perf_write_misses <= '0;
            perf_evictions    <= '0;
            perf_mshr_stalls  <= '0;
            perf_mem_stalls   <= '0;
            perf_crsp_stalls  <= '0;
        end else begin
            perf_core_reads   <= perf_core_reads   + PERF_CTR_BITS'(perf_core_reads_per_cycle);
            perf_core_writes  <= perf_core_writes  + PERF_CTR_BITS'(perf_core_writes_per_cycle);
            perf_read_misses  <= perf_read_misses  + PERF_CTR_BITS'(perf_read_miss_per_cycle);
            perf_write_misses <= perf_write_misses + PERF_CTR_BITS'(perf_write_miss_per_cycle);
            perf_evictions    <= perf_evictions    + PERF_CTR_BITS'(perf_evictions_per_cycle);
            perf_mshr_stalls  <= perf_mshr_stalls  + PERF_CTR_BITS'(perf_mshr_stall_per_cycle);
            perf_mem_stalls   <= perf_mem_stalls   + PERF_CTR_BITS'(perf_mem_stall_per_cycle);
            perf_crsp_stalls  <= perf_crsp_stalls  + PERF_CTR_BITS'(perf_crsp_stall_per_cycle);
        end
    end
    assign cache_perf.reads        = perf_core_reads;
    assign cache_perf.writes       = perf_core_writes;
    assign cache_perf.read_misses  = perf_read_misses;
    assign cache_perf.write_misses = perf_write_misses;
    assign cache_perf.evictions    = perf_evictions;
    assign cache_perf.bank_stalls  = perf_collisions;
    assign cache_perf.mshr_stalls  = perf_mshr_stalls;
    assign cache_perf.mem_stalls   = perf_mem_stalls;
    assign cache_perf.crsp_stalls  = perf_crsp_stalls;
`endif
endmodule
// Copyright © 2019-2023
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

`include "VX_cache_define.vh"

// Single-array tag store with per-way write-enable.
//
// All NUM_WAYS tags for a set live in one block-RAM word (read in parallel for
// the hit compare); a per-way write-enable updates a single way on a
// fill/write/invalidate without a read-modify-write. This replaces the
// previous NUM_WAYS separate tag arrays with one BRAM.

module VX_cache_tags import VX_gpu_pkg::*; #(
    parameter CACHE_SIZE    = 1024,           // Size of cache in bytes
    parameter LINE_SIZE     = 16,             // Size of line inside a bank in bytes
    parameter NUM_BANKS     = 1,              // Number of banks
    parameter NUM_WAYS      = 1,              // Number of associative ways
    parameter WORD_SIZE     = 1,              // Size of a word in bytes
    parameter SECTOR_SIZE   = LINE_SIZE,      // Size of a sector in bytes (fill/eviction granule); = LINE_SIZE => 1 sector
    parameter WRITEBACK     = 0,              // Enable cache writeback
    parameter AMO_ENABLE    = 0               // Enable the AMO-passthrough line invalidate (non-LLC banks only)
) (
    input wire                          clk,
    input wire                          reset,

    // inputs
    input wire                          stall,
    input wire                          init,
    input wire                          flush,
    input wire                          fill,
    input wire                          read,
    input wire                          write,
    input wire                          invalidate, // clear valid on the hit way
    input wire [`CS_LINE_SEL_BITS-1:0]  line_idx,
    input wire [`CS_LINE_SEL_BITS-1:0]  line_idx_n,
    input wire [`CS_TAG_SEL_BITS-1:0]   line_tag,
    input wire [`UP(`CS_SECTOR_SEL_BITS)-1:0] sector_idx, // requested sector within the line
    input wire [`CS_WAY_SEL_WIDTH-1:0]  evict_way,

    // outputs
    output wire [NUM_WAYS-1:0]          tag_matches,
    // per-way "line resident" = tag match with any sector valid, ignoring the
    // requested sector. Distinguishes a sector miss (line present, sector
    // invalid -> refill that sector into this way, no eviction) from a line
    // miss (line absent -> allocate a victim way). Equals tag_matches when
    // there is a single sector per line.
    output wire [NUM_WAYS-1:0]          line_present,
    output wire                         evict_dirty,
    // per-sector dirty vector of the evict way (drives the multi-beat per-sector
    // writeback); a single bit == evict_dirty when 1 sector/line.
    output wire [`CS_SECTORS_PER_LINE-1:0] evict_dirty_mask,
    output wire [`CS_TAG_SEL_BITS-1:0]  evict_tag
);
    //          tag store: valid[SEC], tag   (dirty decoupled into a side LUTRAM)
    localparam SEC        = `CS_SECTORS_PER_LINE;
    localparam TAG_ENTRYW = SEC + `CS_TAG_SEL_BITS;
    `UNUSED_VAR (read)

    // one-hot of the requested sector (SEC=1 => constant 1)
    wire [SEC-1:0] sec_oh = SEC'(1) << sector_idx;

    wire [NUM_WAYS-1:0][`CS_TAG_SEL_BITS-1:0] read_tag;
    wire [NUM_WAYS-1:0][SEC-1:0] read_valid;
    wire [NUM_WAYS-1:0][SEC-1:0] read_dirty;

    if (WRITEBACK) begin : g_evict_tag_wb
        assign evict_dirty = (| read_dirty[evict_way]); // dirty if any sector dirty
        assign evict_dirty_mask = read_dirty[evict_way];
        assign evict_tag = read_tag[evict_way];
    end else begin : g_evict_tag_wt
        `UNUSED_VAR (read_dirty)
        assign evict_dirty = 1'b0;
        assign evict_dirty_mask = '0;
        assign evict_tag = '0;
    end

    // Per-way decoded write strobes and write payloads. At most one operation
    // type fires per cycle (input arbitration in the bank). The tag store holds
    // valid[SEC]+tag only; per-sector dirty lives in a decoupled LUTRAM so the
    // tag-store write-enable does not depend on the write-hit tag compare.
    wire [NUM_WAYS-1:0] line_write;
    wire [NUM_WAYS-1:0][TAG_ENTRYW-1:0] line_wdata;
    wire [NUM_WAYS-1:0][TAG_ENTRYW-1:0] tag_rdata;

    // Decoupled per-sector dirty store (writeback only): NUM_WAYS*SEC bits/set
    // in LUTRAM, per-bit write-enable. Placed locally next to the compare so its
    // route collapses; keeps the wide tag-compare->dirty-set loop off the tag BRAM.
    wire [NUM_WAYS-1:0][SEC-1:0] dirty_wren;
    wire [NUM_WAYS-1:0][SEC-1:0] dirty_wdata;
    wire [NUM_WAYS-1:0][SEC-1:0] dirty_rdata;

    for (genvar i = 0; i < NUM_WAYS; ++i) begin : g_way_decode
        // hit: tag match AND the requested sector is valid. read_tag/read_valid
        // fold in a same-set fill from the previous cycle (see the read-first
        // bypass below), so this compare is exact even on the fill's write edge.
        wire raw_hit = read_valid[i][sector_idx] && (line_tag == read_tag[i]);

        wire way_en   = (NUM_WAYS == 1) || (evict_way == i);
        wire do_init  = init; // init all ways
        wire do_fill  = fill && way_en;
        wire do_flush = flush && (!WRITEBACK || way_en); // flush all ways in writethrough mode
        wire do_write = WRITEBACK && write && tag_matches[i]; // only write on tag hit
        // AMO passthrough invalidate: clear the requested sector's valid.
        wire do_inval = (AMO_ENABLE != 0) && invalidate && raw_hit;

        // A write hit changes neither the tag nor the valid vector, so it does
        // NOT write the tag store (only the dirty LUTRAM). The tag wren therefore
        // depends only on init/fill/flush + the AMO-only invalidate.
        assign line_write[i] = do_init || do_fill || do_flush || do_inval;

        // A fill into a way that already holds this line (a sector refill) ORs
        // the fetched sector into the existing valid vector; a fill into a fresh
        // victim way installs only the fetched sector. With 1 sector/line a fill
        // is always to a fresh way, so this is the legacy reset behavior.
        wire fill_refill = do_fill && (line_tag == read_tag[i]) && (| read_valid[i]);

        // Per-sector valid merge. read_valid is the current line's vector
        // (includes a same-cycle-prior fill via rdw_fill below), so fill/inval
        // preserve other sectors.
        wire [SEC-1:0] valid_wr =
              (do_init || do_flush) ? {SEC{1'b0}}
            :  do_inval             ? (read_valid[i] & ~sec_oh)
            :  do_fill              ? (fill_refill ? (read_valid[i] | sec_oh) : sec_oh)
            :                          read_valid[i];
        assign line_wdata[i] = {valid_wr, line_tag};

        // Read-First BRAM: a fill committed on the previous cycle isn't yet in
        // the readout. The bypass is keyed on the SET and the FILLED WAY: that
        // way's stale entry is replaced with the filled line's {tag, valid},
        // so a same-set request neither false-hits the just-evicted line nor
        // misses the just-installed one. The bypass must HOLD across a pipe
        // stall (gated by ~stall): when a fill is followed by a dependent
        // replay and the pipe stalls in between (e.g. a multi-beat per-sector
        // writeback), the held tag readout still misses the fill, so a plain
        // 1-cycle buffer would expire mid-stall and the replay would
        // spuriously miss the just-filled line.
        wire rdw_fill_raw;
        wire [SEC-1:0] rdw_sec_oh;
        wire [`CS_TAG_SEL_BITS-1:0]  rdw_tag;
        wire [`CS_LINE_SEL_BITS-1:0] rdw_set;
        wire rdw_refill;
        `BUFFER_EX(rdw_fill_raw, do_fill, ~stall, 1, 1);
        `BUFFER_EX(rdw_refill, do_fill && fill_refill, ~stall, 1, 1);
        `BUFFER_EX(rdw_sec_oh, sec_oh, ~stall, $bits(rdw_sec_oh), 1);
        `BUFFER_EX(rdw_tag, line_tag, ~stall, $bits(rdw_tag), 1);
        `BUFFER_EX(rdw_set, line_idx, ~stall, $bits(rdw_set), 1);
        // do_fill is way-gated, so rdw_fill_raw identifies the filled way.
        wire way_filled = rdw_fill_raw && (line_idx == rdw_set);

        wire [TAG_ENTRYW-1:0] rdata_i = tag_rdata[i];
        wire [SEC-1:0] rdata_valid = rdata_i[`CS_TAG_SEL_BITS +: SEC];
        // A fresh fill REPLACED this way's entry (tag + only its sector); a
        // refill ORed its sector into the resident line's vector.
        assign read_tag[i]   = way_filled ? rdw_tag : rdata_i[0 +: `CS_TAG_SEL_BITS];
        assign read_valid[i] = way_filled ? (rdw_refill ? (rdata_valid | rdw_sec_oh) : rdw_sec_oh)
                                          : rdata_valid;

        // ---- decoupled per-sector dirty (writeback only) ----
        if (WRITEBACK) begin : g_dirty
            // set the written sector on a write hit; clear sectors on
            // fill/inval; clear all on init/flush or a fresh (evicting) fill.
            wire [SEC-1:0] dset_oh  = do_write ? sec_oh : {SEC{1'b0}};
            wire           dclr_all = do_init || do_flush || (do_fill && ~fill_refill);
            wire [SEC-1:0] dclr_oh  = (do_inval ? sec_oh : {SEC{1'b0}})
                                    | ((do_fill && fill_refill) ? sec_oh : {SEC{1'b0}});
            assign dirty_wren[i]  = dset_oh | dclr_oh | {SEC{dclr_all}};
            assign dirty_wdata[i] = dset_oh; // 1 only where setting; 0 on any clear

            // Read-first forwarding for the dirty LUTRAM (same-set, 1 cycle, held
            // across stall): a dirty update to this set last cycle isn't in the
            // readout when the next request reads the same set. Clear wins over
            // the stale readout; set wins over clear (mutually exclusive ops).
            wire same_set = (line_idx == line_idx_n);
            wire [SEC-1:0] rdw_dset, rdw_dclr;
            wire rdw_dclr_all;
            `BUFFER_EX(rdw_dset, (same_set ? dset_oh : {SEC{1'b0}}), ~stall, SEC, 1);
            `BUFFER_EX(rdw_dclr, (same_set ? dclr_oh : {SEC{1'b0}}), ~stall, SEC, 1);
            `BUFFER_EX(rdw_dclr_all, same_set && dclr_all, ~stall, 1, 1);
            assign read_dirty[i] = (dirty_rdata[i] & ~rdw_dclr & ~{SEC{rdw_dclr_all}}) | rdw_dset;
        end else begin : g_no_dirty
            `UNUSED_VAR (do_write)
            assign dirty_wren[i]  = '0;
            assign dirty_wdata[i] = '0;
            assign read_dirty[i]  = {SEC{1'b0}};
        end

        assign tag_matches[i] = raw_hit;
        // line resident in this way: tag matches and at least one sector valid
        // (a same-cycle-prior fill is folded into read_tag/read_valid).
        assign line_present[i] = (line_tag == read_tag[i]) && (| read_valid[i]);
    end

    // Single tag array: one BRAM word holds all ways' {valid[SEC], tag}; per-way
    // write-enable updates a single way. Read at line_idx_n (one cycle ahead),
    // written at line_idx, read-first to match the fill/replay ordering.
    VX_dp_ram #(
        .DATAW (NUM_WAYS * TAG_ENTRYW),
        .WRENW (NUM_WAYS),
        .SIZE  (`CS_LINES_PER_BANK),
        .OUT_REG (1),
        .RDW_MODE ("R")
    ) tag_store (
        .clk   (clk),
        .reset (reset),
        .read  (~stall),
        .write (| line_write),
        .wren  (line_write),
        .waddr (line_idx),
        .raddr (line_idx_n),
        .wdata (line_wdata),
        .rdata (tag_rdata)
    );

    // Decoupled per-sector dirty store (writeback only). Mirrors the tag store's
    // access pattern (look-ahead read, read-first) so pipeline alignment is
    // identical; 1-bit/way/sector LUTRAM keeps it off the tag BRAM write path.
    if (WRITEBACK) begin : g_dirty_store
        VX_dp_ram #(
            .DATAW    (NUM_WAYS * SEC),
            .WRENW    (NUM_WAYS * SEC),
            .SIZE     (`CS_LINES_PER_BANK),
            .OUT_REG  (1),
            .LUTRAM   (1),
            .RDW_MODE ("R")
        ) dirty_store (
            .clk   (clk),
            .reset (reset),
            .read  (~stall),
            .write (| dirty_wren),
            .wren  (dirty_wren),
            .waddr (line_idx),
            .raddr (line_idx_n),
            .wdata (dirty_wdata),
            .rdata (dirty_rdata)
        );
    end else begin : g_no_dirty_store
        assign dirty_rdata = '0;
        `UNUSED_VAR ({dirty_wren, dirty_wdata, dirty_rdata})
    end

endmodule
// Copyright © 2019-2023
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

`include "VX_cache_define.vh"

module VX_cache_wrap import VX_gpu_pkg::*; #(
    parameter `STRING INSTANCE_ID    = "",

    parameter TAG_SEL_IDX           = 0,

    parameter NUM_REQS              = 4,      // Number of Word requests per cycle

    parameter MEM_PORTS             = 1,      // Number of memory ports

    parameter CACHE_SIZE            = 4096,   // Size of cache in bytes
    parameter LINE_SIZE             = 64,     // Size of line inside a bank in bytes
    parameter NUM_BANKS             = 4,      // Number of banks
    parameter NUM_WAYS              = 4,      // Number of associative ways
    parameter WORD_SIZE             = 16,     // Size of a word in bytes
    parameter SECTOR_SIZE           = LINE_SIZE, // Size of a sector in bytes (mem-request granule); = LINE_SIZE => 1 sector

    parameter CRSQ_SIZE             = 0,      // Core Response Queue Size
    parameter MSHR_SIZE             = 16,     // Miss Reserv Queue Knob
    parameter MRSQ_SIZE             = 4,      // Memory Response Queue Size
    parameter MREQ_SIZE             = 0,      // Memory Request Queue Size (0 = derived minimum)

    parameter LATENCY               = 2,      // Bank pipeline depth (2 = classic lookup+commit; larger defers the data array)

    parameter WRITE_ENABLE          = 1,      // Enable cache writeable

    parameter WRITEBACK             = 0,      // Enable cache writeback

    parameter DIRTY_BYTES           = 0,      // Enable dirty bytes on writeback

    parameter REPL_POLICY           = `CS_REPL_FIFO, // Replacement policy

    parameter TAG_WIDTH             = UUID_WIDTH + 1, // core request tag size

    parameter NC_ENABLE             = 0,      // enable bypass for non-cacheable addresses

    parameter PASSTHRU              = 0,      // Force bypass for all requests

    parameter CORE_OUT_BUF          = 3,      // Core response output buffer

    parameter MEM_OUT_BUF           = 3,      // Memory request output buffer

    parameter IS_LLC                = 0,      // Set when this cache is the LLC (enables AMO completion at this level).

    parameter AMO_ENABLE            = 0       // Enable atomic operations in cache banks.
 ) (

    input wire clk,
    input wire reset,

`ifdef PERF_ENABLE
    output cache_perf_t     cache_perf,
`endif
    VX_mem_bus_if.slave     core_bus_if [NUM_REQS],
    VX_mem_bus_if.master    mem_bus_if [MEM_PORTS]
);
    `STATIC_ASSERT(NUM_BANKS == (1 << `CLOG2(NUM_BANKS)), ("invalid parameter"))
    localparam CACHE_MEM_TAG_WIDTH = `CACHE_MEM_TAG_WIDTH(MSHR_SIZE, NUM_BANKS, MEM_PORTS, UUID_WIDTH);
    localparam BYPASS_TAG_WIDTH = `CACHE_BYPASS_TAG_WIDTH(NUM_REQS, MEM_PORTS, SECTOR_SIZE, WORD_SIZE, TAG_WIDTH);
    localparam NC_TAG_WIDTH = `MAX(CACHE_MEM_TAG_WIDTH, BYPASS_TAG_WIDTH) + 1;
    localparam MEM_TAG_WIDTH = PASSTHRU ? BYPASS_TAG_WIDTH : (NC_ENABLE ? NC_TAG_WIDTH : CACHE_MEM_TAG_WIDTH);
    localparam BYPASS_ENABLE = (NC_ENABLE || PASSTHRU);
    VX_mem_bus_if #(
        .DATA_SIZE (WORD_SIZE),
        .TAG_WIDTH (TAG_WIDTH)
    ) core_bus_cache_if[NUM_REQS]();
    VX_mem_bus_if #(
        .DATA_SIZE (SECTOR_SIZE),
        .TAG_WIDTH (CACHE_MEM_TAG_WIDTH)
    ) mem_bus_cache_if[MEM_PORTS]();
    VX_mem_bus_if #(
        .DATA_SIZE (SECTOR_SIZE),
        .TAG_WIDTH (MEM_TAG_WIDTH)
    ) mem_bus_tmp_if[MEM_PORTS]();
    if (BYPASS_ENABLE) begin : g_bypass
        VX_cache_bypass #(
            .NUM_REQS          (NUM_REQS),
            .MEM_PORTS         (MEM_PORTS),
            .TAG_SEL_IDX       (TAG_SEL_IDX),
            .CACHE_ENABLE      (!PASSTHRU),
            .WORD_SIZE         (WORD_SIZE),
            .LINE_SIZE         (SECTOR_SIZE),
            .CORE_ADDR_WIDTH   (`CS_WORD_ADDR_WIDTH),
            .CORE_TAG_WIDTH    (TAG_WIDTH),
            .MEM_ADDRW    (`CS_MEM_SECTOR_ADDR_WIDTH),
            .MEM_TAG_IN_WIDTH  (CACHE_MEM_TAG_WIDTH),
            .CORE_OUT_BUF      (CORE_OUT_BUF),
            .MEM_OUT_BUF       (MEM_OUT_BUF)
        ) cache_bypass (
            .clk            (clk),
            .reset          (reset),
            .core_bus_in_if (core_bus_if),
            .core_bus_out_if(core_bus_cache_if),
            .mem_bus_in_if  (mem_bus_cache_if),
            .mem_bus_out_if (mem_bus_tmp_if)
        );
    end else begin : g_no_bypass
        for (genvar i = 0; i < NUM_REQS; ++i) begin : g_core_bus_cache_if
            `ASSIGN_VX_MEM_BUS_IF (core_bus_cache_if[i], core_bus_if[i]);
        end
        for (genvar i = 0; i < MEM_PORTS; ++i) begin : g_mem_bus_tmp_if
            `ASSIGN_VX_MEM_BUS_IF (mem_bus_tmp_if[i], mem_bus_cache_if[i]);
        end
    end
    for (genvar i = 0; i < MEM_PORTS; ++i) begin : g_mem_bus_if
        if (WRITE_ENABLE) begin : g_we
            `ASSIGN_VX_MEM_BUS_IF (mem_bus_if[i], mem_bus_tmp_if[i]);
        end else begin : g_ro
            `ASSIGN_VX_MEM_BUS_RO_IF (mem_bus_if[i], mem_bus_tmp_if[i]);
        end
    end
    if (PASSTHRU == 0) begin : g_cache
        VX_cache #(
            .INSTANCE_ID  (INSTANCE_ID),
            .CACHE_SIZE   (CACHE_SIZE),
            .LINE_SIZE    (LINE_SIZE),
            .NUM_BANKS    (NUM_BANKS),
            .NUM_WAYS     (NUM_WAYS),
            .WORD_SIZE    (WORD_SIZE),
            .SECTOR_SIZE  (SECTOR_SIZE),
            .NUM_REQS     (NUM_REQS),
            .MEM_PORTS    (MEM_PORTS),
            .WRITE_ENABLE (WRITE_ENABLE),
            .WRITEBACK    (WRITEBACK),
            .DIRTY_BYTES  (DIRTY_BYTES),
            .REPL_POLICY  (REPL_POLICY),
            .CRSQ_SIZE    (CRSQ_SIZE),
            .MSHR_SIZE    (MSHR_SIZE),
            .MRSQ_SIZE    (MRSQ_SIZE),
            .MREQ_SIZE    (MREQ_SIZE),
            .LATENCY      (LATENCY),
            .TAG_WIDTH    (TAG_WIDTH),
            .CORE_OUT_BUF (BYPASS_ENABLE ? 1 : CORE_OUT_BUF),
            .MEM_OUT_BUF  (BYPASS_ENABLE ? 1 : MEM_OUT_BUF),
            .IS_LLC       (IS_LLC),
            .AMO_ENABLE   (AMO_ENABLE)
        ) cache (
            .clk            (clk),
            .reset          (reset),
        `ifdef PERF_ENABLE
            .cache_perf     (cache_perf),
        `endif
            .core_bus_if    (core_bus_cache_if),
            .mem_bus_if     (mem_bus_cache_if)
        );
    end else begin : g_passthru
        for (genvar i = 0; i < NUM_REQS; ++i) begin : g_core_bus_cache_if
            `UNUSED_VX_MEM_BUS_IF (core_bus_cache_if[i])
        end
        for (genvar i = 0; i < MEM_PORTS; ++i) begin : g_mem_bus_cache_if
            `INIT_VX_MEM_BUS_IF (mem_bus_cache_if[i])
        end
    `ifdef PERF_ENABLE
        wire [NUM_REQS-1:0]  perf_core_reads_per_req;
        wire [NUM_REQS-1:0]  perf_core_writes_per_req;
        wire [NUM_REQS-1:0]  perf_crsp_stall_per_req;
        wire [MEM_PORTS-1:0] perf_mem_stall_per_port;
        for (genvar i = 0; i < NUM_REQS; ++i) begin : g_perf_crsp_stall_per_req
            assign perf_core_reads_per_req[i] = core_bus_if[i].req_valid && core_bus_if[i].req_ready && ~core_bus_if[i].req_data.rw;
            assign perf_core_writes_per_req[i] = core_bus_if[i].req_valid && core_bus_if[i].req_ready && core_bus_if[i].req_data.rw;
            assign perf_crsp_stall_per_req[i] = core_bus_if[i].rsp_valid && ~core_bus_if[i].rsp_ready;
        end
        for (genvar i = 0; i < MEM_PORTS; ++i) begin : g_perf_mem_stall_per_port
            assign perf_mem_stall_per_port[i] = mem_bus_if[i].req_valid && ~mem_bus_if[i].req_ready;
        end
        wire [`CLOG2(NUM_REQS+1)-1:0]  perf_core_reads_per_cycle;
        wire [`CLOG2(NUM_REQS+1)-1:0]  perf_core_writes_per_cycle;
        wire [`CLOG2(NUM_REQS+1)-1:0]  perf_crsp_stall_per_cycle;
        wire [`CLOG2(MEM_PORTS+1)-1:0] perf_mem_stall_per_cycle;
        `POP_COUNT(perf_core_reads_per_cycle, perf_core_reads_per_req);
        `POP_COUNT(perf_core_writes_per_cycle, perf_core_writes_per_req);
        `POP_COUNT(perf_crsp_stall_per_cycle, perf_crsp_stall_per_req);
        `POP_COUNT(perf_mem_stall_per_cycle, perf_mem_stall_per_port);
        reg [PERF_CTR_BITS-1:0] perf_core_reads;
        reg [PERF_CTR_BITS-1:0] perf_core_writes;
        reg [PERF_CTR_BITS-1:0] perf_mem_stalls;
        reg [PERF_CTR_BITS-1:0] perf_crsp_stalls;
        always @(posedge clk) begin
            if (reset) begin
                perf_core_reads   <= '0;
                perf_core_writes  <= '0;
                perf_mem_stalls   <= '0;
                perf_crsp_stalls  <= '0;
            end else begin
                perf_core_reads   <= perf_core_reads   + PERF_CTR_BITS'(perf_core_reads_per_cycle);
                perf_core_writes  <= perf_core_writes  + PERF_CTR_BITS'(perf_core_writes_per_cycle);
                perf_mem_stalls   <= perf_mem_stalls   + PERF_CTR_BITS'(perf_mem_stall_per_cycle);
                perf_crsp_stalls  <= perf_crsp_stalls  + PERF_CTR_BITS'(perf_crsp_stall_per_cycle);
            end
        end
        assign cache_perf.reads        = perf_core_reads;
        assign cache_perf.writes       = perf_core_writes;
        assign cache_perf.read_misses  = '0;
        assign cache_perf.write_misses = '0;
        assign cache_perf.evictions    = '0;
        assign cache_perf.bank_stalls  = '0;
        assign cache_perf.mshr_stalls  = '0;
        assign cache_perf.mem_stalls   = perf_mem_stalls;
        assign cache_perf.crsp_stalls  = perf_crsp_stalls;
    `endif
    end
`ifdef DBG_TRACE_CACHE
    for (genvar i = 0; i < NUM_REQS; ++i) begin : g_trace_core
        always @(posedge clk) begin
            if (core_bus_if[i].req_valid && core_bus_if[i].req_ready) begin
                if (core_bus_if[i].req_data.rw) begin
                    `TRACE(2, ("%t: %s core-wr-req[%0d]: addr=0x%0h, tag=0x%0h, byteen=0x%h, data=0x%h (#%0d)\n", $time, INSTANCE_ID, i, `TO_FULL_ADDR(core_bus_if[i].req_data.addr), core_bus_if[i].req_data.tag.value, core_bus_if[i].req_data.byteen, core_bus_if[i].req_data.data, core_bus_if[i].req_data.tag.uuid))
                end else begin
                    `TRACE(2, ("%t: %s core-rd-req[%0d]: addr=0x%0h, tag=0x%0h (#%0d)\n", $time, INSTANCE_ID, i, `TO_FULL_ADDR(core_bus_if[i].req_data.addr), core_bus_if[i].req_data.tag.value, core_bus_if[i].req_data.tag.uuid))
                end
            end
            if (core_bus_if[i].rsp_valid && core_bus_if[i].rsp_ready) begin
                `TRACE(2, ("%t: %s core-rd-rsp[%0d]: tag=0x%0h, data=0x%h (#%0d)\n", $time, INSTANCE_ID, i, core_bus_if[i].rsp_data.tag.value, core_bus_if[i].rsp_data.data, core_bus_if[i].rsp_data.tag.uuid))
            end
        end
    end
    for (genvar i = 0; i < MEM_PORTS; ++i) begin : g_trace_mem
        always @(posedge clk) begin
            if (mem_bus_if[i].req_valid && mem_bus_if[i].req_ready) begin
                if (mem_bus_if[i].req_data.rw) begin
                    `TRACE(2, ("%t: %s mem-wr-req[%0d]: addr=0x%0h, tag=0x%0h, byteen=0x%h, data=0x%h (#%0d)\n",
                        $time, INSTANCE_ID, i, `TO_FULL_ADDR(mem_bus_if[i].req_data.addr), mem_bus_if[i].req_data.tag.value, mem_bus_if[i].req_data.byteen, mem_bus_if[i].req_data.data, mem_bus_if[i].req_data.tag.uuid))
                end else begin
                    `TRACE(2, ("%t: %s mem-rd-req[%0d]: addr=0x%0h, tag=0x%0h (#%0d)\n",
                        $time, INSTANCE_ID, i, `TO_FULL_ADDR(mem_bus_if[i].req_data.addr), mem_bus_if[i].req_data.tag.value, mem_bus_if[i].req_data.tag.uuid))
                end
            end
            if (mem_bus_if[i].rsp_valid && mem_bus_if[i].rsp_ready) begin
                `TRACE(2, ("%t: %s mem-rd-rsp[%0d]: data=0x%h, tag=0x%0h (#%0d)\n",
                    $time, INSTANCE_ID, i, mem_bus_if[i].rsp_data.data, mem_bus_if[i].rsp_data.tag.value, mem_bus_if[i].rsp_data.tag.uuid))
            end
        end
    end
`endif
endmodule
package VX_gpu_pkg;
    localparam UUID_WIDTH = 32;
    localparam HART_ID_WIDTH = 4;
    localparam MEM_ATTR_WIDTH = 8;
    localparam MEM_ATTR_AMO_OFFS = 0;
    localparam MEM_ATTR_IO_OFFS = 4;
    localparam MEM_ATTR_FLUSH_OFFS = 5;
    localparam AMO_REQ_BITS = 8;
    localparam PERF_CTR_BITS = 64;

    typedef enum logic [3:0] {
        AMO_OP_NONE = 4'd0,
        AMO_OP_LR   = 4'd1,
        AMO_OP_SC   = 4'd2,
        AMO_OP_SWAP = 4'd3,
        AMO_OP_ADD  = 4'd4,
        AMO_OP_AND  = 4'd5,
        AMO_OP_OR   = 4'd6,
        AMO_OP_XOR  = 4'd7,
        AMO_OP_MIN  = 4'd8,
        AMO_OP_MAX  = 4'd9
    } amo_op_e;

    typedef struct packed {
        logic                     amo_valid;
        amo_op_e                  amo_op;
        logic                     amo_unsigned;
        logic [HART_ID_WIDTH-1:0] hart_id;
    } amo_req_t;
endpackage