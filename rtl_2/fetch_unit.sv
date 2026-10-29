`timescale 1ps/1ps

module fetch_unit #(
    parameter TOTAL_SIZE                = 1024,
    parameter ADDR_SIZE                 = 32,  
    parameter DATA_SIZE                 = 32,
    parameter DATA_ELEMENTS             = 8,
    parameter SIZE                      = 4,
    parameter LATENCY                   = 2,
    parameter NUM_WAYS                  = 2,
    parameter SET_REPLACEMENT_POLICY    = "NMRU",

    localparam _BLOCK_SIZE              = DATA_ELEMENTS * 8,
    localparam _NUM_LINES               = TOTAL_SIZE / _BLOCK_SIZE / NUM_WAYS,
    localparam _OFFSET_BITS             = $clog2(DATA_ELEMENTS),
    localparam _LINE_BITS               = $clog2(_NUM_LINES),
    localparam _TAG_BITS                = ADDR_SIZE - _LINE_BITS - _OFFSET_BITS,
    localparam _NUM_TRANSFER            = _BLOCK_SIZE / DATA_SIZE,
    localparam _TRANSFER_BITS           = $clog2(_NUM_TRANSFER)
)(
    input logic                             clk,
    input logic                             rst_n,

    // Fetch unit <-> FSM
    input logic [ADDR_SIZE-1:0]             in_addr,
    input logic [DATA_SIZE-1:0]             in_data,
    output logic                            in_ready,
    input logic                             in_valid,

    input logic                             write,
    input logic                             prefetch,
    input logic                             cache_hit,
    input logic                             cache_access_done,

    output logic [ADDR_SIZE-1 : 0]          out_addr,
    output logic [_BLOCK_SIZE-1:0]          out_data,
    output logic                            out_valid,
    input logic                             out_ready,

    // Fetch unit <-> Secure address translator
    output logic [ADDR_SIZE-1 : 0]      trans_out_addr,
    input logic  [ADDR_SIZE-1 : 0]      trans_in_addr,
    output logic                        trans_valid,
    input logic                         trans_done,

    // Fetch unit <-> Read controller
    output logic [ADDR_SIZE-1 : 0]      req_addr,
    output logic                        req_valid,
    input logic                         req_ready,
    input logic                         req_done,
    input logic  [_BLOCK_SIZE-1 : 0]    req_data
);

logic [1:0]                              cur_state;
logic [1:0]                              next_state;

localparam STATE_IDLE      = 0;
localparam STATE_PREFETCH  = 1;
localparam STATE_COMPARE   = 2;
localparam STATE_FETCH     = 3;

typedef    logic [1:0]     lifetime_t;

// Metadata Table
lifetime_t [0 : SIZE-1]                  lifetime;
lifetime_t [0 : SIZE-1]                  lifetime_p;
logic      [0 : SIZE-1]                  refresh;
logic      [0 : SIZE-1]                  start;
logic      [0 : SIZE-1]                  hit;
logic      [0 : SIZE-1]                  allocate;

logic                                    empty;
logic [$clog2(SIZE)-1 : 0]               empty_idx;

logic [$clog2(SIZE)-1:0]                 write_addr;
logic [_TAG_BITS+_LINE_BITS-1:0]         write_data;
logic                                    write_delete;
logic                                    write_enable;
logic                                    write_busy;

logic [_TAG_BITS+_LINE_BITS-1:0]         compare_data;
logic [2**$clog2(SIZE)-1:0]              match_many;
logic [2**$clog2(SIZE)-1:0]              match_single;
logic [$clog2(SIZE)-1:0]                 match_addr;
logic                                    match;

OR_gate        #(.D_TYPE                 (lifetime_t),
                 .SIZE                   (SIZE))
empty_tracker  (.clk                     (clk),
                 .sig_in                 (lifetime),
                 .sig_out                (empty),
                 .idx                    (empty_idx));

cam            #(.ADDR_WIDTH             ($clog2(SIZE)),
                 .SLICE_WIDTH            (_TAG_BITS+_LINE_BITS),
                 .DATA_WIDTH             (_TAG_BITS+_LINE_BITS),
                 .CAM_STYLE              ("BRAM"))
tag_buffer      (.clk                    (clk),
                 .rst                    (!rst_n),

                 .write_addr             (write_addr),
                 .write_data             (write_data),
                 .write_delete           (write_delete),
                 .write_enable           (write_enable),
                 .write_busy             (write_busy),

                 .compare_data           (compare_data),
                 .match_many             (match_many),
                 .match_single           (match_single),
                 .match_addr             (match_addr),
                 .match                  (match)
);

// Control logic
logic [ADDR_SIZE-1 : 0]     prev_addr;

logic [$clog2(LATENCY) : 0] rd_mem;
logic                       rd_cam;
logic [1:0]                 erase_cam;
logic                       wr_cam;

logic                       read;
logic                       busy;
logic                       busy_p;
logic                       new_req;

logic                       write_keep;
logic [DATA_SIZE-1:0]       in_data_keep;
logic                       cache_access_keep;
logic                       not_match_keep;
logic                       trans_done_keep;
logic                       req_done_keep;

logic [_BLOCK_SIZE-1:0]     buffer_data;

genvar i;
generate
    for(i=0; i<SIZE; i+=1) begin
        counter_offset #(.COUNT_LIMIT   (3))
        stream_counter (.clk            (clk),
                        .rst_n          (rst_n && !refresh[i]),
                        .start          (start[i] && prefetch),
                        .counter        (lifetime_p[i]),
                        .done           ());

        assign lifetime[i]  = ~lifetime_p[i];
        assign start[i]     = new_req && (|lifetime[i]);
        assign refresh[i]   = allocate[i] || hit[i];

        always_ff @( clk ) begin
            allocate[i] <= (empty_idx  == i) && (cur_state == STATE_PREFETCH) && req_done_keep && (next_state == STATE_IDLE);
            hit[i]      <= (match_addr == i) && (cur_state == STATE_COMPARE) && match;
        end
    end
endgenerate

assign new_req = busy && ! busy_p;

wire rd_mem_done;
wire rd_cam_done;
wire erase_cam_done;
wire wr_cam_done;

wire w_prefetch_rd_cam  = trans_done;
logic w_prefetch_rd_cam_click, w_prefetch_rd_cam_happend, w_prefetch_rd_cam_done;

wire w_prefetch_erase   = w_prefetch_rd_cam_happend;
logic w_prefetch_erase_click, w_prefetch_erase_happend, w_prefetch_erase_done;

wire w_prefetch_wr_cam  = (req_done || req_done_keep) && w_prefetch_erase_done;
logic w_prefetch_wr_cam_click, w_prefetch_wr_cam_happend, w_prefetch_wr_cam_done;

wire w_compare_rd_cam = (cur_state == STATE_IDLE) && (next_state == STATE_COMPARE);
logic w_compare_rd_cam_click, w_compare_rd_cam_happend , w_compare_rd_cam_done;

wire w_compare_rd_mem = w_compare_rd_cam_done && (write || !cache_hit) && match;
logic w_compare_rd_mem_click, w_compare_rd_mem_happend, w_compare_rd_mem_done;

wire rd_mem_click       = w_compare_rd_mem_click;
wire erase_cam_click    = w_prefetch_erase_click;
wire rd_cam_click       = w_prefetch_rd_cam_click || w_compare_rd_cam_click;
wire wr_cam_click       = w_prefetch_wr_cam_click;

assign rd_cam_done = 1;


ad_edge_detect          #(.EDGE(0))
w_prefetch_rd_cam_edge  (.clk        (clk),
                         .rst        (!rst_n),
                         .signal_in  (w_prefetch_rd_cam),
                         .signal_out (w_prefetch_rd_cam_click));

ad_edge_detect          #(.EDGE(0))
w_prefetch_erase_edge   (.clk        (clk),
                         .rst        (!rst_n),
                         .signal_in  (w_prefetch_rd_cam),
                         .signal_out (w_prefetch_rd_cam_click));

ad_edge_detect          #(.EDGE(0))
w_prefetch_wr_cam_edge  (.clk        (clk),
                         .rst        (!rst_n),
                         .signal_in  (w_prefetch_wr_cam),
                         .signal_out (w_prefetch_wr_cam_click));

ad_edge_detect          #(.EDGE(0))
w_compare_rd_cam_edge   (.clk        (clk),
                         .rst        (!rst_n),
                         .signal_in  (w_compare_rd_cam),
                         .signal_out (w_compare_rd_cam_click));

ad_edge_detect          #(.EDGE(0))
w_compare_rd_mem_edge   (.clk        (clk),
                         .rst        (!rst_n),
                         .signal_in  (w_compare_rd_mem),
                         .signal_out (w_compare_rd_mem_click));


counter_offset          #(.COUNT_LIMIT   (LATENCY - 1))
rd_mem_counter          (.clk           (clk),
                         .rst_n         (rst_n && !rd_mem_click),
                         .start         (1'b1),
                         .counter       (rd_mem),
                         .done          (rd_mem_done));

counter_offset          #(.COUNT_LIMIT   (0))
rd_cam_counter          (.clk           (clk),
                         .rst_n         (rst_n && !rd_cam_click),
                         .start         (1'b1),
                         .counter       (rd_cam),
                         .done          ());


counter_offset          #(.COUNT_LIMIT   (2))
erase_cam_counter       (.clk           (clk),
                         .rst_n         (rst_n && !erase_cam_click),
                         .start         (1'b1),
                         .counter       (erase_cam),
                         .done          (erase_cam_done));

counter_offset          #(.COUNT_LIMIT   (2))
wr_mem_counter          (.clk           (clk),
                         .rst_n         (rst_n && !wr_cam_click),
                         .start         (1'b1),
                         .counter       (wr_cam),
                         .done          (wr_cam_done));

// Data array
logic                       en;
logic                       wren;
logic [$clog2(SIZE)-1 : 0]  mem_addr;
logic [_BLOCK_SIZE-1 : 0]   mem_in_data;
logic [_BLOCK_SIZE-1 : 0]   mem_out_data;

mem_model #(.MEM_WIDTH (_BLOCK_SIZE),
            .MEM_DEPTH (SIZE))
data_buffer (.clk      (clk),
             .rst_n    (rst_n),
             .wren     (wren),
             .en       (en),
             .in_addr  (mem_addr),
             .in_data  (mem_in_data),
             .out_data (mem_out_data));

// FSM
always_ff @(posedge clk, negedge rst_n) begin
    cur_state <= (!rst_n) ? STATE_IDLE : next_state;

    busy                        <=  (!rst_n)                                                  ? 0 :
                                    out_valid || cache_hit || (next_state == STATE_IDLE)      ? 0 :
                                    in_valid && in_ready                                      ? 1 : busy;

    busy_p                      <=  (!rst_n)     ? 0 : 
                                    out_valid    ? 0 : busy; 

    read                        <=  (!rst_n)                                                  ? 0 :
                                    (cur_state != STATE_PREFETCH)                             ? 0 :
                                    (w_prefetch_rd_cam_happend && !match && req_ready)        ? 1 : read;

    prev_addr                   <=  (!rst_n)                                                  ? 0 :
                                    ((cur_state == STATE_IDLE) && in_valid)                   ? in_addr :
                                    (trans_done && cur_state == STATE_PREFETCH)               ? prev_addr + (1<<_OFFSET_BITS) : prev_addr;

    buffer_data                 <=  (!rst_n)                                                  ? {(_BLOCK_SIZE){1'b0}} :
                                    (cur_state != STATE_PREFETCH)                             ? {(_BLOCK_SIZE){1'b0}} :
                                    (req_done)                                                ? req_data : buffer_data;

    in_data_keep                <=  (!rst_n)                                                  ? 0 :
                                    ((cur_state == STATE_IDLE) && in_valid)                   ? in_data : in_data_keep;

    write_keep                  <=  (!rst_n)                                                  ? 0 :
                                    ((cur_state == STATE_IDLE) && in_valid)                   ?write : write_keep;

    not_match_keep              <=  (!rst_n)                                                  ? 0 :
                                    (cur_state != STATE_PREFETCH)                             ? 0 :
                                    (w_prefetch_rd_cam_happend && !match)                     ? 1 : not_match_keep;

    req_done_keep               <=  (!rst_n)                                                  ? 0 :
                                    (cur_state == STATE_IDLE)                                 ? 0 :
                                    (w_prefetch_rd_cam_happend && !match && req_done)
                                    || (cur_state == STATE_FETCH && req_done)                 ? 1 : req_done_keep;

    trans_done_keep             <= (!rst_n)                                                   ? 0 :
                                    (cur_state != STATE_PREFETCH)                             ? 0 :
                                    trans_done                                                ? 1 : trans_done_keep;

    cache_access_keep           <=  (!rst_n)                                                  ? 0 :
                                    (cur_state == STATE_IDLE)                                 ? 0 :
                                    (cache_access_done)                                       ? 1 : cache_access_keep;

    w_prefetch_rd_cam_happend   <= (!rst_n)                                                   ? 0 :
                                   (cur_state == STATE_PREFETCH)                              ? 0 :
                                   w_prefetch_rd_cam                                          ? 1 : w_prefetch_rd_cam_happend;

    w_prefetch_erase_happend    <= (!rst_n)                                                   ? 0 :
                                   (cur_state == STATE_PREFETCH)                              ? 0 : 
                                   w_prefetch_erase                                           ? 1 : w_prefetch_erase_happend;

    w_prefetch_wr_cam_happend   <= (!rst_n)                                                   ? 0 :
                                   (cur_state != STATE_PREFETCH)                              ? 0 :
                                   w_prefetch_wr_cam                                          ? 1 : w_prefetch_wr_cam_happend;
                    
    w_compare_rd_cam_happend    <= (!rst_n)                                                   ? 0 :
                                   (next_state == STATE_IDLE)                                 ? 0 :
                                   w_compare_rd_cam                                           ? 1 : w_compare_rd_cam_happend;

    w_compare_rd_mem_happend    <= (!rst_n)                                                   ? 0 :
                                   (cur_state != STATE_COMPARE)                               ? 0 :
                                   w_compare_rd_mem                                           ? 1 : w_compare_rd_mem_happend;

end

assign  w_prefetch_rd_cam_done  =   (w_prefetch_rd_cam_happend  &&  rd_cam_done);
assign  w_prefetch_erase_done   =   (w_prefetch_erase_happend   &&  erase_cam_done);
assign  w_prefetch_wr_cam_done  =   (w_prefetch_wr_cam_happend  &&  wr_cam_done);
assign  w_compare_rd_cam_done   =   (w_compare_rd_cam_happend   &&  rd_cam_done);
assign  w_compare_rd_mem_done   =   (w_compare_rd_mem_happend   &&  rd_mem_done);

always_comb begin
    next_state  =   cur_state;

    write_addr      =   0;
    write_data      =   0;
    write_data      =   0;
    write_enable    =   0;
    compare_data    =   0;

    wren            =   0;
    en              =   0;
    mem_addr        =   0;
    mem_in_data     =   0;

    in_ready        =   0;

    out_addr        =   0;
    out_data        =   0;
    out_valid       =   0;

    trans_out_addr  =   0;
    trans_valid     =   0;

    req_addr        =   0;
    req_valid       =   0;

    case (cur_state)
        STATE_IDLE: begin
            in_ready    =   1;
            if(in_valid) begin
                compare_data    =   in_addr[ADDR_SIZE-1 : _OFFSET_BITS];
                next_state      =   STATE_COMPARE;
            end else if (empty)begin
                trans_out_addr  =   prev_addr + (1 << _OFFSET_BITS);
                trans_valid     =   1;
                next_state      =   STATE_PREFETCH;
            end
        end

        STATE_PREFETCH: begin
            if(trans_done_keep) begin
                if(w_prefetch_rd_cam_happend) begin
                    if(!match || not_match_keep) begin
                        req_addr    =   trans_in_addr;
                        req_valid   =   !read;
                        if(req_done || req_done_keep) begin
                            if(w_prefetch_wr_cam_done) begin
                                mem_addr        =    empty_idx;
                                mem_in_data     =   buffer_data;
                                en              =   1;
                                wren            =   1;
                                next_state      =   STATE_IDLE;
                            end else begin  
                                write_addr      =   empty_idx;
                                write_data      =   trans_in_addr[ADDR_SIZE-1: _OFFSET_BITS];
                                write_enable    =   1;
                            end
                        end else if(!w_prefetch_erase_done) begin
                            write_addr          =   empty_idx;
                            write_delete        =   1;
                        end
                    end else begin
                        next_state  =   STATE_IDLE;
                    end
                end
            end else begin
                compare_data    =   trans_in_addr[ADDR_SIZE-1:  _OFFSET_BITS];
            end
        end

        STATE_COMPARE: begin
            compare_data    =   prev_addr[ADDR_SIZE-1 : _OFFSET_BITS];
            if(w_compare_rd_cam_done && (cache_access_done || cache_access_keep)) begin
                if(write_keep & match) begin

                    mem_addr    =   match_addr;
                    en          =   1;
                    if(w_compare_rd_mem_done) begin
                        next_state  =   STATE_IDLE;
                        wren        =   1;
                        for(integer j=0; j < _NUM_TRANSFER; j+=1) begin
                            if(j == prev_addr[_OFFSET_BITS-1 : $clog2(DATA_SIZE/8)]) begin
                                mem_in_data[(j+1)*DATA_SIZE-1 -: DATA_SIZE] =   in_data_keep;
                            end else begin
                                mem_in_data[(j+1)*DATA_SIZE-1 -: DATA_SIZE] =   mem_out_data[(j+1)*DATA_SIZE-1 -: DATA_SIZE];
                            end
                        end
                    end
                end else if (!cache_hit) begin
                    if(match) begin
                        mem_addr        =   match_addr;
                        en              =   1;
                        if(w_compare_rd_mem_done) begin
                            out_valid   =   1;
                            out_addr    =   prev_addr;
                            out_data    =   mem_out_data;
                            if(out_ready) begin
                                next_state= STATE_IDLE;
                            end
                        end
                    end else begin
                        req_addr    =   prev_addr;
                        req_valid   =   1;
                        if(req_ready) begin
                            next_state  =   STATE_FETCH;
                        end
                    end
                end else begin
                    next_state = STATE_IDLE;
                end
            end
        end

        STATE_FETCH: begin
            if(req_done || req_done_keep) begin
                out_valid   =   1;
                out_addr    =   prev_addr;
                out_data    =   req_data;
                if(out_ready) begin
                    next_state  =   STATE_IDLE;
                end
            end
        end
    endcase
end



















endmodule