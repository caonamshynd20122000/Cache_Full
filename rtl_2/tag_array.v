// // ============================================================================
// File: tag_array.sv
// Module: tag_array
// Description: Multi-Way SRAM Tag Array with Integrated Eviction Tag Buffer
// Architecture:
//   - Parallel multi-way tag comparison with per-way valid and dirty registers
//   - Modulo Round-Robin / NMRU replacement policy (drift-free allocation)
//   - Integrated evict_tag_buffer to eliminate Eviction Tag Race Conditions
//   - Non-blocking continuous tag lookup pipeline with synchronous access pulse
// ============================================================================

`timescale 1ns / 100ps

// ============================================================================
// Terminal / CLI Macro Definitions for Dynamic Parameter Overrides
// Use compiler flags from CLI: e.g. -DCFG_TOTAL_SIZE=262144 -DCFG_NUM_WAYS=8
// ============================================================================
`ifndef CFG_TOTAL_SIZE
    `define CFG_TOTAL_SIZE 262144        // Default: 32 KiB (262,144 bits, Matching spec)
`endif

`ifndef CFG_NUM_WAYS
    `define CFG_NUM_WAYS 8               // Default: 8-Way Set-Associative (Matching spec)
`endif

`ifndef CFG_DATA_ELEMENTS
    `define CFG_DATA_ELEMENTS 64         // Default: 64 Bytes per line (16 words)
`endif

`ifndef CFG_LATENCY
    `define CFG_LATENCY 2                // Default: 2-cycle SRAM read latency
`endif

module custom_tag_array #(
    // ------------------------------------------------------------------------
    // Top-Level Configurable Parameters (Overridable via CLI Macros)
    // ------------------------------------------------------------------------
    parameter   ADDR_SIZE              = 32,
    parameter   DATA_SIZE              = 32,
    parameter   DATA_ELEMENTS          = `CFG_DATA_ELEMENTS,
    parameter   TOTAL_SIZE             = `CFG_TOTAL_SIZE,
    parameter   LATENCY                = `CFG_LATENCY,
    parameter   NUM_WAYS               = `CFG_NUM_WAYS,
    parameter   SET_REPLACEMENT_POLICY = "NMRU",

    // ------------------------------------------------------------------------
    // Derived Architectural Geometry and Bit-Widths
    // ------------------------------------------------------------------------
    localparam  _BLOCK_SIZE            = DATA_ELEMENTS * 8,                     // Block size in bits (512 bits)
    localparam  _NUM_LINES             = TOTAL_SIZE / _BLOCK_SIZE / NUM_WAYS,   // Sets count (64 sets)
    localparam  _OFFSET_BITS           = $clog2(DATA_ELEMENTS),                 // Block byte offset (6 bits)
    localparam  _LINE_BITS             = $clog2(_NUM_LINES),                    // Set index bits (6 bits)
    localparam  _TAG_BITS              = ADDR_SIZE - _LINE_BITS - _OFFSET_BITS, // Tag bits (20 bits)
    localparam  _NUM_TRANSFER          = _BLOCK_SIZE / DATA_SIZE,               // Refill beats count (16 beats)
    localparam  _TRANSFER_BITS         = (_NUM_TRANSFER > 1) ? $clog2(_NUM_TRANSFER) : 1
) (
    input logic                                         clk,
    input logic                                         rst_n,

    // Cache Configuration
    input logic                                         write_through,

    // Central FSM Pipeline Interface
    input logic [ADDR_SIZE-1 : 0]                       fsm_addr,
    input logic [DATA_SIZE-1 : 0]                       fsm_data,
    input logic                                         fsm_write,
    input logic                                         fsm_valid,
    output logic                                        fsm_ready,
    output logic                                        fsm_hit,
    output logic                                        fsm_accessed,

`ifdef MULTIWAY
    output logic [$clog2(NUM_WAYS)-1 : 0]               fsm_way,
`endif

    // Memory Eviction Interface (Connected to Writeback / Channel C Controller)
    output logic                                        write_valid,
    output logic [ADDR_SIZE-1 : 0]                      write_addr,
    output logic [_BLOCK_SIZE-1 : 0]                    write_data,
    output logic [_NUM_TRANSFER-1 : 0]                  write_strb,
    input logic                                         write_ready,

    // Memory Refill Completion Notification
    input logic                                         fetch_done,

    // Data Array Interconnect Interface
    output logic                                        arr_valid,
    output logic                                        arr_write,
    output logic [ADDR_SIZE-1 : 0]                      arr_addr,
    output logic [DATA_SIZE-1 : 0]                      arr_out_data,
    input logic  [_BLOCK_SIZE-1 : 0]                    arr_in_data,
    input logic                                         arr_ready
);

    localparam _WAY_BITS = (NUM_WAYS > 1) ? $clog2(NUM_WAYS) : 0;

    // ========================================================================
    // Internal Storage Arrays: Tag SRAM, Valid/Dirty Bits, and MRU Tracker
    // ========================================================================
    logic [ADDR_SIZE-1 : _LINE_BITS+_OFFSET_BITS] tag_data [NUM_WAYS-1 : 0];
    logic [_WAY_BITS-1 : 0]                       MRU      [_NUM_LINES-1 : 0];
    logic [NUM_WAYS-1 : 0]                        valid_reg [_NUM_LINES-1 : 0];
    logic [NUM_WAYS-1 : 0]                        dirty_reg [_NUM_LINES-1 : 0];

    // Pipeline control registers
    logic                                         tag_access_done;
    logic                                         write_keep;
    logic [ADDR_SIZE-1 : 0]                       addr_keep;
    logic [DATA_SIZE-1 : 0]                       data_keep;

    // FSM State Encoding
    localparam STATE_IDLE    = 2'd0;
    localparam STATE_COMPARE = 2'd1;
    localparam STATE_STALL   = 2'd2;

    logic [1:0] cur_state, next_state;

    // ========================================================================
    // Synchronous Comparison Latency Counter
    // Matches the 1-cycle registered read latency of Tag SRAM primitives
    // ========================================================================
    counter_offset #(.COUNT_LIMIT (LATENCY-1))
    latency_counter (
        .clk     (clk),
        .rst_n   (rst_n && (cur_state != STATE_IDLE)),
        .start   (1'b1),
        .counter (),
        .done    (tag_access_done)
    );

    logic [NUM_WAYS-1 : 0]  en;
    logic [NUM_WAYS-1 : 0]  wren;
    logic [_WAY_BITS-1 : 0] way_vld;
    logic [_WAY_BITS-1 : 0] way_hit_idx;
    logic [NUM_WAYS-1 : 0]  cur_vld;
    logic [NUM_WAYS-1 : 0]  way_hit;

    // Priority encoder to identify the first empty way in the set
    priority_encoder #(.WIDTH(NUM_WAYS), .LSB_PRIORITY("HIGH"))
    next_way (
        .input_unencoded (cur_vld),
        .output_valid    (),
        .output_encoded  (way_vld),
        .output_unencoded()
    );

    // Priority encoder to encode the hitting way index
    priority_encoder #(.WIDTH(NUM_WAYS), .LSB_PRIORITY("HIGH"))
    cur_hit (
        .input_unencoded (way_hit),
        .output_valid    (),
        .output_encoded  (way_hit_idx),
        .output_unencoded()
    );

    // ========================================================================
    // Multi-Way Tag SRAM Storage Primitives
    // ========================================================================
    genvar k;
    generate
        for(k = 0; k < NUM_WAYS; k = k + 1) begin : g_tag_ways
            mem_model #(
                .MEM_WIDTH (_TAG_BITS),
                .MEM_DEPTH (_NUM_LINES),
                .MEM_TYPE  ("XILINX_LOW")
            ) tag_sram (
                .clk      (clk),
                .rst_n    (rst_n),
                .wren     (wren[k]),
                .en       (en[k]),
                .in_addr  (addr_keep[_LINE_BITS+_OFFSET_BITS-1 : _OFFSET_BITS]),
                .in_data  (addr_keep[ADDR_SIZE-1 : _LINE_BITS+_OFFSET_BITS]),
                .out_data (tag_data[k])
            );

            // Empty way detection: 1 if the way is currently invalid
            assign cur_vld[k] = !valid_reg[addr_keep[_LINE_BITS+_OFFSET_BITS-1 : _OFFSET_BITS]][k];

            // Parallel tag matching qualifier
            assign way_hit[k] = tag_access_done && (cur_state == STATE_COMPARE) &&
                                valid_reg[addr_keep[_LINE_BITS+_OFFSET_BITS-1 : _OFFSET_BITS]][k] &&
                                (tag_data[k] == addr_keep[ADDR_SIZE-1 : _LINE_BITS+_OFFSET_BITS]);
        end
    endgenerate

    logic [_WAY_BITS-1 : 0] next_MRU;
    logic [_WAY_BITS-1 : 0] way;
    logic [_WAY_BITS-1 : 0] way_keep;

    assign fsm_accessed = tag_access_done;
    assign fsm_hit      = |way_hit;

`ifdef MULTIWAY
    assign fsm_way      = (cur_state == STATE_COMPARE) ? way : way_keep;
`endif

    // Modulo increment for round-robin victim replacement
    assign next_MRU = (NUM_WAYS > 1) ? (MRU[addr_keep[_LINE_BITS+_OFFSET_BITS-1 : _OFFSET_BITS]] + 1'b1) % NUM_WAYS : 0;

    // ========================================================================
    // Eviction Tag Buffer: Eliminates Eviction Tag Race Conditions
    // Synchronously captures victim tag and set address prior to SRAM overwrites
    // ========================================================================
    reg [_TAG_BITS-1 : 0]       evict_tag_buf;
    reg [_LINE_BITS-1 : 0]      evict_set_buf;
    reg                         evict_buf_valid;

    // Identify if the selected victim way holds dirty data
    wire [_LINE_BITS-1 : 0]     current_set_idx = addr_keep[_LINE_BITS+_OFFSET_BITS-1 : _OFFSET_BITS];
    wire                        victim_is_dirty = dirty_reg[current_set_idx][way];
    wire                        is_dirty_miss   = tag_access_done && (!(|way_hit)) && (!write_through) && (!(|cur_vld)) && victim_is_dirty;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            evict_tag_buf   <= '0;
            evict_set_buf   <= '0;
            evict_buf_valid <= 1'b0;
        end else begin
            // Latch victim tag synchronously on dirty eviction trigger
            if ((cur_state == STATE_COMPARE) && is_dirty_miss) begin
                evict_tag_buf   <= tag_data[way];
                evict_set_buf   <= current_set_idx;
                evict_buf_valid <= 1'b1;
            end else if (write_valid && write_ready) begin
                // Clear hold flag once eviction handshake completes
                evict_buf_valid <= 1'b0;
            end
        end
    end

    // Stable eviction writeback address selection
    wire [ADDR_SIZE-1 : 0] stable_evict_addr = evict_buf_valid ? 
        {evict_tag_buf, evict_set_buf, {_OFFSET_BITS{1'b0}}} :
        {tag_data[way], current_set_idx, {_OFFSET_BITS{1'b0}}};

    // ========================================================================
    // Request Attribute Latching & State Transitions
    // ========================================================================
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            cur_state  <= STATE_IDLE;
            addr_keep  <= '0;
            data_keep  <= '0;
            write_keep <= 1'b0;
            way_keep   <= '0;
        end else begin
            cur_state  <= next_state;
            if (cur_state == STATE_IDLE && fsm_valid) begin
                addr_keep  <= fsm_addr;
                data_keep  <= fsm_data;
                write_keep <= fsm_write;
            end
            if (cur_state == STATE_COMPARE) begin
                way_keep   <= way;
            end
        end
    end

    // ========================================================================
    // Storage Updates: Valid, Dirty, and MRU Tracking Logic
    // ========================================================================
    genvar i, j;
    generate
        for(i = 0; i < _NUM_LINES; i = i + 1) begin : g_lines
            for(j = 0; j < NUM_WAYS; j = j + 1) begin : g_ways
                always_ff @(posedge clk or negedge rst_n) begin
                    if (!rst_n) begin
                        dirty_reg[i][j] <= 1'b0;
                        valid_reg[i][j] <= 1'b0;
                    end else begin
                        if (i == addr_keep[_LINE_BITS+_OFFSET_BITS-1 : _OFFSET_BITS]) begin
                            // Mark dirty on hit write in write-back mode
                            if (write_keep && way_hit[j] && !write_through)
                                dirty_reg[i][j] <= 1'b1;
                            else if ((cur_state == STATE_STALL) && fetch_done && (j == way_keep))
                                dirty_reg[i][j] <= (write_keep && !write_through) ? 1'b1 : 1'b0;

                            // Set valid when miss refill completes (synchronized to way_keep)
                            if (j == way_keep && ((cur_state == STATE_STALL && next_state == STATE_IDLE) || fetch_done))
                                valid_reg[i][j] <= 1'b1;
                        end
                    end
                end
            end

            // Drift-free MRU pointer update (Report 08212026 resolution)
            always_ff @(posedge clk or negedge rst_n) begin
                if (!rst_n) begin
                    MRU[i] <= '0;
                end else if ((i == addr_keep[_LINE_BITS+_OFFSET_BITS-1 : _OFFSET_BITS]) && 
                             (next_state == STATE_IDLE) && (cur_state != STATE_IDLE)) begin
                    MRU[i] <= (|way_hit) ? way_hit_idx : 
                              (|cur_vld) ? way_vld     : next_MRU;
                end
            end
        end
    endgenerate

    // ========================================================================
    // Combinational Datapath & Eviction Control Logic
    // ========================================================================
    integer l;
    always_comb begin
        next_state   = cur_state;
        fsm_ready    = (cur_state == STATE_IDLE);

        for(l = 0; l < NUM_WAYS; l = l + 1) begin
            wren[l] = 1'b0;
            en[l]   = 1'b0;
        end

        write_valid  = 1'b0;
        write_addr   = stable_evict_addr;
        write_data   = '0;
        write_strb   = '0;

        arr_valid    = 1'b0;
        arr_write    = 1'b0;
        arr_addr     = '0;
        arr_out_data = '0;
        way          = '0;

        case(cur_state)
            // ----------------------------------------------------------------
            // STATE_IDLE: Await request and initiate parallel SRAM tag read
            // ----------------------------------------------------------------
            STATE_IDLE: begin
                fsm_ready = 1'b1;
                if (fsm_valid) begin
                    for(l = 0; l < NUM_WAYS; l = l + 1) en[l] = 1'b1;
                    next_state = STATE_COMPARE;
                end
            end

            // ----------------------------------------------------------------
            // STATE_COMPARE: Evaluate hit/miss and orchestrate store or eviction
            // ----------------------------------------------------------------
            STATE_COMPARE: begin
                for(l = 0; l < NUM_WAYS; l = l + 1) en[l] = 1'b1;

                if (tag_access_done) begin
                    if (write_keep) begin
                        // ----------------------------------------------------
                        // WRITE HIT PATH
                        // ----------------------------------------------------
                        if (|way_hit) begin
                            arr_addr     = addr_keep;
                            arr_out_data = data_keep;
                            arr_write    = 1'b1;
                            arr_valid    = 1'b1;
                            way          = way_hit_idx;
                            next_state   = STATE_IDLE;

                            if (write_through) begin
                                write_addr = {addr_keep[ADDR_SIZE-1 : _OFFSET_BITS-_TRANSFER_BITS], {_OFFSET_BITS-_TRANSFER_BITS{1'b0}}};
                                write_data[(addr_keep[_OFFSET_BITS-1 -: _TRANSFER_BITS]+1)*DATA_SIZE-1 -: DATA_SIZE] = data_keep;
                                write_strb[addr_keep[_OFFSET_BITS-1 -: _TRANSFER_BITS]] = 1'b1;
                                write_valid = 1'b1;
                                if (!(write_valid && write_ready)) next_state = STATE_COMPARE;
                            end
                        end else begin
                            // ----------------------------------------------------
                            // WRITE MISS PATH
                            // ----------------------------------------------------
                            if (write_through) begin
                                write_addr = {addr_keep[ADDR_SIZE-1 : _OFFSET_BITS-_TRANSFER_BITS], {_OFFSET_BITS-_TRANSFER_BITS{1'b0}}};
                                write_data[(addr_keep[_OFFSET_BITS-1 -: _TRANSFER_BITS]+1)*DATA_SIZE-1 -: DATA_SIZE] = data_keep;
                                write_strb[addr_keep[_OFFSET_BITS-1 -: _TRANSFER_BITS]] = 1'b1;
                                write_valid = 1'b1;
                                next_state = STATE_IDLE;
                                if (!(write_valid && write_ready)) next_state = STATE_COMPARE;
                            end else begin
                                // Write-Back Mode: Allocate empty way or evict victim
                                if (!(|cur_vld)) begin
                                    way = next_MRU;
                                    if (dirty_reg[current_set_idx][next_MRU]) begin
                                        write_addr  = stable_evict_addr;
                                        write_data  = arr_in_data;
                                        write_strb  = {_NUM_TRANSFER{1'b1}};
                                        write_valid = 1'b1;
                                    end
                                    if ((write_valid && write_ready) || !write_valid) begin
                                        wren[next_MRU] = 1'b1;
                                        next_state     = STATE_IDLE;
                                    end
                                end else begin
                                    way           = way_vld;
                                    wren[way_vld] = 1'b1;
                                    next_state    = STATE_IDLE;
                                end
                            end
                        end
                    end else begin
                        // ----------------------------------------------------
                        // READ PATH (HIT OR NON-BLOCKING MISS)
                        // ----------------------------------------------------
                        if (|way_hit) begin
                            way = way_hit_idx;
                            next_state = STATE_IDLE;
                        end else begin
                            // Non-Blocking Read Miss: Update tag array but return to IDLE immediately
                            if (!(|cur_vld)) begin
                                way = next_MRU;
                                if (dirty_reg[current_set_idx][next_MRU]) begin
                                    write_addr  = stable_evict_addr;
                                    write_data  = arr_in_data;
                                    write_strb  = {_NUM_TRANSFER{1'b1}};
                                    write_valid = 1'b1;
                                end
                                if ((write_valid && write_ready) || !write_valid) begin
                                    wren[next_MRU] = 1'b1;
                                    next_state     = STATE_IDLE;
                                end
                            end else begin
                                way           = way_vld;
                                wren[way_vld] = 1'b1;
                                next_state    = STATE_IDLE;
                            end
                        end
                    end
                end
            end

            // ----------------------------------------------------------------
            // STATE_STALL: Await refill completion in blocking mode
            // ----------------------------------------------------------------
            default: begin
                if (fetch_done) begin
                    next_state = STATE_IDLE;
                    if (write_keep && !write_through) begin
                        arr_addr     = addr_keep;
                        arr_out_data = data_keep;
                        arr_write    = 1'b1;
                        arr_valid    = 1'b1;
                        way          = way_keep;
                    end
                end
            end
        endcase
    end

endmodule: custom_tag_array