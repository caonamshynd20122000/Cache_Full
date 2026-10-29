// ============================================================================
// File: data_array.sv
// Module: data_array
// Description: Multi-Way SRAM Cache Data Storage Array with Byte-Enable Support
// Architecture:
//   - Fully parameterized multi-way data storage with byte-write granularity
//   - Supports single-word partial store updates and full-line refill overwrites
//   - Latency counter matching synchronous BRAM read output delay
// ============================================================================

`timescale 1ns / 100ps

// ============================================================================
// Terminal / CLI Macro Definitions for Dynamic Parameter Overrides
// Can be overridden via simulator flags: e.g. -DCFG_TOTAL_SIZE=262144 -DCFG_NUM_WAYS=8
// ============================================================================
`ifndef CFG_TOTAL_SIZE
    `define CFG_TOTAL_SIZE 262144        // Default: 32 KiB (262,144 bits, Matching PDF spec)
`endif

`ifndef CFG_NUM_WAYS
    `define CFG_NUM_WAYS 8               // Default: 8-Way Set-Associative (Matching PDF spec)
`endif

`ifndef CFG_DATA_ELEMENTS
    `define CFG_DATA_ELEMENTS 64         // Default: 64 Bytes per line (512 bits)
`endif

`ifndef CFG_LATENCY
    `define CFG_LATENCY 2                // Default: 2-cycle SRAM read latency
`endif

module data_array #(
    // ------------------------------------------------------------------------
    // Top-Level Configurable Parameters (Overridable via CLI Macros)
    // ------------------------------------------------------------------------
    parameter   ADDR_SIZE              = 32,
    parameter   DATA_SIZE              = 32,
    parameter   DATA_ELEMENTS          = `CFG_DATA_ELEMENTS,
    parameter   TOTAL_SIZE             = `CFG_TOTAL_SIZE,
    parameter   LATENCY                = `CFG_LATENCY,
    parameter   NUM_WAYS               = `CFG_NUM_WAYS,
    parameter   SET_REPLACEMENT_POLICY = "NMRU",

    // ------------------------------------------------------------------------
    // Derived Architectural Geometry and Bit-Widths
    // ------------------------------------------------------------------------
    localparam  _BLOCK_SIZE            = DATA_ELEMENTS * 8,                     // Cache block in bits (512 bits)
    localparam  _NUM_LINES             = TOTAL_SIZE / _BLOCK_SIZE / NUM_WAYS,   // Sets count (64 sets)
    localparam  _OFFSET_BITS           = $clog2(DATA_ELEMENTS),                 // Byte offset width (6 bits)
    localparam  _LINE_BITS             = $clog2(_NUM_LINES),                    // Set index width (6 bits)
    localparam  _TAG_BITS              = ADDR_SIZE - _LINE_BITS - _OFFSET_BITS, // Tag width (20 bits)
    localparam  _NUM_TRANSFER          = _BLOCK_SIZE / DATA_SIZE,               // Refill words count (16 words)
    localparam  _TRANSFER_BITS         = (_NUM_TRANSFER > 1) ? $clog2(_NUM_TRANSFER) : 1
) (
    input wire                                          clk,
    input wire                                          rst_n,

    // Pipeline Handshake and Status
    output wire                                         busy,         // Array busy flag during read latency window
    input wire                                          valid,        // Access valid strobe
    input wire  [ADDR_SIZE-1 : 0]                       addr,         // Target access address
    input wire                                          write,        // 1: Word-level write update
    input wire  [(DATA_SIZE/8)-1 : 0]                   in_byteen,    // Core byte-write enable qualifiers

`ifdef MULTIWAY
    input wire  [$clog2(NUM_WAYS)-1 : 0]                way,          // Target way index
`endif

    // Data Inputs
    input wire  [_BLOCK_SIZE-1 : 0]                     data,         // Merged data payload (refill or store)
    input wire                                          write_all,    // 1: Full-line overwrite strobe (line refill)

    // Data Readout Output
    output wire [_BLOCK_SIZE-1 : 0]                     out_data      // Readout line from selected way
);

    localparam _WAY_BITS         = (NUM_WAYS > 1) ? $clog2(NUM_WAYS) : 0;
    localparam _BYTES_PER_BLOCK  = _BLOCK_SIZE / 8;                           // 64 Bytes per block
    localparam _BYTES_PER_WORD   = DATA_SIZE / 8;                             // 4 Bytes per word

    wire [ADDR_SIZE-1 : 0]   in_addr;
    wire [_BLOCK_SIZE-1 : 0] in_data;

    assign in_addr = addr;

    // Word selection index [5:2] within the 64-byte line
    wire [_TRANSFER_BITS-1 : 0] word_idx;
    generate
        if (_NUM_TRANSFER > 1) begin : g_multi_transfer
            assign word_idx = in_addr[_OFFSET_BITS-1 : _OFFSET_BITS - _TRANSFER_BITS];
        end else begin : g_single_transfer
            assign word_idx = 1'b0;
        end
    endgenerate

    // Multiplex incoming store word over the readout line data
    genvar j;
    generate
        for (j = 0; j < _NUM_TRANSFER; j = j + 1) begin : g_word_mux
            assign in_data[(j+1)*DATA_SIZE-1 -: DATA_SIZE] = 
                (write_all || (write && (j == word_idx))) ? data[(j+1)*DATA_SIZE-1 -: DATA_SIZE]
                                                          : out_data[(j+1)*DATA_SIZE-1 -: DATA_SIZE];
        end
    endgenerate

    // ========================================================================
    // Read Latency and Write Click Timing Generator
    // ========================================================================
    wire [NUM_WAYS-1 : 0]         en;
    wire [_BYTES_PER_BLOCK-1 : 0] wren [0 : NUM_WAYS-1];
    wire [_BLOCK_SIZE-1 : 0]      out_data_array [0 : NUM_WAYS-1];

    wire        valid_prev;
    wire        counter_done;
    reg         write_prev;
    wire        write_click = (write | write_all) && !write_prev;

    assign busy = !counter_done;

    // Track rising edge of valid strobe
    D_FF #(.SIZE (1)) D_FF_valid (
        .clk   (clk),
        .rst_n (rst_n),
        .set   (1'b1),
        .din   (valid),
        .dout  (valid_prev)
    );

    // Read latency counter tracking SRAM access duration
    counter_offset #(.COUNT_LIMIT (LATENCY)) latency_counter (
        .clk     (clk),
        .rst_n   (rst_n && !(valid && !valid_prev)),
        .start   (1'b1),
        .counter (),
        .done    (counter_done)
    );

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            write_prev <= 1'b0;
        end else begin
            write_prev <= write | write_all;
        end
    end

    // ========================================================================
    // Byte-Enable Mask Generation Across All Words of the Block
    // ========================================================================
    wire [_BYTES_PER_BLOCK-1 : 0] byte_mask;
    genvar k;
    generate
        for (k = 0; k < _NUM_TRANSFER; k = k + 1) begin : g_byte_mask
            assign byte_mask[(k+1)*_BYTES_PER_WORD-1 -: _BYTES_PER_WORD] = 
                write_all ? {_BYTES_PER_WORD{1'b1}} :
                (write_click && (k == word_idx)) ? in_byteen : {_BYTES_PER_WORD{1'b0}};
        end
    endgenerate

    // ========================================================================
    // Multi-Way SRAM Storage Instantiations
    // ========================================================================
    genvar i;
    generate
        for (i = 0; i < NUM_WAYS; i = i + 1) begin : g_data_ways
            assign en[i] = valid;

`ifdef MULTIWAY
            assign wren[i] = (write_click && (way == i)) ? byte_mask : {_BYTES_PER_BLOCK{1'b0}};
`else
            assign wren[i] = write_click ? byte_mask : {_BYTES_PER_BLOCK{1'b0}};
`endif

            mem_model #(
                .MEM_WIDTH (_BLOCK_SIZE),
                .MEM_DEPTH (_NUM_LINES),
                .MEM_TYPE  ("XILINX_LOW")
            ) data_array_inst (
                .clk      (clk),
                .rst_n    (rst_n),
                .wren     (wren[i]),
                .en       (en[i]),
                .in_addr  (in_addr[_LINE_BITS+_OFFSET_BITS-1 : _OFFSET_BITS]),
                .in_data  (in_data),
                .out_data (out_data_array[i])
            );
        end
    endgenerate

    // Readout way selection multiplexer
`ifdef MULTIWAY
    assign out_data = out_data_array[way];
`else
    assign out_data = out_data_array[0];
`endif

endmodule: data_array