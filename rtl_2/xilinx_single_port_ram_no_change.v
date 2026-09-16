// ============================================================================
// Module: xilinx_single_port_ram_no_change
// Description: Single-port BRAM primitive modified for Byte-Wide Write Enable.
// ============================================================================
module xilinx_single_port_ram_no_change #(
  parameter RAM_WIDTH = 32,                       
  parameter RAM_DEPTH = 32*1324,                  
  parameter RAM_PERFORMANCE = "HIGH_PERFORMANCE", 
  parameter INIT_FILE = ""                        
) (
  input [clogb2(RAM_DEPTH-1)-1:0] addra, 
  input [RAM_WIDTH-1:0] dina,            
  input clka,                            
  // [MODIFIED FOR BYTE-WRITE ENABLE]: Converted wea from 1-bit to byte mask [(RAM_WIDTH/8)-1:0]
  input [(RAM_WIDTH/8)-1:0] wea,            
  input ena,                             
  input rsta,                            
  input regcea,                          
  output [RAM_WIDTH-1:0] douta           
);

reg [RAM_WIDTH-1:0] BRAM [RAM_DEPTH-1:0];
reg [RAM_WIDTH-1:0] ram_data = {RAM_WIDTH{1'b0}};

generate
  if (INIT_FILE != "") begin: use_init_file
    initial
      $readmemh(INIT_FILE, BRAM, 0, RAM_DEPTH-1);
  end else begin: init_bram_to_zero
    integer ram_index;
    initial
      for (ram_index = 0; ram_index < RAM_DEPTH; ram_index = ram_index + 1)
        BRAM[ram_index] = {RAM_WIDTH{1'b0}};
  end
endgenerate

// [MODIFIED FOR BYTE-WRITE ENABLE]: Per-byte BRAM write logic
genvar b;
generate
    for (b = 0; b < RAM_WIDTH/8; b = b + 1) begin : g_bram_byte_write
        always @(posedge clka) begin
            if (ena) begin
                if (wea[b]) begin
                    BRAM[addra][(b+1)*8-1 -: 8] <= dina[(b+1)*8-1 -: 8];
                end
            end
        end
    end
endgenerate

always @(posedge clka) begin
  if (ena && (!(|wea))) begin
    ram_data <= BRAM[addra];
  end
end

generate
  if (RAM_PERFORMANCE == "LOW_LATENCY") begin: no_output_register
    assign douta = ram_data;
  end else begin: output_register
    reg [RAM_WIDTH-1:0] douta_reg = {RAM_WIDTH{1'b0}};
    
    always @(posedge clka)
      if (rsta)
        douta_reg <= {RAM_WIDTH{1'b0}};
      else if (regcea)
        douta_reg <= ram_data;
        
    assign douta = douta_reg;
  end
endgenerate

function integer clogb2;
  input integer depth;
    for (clogb2=0; depth>0; clogb2=clogb2+1)
      depth = depth >> 1;
endfunction

endmodule