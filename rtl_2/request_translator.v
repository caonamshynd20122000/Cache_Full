module request_translator #(
    parameter ADDR_SIZE = 32,
    parameter DATA_SIZE = 32,
    parameter QUEUE_SIZE = 1
) (
    input wire                      clk,
    input wire                      rst_n,

    // Request translator <-> Processors ports
    input wire                      in_rw,
    input wire [ADDR_SIZE-1 : 0]    in_addr,
    input wire [DATA_SIZE-1 : 0]    in_data,
    input wire                      in_valid,
    output wire                     in_ready,

    output wire [ADDR_SIZE-1 : 0]   out_addr,
    output wire [DATA_SIZE-1 : 0]   out_data,
    output wire                     out_valid,
    input wire                      out_ready,

    // Request translator <-> Central FSM ports
    output wire                     fw_rw,
    output wire [ADDR_SIZE-1 : 0]   fw_addr,
    output wire [DATA_SIZE-1 : 0]   fw_data,
    output wire                     fw_valid,
    input wire                      fw_ready,

    input wire [ADDR_SIZE-1 : 0]    ib_addr,
    input wire [DATA_SIZE-1 : 0]    ib_data,
    input wire                      ib_valid,
    output wire                     ib_ready
);

generate
    if(QUEUE_SIZE == 0)begin
        assign fw_rw      = in_rw;
        assign fw_addr    = in_addr;
        assign fw_data    = in_data;
        assign fw_valid   = in_valid;
        assign in_ready   = fw_ready;

        assign out_addr   = ib_addr;
        assign out_data   = ib_data;
        assign out_valid  = ib_valid;
        assign ib_ready   = out_ready;
    end else begin
        wire in_fifo_empty, out_fifo_empty;
        assign fw_valid   = !in_fifo_empty | in_valid;
        assign out_valid  = !out_fifo_empty | ib_valid;

        wire ib_ready_n, in_ready_n;

        assign ib_ready = !ib_ready_n;
        assign in_ready = !in_ready_n;

        fifo #( .DATA_SIZE  (DATA_SIZE+ADDR_SIZE+1),
                .DEPTH      (QUEUE_SIZE))
        in_fifo(.clk        (clk),
                .rst_n      (rst_n),
                .push       (in_valid),
                .full       (in_ready_n),
                .pop        (fw_ready),
                .empty      (in_fifo_empty),
                .d_in       ({in_addr, in_data, in_rw}),
                .d_out      ({fw_addr, fw_data, fw_rw}));

        fifo #( .DATA_SIZE  (DATA_SIZE+ADDR_SIZE),
                .DEPTH      (QUEUE_SIZE))
        out_fifo( .clk      (clk),
                  .rst_n    (rst_n),
                  .push     (ib_valid),
                  .full     (ib_ready_n),
                  .pop      (out_ready),
                  .empty    (out_fifo_empty),
                  .d_in     ({ib_addr, ib_data}),
                  .d_out    ({out_addr, out_data}));
                  
    end
endgenerate

endmodule