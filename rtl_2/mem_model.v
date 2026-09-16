module mem_model #(
    parameter MEM_WIDTH = 32,
    parameter MEM_DEPTH = 1,
    parameter MEM_TYPE  = "XILINX_LOW"
) (
    input wire                                      clk,
    input wire                                      rst_n,
    //FIX
    input wire  [(MEM_WIDTH/8)-1 : 0]               wren,
    //input wire                                      wren,
    input wire                                      en,
    input wire  [$clog2(MEM_DEPTH)-1 : 0]           in_addr,
    input wire  [MEM_WIDTH-1 : 0]                   in_data,
    output wire [MEM_WIDTH-1 : 0]                   out_data
);

generate

if(MEM_TYPE == "XILINX_LOW")
    xilinx_single_port_ram_no_change    #(.RAM_WIDTH        (MEM_WIDTH),
                                          .RAM_DEPTH        (MEM_DEPTH),
                                          .RAM_PERFORMANCE  ("LOW_LATENCY"),
                                          .INIT_FILE        ())
    xilinx_single_port_ram_no_change     (.addra            (in_addr),
                                          .dina             (in_data),
                                          .clka             (clk),
                                          .wea              (wren),
                                          .ena              (en),
                                          .rsta             (!rst_n),
                                          .regcea           (1'b1),
                                          .douta            (out_data));

else if(MEM_TYPE == "XILINX_HIGH")begin
    xilinx_single_port_ram_no_change    #(.RAM_WIDTH        (MEM_WIDTH),
                                          .RAM_DEPTH        (MEM_DEPTH),
                                          .RAM_PERFORMANCE  ("HIGH_PERFORMANCE"),
                                          .INIT_FILE        ())
    xilinx_single_port_ram_no_change     (.addra            (in_addr),
                                          .dina             (in_data),
                                          .clka             (clk),
                                          .wea              (wren),
                                          .ena              (en),
                                          .rsta             (!rst_n),
                                          .regcea           (1'b1),
                                          .douta            (out_data));
end else begin
    reg [MEM_WIDTH-1 : 0]   mem         [0 : MEM_DEPTH-1];
    reg [MEM_WIDTH-1 : 0]   cur_data;

    assign out_data = cur_data;

    always @(posedge clk, negedge rst_n)begin
        if(!rst_n)begin
            cur_data <= 0;
        end else if(en) begin
            cur_data <= mem[in_addr];
        end
    end

    genvar i, b;

    for(i=0; i<MEM_DEPTH; i=i+1)begin: g_mem_depth
        for(b=0; b < MEM_WIDTH/8; b=b+1) begin: g_byte_lane
            always @(posedge clk, negedge rst_n)begin
                if(!rst_n) begin
                    mem[i][(b+1)*8-1 -: 8] <= 8'h00;
                end else if(wren[b] && en && (i == in_addr)) begin
                    mem[i][(b+1)*8-1 -: 8] <= in_data[(b+1)*8-1 -: 8];
                end
            end
        end
    end
end

// TODO: add more ram models and generation type
endgenerate

endmodule