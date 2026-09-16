`timescale 1ns / 100ps

module fsm #(
    parameter   ADDR_SIZE       = 32,
    parameter   DATA_SIZE       = 32,
    parameter   DATA_ELEMENTS   = 8,
    parameter   TOTAL_SIZE      = 1024,
    parameter   LATENCY         = 2,
    parameter   NUM_WAYS        = 2,
    parameter   SET_REPLACEMENT_POLICY = "NMRU",
    localparam  _BLOCK_SIZE     = DATA_ELEMENTS*8,
    localparam  _NUM_LINES      = TOTAL_SIZE / _BLOCK_SIZE / NUM_WAYS,
    localparam  _OFFSET_BITS    = $clog2(DATA_ELEMENTS),
    localparam  _LINE_BITS      = $clog2(_NUM_LINES),
    localparam  _TAG_BITS       = ADDR_SIZE-_LINE_BITS-_OFFSET_BITS,
    localparam  _NUM_TRANSFER   = _BLOCK_SIZE / DATA_SIZE,
    localparam  _TRANSFER_BITS = (_NUM_TRANSFER > 1) ? $clog2(_NUM_TRANSFER) : 1
) (
    input wire                                          clk,
    input wire                                          rst_n,

    // Central FSM <-> Request translator ports
    input wire                                          in_rw,
    input wire  [ADDR_SIZE-1 : 0]                       in_addr,
    input wire  [DATA_SIZE-1 : 0]                       in_data,
    input wire                                          in_valid,
    output reg                                          in_ready,

    output reg  [ADDR_SIZE-1 : 0]                       out_addr,
    output reg  [DATA_SIZE-1 : 0]                       out_data,
    output reg                                          out_valid,
    input wire                                          out_ready,

    // Central FSM <-> Data tracker/Fetch unit ports
    output reg                                          fw_rw,
    output reg  [ADDR_SIZE-1 : 0]                       fw_addr,
    output reg  [DATA_SIZE-1 : 0]                       fw_data,
    output reg                                          fw_valid,
    input wire                                          fw_ready,

    input wire  [ADDR_SIZE-1 : 0]                       ib_addr,
    input wire  [_BLOCK_SIZE-1 : 0]                     ib_data,
    input wire                                          ib_valid,
    output reg                                          ib_ready
);

reg cur_state, next_state;

localparam STATE_IDLE       = 0;
localparam STATE_COMPARE    = 1;
// localparam STATE_READ        = 2'd2;
// localparam STATE_WRITE       = 2'd3;

reg [ADDR_SIZE-1 : 0]   addr_keep;
reg [DATA_SIZE-1 : 0]   data_keep;
reg                     write_keep;
reg                     ib_valid_keep;

wire                    latency_done;
wire                    ib_valid_done = ib_valid || ib_valid_keep;

counter_offset #(.COUNT_LIMIT   (LATENCY))
latency_counter(.clk        (clk),
                .rst_n      (rst_n && !(in_valid && fw_ready && cur_state == STATE_IDLE)),
                .start      (1'b1),
                .counter    (),
                .done       (latency_done));

always @(posedge clk, negedge rst_n)begin
    cur_state       <= (!rst_n) ? STATE_IDLE : next_state;

    addr_keep       <= (!rst_n) ? 0 : (cur_state == STATE_IDLE && fw_ready) ? in_addr : addr_keep;
    data_keep       <= (!rst_n) ? 0 : (cur_state == STATE_IDLE && fw_ready) ? in_data : data_keep;
    write_keep      <= (!rst_n) ? 0 : (cur_state == STATE_IDLE && in_valid) ? in_rw   : write_keep;
    ib_valid_keep   <= (!rst_n) ? 0 : (cur_state == STATE_IDLE) ? 0         : ib_valid ? 1 : ib_valid_keep;
end

always @* begin
    in_ready    = 0;

    out_addr    = 0;
    out_data    = 0;
    out_valid   = 0;

    fw_rw       = 0;
    fw_addr     = 0;
    fw_data     = 0;
    fw_valid    = 0;

    ib_ready    = 0;

    next_state  = cur_state;

    case(cur_state)
        STATE_IDLE: begin
            in_ready = fw_ready;

            if(in_valid && fw_ready)begin
                fw_rw       = in_rw;
                fw_addr     = in_addr;
                fw_data     = in_data;
                fw_valid    = 1;

                next_state  = STATE_COMPARE;
            end
        end
        STATE_COMPARE: begin
            fw_rw       = write_keep;
            fw_addr     = addr_keep;
            fw_data     = data_keep;
            
            if(!latency_done) begin
                fw_valid    = 1;
            end else begin
                if(write_keep)begin
                    ib_ready    = out_ready;
                    if(ib_valid_done) begin
                        out_addr  = addr_keep;
                        out_valid = 1;
                        if(out_ready) next_state = STATE_IDLE;
                    end
                end else begin
                    ib_ready    = out_ready;

                    if(ib_valid_done)begin
                        out_addr  = addr_keep;
                        out_data  = ib_data[(addr_keep[_OFFSET_BITS-1 -: _TRANSFER_BITS]+1)*DATA_SIZE-1 -: DATA_SIZE];
                        out_valid = 1;

                        if(out_ready)
                            next_state = STATE_IDLE;
                    end
                end
            end
        end
        // STATE_READ: begin
        // end
        // STATE_WRITE: begin
        // end
    endcase
end

endmodule