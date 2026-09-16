`timescale 1ns / 1ps

module read_controller #(
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
    localparam  _TRANSFER_BITS = (_NUM_TRANSFER > 1) ? $clog2(_NUM_TRANSFER) : 1,
    localparam  _COUNT_LIMIT    = (_NUM_TRANSFER > 1) ? _NUM_TRANSFER - 1 : 1
) (
    input wire                                          clk_l,
    input wire                                          clk_h,
    input wire                                          rst_n,

    // Cache Controller <-> Read Controller ports
    input wire  [ADDR_SIZE-1 : 0]                       cache_read_addr,
    input wire                                          cache_read_valid,
    output reg  [_BLOCK_SIZE-1 : 0]                     cache_read_data,
    output reg                                          cache_read_done,
    output reg                                          cache_read_ready,

    // Read Controller <-> Memory ports
    output wire [ADDR_SIZE-1 : 0]                       mem_read_addr,
    output wire                                         mem_read_valid,
    input wire  [DATA_SIZE-1 : 0]                       mem_read_data,
    input wire                                          mem_read_done
);

reg cur_state, next_state;

localparam STATE_IDLE           = 0;
localparam STATE_MEM_RD_WAIT    = 1;

reg [ADDR_SIZE-1 : 0]           addr_i_reg;

reg [ADDR_SIZE-1 : 0]           mem_read_o_addr;
reg                             mem_read_o_valid;

wire [_TRANSFER_BITS-1 : 0] counter_wire;
wire                        counter_done;

counter_offset      #(.COUNT_LIMIT      (_COUNT_LIMIT))
counter_offset_inst(.clk                (clk_l),
                    .rst_n              (cur_state != STATE_IDLE),
                    .start              (mem_read_done),
                    .counter            (counter_wire),
                    .done               (counter_done));

always @(posedge clk_h, negedge rst_n) begin
    cur_state           <= (rst_n == 0) ? STATE_IDLE : next_state;
    addr_i_reg          <= (rst_n == 0) ? 0 : (cur_state == STATE_IDLE) ? cache_read_valid ? {cache_read_addr[ADDR_SIZE-1 : _OFFSET_BITS], {_OFFSET_BITS{1'b0}}} : 0 : addr_i_reg;
    cache_read_done <= (rst_n == 0) ? 0 : all_beats_received;
    cache_read_ready    <= (rst_n == 0) ? 0 : cur_state == STATE_IDLE;
end

assign mem_read_addr    = (counter_done) ? 0 : mem_read_o_addr;
assign mem_read_valid   = (counter_done) ? 0 : mem_read_o_valid;

reg all_beats_received;

always @(posedge clk_l, negedge rst_n) begin
    if (!rst_n) begin
        all_beats_received <= 1'b0;
    end else if (cur_state == STATE_MEM_RD_WAIT) begin
        // Khi slot 15 đang nhận data thành công ở chu kỳ này:
        if (data_slot_idx == _COUNT_LIMIT && mem_read_done)
            all_beats_received <= 1'b1;
    end else begin
        all_beats_received <= 1'b0;
    end
end

reg [_TRANSFER_BITS-1: 0] data_slot_idx;

always @(posedge clk_l, negedge rst_n) begin
    if(!rst_n) begin
        data_slot_idx <= 0;
    end else if (cur_state == STATE_MEM_RD_WAIT && mem_read_done) begin
        data_slot_idx <= counter_wire; 
    end else begin
        data_slot_idx <= 0;
    end
end

generate
    genvar j;

    for(j = 0; j < _NUM_TRANSFER; j = j + 1) begin
        always @(posedge clk_l, negedge rst_n) begin
            cache_read_data[(j+1)*DATA_SIZE-1 -: DATA_SIZE] <= (rst_n == 0) ? 0 :
                (j == data_slot_idx && cur_state == STATE_MEM_RD_WAIT && mem_read_done) ? mem_read_data : cache_read_data[(j+1)*DATA_SIZE-1 -: DATA_SIZE];
        end
    end
endgenerate

always @* begin
    case(cur_state)
        STATE_IDLE: begin
            mem_read_o_addr     = 0;
            mem_read_o_valid    = 0;
            next_state          = (cache_read_valid) ? STATE_MEM_RD_WAIT : STATE_IDLE;
        end
        STATE_MEM_RD_WAIT: begin
            mem_read_o_addr     = addr_i_reg + (counter_wire << ($clog2(DATA_SIZE/8)));
            mem_read_o_valid    = !counter_done;
            next_state          = (all_beats_received) ? STATE_IDLE : STATE_MEM_RD_WAIT;
        end
    endcase
end

endmodule