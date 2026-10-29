// `timescale 1ns / 100ps

// ============================================================================
// File: l1_dcache_wrapper.sv
// Module: l1_dcache_wrapper
// Description: Standardized L1 Data Cache Wrapper with PMA Uncached MMIO Bypass
// Architecture:
//   - PMA Filter: DRAM [0x8000_0000, 0xC000_0000) routed to Custom Cache
//   - MMIO Bypass: Peripheral accesses (CLINT/UART/BootROM) bypass directly to tlMasterXbar
//   - Performance Probe: miss_trigger routed to io_cpu_perf_acquire
// ============================================================================

module l1_dcache_wrapper 
  import tl_pkg::*;
#(
  parameter TOTAL_SIZE    = 262144, // 32 KiB
  parameter ADDR_SIZE     = 32,
  parameter DATA_SIZE     = 64,     // 64-bit word datapath
  parameter DATA_ELEMENTS = 64,     // 64 Bytes per line
  parameter LATENCY       = 2,
  parameter BOUND_SIZE    = 4,
  parameter NUM_WAYS      = 8,      // 8-Way Set-Associative
  parameter MSHR_SIZE     = 8       // 8 MSHRs
) (
  // Clock and Reset
  input  wire                           clock,
  input  wire                           reset,

  // ==========================================================================
  // CPU Interface: HellaCacheIO (Connected to VtCPUAdapterV2)
  // ==========================================================================
  output wire                           io_cpu_req_ready,
  input  wire                           io_cpu_req_valid,
  input  wire [39 : 0]                  io_cpu_req_bits_addr,
  input  wire [6 : 0]                   io_cpu_req_bits_tag,
  input  wire [4 : 0]                   io_cpu_req_bits_cmd,    // 0 = Read (M_XRD), 1 = Write (M_XWR)
  input  wire [1 : 0]                   io_cpu_req_bits_size,
  input  wire                           io_cpu_req_bits_signed,

  input  wire [63 : 0]                  io_cpu_s1_data_data,
  input  wire [7 : 0]                   io_cpu_s1_data_mask,

  output wire                           io_cpu_s2_nack,
  output wire                           io_cpu_resp_valid,
  output wire [6 : 0]                   io_cpu_resp_bits_tag,
  output wire [63 : 0]                  io_cpu_resp_bits_data,
  output wire [63 : 0]                  io_cpu_resp_bits_data_raw,
  output wire                           io_cpu_replay_next,
  output wire                           io_cpu_ordered,
  output wire                           io_cpu_store_pending,
  output wire                           io_cpu_perf_acquire,

  // ==========================================================================
  // Downstream TileLink Master Interface (Connected to tlMasterXbar Port 0)
  // ==========================================================================
  output wire                           auto_out_a_valid,
  output wire [2 : 0]                   auto_out_a_bits_opcode,
  output wire [2 : 0]                   auto_out_a_bits_param,
  output wire [3 : 0]                   auto_out_a_bits_size,
  output wire [3 : 0]                   auto_out_a_bits_source,
  output wire [31 : 0]                  auto_out_a_bits_address,
  output wire [7 : 0]                   auto_out_a_bits_mask,
  output wire [63 : 0]                  auto_out_a_bits_data,
  input  wire                           auto_out_a_ready,

  input  wire                           auto_out_d_valid,
  input  wire [2 : 0]                   auto_out_d_bits_opcode,
  input  wire [1 : 0]                   auto_out_d_bits_param,
  input  wire [3 : 0]                   auto_out_d_bits_size,
  input  wire [3 : 0]                   auto_out_d_bits_source,
  input  wire [2 : 0]                   auto_out_d_bits_sink,
  input  wire [63 : 0]                  auto_out_d_bits_data,
  output wire                           auto_out_d_ready
);

  wire rst_n = ~reset;

  // ==========================================================================
  // 1. Physical Memory Attribute (PMA) Decode
  // Matches Rocket VtCPUV2Pma: DRAM is [0x8000_0000, 0xC000_0000)
  // HTIF tohost/fromhost [0x8000_1000, 0x8000_1040] bypasses cache to memory
  // ==========================================================================
  wire [31:0] paddr = io_cpu_req_bits_addr[31:0];
  wire is_tohost      = (paddr >= 32'h8000_1000) && (paddr <= 32'h8000_1040);
  wire is_dram_cached = (paddr >= 32'h8000_0000) && (paddr < 32'hC000_0000) && !is_tohost;
  wire is_write       = (io_cpu_req_bits_cmd == 5'd1);

  // ==========================================================================
  // 2. Uncached MMIO Bypass FSM (Corrected S0->S1 Data Latching)
  // ==========================================================================
  localparam [1:0] MMIO_IDLE     = 2'd0,
                   MMIO_SEND_REQ = 2'd1,
                   MMIO_WAIT_RSP = 2'd2;
  reg [1:0]        mmio_state;
  reg [6:0]        mmio_tag_q;      // Fix 1: Widen to 7 bits
  reg [31:0]       mmio_addr_q;
  reg              mmio_is_write_q;
  reg [1:0]        mmio_size_q;

  wire mmio_req_valid = io_cpu_req_valid && !is_dram_cached && (mmio_state == MMIO_IDLE);

  // Active during Stage S1 when S1 data/mask is valid
  wire mmio_fire_a    = (mmio_state == MMIO_SEND_REQ);

  always @(posedge clock or posedge reset) begin
    if (reset) begin
      mmio_state      <= MMIO_IDLE;
      mmio_tag_q      <= 7'h0;      // Fix 1: Reset 7 bits
      mmio_addr_q     <= 32'h0;
      mmio_is_write_q <= 1'b0;
      mmio_size_q     <= 2'b0;
    end else begin
      case (mmio_state)
        MMIO_IDLE: begin
          if (mmio_req_valid) begin
            mmio_state      <= MMIO_SEND_REQ; 
            mmio_tag_q      <= io_cpu_req_bits_tag; // Fix 1: Keep full 7-bit tag
            mmio_addr_q     <= paddr;
            mmio_is_write_q <= is_write;
            mmio_size_q     <= io_cpu_req_bits_size;
          end
        end
        MMIO_SEND_REQ: begin
          if (auto_out_a_ready) begin
            mmio_state <= MMIO_WAIT_RSP; // Ðã phát gói ra TileLink kèm s1_data chu?n
          end
        end
        MMIO_WAIT_RSP: begin
          if (auto_out_d_valid && auto_out_d_ready && auto_out_d_bits_source[3]) begin
            mmio_state <= MMIO_IDLE;
          end
        end
        default: mmio_state <= MMIO_IDLE;
      endcase
    end
  end
  // ==========================================================================
  // 3. Custom Cache Subsystem Wiring (Only for Cached DRAM Accesses)
  // ==========================================================================
  wire        cache_req_valid = io_cpu_req_valid && is_dram_cached;
  wire        cache_req_ready;
  wire        cache_resp_valid;
  wire [63:0] cache_resp_data;
  wire [3:0]  cache_resp_source;
  wire        perf_miss;

  wire [ADDR_SIZE-1 : 0]     cache_mem_read_addr;
  wire [DATA_SIZE-1 : 0]     cache_mem_read_data;
  wire                       cache_mem_read_valid;
  wire                       cache_mem_read_ready;

  wire [ADDR_SIZE-1 : 0]     cache_mem_write_addr;
  wire [DATA_SIZE-1 : 0]     cache_mem_write_data;
  wire [(DATA_SIZE/8)-1 : 0] cache_mem_write_byteen;
  wire                       cache_mem_write_valid;
  wire                       cache_mem_write_ready;

  cache_system_tl_top #(
    .TOTAL_SIZE    (TOTAL_SIZE),
    .ADDR_SIZE     (ADDR_SIZE),
    .DATA_SIZE     (DATA_SIZE),
    .DATA_ELEMENTS (DATA_ELEMENTS),
    .LATENCY       (LATENCY),
    .BOUND_SIZE    (BOUND_SIZE),
    .NUM_WAYS      (NUM_WAYS),
    .MSHR_SIZE     (MSHR_SIZE)
  ) u_cache_impl (
    .clk_h         (clock),
    .clk_l         (clock),
    .rst_n         (rst_n),

    .cfg_addr      (8'h0),
    .cfg_data_in   (32'h0),
    .cfg_data_out  (),
    .cfg_valid     (1'b0),
    .cfg_ready     (),

    // TileLink Channel A (From CPU)
    .a_valid       (cache_req_valid),
    .a_ready       (cache_req_ready),
    .a_opcode      (is_write ? TL_A_PUT_PARTIAL_DATA : TL_A_GET),
    .a_param       (3'd0),
    .a_size        (3'd3),          // 8 Bytes beat
    .a_source      (io_cpu_req_bits_tag[3:0]),
    .a_address     (paddr),
    .a_mask        (is_write ? io_cpu_s1_data_mask : 8'hFF),
    .a_data        (io_cpu_s1_data_data),

    // TileLink Channel D (To CPU)
    .d_valid       (cache_resp_valid),
    .d_ready       (1'b1),
    .d_opcode      (),
    .d_param       (),
    .d_size        (),
    .d_source      (cache_resp_source),
    .d_sink        (),
    .d_denied      (),
    .d_data        (cache_resp_data),
    .d_corrupt     (),

    // Downstream memory channels
    .read_addr     (cache_mem_read_addr),
    .read_data     (cache_mem_read_data),
    .read_valid    (cache_mem_read_valid),
    .read_ready    (cache_mem_read_ready),

    .write_addr    (cache_mem_write_addr),
    .write_data    (cache_mem_write_data),
    .write_byteen  (cache_mem_write_byteen),
    .write_valid   (cache_mem_write_valid),
    .write_ready   (cache_mem_write_ready),
    .perf_miss     (perf_miss)
  );

  // Store acknowledgment for cached writes
  reg       store_ack_q;
  reg [3:0] store_tag_q;
  always @(posedge clock or posedge reset) begin
    if (reset) begin
      store_ack_q <= 1'b0;
      store_tag_q <= 4'h0;
    end else begin
      store_ack_q <= cache_req_valid && cache_req_ready && is_write;
      if (cache_req_valid && cache_req_ready && is_write) begin
        store_tag_q <= io_cpu_req_bits_tag[3:0];
      end
    end
  end

  // ==========================================================================
  // 4. Downstream TileLink Master Arbiter (Multiplexing MMIO vs Cache Refill)
  // Priority: MMIO Bypass > Cache Memory Refill
  // ==========================================================================
  localparam [0:0] REFILL_IDLE = 1'b0, REFILL_WAIT_RSP = 1'b1;
  reg refill_state;

  wire refill_req_read  = cache_mem_read_valid;
  wire refill_req_write = !cache_mem_read_valid && cache_mem_write_valid;
  wire refill_req_valid = (refill_state == REFILL_IDLE) && (refill_req_read | refill_req_write);

  always @(posedge clock or posedge reset) begin
    if (reset) begin
      refill_state <= REFILL_IDLE;
    end else begin
      case (refill_state)

        REFILL_IDLE: begin
          // Hold refill issue while MMIO is driving Channel A in Stage S1
          if (refill_req_valid && auto_out_a_ready && !mmio_fire_a) begin
            refill_state <= REFILL_WAIT_RSP;
          end
        end
        REFILL_WAIT_RSP: begin
          if (auto_out_d_valid && auto_out_d_ready && (auto_out_d_bits_source != 4'd8)) begin
            refill_state <= REFILL_IDLE;
          end
        end
      endcase
    end
  end

  // Standard TileLink mask generator function based on transfer size and byte offset
  function automatic [7:0] get_tl_mask(input [2:0] sz, input [2:0] ad);
    case (sz)
      3'd0: get_tl_mask = 8'h01 << ad[2:0];
      3'd1: get_tl_mask = 8'h03 << {ad[2:1], 1'b0};
      3'd2: get_tl_mask = 8'h0F << {ad[2], 2'b00};
      default: get_tl_mask = 8'hFF;
    endcase
  endfunction

// Channel A Multiplexer: MMIO Bypass (Stage S1) has priority over Cache Refill
  assign auto_out_a_valid        = mmio_fire_a ? 1'b1 : refill_req_valid;
  assign auto_out_a_bits_opcode  = mmio_fire_a ? (mmio_is_write_q ? TL_A_PUT_PARTIAL_DATA : TL_A_GET)
                                               : (refill_req_read ? TL_A_GET : TL_A_PUT_PARTIAL_DATA);
  assign auto_out_a_bits_param   = 3'd0;
  assign auto_out_a_bits_size    = mmio_fire_a ? {1'b0, mmio_size_q} : 3'd3;
  assign auto_out_a_bits_source  = mmio_fire_a ? 4'd8 : 4'd0;
  assign auto_out_a_bits_address = mmio_fire_a ? mmio_addr_q
                                               : (refill_req_read ? cache_mem_read_addr : cache_mem_write_addr);

  wire [2:0] mmio_size      = {1'b0, mmio_size_q};
  wire [7:0] mmio_read_mask = get_tl_mask(mmio_size, mmio_addr_q[2:0]);

  // At mmio_fire_a (Stage S1), io_cpu_s1_data_mask and io_cpu_s1_data_data are valid
  assign auto_out_a_bits_mask    = mmio_fire_a ? (mmio_is_write_q ? (io_cpu_s1_data_mask & mmio_read_mask) : mmio_read_mask)
                                               : (refill_req_read ? 8'hFF : cache_mem_write_byteen);
  assign auto_out_a_bits_data    = mmio_fire_a ? io_cpu_s1_data_data
                                               : (refill_req_read ? 64'h0 : cache_mem_write_data);

  assign auto_out_d_ready        = 1'b1;

  // Refill response routing back to Cache Controller (source bit[3] == 0)
  assign cache_mem_read_data     = auto_out_d_bits_data;
  assign cache_mem_read_ready    = (refill_state == REFILL_WAIT_RSP) && auto_out_d_valid && !auto_out_d_bits_source[3]
                                   && (auto_out_d_bits_opcode == TL_D_ACCESS_ACK_DATA);
  assign cache_mem_write_ready   = (refill_state == REFILL_WAIT_RSP) && auto_out_d_valid && !auto_out_d_bits_source[3]
                                   && (auto_out_d_bits_opcode == TL_D_ACCESS_ACK);

  // ==========================================================================
  // 5. CPU Handshake & Response Demuxing (Cache Hits/Acks vs MMIO Responses)
  // ==========================================================================
  wire mmio_resp_valid = auto_out_d_valid && (auto_out_d_bits_source == 4'd8);

  // Accept MMIO request at S0 as long as the FSM is IDLE
  assign io_cpu_req_ready = is_dram_cached ? cache_req_ready
                                           : (mmio_state == MMIO_IDLE);

  assign io_cpu_resp_valid         = mmio_resp_valid | cache_resp_valid | store_ack_q;
  assign io_cpu_resp_bits_data     = mmio_resp_valid ? auto_out_d_bits_data : cache_resp_data;
  assign io_cpu_resp_bits_data_raw = mmio_resp_valid ? auto_out_d_bits_data : cache_resp_data;
  // Return preserved full 7-bit tag for MMIO response
  assign io_cpu_resp_bits_tag      = mmio_resp_valid ? mmio_tag_q
                                   : (store_ack_q    ? {3'b000, store_tag_q}
                                                     : {3'b000, cache_resp_source});

  assign io_cpu_s2_nack            = 1'b0;
  assign io_cpu_replay_next        = 1'b0;
  assign io_cpu_ordered            = 1'b1;
  assign io_cpu_store_pending      = 1'b0;
  assign io_cpu_perf_acquire       = perf_miss;

  // ==========================================================================
  // HARDWARE PROBE: Theo dõi CPU Store và TileLink Master Write
  // ==========================================================================
//   always @(posedge clock) begin
//     if (!reset) begin
//       if (io_cpu_req_valid && io_cpu_req_ready && (io_cpu_req_bits_cmd == 5'd1)) begin
//         $display("[PROBE][CPU_WRITE] t=%0t | addr=0x%08h | data=0x%h",
//                  $time, io_cpu_req_bits_addr[31:0], io_cpu_s1_data_data);
//       end

//       if (auto_out_a_valid && auto_out_a_ready && (auto_out_a_bits_opcode != 3'd4)) begin
//         $display("[PROBE][TL_WRITE_OUT] t=%0t | addr=0x%08h | opcode=%0d | tl_data=0x%h | raw_s1_data=0x%h | mask=0x%h",
//                  $time, auto_out_a_bits_address, auto_out_a_bits_opcode,
//                  auto_out_a_bits_data, io_cpu_s1_data_data, auto_out_a_bits_mask);
//       end
//     end
//   end

  // ==========================================================================
  // HARDWARE PROBE: Theo dõi Channel A Write và Channel D Response
  // ==========================================================================
  always @(posedge clock) begin
    if (!reset) begin
      // Khi Wrapper phat goi ghi ra TileLink Channel A
      if (auto_out_a_valid && auto_out_a_ready && (auto_out_a_bits_opcode != 3'd4)) begin
        $display("[PROBE][TL_A_WRITE] t=%0t | addr=0x%08h | src=%0d | data=0x%h",
                 $time, auto_out_a_bits_address, auto_out_a_bits_source, auto_out_a_bits_data);
      end

      // Khi TileLink Channel D tra phan hoi ve
      if (auto_out_d_valid && auto_out_d_ready) begin
        $display("[PROBE][TL_D_RESP ] t=%0t | opcode=%0d | src=%0d | mmio_match=%b",
                 $time, auto_out_d_bits_opcode, auto_out_d_bits_source,
                 (auto_out_d_bits_source == 4'd8));
      end

      // Khi Wrapper bao hoan tat lenh ve Core CVA6
      if (io_cpu_resp_valid) begin
        $display("[PROBE][CORE_RESP ] t=%0t | tag=7'b%b",
                 $time, io_cpu_resp_bits_tag);
      end
    end
  end

endmodule: l1_dcache_wrapper