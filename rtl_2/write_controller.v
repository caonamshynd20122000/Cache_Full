`timescale 1ns / 1ps

module write_controller #(
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
    localparam  _TRANSFER_BITS = (_NUM_TRANSFER > 1) ? $clog2(_NUM_TRANSFER) : 1
) (
    input wire                                          clk_l,
    input wire                                          clk_h,
    input wire                                          rst_n,

    // Cache Controller <-> Write Controller ports
    input wire  [ADDR_SIZE-1 : 0]                       cache_write_addr,
    input wire                                          cache_write_valid,
    input wire  [_NUM_TRANSFER-1 : 0]                   cache_write_strb,
    input wire  [_BLOCK_SIZE-1 : 0]                     cache_write_data,
    //FIXME: Namcv10 added
    input wire  [(DATA_SIZE/8)-1 : 0]                   cache_write_byteen,
    output reg                                          cache_write_ready,

    // Write Controller <-> Memory ports
    output wire [ADDR_SIZE-1 : 0]                       mem_write_addr,
    output wire                                         mem_write_valid,
    output wire [DATA_SIZE-1 : 0]                       mem_write_data,
    //FIXME: Namcv10 added
    output wire [(DATA_SIZE/8)-1 : 0]                   mem_write_byteen,
    input wire                                          mem_write_done
);

localparam STATE_IDLE = 0;
localparam STATE_BUSY = 1;

reg cur_state, next_state;

reg [ADDR_SIZE-1 : 0]           addr_i_reg;
reg [_BLOCK_SIZE-1 : 0]         data_in_i_reg;
//FIXME: Namcv10 added
reg [(DATA_SIZE/8)-1 :0]        byteen_i_reg;

wire [_TRANSFER_BITS-1 : 0] counter_wire;
wire                        counter_done;

reg                             write_all;
reg                             done_keep;

// 1. Synchronize cur_state to clk_l domain to eliminate CDC phase jitter
reg busy_clk_l;
always @(posedge clk_l, negedge rst_n) begin
    if (!rst_n) begin
        busy_clk_l <= 1'b0;
    end else begin
        busy_clk_l <= (cur_state == STATE_BUSY);
    end
end

// 2. Select counter increment condition:
// - Burst flush (write_all = 1): Automatically increment every clk_l cycle while busy
// - Single write (write_all = 0): Handshake using mem_write_done as before
wire counter_step = write_all ? busy_clk_l : mem_write_done;
counter_offset      #(.COUNT_LIMIT      (_NUM_TRANSFER-1))
counter_offset_inst(.clk                (clk_l),
                    .rst_n              (busy_clk_l),
                    .start              (counter_step),
                    .counter            (counter_wire),
                    .done               (counter_done));

always @(posedge clk_h, negedge rst_n) begin
    addr_i_reg          <= (!rst_n) ? 0 : (cur_state == STATE_IDLE && cache_write_valid) ? (&cache_write_strb) ? {cache_write_addr[ADDR_SIZE-1 : _OFFSET_BITS], {_OFFSET_BITS{1'b0}}} : {cache_write_addr[ADDR_SIZE-1 : $clog2(DATA_SIZE/8)], {$clog2(DATA_SIZE/8){1'b0}}} : addr_i_reg;
    data_in_i_reg       <= (!rst_n) ? 0 : (cur_state == STATE_IDLE && cache_write_valid) ? cache_write_data : data_in_i_reg;
    //FIXME: Namcv10 added
    byteen_i_reg        <= (!rst_n) ? 0 : (cur_state == STATE_IDLE && cache_write_valid) ? cache_write_byteen : byteen_i_reg;
    cache_write_ready   <= (!rst_n) ? 0 : (cur_state == STATE_IDLE);
    cur_state           <= (!rst_n) ? 0 : next_state;
    write_all           <= (!rst_n) ? 0 : (cur_state == STATE_IDLE && cache_write_valid) ? &cache_write_strb : write_all;
end

assign mem_write_addr  = (counter_done) | (!write_all && counter_wire == 1) ? 0 : (cur_state == STATE_BUSY) ? addr_i_reg + (counter_wire << $clog2(DATA_SIZE/8)) : 0;
assign mem_write_valid = (counter_done) | (!write_all && counter_wire == 1) ? 0 : (cur_state == STATE_BUSY);
assign mem_write_data  = (counter_done) | (!write_all && counter_wire == 1) ? 0 : (cur_state == STATE_BUSY) ? (write_all) ? data_in_i_reg[(counter_wire+1)*DATA_SIZE-1 -: DATA_SIZE] : data_in_i_reg[(addr_i_reg[_OFFSET_BITS-1 -: _TRANSFER_BITS]+1)*DATA_SIZE-1 -: DATA_SIZE] : 0;

// assign mem_write_byteen = (counter_done) | (!write_all && counter_wire == 1) ? 0 : 
//                           (cur_state == STATE_BUSY) ? byteen_i_reg : 0;
assign mem_write_byteen = (counter_done) | (!write_all && counter_wire == 1) ? 0 : 
                          (cur_state == STATE_BUSY ? (write_all ? {(DATA_SIZE/8){1'b1}} : byteen_i_reg) : 0);
always @(posedge clk_l, negedge rst_n) begin
    done_keep <= (!rst_n) ? 0 : (cur_state == STATE_IDLE) ? 0 : (mem_write_done) ? 1 : done_keep;
end

always @* begin
    case(cur_state)
        0: begin
            next_state = (cache_write_valid) ? 1 : 0;
        end
        1: begin
            next_state = (write_all) ? (counter_done) ? 0 : 1 : (done_keep) ? 0 : 1;
        end
    endcase
end

endmodule