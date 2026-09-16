// ============================================================================
// File: tag_array.v
// Description: Non-Blocking Tag Array with Continuous Tag Lookup Support
// Optimization: Returns to IDLE on Read Miss to enable subsequent Cache Hits
// ============================================================================

`timescale 1ns / 100ps

module tag_array #(
    parameter   ADDR_SIZE              = 32,
    parameter   DATA_SIZE              = 32,
    parameter   DATA_ELEMENTS          = 8,
    parameter   TOTAL_SIZE             = 1024,
    parameter   LATENCY                = 2,
    parameter   NUM_WAYS               = 2,
    parameter   SET_REPLACEMENT_POLICY = "NMRU",
    localparam  _BLOCK_SIZE            = DATA_ELEMENTS * 8,
    localparam  _NUM_LINES             = TOTAL_SIZE / _BLOCK_SIZE / NUM_WAYS,
    localparam  _OFFSET_BITS           = $clog2(DATA_ELEMENTS),
    localparam  _LINE_BITS             = $clog2(_NUM_LINES),
    localparam  _TAG_BITS              = ADDR_SIZE - _LINE_BITS - _OFFSET_BITS,
    localparam  _NUM_TRANSFER          = _BLOCK_SIZE / DATA_SIZE,
    localparam  _TRANSFER_BITS         = (_NUM_TRANSFER > 1) ? $clog2(_NUM_TRANSFER) : 1
) (
    input logic                                         clk,
    input logic                                         rst_n,

    // Configuration
    input logic                                         write_through,

    // Central FSM Interface
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

    // Write Controller Interface (Evictions)
    output logic                                        write_valid,
    output logic [ADDR_SIZE-1 : 0]                      write_addr,
    output logic [_BLOCK_SIZE-1 : 0]                    write_data,
    output logic [_NUM_TRANSFER-1 : 0]                  write_strb,
    input logic                                         write_ready,

    // Fetch Unit Interface (Refill Notification)
    input logic                                         fetch_done,

    // Data Array Interface
    output logic                                        arr_valid,
    output logic                                        arr_write,
    output logic [ADDR_SIZE-1 : 0]                      arr_addr,
    output logic [DATA_SIZE-1 : 0]                      arr_out_data,
    input logic  [_BLOCK_SIZE-1 : 0]                    arr_in_data,
    input logic                                         arr_ready
);

    localparam _WAY_BITS = (NUM_WAYS > 1) ? $clog2(NUM_WAYS) : 0;

    logic [ADDR_SIZE-1 : _LINE_BITS+_OFFSET_BITS] tag_data [NUM_WAYS-1 : 0];

    logic [_WAY_BITS-1 : 0]                        MRU       [_NUM_LINES-1 : 0] /* verilator public */;
    logic [NUM_WAYS-1 : 0]                         valid_reg [_NUM_LINES-1 : 0];
    logic [NUM_WAYS-1 : 0]                         dirty_reg [_NUM_LINES-1 : 0];
    logic                                          tag_access_done;
    logic                                          write_keep;
    logic [ADDR_SIZE-1 : 0]                        addr_keep;
    logic [DATA_SIZE-1 : 0]                        data_keep;

    localparam STATE_IDLE    = 0;
    localparam STATE_COMPARE = 1;
    localparam STATE_STALL   = 2;

    logic [1:0] cur_state, next_state;

    counter_offset #(.COUNT_LIMIT (LATENCY-1))
    latency_counter (
        .clk     (clk),
        .rst_n   (rst_n && (cur_state != STATE_IDLE)),
        .start   (1),
        .counter (),
        .done    (tag_access_done)
    );

    logic [NUM_WAYS-1 : 0]  en;
    logic [NUM_WAYS-1 : 0]  wren;
    logic [_WAY_BITS-1 : 0] way_vld;
    logic [_WAY_BITS-1 : 0] way_hit_idx;
    logic [NUM_WAYS-1 : 0]  cur_vld;
    logic [NUM_WAYS-1 : 0]  way_hit;

    priority_encoder #(.WIDTH(NUM_WAYS), .LSB_PRIORITY("HIGH"))
    next_way (
        .input_unencoded (cur_vld),
        .output_valid    (),
        .output_encoded  (way_vld),
        .output_unencoded()
    );

    priority_encoder #(.WIDTH(NUM_WAYS), .LSB_PRIORITY("HIGH"))
    cur_hit (
        .input_unencoded (way_hit),
        .output_valid    (),
        .output_encoded  (way_hit_idx),
        .output_unencoded()
    );

    genvar k;
    generate
        for(k=0; k<NUM_WAYS; k=k+1) begin : g_tag_ways
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

            assign cur_vld[k] = !valid_reg[addr_keep[_LINE_BITS+_OFFSET_BITS-1 : _OFFSET_BITS]][k];
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

    assign next_MRU = (NUM_WAYS > 1) ? (MRU[addr_keep[_LINE_BITS+_OFFSET_BITS-1 : _OFFSET_BITS]] + 1'b1) % NUM_WAYS : 0;

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

    // Storage updates for dirty_reg, valid_reg, and MRU policy
    genvar i, j;
    generate
        for(i=0; i<_NUM_LINES; i=i+1) begin : g_lines
            for(j=0; j<NUM_WAYS; j=j+1) begin : g_ways
                always_ff @(posedge clk or negedge rst_n) begin
                    if (!rst_n) begin
                        dirty_reg[i][j] <= 1'b0;
                        valid_reg[i][j] <= 1'b0;
                    end else begin
                        if (i == addr_keep[_LINE_BITS+_OFFSET_BITS-1 : _OFFSET_BITS]) begin
                            if (write_keep && way_hit[j] && !write_through)
                                dirty_reg[i][j] <= 1'b1;
                            else if ((cur_state == STATE_STALL) && fetch_done && (j == way_keep))
                                dirty_reg[i][j] <= (write_keep && !write_through) ? 1'b1 : 1'b0;

                            // Set valid when miss refill completes
                            if (j == way_keep && ((cur_state == STATE_STALL && next_state == STATE_IDLE) || fetch_done))
                                valid_reg[i][j] <= 1'b1;
                        end
                    end
                end
            end

            always_ff @(posedge clk or negedge rst_n) begin
                if (!rst_n) begin
                    MRU[i] <= '0;
                end else if ((i == addr_keep[_LINE_BITS+_OFFSET_BITS-1 : _OFFSET_BITS]) && 
                             (next_state == STATE_IDLE) && (cur_state != STATE_IDLE)) begin
                    MRU[i] <= (|way_hit) ? way_hit_idx : (!(&cur_vld) ? next_MRU : way_vld);
                end
            end
        end
    endgenerate

    integer l;
    always_comb begin
        next_state   = cur_state;
        fsm_ready    = (cur_state == STATE_IDLE);

        for(l = 0; l < NUM_WAYS; l=l+1) begin
            wren[l] = 1'b0;
            en[l]   = 1'b0;
        end

        write_valid  = 1'b0;
        write_addr   = '0;
        write_data   = '0;
        write_strb   = '0;

        arr_valid    = 1'b0;
        arr_write    = 1'b0;
        arr_addr     = '0;
        arr_out_data = '0;
        way          = 1'b0;

        case(cur_state)
            STATE_IDLE: begin
                fsm_ready = 1'b1;
                if (fsm_valid) begin
                    for(l = 0; l < NUM_WAYS; l=l+1) en[l] = 1'b1;
                    next_state = STATE_COMPARE;
                end
            end

            STATE_COMPARE: begin
                for(l = 0; l < NUM_WAYS; l=l+1) en[l] = 1'b1;

                if (tag_access_done) begin
                    if (write_keep) begin
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
                            // Write Miss Path
                            if (write_through) begin
                                write_addr = {addr_keep[ADDR_SIZE-1 : _OFFSET_BITS-_TRANSFER_BITS], {_OFFSET_BITS-_TRANSFER_BITS{1'b0}}};
                                write_data[(addr_keep[_OFFSET_BITS-1 -: _TRANSFER_BITS]+1)*DATA_SIZE-1 -: DATA_SIZE] = data_keep;
                                write_strb[addr_keep[_OFFSET_BITS-1 -: _TRANSFER_BITS]] = 1'b1;
                                write_valid = 1'b1;
                                next_state = STATE_IDLE;
                                if (!(write_valid && write_ready)) next_state = STATE_COMPARE;
                            end else begin
                                if (!(|cur_vld)) begin
                                    way = next_MRU;
                                    if (dirty_reg[addr_keep[_LINE_BITS+_OFFSET_BITS-1 : _OFFSET_BITS]][next_MRU]) begin
                                        write_addr  = {tag_data[next_MRU], addr_keep[_LINE_BITS+_OFFSET_BITS-1 : _OFFSET_BITS], {_OFFSET_BITS{1'b0}}};
                                        write_data  = arr_in_data;
                                        write_strb  = {_NUM_TRANSFER{1'b1}};
                                        write_valid = 1'b1;
                                    end
                                    if ((write_valid && write_ready) || !write_valid) begin
                                        wren[next_MRU] = 1'b1;
                                        next_state     = STATE_STALL;
                                    end
                                end else begin
                                    way           = way_vld;
                                    wren[way_vld] = 1'b1;
                                    next_state    = STATE_STALL;
                                end
                            end
                        end
                    end else begin
                        // Read Path
                        if (|way_hit) begin
                            way = way_hit_idx;
                            next_state = STATE_IDLE;
                        end else begin
                            // ------------------------------------------------
                            // NON-BLOCKING READ MISS:
                            // Write tag to allocated way, but return to IDLE!
                            // This allows subsequent hits to be verified!
                            // ------------------------------------------------
                            if (!(|cur_vld)) begin
                                way = next_MRU;
                                if (dirty_reg[addr_keep[_LINE_BITS+_OFFSET_BITS-1 : _OFFSET_BITS]][next_MRU]) begin
                                    write_addr  = {tag_data[next_MRU], addr_keep[_LINE_BITS+_OFFSET_BITS-1 : _OFFSET_BITS], {_OFFSET_BITS{1'b0}}};
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

endmodule: tag_array