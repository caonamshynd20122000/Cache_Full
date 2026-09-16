// ============================================================================
// File: cache_controller_nb.v
// Description: Non-Blocking L2 Cache Controller with Integrated MSHR
// Architecture:
//   - Decoupled Hit pipeline (fsm_nb) & Miss background refill (tl_mshr)
//   - Direct tag_array.fsm_accessed binding to eliminate latency skew
//   - Clean CDC single-cycle pulse generator on req_done
//   - Filtered Read-only MSHR allocation preventing write leaks
//   - Out-of-Order Channel D Arbiter with accurate word-level extraction
// ============================================================================

`timescale 1ns / 100ps

module cache_controller_nb #(
    parameter   TOTAL_SIZE             = 524288,
    parameter   ADDR_SIZE              = 32,
    parameter   DATA_SIZE              = 32,
    parameter   DATA_ELEMENTS          = 64,
    localparam  SIZE                   = 4,
    parameter   LATENCY                = 2,
    parameter   BOUND_SIZE             = 4,
    localparam  QUEUE_SIZE             = 0,
    parameter   NUM_WAYS               = 16,
    localparam  SET_REPLACEMENT_POLICY = "NMRU",
    localparam  _BLOCK_SIZE            = DATA_ELEMENTS * 8,
    localparam  _NUM_LINES             = TOTAL_SIZE / _BLOCK_SIZE / NUM_WAYS,
    localparam  _OFFSET_BITS           = $clog2(DATA_ELEMENTS),
    localparam  _LINE_BITS             = $clog2(_NUM_LINES),
    localparam  _TAG_BITS              = ADDR_SIZE - _LINE_BITS - _OFFSET_BITS,
    localparam  _NUM_TRANSFER          = _BLOCK_SIZE / DATA_SIZE,
    localparam  _TRANSFER_BITS         = (_NUM_TRANSFER > 1) ? $clog2(_NUM_TRANSFER) : 1
) (
    input wire                                          clk_h,
    input wire                                          clk_l,
    input wire                                          rst_n,

    // Configuration ports
    input wire  [7 : 0]                                 cfg_addr,
    input wire  [31 : 0]                                cfg_data_in,
    output wire [31 : 0]                                cfg_data_out,
    input wire                                          cfg_valid,
    output wire                                         cfg_ready,

    // TileLink Interface
    input wire  [ADDR_SIZE-1 : 0]                       in_addr,
    input wire  [DATA_SIZE-1 : 0]                       in_data,
    input wire  [(DATA_SIZE/8)-1 : 0]                   in_byteen,
    input wire  [3 : 0]                                 in_source,
    input wire  [2 : 0]                                 in_opcode,
    input wire                                          in_valid,
    input wire                                          in_write,
    output wire                                         in_ready,

    output wire [ADDR_SIZE-1 : 0]                       out_addr,
    output wire [DATA_SIZE-1 : 0]                       out_data,
    output wire [3 : 0]                                 out_source,
    output wire [2 : 0]                                 out_opcode,
    output wire                                         out_valid,
    input wire                                          out_ready,

    // Downstream DRAM ports
    output wire [ADDR_SIZE-1 : 0]                       read_addr,
    input wire  [DATA_SIZE-1 : 0]                       read_data,
    output wire                                         read_valid,
    input wire                                          read_ready,

    output wire [ADDR_SIZE-1 : 0]                       write_addr,
    output wire [DATA_SIZE-1 : 0]                       write_data,
    output wire [(DATA_SIZE/8)-1 : 0]                   write_byteen,
    output wire                                         write_valid,
    input wire                                          write_ready
);

`ifdef MULTIWAY
    localparam  _WAY_BITS = (NUM_WAYS > 1) ? $clog2(NUM_WAYS) : 0;
    wire [_WAY_BITS-1 : 0] fsm_way;
`endif

    wire write_through;
    wire prefetch;
    wire secure_request;
    wire [167 : 0] load_val;
    wire [BOUND_SIZE-1 : 0] low_bound;
    wire [BOUND_SIZE-1 : 0] high_bound;
    wire load;

    register_file #(.BOUND_SIZE (BOUND_SIZE)) reg_file (
        .clk            (clk_h),
        .rst_n          (rst_n),
        .in_valid       (cfg_valid),
        .in_ready       (cfg_ready),
        .in_addr        (cfg_addr),
        .in_data        (cfg_data_in),
        .out_data       (cfg_data_out),
        .write_through  (write_through),
        .prefetch       (prefetch),
        .secure_request (secure_request),
        .load_val       (load_val),
        .low_bound      (low_bound),
        .high_bound     (high_bound),
        .load           (load)
    );

    // ========================================================================
    // DRAM Read & Write Subsystems
    // ========================================================================
    wire [ADDR_SIZE-1 : 0]   req_addr;
    wire [_BLOCK_SIZE-1 : 0] req_data;
    wire                     req_valid;
    wire                     req_done;
    wire                     req_ready;

    read_controller #(
        .ADDR_SIZE              (ADDR_SIZE),
        .DATA_SIZE              (DATA_SIZE),
        .DATA_ELEMENTS          (DATA_ELEMENTS),
        .TOTAL_SIZE             (TOTAL_SIZE),
        .LATENCY                (LATENCY),
        .NUM_WAYS               (NUM_WAYS),
        .SET_REPLACEMENT_POLICY (SET_REPLACEMENT_POLICY)
    ) rd_controller (
        .clk_l                  (clk_l),
        .clk_h                  (clk_h),
        .rst_n                  (rst_n),
        .cache_read_addr        (req_addr),
        .cache_read_valid       (req_valid),
        .cache_read_ready       (req_ready),
        .cache_read_data        (req_data),
        .cache_read_done        (req_done),
        .mem_read_addr          (read_addr),
        .mem_read_valid         (read_valid),
        .mem_read_data          (read_data),
        .mem_read_done          (read_ready)
    );

    wire [_BLOCK_SIZE-1 : 0] arr_data;
    wire [ADDR_SIZE-1 : 0]   cache_write_addr;
    wire [_BLOCK_SIZE-1 : 0] cache_write_data;
    wire                     cache_write_valid;
    wire [_NUM_TRANSFER-1 : 0] cache_write_strb;
    wire                     cache_write_ready;

    write_controller #(
        .ADDR_SIZE              (ADDR_SIZE),
        .DATA_SIZE              (DATA_SIZE),
        .DATA_ELEMENTS          (DATA_ELEMENTS),
        .TOTAL_SIZE             (TOTAL_SIZE),
        .LATENCY                (LATENCY),
        .NUM_WAYS               (NUM_WAYS),
        .SET_REPLACEMENT_POLICY (SET_REPLACEMENT_POLICY)
    ) wr_controller (
        .clk_l                  (clk_l),
        .clk_h                  (clk_h),
        .rst_n                  (rst_n),
        .cache_write_addr       (cache_write_addr),
        .cache_write_valid      (cache_write_valid),
        .cache_write_strb       (cache_write_strb),
        .cache_write_data       (arr_data),
        .cache_write_byteen     (in_byteen),
        .cache_write_ready      (cache_write_ready),
        .mem_write_addr         (write_addr),
        .mem_write_valid        (write_valid),
        .mem_write_data         (write_data),
        .mem_write_byteen       (write_byteen),
        .mem_write_done         (write_ready)
    );

    // ========================================================================
    // CDC Single-Cycle Pulse Generator on req_done
    // ========================================================================
    reg req_done_sync_0, req_done_sync_1, req_done_sync_2;
    always @(posedge clk_h or negedge rst_n) begin
        if (!rst_n) begin
            req_done_sync_0 <= 1'b0;
            req_done_sync_1 <= 1'b0;
            req_done_sync_2 <= 1'b0;
        end else begin
            req_done_sync_0 <= req_done;
            req_done_sync_1 <= req_done_sync_0;
            req_done_sync_2 <= req_done_sync_1;
        end
    end
    wire req_done_pulse = req_done_sync_1 && !req_done_sync_2;

    // ========================================================================
    // SRAM Array Interconnect Signals
    // ========================================================================
    wire [ADDR_SIZE-1 : 0]   fsm_addr;
    wire [DATA_SIZE-1 : 0]   fsm_data;
    wire                     fsm_valid;
    wire                     fsm_rw;
    wire                     tag_ready;
    wire                     fsm_accessed;
    wire                     fsm_hit;

    wire [ADDR_SIZE-1 : 0]   return_addr;
    wire [_BLOCK_SIZE-1 : 0] return_data;
    wire                     return_valid;
    wire                     return_ready;

    assign return_ready = 1'b1;

    wire [ADDR_SIZE-1 : 0]   trans_out_addr;
    wire [ADDR_SIZE-1 : 0]   trans_in_addr;
    wire                     trans_valid;
    wire                     trans_done;

    fetch_unit #(
        .TOTAL_SIZE             (TOTAL_SIZE),
        .ADDR_SIZE              (ADDR_SIZE),
        .DATA_SIZE              (DATA_SIZE),
        .DATA_ELEMENTS          (DATA_ELEMENTS),
        .SIZE                   (SIZE),
        .LATENCY                (LATENCY),
        .NUM_WAYS               (NUM_WAYS),
        .SET_REPLACEMENT_POLICY (SET_REPLACEMENT_POLICY)
    ) f_unit (
        .clk                    (clk_h),
        .rst_n                  (rst_n),
        .in_addr                (fsm_addr),
        .in_data                (fsm_data),
        .in_ready               (),
        .in_valid               (fsm_valid),
        .write                  (fsm_rw),
        .cache_hit              (fsm_hit),
        .cache_access_done      (fsm_accessed),
        .prefetch               (prefetch),
        .out_addr               (return_addr),
        .out_data               (return_data),
        .out_valid              (return_valid),
        .out_ready              (return_ready),
        .trans_out_addr         (trans_out_addr),
        .trans_in_addr          (trans_in_addr),
        .trans_valid            (trans_valid),
        .trans_done             (trans_done),
        .req_addr               (req_addr),
        .req_valid              (req_valid),
        .req_ready              (req_ready),
        .req_done               (req_done),
        .req_data               (req_data)
    );

    // ========================================================================
    // Non-Blocking FSM & MSHR Pipeline
    // ========================================================================
    wire                     fsm_in_ready;
    wire [ADDR_SIZE-1 : 0]   fsm_out_addr;
    wire [DATA_SIZE-1 : 0]   fsm_out_data;
    wire [3 : 0]             fsm_out_source;
    wire [2 : 0]             fsm_out_opcode;
    wire                     fsm_out_valid;
    wire                     fsm_out_ready;

    wire                     mshr_fin_valid;
    wire                     mshr_fin_is_hit;
    wire [1 : 0]             mshr_fin_id;
    wire                     miss_trigger;

    wire                     mshr_alloc_ready;
    wire [1:0]               mshr_alloc_id;
    wire                     mshr_alloc_match;
    wire [1:0]               mshr_alloc_match_id;

    wire                     mshr_deq_valid;
    wire [3:0]               mshr_deq_source;
    wire [2:0]               mshr_deq_opcode;
    wire [ADDR_SIZE-1:0]     mshr_deq_addr;
    wire [DATA_SIZE-1:0]     mshr_deq_data;
    wire [1:0]               mshr_deq_id;
    wire                     mshr_deq_ready;

    // Filter MSHR allocation: allocate ONLY for reads to prevent write leaks
    wire mshr_do_alloc = in_valid && in_ready && (!in_write);

    // Track MSHR slot associated with the currently in-flight DRAM miss
    reg  [1:0] miss_mshr_id;
    always @(posedge clk_h or negedge rst_n) begin
        if (!rst_n) begin
            miss_mshr_id <= 2'b00;
        end else if (mshr_fin_valid && !mshr_fin_is_hit) begin
            miss_mshr_id <= mshr_fin_id;
        end
    end

    fsm_nb #(
        .ADDR_SIZE              (ADDR_SIZE),
        .DATA_SIZE              (DATA_SIZE),
        .DATA_ELEMENTS          (DATA_ELEMENTS),
        .TOTAL_SIZE             (TOTAL_SIZE),
        .LATENCY                (LATENCY),
        .NUM_WAYS               (NUM_WAYS),
        .SET_REPLACEMENT_POLICY (SET_REPLACEMENT_POLICY)
    ) c_fsm (
        .clk                    (clk_h),
        .rst_n                  (rst_n),
        .in_rw                  (in_write),
        .in_addr                (in_addr),
        .in_data                (in_data),
        .in_source              (in_source),
        .in_opcode              (in_opcode),
        .in_mshr_id             (mshr_alloc_id),
        .in_valid               (in_valid && in_ready),
        .in_ready               (fsm_in_ready),
        .out_addr               (fsm_out_addr),
        .out_data               (fsm_out_data),
        .out_source             (fsm_out_source),
        .out_opcode             (fsm_out_opcode),
        .out_valid              (fsm_out_valid),
        .out_ready              (fsm_out_ready),
        .fw_rw                  (fsm_rw),
        .fw_addr                (fsm_addr),
        .fw_data                (fsm_data),
        .fw_valid               (fsm_valid),
        .fw_ready               (tag_ready),
        .ib_addr                (return_addr),
        .ib_data                (arr_data),
        .ib_valid               (fsm_hit),
        .ib_ready               (),
        // Direct wiring from tag_array:
        .fsm_accessed           (fsm_accessed),
        .fsm_hit                (fsm_hit),
        .mshr_fin_valid         (mshr_fin_valid),
        .mshr_fin_is_hit        (mshr_fin_is_hit),
        .mshr_fin_id            (mshr_fin_id),
        .miss_trigger           (miss_trigger)
    );

    tl_mshr #(
        .MSHR_SIZE              (4),
        .ADDR_SIZE              (ADDR_SIZE),
        .DATA_SIZE              (DATA_SIZE),
        .SOURCE_WIDTH           (4),
        .LINE_OFFSET_BITS       (6)
    ) mshr_inst (
        .clk                    (clk_h),
        .rst_n                  (rst_n),
        .alloc_valid            (mshr_do_alloc),
        .alloc_addr             (in_addr),
        .alloc_source           (in_source),
        .alloc_opcode           (in_opcode),
        .alloc_byteen           (in_byteen),
        .alloc_data             (in_data),
        .alloc_ready            (mshr_alloc_ready),
        .alloc_id               (mshr_alloc_id),
        .alloc_match            (mshr_alloc_match),
        .alloc_match_id         (mshr_alloc_match_id),
        .fin_valid              (mshr_fin_valid),
        .fin_id                 (mshr_fin_id),
        .fin_is_hit             (mshr_fin_is_hit),
        .fin_is_coalesced       (1'b0),
        .fin_prev_id            (2'b00),
        .fill_valid             (req_done_pulse),
        .fill_id                (miss_mshr_id),
        .fill_addr              (),
        .deq_valid              (mshr_deq_valid),
        .deq_ready              (mshr_deq_ready),
        .deq_source             (mshr_deq_source),
        .deq_opcode             (mshr_deq_opcode),
        .deq_addr               (mshr_deq_addr),
        .deq_byteen             (),
        .deq_data               (mshr_deq_data),
        .deq_id                 (mshr_deq_id),
        .empty                  (),
        .full                   ()
    );

    // ========================================================================
    // Out-of-Order Channel D Response Arbiter (Hits First, DRAM Refills Second)
    // ========================================================================
    wire hit_out_valid    = fsm_out_valid;
    wire refill_out_valid = mshr_deq_valid;

    // Accurately extract the target 32-bit word from the 512-bit DRAM line
    wire [_TRANSFER_BITS-1 : 0] refill_word_idx = mshr_deq_addr[_OFFSET_BITS-1 : 2];
    wire [DATA_SIZE-1 : 0]      refill_word_data = req_data[(refill_word_idx + 1) * DATA_SIZE - 1 -: DATA_SIZE];

    assign out_valid      = hit_out_valid ? 1'b1 : refill_out_valid;
    assign out_addr       = hit_out_valid ? fsm_out_addr   : mshr_deq_addr;
    assign out_data       = hit_out_valid ? fsm_out_data   : refill_word_data;
    assign out_source     = hit_out_valid ? fsm_out_source : mshr_deq_source;
    assign out_opcode     = hit_out_valid ? fsm_out_opcode : mshr_deq_opcode;

    assign fsm_out_ready  = hit_out_valid ? out_ready : 1'b0;
    assign mshr_deq_ready = (!hit_out_valid && refill_out_valid) ? out_ready : 1'b0;

    // Controller accept condition: FSM ready and MSHR available (if read)
    assign in_ready       = fsm_in_ready && (in_write || mshr_alloc_ready);

    // ========================================================================
    // SRAM Arrays Instantiations
    // ========================================================================
    tag_array #(
        .TOTAL_SIZE             (TOTAL_SIZE),
        .ADDR_SIZE              (ADDR_SIZE),
        .DATA_SIZE              (DATA_SIZE),
        .DATA_ELEMENTS          (DATA_ELEMENTS),
        .LATENCY                (LATENCY),
        .NUM_WAYS               (NUM_WAYS),
        .SET_REPLACEMENT_POLICY (SET_REPLACEMENT_POLICY)
    ) tag_array (
        .clk                    (clk_h),
        .rst_n                  (rst_n),
        .write_through          (write_through),
        .fsm_addr               (fsm_addr),
        .fsm_data               (fsm_data),
        .fsm_write              (fsm_rw),
        .fsm_valid              (fsm_valid),
        .fsm_ready              (tag_ready),
        .fsm_hit                (fsm_hit),
`ifdef MULTIWAY
        .fsm_way                (fsm_way),
`endif
        .fsm_accessed           (fsm_accessed),
        .write_valid            (cache_write_valid),
        .write_addr             (cache_write_addr),
        .write_data             (cache_write_data),
        .write_strb             (cache_write_strb),
        .write_ready            (cache_write_ready),
        .fetch_done             (return_valid),
        .arr_valid              (),
        .arr_write              (),
        .arr_addr               (),
        .arr_out_data           (),
        .arr_in_data            (arr_data),
        .arr_ready              ()
    );

    wire [_BLOCK_SIZE-1 : 0] data;
    wire valid = return_valid | (fsm_rw && fsm_hit) | fsm_valid;
    wire [ADDR_SIZE-1 : 0] addr = return_valid ? return_addr : fsm_addr;
    wire write = fsm_rw && fsm_hit;
    wire write_all = return_valid;

    reg [(DATA_SIZE/8)-1 : 0] byteen_keep;
    always @(posedge clk_h or negedge rst_n) begin
        if(!rst_n) begin
            byteen_keep <= {(DATA_SIZE/8){1'b0}};
        end else if(in_valid && in_ready) begin
            byteen_keep <= in_byteen;
        end
    end

    wire [_TRANSFER_BITS-1 : 0] fsm_word_idx = fsm_addr[_OFFSET_BITS-1 : _OFFSET_BITS - _TRANSFER_BITS];

    genvar w, b;
    generate
        for (w = 0; w < _NUM_TRANSFER; w = w + 1) begin : g_word_transfer
            for (b = 0; b < (DATA_SIZE/8); b = b + 1) begin : g_byte_merge
                wire byte_wr_en = fsm_rw && (w == fsm_word_idx) && byteen_keep[b];

                assign data[(w * DATA_SIZE) + (b + 1) * 8 - 1 -: 8] = 
                    (return_valid && byte_wr_en) ? fsm_data[(b + 1) * 8 - 1 -: 8] :
                    (return_valid)               ? return_data[(w * DATA_SIZE) + (b + 1) * 8 - 1 -: 8] :
                    (byte_wr_en)                 ? fsm_data[(b + 1) * 8 - 1 -: 8] 
                                                 : 8'h00;
            end
        end
    endgenerate

    data_array #(
        .TOTAL_SIZE             (TOTAL_SIZE),
        .ADDR_SIZE              (ADDR_SIZE),
        .DATA_SIZE              (DATA_SIZE),
        .DATA_ELEMENTS          (DATA_ELEMENTS),
        .LATENCY                (LATENCY),
        .NUM_WAYS               (NUM_WAYS),
        .SET_REPLACEMENT_POLICY (SET_REPLACEMENT_POLICY)
    ) d_array (
        .clk                    (clk_h),
        .rst_n                  (rst_n),
        .busy                   (),
        .valid                  (valid),
        .addr                   (addr),
        .write                  (write),
        .in_byteen              (in_byteen),
`ifdef MULTIWAY
        .way                    (fsm_way),
`endif
        .data                   (data),
        .write_all              (write_all),
        .out_data               (arr_data)
    );

    secure_address_translator #(
        .BOUND_SIZE             (BOUND_SIZE),
        .ADDR_SIZE              (ADDR_SIZE)
    ) sec_address_translator (
        .clk                    (clk_h),
        .rst_n                  (rst_n),
        .cfg_load_val           (load_val),
        .cfg_load               (load),
        .cfg_low_bound          (low_bound),
        .cfg_high_bound         (high_bound),
        .cfg_en                 (secure_request),
        .in_raw_addr            (trans_out_addr),
        .in_valid               (trans_valid),
        .in_trans_addr          (trans_in_addr),
        .in_ready               (),
        .in_done                (trans_done)
    );

endmodule: cache_controller_nb