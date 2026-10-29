module register_file #(
    parameter BOUND_SIZE = 4
) (
    input wire                  clk,
    input wire                  rst_n,

    input wire                  in_valid,
    output wire                 in_ready,
    input wire [5 : 0]          in_addr,
    input wire [31 : 0]         in_data,

    // input wire                  out_valid,
    // output wire                 out_ready,
    output wire [31 : 0]        out_data,

    output wire                 write_through,

    output wire                 prefetch,

    output wire                 secure_request,
    output wire [167 : 0]       load_val,
    output wire [BOUND_SIZE-1 : 0] low_bound,
    output wire [BOUND_SIZE-1 : 0] high_bound,

    output wire                 load
);

localparam  en_write        = 'h00;
localparam  en_secure       = 'h04;
localparam  en_low_bound    = 'h08;
localparam  en_high_bound   = 'h0C;
localparam  en_prefetch     = 'h10;
localparam  en_load_val_0   = 'h14;
localparam  en_load_val_1   = 'h18;
localparam  en_load_val_2   = 'h1C;
localparam  en_load_val_3   = 'h20;
localparam  en_load_val_4   = 'h24;
localparam  en_load_val_5   = 'h28;
localparam  en_load_val     = 'h2C;

wire        set_write       = (in_addr == en_write)        && in_valid;
wire        set_secure      = (in_addr == en_secure)       && in_valid;
wire        set_low_bound   = (in_addr == en_low_bound)    && in_valid;
wire        set_high_bound  = (in_addr == en_high_bound)   && in_valid;
wire        set_prefetch    = (in_addr == en_prefetch)     && in_valid;
wire        set_load_val_0  = (in_addr == en_load_val_0)   && in_valid;
wire        set_load_val_1  = (in_addr == en_load_val_1)   && in_valid;
wire        set_load_val_2  = (in_addr == en_load_val_2)   && in_valid;
wire        set_load_val_3  = (in_addr == en_load_val_3)   && in_valid;
wire        set_load_val_4  = (in_addr == en_load_val_4)   && in_valid;
wire        set_load_val_5  = (in_addr == en_load_val_5)   && in_valid;
wire        set_load_val    = (in_addr == en_load_val)     && in_valid;

wire [5:0]  addr;

wire        set_load_val_prev;

assign      in_ready        = 1;
assign      load            = set_load_val && !set_load_val_prev;

ad_edge_detect #(.EDGE (0))
load_val_edge   (.clk       (clk),
                 .rst       (!rst_n),
                 .signal_in (set_load_val),
                 .signal_out(set_load_val_prev));

D_FF        #(.SIZE     (1))
D_FF_write  (.clk       (clk),
             .rst_n     (rst_n),
             .set       (set_write),
             .din       (in_data[0]),
             .dout      (write_through));

D_FF        #(.SIZE     (1))
D_FF_secure (.clk       (clk),
             .rst_n     (rst_n),
             .set       (set_secure),
             .din       (in_data[0]),
             .dout      (secure_request));

D_FF        #(.SIZE     (BOUND_SIZE))
D_FF_l_b    (.clk       (clk),
             .rst_n     (rst_n),
             .set       (set_low_bound),
             .din       (in_data[BOUND_SIZE-1 : 0]),
             .dout      (low_bound));

D_FF        #(.SIZE     (BOUND_SIZE))
D_FF_h_b    (.clk       (clk),
             .rst_n     (rst_n),
             .set       (set_high_bound),
             .din       (in_data[BOUND_SIZE-1 : 0]),
             .dout      (high_bound));

D_FF        #(.SIZE     (1))
D_FF_pf     (.clk       (clk),
             .rst_n     (rst_n),
             .set       (set_prefetch),
             .din       (in_data[0]),
             .dout      (prefetch));

D_FF        #(.SIZE     (32))
D_FF_l_va_0 (.clk       (clk),
             .rst_n     (rst_n),
             .set       (set_load_val_0),
             .din       (in_data[31 : 0]),
             .dout      (load_val[167 -: 32]));

D_FF        #(.SIZE     (32))
D_FF_l_va_1 (.clk       (clk),
             .rst_n     (rst_n),
             .set       (set_load_val_1),
             .din       (in_data[31 : 0]),
             .dout      (load_val[135 -: 32]));

D_FF        #(.SIZE     (32))
D_FF_l_va_2 (.clk       (clk),
             .rst_n     (rst_n),
             .set       (set_load_val_2),
             .din       (in_data[31 : 0]),
             .dout      (load_val[103 -: 32]));

D_FF        #(.SIZE     (32))
D_FF_l_va_3 (.clk       (clk),
             .rst_n     (rst_n),
             .set       (set_load_val_3),
             .din       (in_data[31 : 0]),
             .dout      (load_val[71 -: 32]));

D_FF        #(.SIZE     (32))
D_FF_l_va_4 (.clk       (clk),
             .rst_n     (rst_n),
             .set       (set_load_val_4),
             .din       (in_data[31 : 0]),
             .dout      (load_val[39 -: 32]));

D_FF        #(.SIZE     (8))
D_FF_l_va_5 (.clk       (clk),
             .rst_n     (rst_n),
             .set       (set_load_val_5),
             .din       (in_data[7 : 0]),
             .dout      (load_val[7 : 0]));

D_FF        #(.SIZE     (6))
D_FF_addr   (.clk       (clk),
             .rst_n     (rst_n),
             .set       (in_valid),
             .din       (in_addr),
             .dout      (addr));

assign out_data =       (addr == en_write)       ? {31'h0, write_through} :
                        (addr == en_secure)      ? {31'h0, secure_request} :
                        (addr == en_low_bound)   ? {{(32-BOUND_SIZE){1'h0}}, low_bound} :
                        (addr == en_high_bound)  ? {{(32-BOUND_SIZE){1'h0}}, high_bound} :
                        (addr == en_prefetch)    ? {31'h0, prefetch} :
                        (addr == en_load_val_0)  ? load_val[167 -: 32] :
                        (addr == en_load_val_1)  ? load_val[135 -: 32] :
                        (addr == en_load_val_2)  ? load_val[103 -: 32] :
                        (addr == en_load_val_3)  ? load_val[71 -: 32] :
                        (addr == en_load_val_4)  ? load_val[39 -: 32] :
                        (addr == en_load_val_5)  ? {24'h0, load_val[7 : 0]} :
                        (addr == en_load_val)    ? 1 :
                                                   {32'h0};

endmodule