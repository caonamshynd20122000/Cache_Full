module cache_controller #(
    parameter   TOTAL_SIZE      = 8192,
    parameter   ADDR_SIZE       = 32,
    parameter   DATA_SIZE       = 32,
    parameter   DATA_ELEMENTS   = 4,
    localparam  SIZE            = 4,
    parameter   LATENCY         = 2,
    parameter   BOUND_SIZE      = 4,
    localparam  QUEUE_SIZE      = 0,
    parameter   NUM_WAYS        = 2,
    localparam  SET_REPLACEMENT_POLICY = "NMRU",
    // parameter   MEM_DATA_SIZE   = 32,
    localparam  _BLOCK_SIZE     = DATA_ELEMENTS*8,
    localparam  _NUM_LINES      = TOTAL_SIZE / _BLOCK_SIZE / NUM_WAYS,
    localparam  _OFFSET_BITS    = $clog2(DATA_ELEMENTS),
    localparam  _LINE_BITS      = $clog2(_NUM_LINES),
    localparam  _TAG_BITS       = ADDR_SIZE-_LINE_BITS-_OFFSET_BITS,
    localparam  _NUM_TRANSFER   = _BLOCK_SIZE / DATA_SIZE,
    localparam  _TRANSFER_BITS  = (_NUM_TRANSFER > 1) ? $clog2(_NUM_TRANSFER) : 1
) (
    input wire                                          clk_h,
    input wire                                          clk_l,
    input wire                                          rst_n,

    // Cache Controller <-> Configuration ports
    input wire  [7 : 0]                                 cfg_addr,
    input wire  [31 : 0]                                cfg_data_in,
    output wire [31 : 0]                                cfg_data_out,
    input wire                                          cfg_valid,
    output wire                                         cfg_ready,

    // Cache Controller <-> Upper Level ports
    input wire  [ADDR_SIZE-1 : 0]                       in_addr,
    input wire  [DATA_SIZE-1 : 0]                       in_data,
    //FIXME
    input wire  [(DATA_SIZE/8)-1 : 0]                   in_byteen,
    input wire                                          in_valid,
    input wire                                          in_write,
    // input wire                                          in_clear,
    output wire                                         in_ready,

    output wire [ADDR_SIZE-1 : 0]                       out_addr,
    output wire [DATA_SIZE-1 : 0]                       out_data,
    output wire                                         out_valid,
    input wire                                          out_ready,

    // Cache Controller <-> Lower Level ports
    output wire [ADDR_SIZE-1 : 0]                       read_addr,
    input wire  [DATA_SIZE-1 : 0]                       read_data,
    output wire                                         read_valid,
    input wire                                          read_ready,

    output wire [ADDR_SIZE-1 : 0]                       write_addr,
    output wire [DATA_SIZE-1 : 0]                       write_data,
    //FIXME: namcv10 added
    output wire [(DATA_SIZE/8)-1 : 0]                   write_byteen,
    output wire                                         write_valid,
    input wire                                          write_ready
);

`ifdef MULTIWAY

    localparam  _WAY_BITS       = (NUM_WAYS > 1) ? $clog2(NUM_WAYS) : 0;

    wire        [_WAY_BITS-1 : 0]                       fsm_way;

`endif

wire                                                    write_through;
wire                                                    prefetch;
wire                                                    secure_request;
wire [167 : 0]                                          load_val;
wire [BOUND_SIZE-1 : 0]                                 low_bound;
wire [BOUND_SIZE-1 : 0]                                 high_bound;

register_file #(.BOUND_SIZE                             (BOUND_SIZE))
reg_file        (.clk                                   (clk_h),
                 .rst_n                                 (rst_n),

                 .in_valid                              (cfg_valid),
                 .in_ready                              (cfg_ready),
                 .in_addr                               (cfg_addr),
                 .in_data                               (cfg_data_in),

                 .out_data                              (cfg_data_out),

                 .write_through                         (write_through),
                 .prefetch                              (prefetch),

                 .secure_request                        (secure_request),
                 .load_val                              (load_val),
                 .low_bound                             (low_bound),
                 .high_bound                            (high_bound),

                 .load                                  (load));


wire [ADDR_SIZE-1 : 0]          fw_addr;
wire [DATA_SIZE-1 : 0]          fw_data;
wire                            fw_valid;
wire                            fw_rw;
wire                            fw_ready;

wire [ADDR_SIZE-1 : 0]          ib_addr;
wire [DATA_SIZE-1 : 0]          ib_data;
wire                            ib_valid;
wire                            ib_ready;

request_translator      #(.QUEUE_SIZE (QUEUE_SIZE))
req_translator          (.clk         (clk_h),
                         .rst_n       (rst_n),

                         .in_rw       (in_write),
                         .in_addr     (in_addr),
                         .in_data     (in_data),
                         .in_valid    (in_valid),
                         .in_ready    (in_ready),

                         .out_addr    (out_addr),
                         .out_data    (out_data),
                         .out_valid   (out_valid),
                         .out_ready   (out_ready),

                         .fw_rw       (fw_rw),
                         .fw_addr     (fw_addr),
                         .fw_data     (fw_data),
                         .fw_valid    (fw_valid),
                         .fw_ready    (fw_ready),

                         .ib_addr     (ib_addr),
                         .ib_data     (ib_data),
                         .ib_valid    (ib_valid),
                         .ib_ready    (ib_ready));

wire [ADDR_SIZE-1 : 0]          req_addr;
wire [_BLOCK_SIZE-1 : 0]        req_data;
wire                            req_valid;
wire                            req_done;
wire                            req_ready;

read_controller         #(.ADDR_SIZE                    (ADDR_SIZE),
                          .DATA_SIZE                    (DATA_SIZE),
                          .DATA_ELEMENTS                (DATA_ELEMENTS),
                          .TOTAL_SIZE                   (TOTAL_SIZE),
                          .LATENCY                      (LATENCY),
                          .NUM_WAYS                     (NUM_WAYS),
                          .SET_REPLACEMENT_POLICY       (SET_REPLACEMENT_POLICY))
rd_controller           (.clk_l                         (clk_l),
                         .clk_h                         (clk_h),
                         .rst_n                         (rst_n),

                         .cache_read_addr               (req_addr),
                         .cache_read_valid              (req_valid),
                         .cache_read_ready              (req_ready),
                         .cache_read_data               (req_data),
                         .cache_read_done               (req_done),

                         .mem_read_addr                 (read_addr),
                         .mem_read_valid                (read_valid),
                         .mem_read_data                 (read_data),
                         .mem_read_done                 (read_ready));
wire [_BLOCK_SIZE-1 : 0]        arr_data;

wire [ADDR_SIZE-1 : 0]          cache_write_addr;
wire [_BLOCK_SIZE-1 : 0]        cache_write_data;
wire                            cache_write_valid;
wire [_NUM_TRANSFER-1 : 0]      cache_write_strb;
wire                            cache_write_ready;

write_controller        #(.ADDR_SIZE                    (ADDR_SIZE),
                          .DATA_SIZE                    (DATA_SIZE),
                          .DATA_ELEMENTS                (DATA_ELEMENTS),
                          .TOTAL_SIZE                   (TOTAL_SIZE),
                          .LATENCY                      (LATENCY),
                          .NUM_WAYS                     (NUM_WAYS),
                          .SET_REPLACEMENT_POLICY       (SET_REPLACEMENT_POLICY))
wr_controller           (.clk_l                         (clk_l),
                         .clk_h                         (clk_h),
                         .rst_n                         (rst_n),

                         .cache_write_addr              (cache_write_addr),
                         .cache_write_valid             (cache_write_valid),
                         .cache_write_strb              (cache_write_strb),
                         .cache_write_data              (arr_data), //FIXME: namcv10 added
                         .cache_write_byteen            (in_byteen),
                         .cache_write_ready             (cache_write_ready),

                         .mem_write_addr                (write_addr),
                         .mem_write_valid               (write_valid),
                         .mem_write_data                (write_data),
                         .mem_write_byteen              (write_byteen),
                         .mem_write_done                (write_ready));

wire [ADDR_SIZE-1 : 0]          trans_out_addr;
wire [ADDR_SIZE-1 : 0]          trans_in_addr;
wire                            trans_valid;
wire                            trans_done;

wire [ADDR_SIZE-1 : 0]          fsm_addr;
wire [DATA_SIZE-1 : 0]          fsm_data;
wire                            fsm_valid;
wire                            fsm_rw;
wire                            fsm_ready;
wire                            fsm_accessed;

wire [ADDR_SIZE-1 : 0]          return_addr;
wire [_BLOCK_SIZE-1 : 0]        return_data;
wire                            return_valid;
wire                            return_ready;

fetch_unit              #(.TOTAL_SIZE                   (TOTAL_SIZE),
                          .ADDR_SIZE                    (ADDR_SIZE),
                          .DATA_SIZE                    (DATA_SIZE),
                          .DATA_ELEMENTS                (DATA_ELEMENTS),
                          .SIZE                         (SIZE),
                          .LATENCY                      (LATENCY),
                          .NUM_WAYS                     (NUM_WAYS),
                          .SET_REPLACEMENT_POLICY       (SET_REPLACEMENT_POLICY))
f_unit                  (.clk                           (clk_h),
                         .rst_n                         (rst_n),

                         .in_addr                       (fsm_addr),
                         .in_data                       (fsm_data),
                         .in_ready                      (fsm_ready),
                         .in_valid                      (fsm_valid),

                         .write                         (fsm_rw),
                         .cache_hit                     (fsm_hit),
                         .cache_access_done             (fsm_accessed),
                         .prefetch                      (prefetch),

                         .out_addr                      (return_addr),
                         .out_data                      (return_data),
                         .out_valid                     (return_valid),
                         .out_ready                     (return_ready),

                         .trans_out_addr                (trans_out_addr),
                         .trans_in_addr                 (trans_in_addr),
                         .trans_valid                   (trans_valid),
                         .trans_done                    (trans_done),

                         .req_addr                      (req_addr),
                         .req_valid                     (req_valid),
                         .req_ready                     (req_ready),
                         .req_done                      (req_done),
                         .req_data                      (req_data));

wire                            fsm_hit_prev;
wire                            fsm_hit_click           = fsm_hit && !fsm_hit_prev;

wire                            return_valid_prev;
wire                            return_valid_click      = return_valid && !return_valid_prev;


wire [_BLOCK_SIZE-1 : 0]        return_data_fsm_in      = (fsm_hit) ? arr_data : return_data;
wire [_BLOCK_SIZE-1 : 0]        return_data_fsm;
wire [_BLOCK_SIZE-1 : 0]        return_data_fsm_keep    = (return_valid_click | fsm_hit_click) ? return_data_fsm_in : return_data_fsm;

D_FF            #(.SIZE         (1))
fetch_hold      (.clk           (clk_h),
                 .rst_n         (rst_n),
                 .set           (1),
                 .din           (return_valid),
                 .dout          (return_valid_prev));

D_FF            #(.SIZE         (1))
hit_hold        (.clk           (clk_h),
                 .rst_n         (rst_n),
                 .set           (1),
                 .din           (fsm_hit),
                 .dout          (fsm_hit_prev));

D_FF            #(.SIZE         (_BLOCK_SIZE))
data_hold       (.clk           (clk_h),
                 .rst_n         (rst_n),
                 .set           (return_valid_click | fsm_hit_click),
                 .din           (return_data_fsm_in),
                 .dout          (return_data_fsm));

fsm             #(.ADDR_SIZE                            (ADDR_SIZE),
                  .DATA_SIZE                            (DATA_SIZE),
                  .DATA_ELEMENTS                        (DATA_ELEMENTS),
                  .TOTAL_SIZE                           (TOTAL_SIZE),
                  .LATENCY                              (LATENCY),
                  .NUM_WAYS                             (NUM_WAYS),
                  .SET_REPLACEMENT_POLICY               (SET_REPLACEMENT_POLICY))
c_fsm             (.clk                                 (clk_h),
                   .rst_n                               (rst_n),
                   
                   .in_rw                               (fw_rw),
                   .in_addr                             (fw_addr),
                   .in_data                             (fw_data),
                   .in_valid                            (fw_valid),
                   .in_ready                            (fw_ready),

                   .out_addr                            (ib_addr),
                   .out_data                            (ib_data),
                   .out_valid                           (ib_valid),
                   .out_ready                           (ib_ready),

                   .fw_rw                               (fsm_rw),
                   .fw_addr                             (fsm_addr),
                   .fw_data                             (fsm_data),
                   .fw_valid                            (fsm_valid),
                   .fw_ready                            (fsm_ready),

                   .ib_addr                             (return_addr),
                   .ib_data                             (return_data_fsm_keep),
                   .ib_valid                            (return_valid | fsm_hit),
                   .ib_ready                            (return_ready));

tag_array       #(.TOTAL_SIZE                           (TOTAL_SIZE),
                  .ADDR_SIZE                            (ADDR_SIZE),
                  .DATA_SIZE                            (DATA_SIZE),
                  .DATA_ELEMENTS                        (DATA_ELEMENTS),
                  .LATENCY                              (LATENCY),
                  .NUM_WAYS                             (NUM_WAYS),
                  .SET_REPLACEMENT_POLICY               (SET_REPLACEMENT_POLICY))
tag_array         (.clk                                 (clk_h),
                   .rst_n                               (rst_n),

                   .write_through                       (write_through),

                   .fsm_addr                            (fsm_addr),
                   .fsm_data                            (fsm_data),
                   .fsm_write                           (fsm_rw),
                   .fsm_valid                           (fsm_valid),
                   .fsm_ready                           (),
                   .fsm_hit                             (fsm_hit),
`ifdef MULTIWAY
                   .fsm_way                             (fsm_way),
`endif

                   .fsm_accessed                        (fsm_accessed),
     
                   .write_valid                         (cache_write_valid),
                   .write_addr                          (cache_write_addr),
                   .write_data                          (cache_write_data),
                   .write_strb                          (cache_write_strb),
                   .write_ready                         (cache_write_ready),
        
                   .fetch_done                          (return_valid),
        
                   .arr_valid                           (),
                   .arr_write                           (),
                   .arr_addr                            (),
                   .arr_out_data                        (),
                   .arr_in_data                         (arr_data),
                   .arr_ready                           ());

// wire                                         busy;
wire [_BLOCK_SIZE-1 : 0]                data;
wire                                    valid   = return_valid | (fsm_rw && fsm_hit) | fsm_valid;
wire [ADDR_SIZE-1 : 0]                  addr    = return_valid ? return_addr : fsm_addr;
// wire [NUM_WAYS-1 : 0]                  write;
wire                                    write   = fsm_rw && fsm_hit;
wire                                    write_all = return_valid;

genvar i,j;
// generate

//     for(i=0; i<_NUM_TRANSFER; i=i+1)begin
//         assign data[(i+1)*DATA_SIZE-1 -: DATA_SIZE] = (fsm_rw && (i == fsm_addr[_OFFSET_BITS-1 -: _TRANSFER_BITS])) ? fsm_data : (return_valid) ? return_data[(i+1)*DATA_SIZE-1 -: DATA_SIZE] : {DATA_SIZE{1'b0}};
//     end

//     // for(j=0; j<NUM_WAYS; j=j+1)begin
//     //     assign write[j] = fsm_rw && fsm_hit[j];
//     // end

// endgenerate

reg [(DATA_SIZE/8)-1 : 0] byteen_keep;
always @(posedge clk_h, negedge rst_n) begin
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

data_array      #(.TOTAL_SIZE                   (TOTAL_SIZE),
                  .ADDR_SIZE                    (ADDR_SIZE),
                  .DATA_SIZE                    (DATA_SIZE),
                  .DATA_ELEMENTS                (DATA_ELEMENTS),
                  .LATENCY                      (LATENCY),
                  .NUM_WAYS                     (NUM_WAYS),
                  .SET_REPLACEMENT_POLICY       (SET_REPLACEMENT_POLICY))
d_array         (.clk                           (clk_h),
                  .rst_n                         (rst_n),

                  .busy                          (),//busy),
                  .valid                         (valid),
                  .addr                          (addr),
                  .write                         (write),
                  .in_byteen                     (in_byteen),

`ifdef MULTIWAY
                  .way                           (fsm_way),
`endif

                  .data                          (data),
                  .write_all                     (write_all),

                  .out_data                      (arr_data));

secure_address_translator #(.BOUND_SIZE           (BOUND_SIZE),
                            .ADDR_SIZE            (ADDR_SIZE))
sec_address_translator    (.clk                  (clk_h),
                           .rst_n                (rst_n),

                           .cfg_load_val         (load_val),
                           .cfg_load             (load),
                           .cfg_low_bound        (low_bound),
                           .cfg_high_bound       (high_bound),
                           .cfg_en               (secure_request),

                           .in_raw_addr          (trans_out_addr),
                           .in_valid             (trans_valid),
                           .in_trans_addr        (trans_in_addr),
                           .in_ready             (),
                           .in_done              (trans_done));

endmodule              
