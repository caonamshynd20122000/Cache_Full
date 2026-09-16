module cam #(
    // search data bus width
    parameter DATA_WIDTH = 64,
    // memory size in log2(words)
    parameter ADDR_WIDTH = 5,
    // CAM style (SRL, BRAM)
    parameter CAM_STYLE = "SRL",
    // width of data bus slices
    parameter SLICE_WIDTH = 4
)
(
    input  wire                    clk,
    input  wire                    rst,

    input  wire [ADDR_WIDTH-1:0]   write_addr,
    input  wire [DATA_WIDTH-1:0]   write_data,
    input  wire                    write_delete,
    input  wire                    write_enable,
    output wire                    write_busy,

    input  wire [DATA_WIDTH-1:0]   compare_data,
    output wire [2**ADDR_WIDTH-1:0] match_many,
    output wire [2**ADDR_WIDTH-1:0] match_single,
    output wire [ADDR_WIDTH-1:0]   match_addr,
    output wire                    match
);

generate
    if (CAM_STYLE == "SRL") begin
        cam_srl #(
            .DATA_WIDTH(DATA_WIDTH),
            .ADDR_WIDTH(ADDR_WIDTH),
            .SLICE_WIDTH(SLICE_WIDTH)
        )
        cam_inst (
            .clk(clk),
            .rst(rst),
            .write_addr(write_addr),
            .write_data(write_data),
            .write_delete(write_delete),
            .write_enable(write_enable),
            .write_busy(write_busy),
            .compare_data(compare_data),
            .match_many(match_many),
            .match_single(match_single),
            .match_addr(match_addr),
            .match(match)
        );
    end else if (CAM_STYLE == "BRAM") begin
        cam_bram #(
            .DATA_WIDTH(DATA_WIDTH),
            .ADDR_WIDTH(ADDR_WIDTH),
            .SLICE_WIDTH(SLICE_WIDTH)
        )
        cam_inst (
            .clk(clk),
            .rst(rst),
            .write_addr(write_addr),
            .write_data(write_data),
            .write_delete(write_delete),
            .write_enable(write_enable),
            .write_busy(write_busy),
            .compare_data(compare_data),
            .match_many(match_many),
            .match_single(match_single),
            .match_addr(match_addr),
            .match(match)
        );
    end
endgenerate

endmodule