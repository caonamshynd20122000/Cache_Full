module data_array #(
    parameter   ADDR_SIZE       = 32,
    parameter   DATA_SIZE       = 32,
    parameter   DATA_ELEMENTS   = 8,
    parameter   TOTAL_SIZE      = 1024,
    parameter   LATENCY         = 2,
    parameter   NUM_WAYS        = 2,
    parameter   SET_REPLACEMENT_POLICY = "NMRU",
    // parameter   MEM_DATA_SIZE   = 128,
    localparam  _BLOCK_SIZE     = DATA_ELEMENTS*8,
    localparam  _NUM_LINES      = TOTAL_SIZE / _BLOCK_SIZE / NUM_WAYS,
    localparam  _OFFSET_BITS    = $clog2(DATA_ELEMENTS),
    localparam  _LINE_BITS      = $clog2(_NUM_LINES),
    localparam  _TAG_BITS       = ADDR_SIZE-_LINE_BITS-_OFFSET_BITS,
    localparam  _NUM_TRANSFER   = _BLOCK_SIZE / DATA_SIZE,
    localparam _TRANSFER_BITS = (_NUM_TRANSFER > 1) ? $clog2(_NUM_TRANSFER) : 1
) (
    input wire                                          clk,
    input wire                                          rst_n,

    output wire                                         busy,
    input wire                                          valid,
    input wire  [ADDR_SIZE-1 : 0]                       addr,
    input wire                                          write,
    //FIXME
    input wire  [(DATA_SIZE/8)-1:0]                     in_byteen,
    
`ifdef MULTIWAY
    input wire  [$clog2(NUM_WAYS)-1 : 0]                way,
`endif

    // Data array <-> Fetch unit
    input wire  [_BLOCK_SIZE-1 : 0]                     data,
    input wire                                          write_all,

    // Data array <-> Tag array
    // output wire [_BLOCK_SIZE-1 : 0]                     tr_out_data,

    // Data array <-> Request translator
    output wire [_BLOCK_SIZE-1 : 0]                     out_data
);

localparam  _WAY_BITS       = (NUM_WAYS > 1) ? $clog2(NUM_WAYS) : 0;
//FIXME
localparam  _BYTES_PER_BLOCK    =   _BLOCK_SIZE / 8;
localparam  _BYTES_PER_WORD     =   DATA_SIZE / 8;

wire [ADDR_SIZE-1 : 0]      in_addr;
wire [_BLOCK_SIZE-1 : 0]    in_data;

assign in_addr = addr;

wire [_TRANSFER_BITS-1 : 0] word_idx;
generate
    if (_NUM_TRANSFER > 1) begin : g_multi_transfer
        assign word_idx = in_addr[_OFFSET_BITS-1 : _OFFSET_BITS - _TRANSFER_BITS];
    end else begin : g_single_transfer
        assign word_idx = 1'b0;
    end
endgenerate

genvar j;
generate
    for(j=0; j<_NUM_TRANSFER; j=j+1)begin
        assign in_data[(j+1)*DATA_SIZE-1 -: DATA_SIZE]  =   write_all || (write && (j == word_idx))
                                                            ? data[(j+1)*DATA_SIZE-1 -: DATA_SIZE]
                                                            : out_data[(j+1)*DATA_SIZE-1 -: DATA_SIZE];
    end
endgenerate

wire [NUM_WAYS-1 : 0]                   en;
//FIXME
wire [_BYTES_PER_BLOCK-1 : 0]           wren [0 : NUM_WAYS-1];
wire [_BLOCK_SIZE-1 : 0]                out_data_array  [0 : NUM_WAYS-1];


`ifdef MULTIWAY
    assign out_data         = out_data_array[way];
`endif
`ifndef MULTIWAY
    assign out_data         = out_data_array[0];
`endif

// assign tr_out_data       = out_data_array;

wire        valid_prev;
wire        counter_done;
reg         write_prev;
wire        write_click     = (write | write_all) && !write_prev;

assign busy                 = !counter_done;

D_FF  #(.SIZE   (1))
D_FF_valid (.clk    (clk),
            .rst_n  (rst_n),
            .set    (1),
            .din    (valid),
            .dout   (valid_prev));

counter_offset #(.COUNT_LIMIT   (LATENCY))
latency_counter(.clk    (clk),
                .rst_n  (rst_n && !(valid && !valid_prev)),
                .start  (1'b1),
                .counter(),
                .done   (counter_done));

always @(posedge clk, negedge rst_n)begin
    write_prev  <= (!rst_n) ? 0 : write | write_all;
end

// Synthesis
// [MODIFIED FOR BYTE-WRITE ENABLE]: Generate byte-wide write enable mask across transfers in the block
wire [_BYTES_PER_BLOCK-1 : 0] byte_mask;
genvar k;
generate
    for (k = 0; k < _NUM_TRANSFER; k = k + 1) begin : g_byte_mask
        assign byte_mask[(k+1)*_BYTES_PER_WORD-1 -: _BYTES_PER_WORD] = 
            write_all ? {_BYTES_PER_WORD{1'b1}} :
            (write_click && (k == word_idx)) ? in_byteen : {_BYTES_PER_WORD{1'b0}};
    end
endgenerate

// Data array
genvar i;
generate

    for(i = 0; i < NUM_WAYS; i=i+1) begin

        assign en[i] = valid;

`ifdef MULTIWAY
        //assign wren[i] = (write_click) && (way == i); // (((way == i) && write) || write_all);
        assign wren[i] = (write_click && (way == i)) ? byte_mask : {_BYTES_PER_BLOCK{1'b0}};
`endif
`ifndef MULTIWAY
        //assign wren[i] = write_click;
        assign wren[i] = write_click ? byte_mask : {_BYTES_PER_BLOCK{1'b0}};
`endif

        mem_model #(.MEM_WIDTH  (_BLOCK_SIZE),
                    .MEM_DEPTH  (_NUM_LINES),
                    .MEM_TYPE   ("XILINX_LOW"))
        data_array (.clk        (clk),
                    .rst_n      (rst_n),
                    .wren       (wren[i]),
                    .en         (en[i]),
                    .in_addr    (in_addr[_LINE_BITS+_OFFSET_BITS-1 : _OFFSET_BITS]),
                    .in_data    (in_data),
                    .out_data   (out_data_array[i]));

    end
endgenerate

endmodule