# ==============================================================================
# Cocotb Testbench for TileLink-C L2 Cache Subsystem
# Standards: SiFive TileLink Spec v1.8.1 (Decoupled Handshake & Latency Profiling)
# Features:
#   - Workload 1: Sequential Streaming Reads (64 words / 4 lines)
#   - Workload 2: Sub-word Stores with 16-way Evictions
#   - Workload 3: True Pipelined Vector Burst (Concurrent Channel A & Channel D)
#   - Auto-Watchdog Timeout with Hardware X-Ray Diagnostics
# ==============================================================================

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer

# ==============================================================================
# HARDWARE CONFIGURATION CONSTANTS
# ==============================================================================
DATA_SIZE = 32
DATA_ELEMENTS = 64  # 64-byte cache line
NUM_WAYS = 16
LINE_BYTES = 64
TAG_SHIFT = 12  # Set 0 address stride: (tag << 12)

# TileLink Standard Opcodes (Ref: tl_pkg.sv & SiFive Spec)
TL_A_PUT_FULL_DATA = 0
TL_A_PUT_PARTIAL_DATA = 1
TL_A_GET = 4
TL_D_ACCESS_ACK = 0
TL_D_ACCESS_ACK_DATA = 1


# ==============================================================================
# HARDWARE PERFORMANCE SCOREBOARD
# ==============================================================================
class HardwarePerfTracker:

    def __init__(self):
        self.read_requests = 0
        self.read_hits = 0
        self.read_misses = 0
        self.read_latency_cycles = []

        self.write_requests = 0
        self.write_hits = 0
        self.write_misses = 0
        self.write_latency_cycles = []

        self.dram_read_beats = 0
        self.dram_write_beats = 0
        self.dram_refill_lines = 0
        self.dram_evicted_lines = 0

    def print_hardware_report(self, workload_name, logger):
        total_accesses = self.read_requests + self.write_requests
        total_hits = self.read_hits + self.write_hits
        total_misses = self.read_misses + self.write_misses
        hit_rate = (
            (total_hits / total_accesses * 100) if total_accesses > 0 else 0.0
        )
        read_hit_rate = (
            (self.read_hits / self.read_requests * 100)
            if self.read_requests > 0
            else 0.0
        )

        avg_read_hit_lat = (
            sum(lat for lat in self.read_latency_cycles if lat <= 4)
            / max(1, self.read_hits)
            if self.read_hits > 0
            else 0.0
        )
        avg_read_miss_lat = (
            sum(lat for lat in self.read_latency_cycles if lat > 4)
            / max(1, self.read_misses)
            if self.read_misses > 0
            else 0.0
        )

        dram_read_bytes = self.dram_read_beats * 4
        dram_write_bytes = self.dram_write_beats * 4
        total_dram_traffic = dram_read_bytes + dram_write_bytes
        dram_bus_busy_ns = (self.dram_read_beats + self.dram_write_beats) * 20

        logger.info("\n" + "=" * 85)
        logger.info(
            f" HARDWARE PERFORMANCE MEASUREMENT REPORT: {workload_name}"
        )
        logger.info("=" * 85)
        logger.info(
            f" 1. TILELINK CPU/ARA INTERFACE METRICS (clk_h 100MHz domain):"
        )
        logger.info(
            f"    - Total TileLink Requests        : {total_accesses} requests"
        )
        logger.info(
            f"    - Overall Cache Hits / Misses    : {total_hits} Hits | {total_misses} Misses"
        )
        logger.info(f"    - Overall Hit Rate               : {hit_rate:.2f}%")
        logger.info(
            f"    - Read Requests (Hits / Misses)  : {self.read_requests} (Hits: {self.read_hits}, Misses: {self.read_misses})"
        )
        logger.info(
            f"    - Read Hit Rate                  : {read_hit_rate:.2f}%"
        )
        logger.info(
            f"    - Average Read Hit Latency       : {avg_read_hit_lat:.2f} cycles (clk_h)"
        )
        logger.info(
            f"    - Average Read Miss Latency      : {avg_read_miss_lat:.2f} cycles (clk_h)"
        )
        logger.info(
            f"    - Write Requests (Hits / Misses) : {self.write_requests} (Hits: {self.write_hits}, Misses: {self.write_misses})"
        )
        logger.info("-" * 85)
        logger.info(
            f" 2. DRAM BUS ACTIVITY (64B Line / Full Dirty Line Eviction):"
        )
        logger.info(
            f"    - 64-Byte Lines Refilled from DRAM: {self.dram_refill_lines} lines"
        )
        logger.info(
            f"    - DRAM Read Beats Received       : {self.dram_read_beats} beats ({dram_read_bytes} bytes)"
        )
        logger.info(
            f"    - Dirty Lines Evicted to DRAM    : {self.dram_evicted_lines} lines"
        )
        logger.info(
            f"    - DRAM Write Flush Beats Emitted : {self.dram_write_beats} beats ({dram_write_bytes} bytes)"
        )
        logger.info(
            f"    - Total Off-Chip DRAM Traffic    : {total_dram_traffic} bytes"
        )
        logger.info(
            f"    - Total DRAM Bus Active Time     : {dram_bus_busy_ns} ns (@ 50 MHz clk_l)"
        )
        logger.info("=" * 85 + "\n")


tracker = HardwarePerfTracker()


# ==============================================================================
# HARDWARE X-RAY DIAGNOSTIC HELPER
# ==============================================================================
def print_hardware_xray(dut):
    """Print an internal hardware snapshot when a timeout is triggered."""
    dut._log.error("\n" + "!" * 85)
    dut._log.error(" [FATAL HANG DETECTED] HARDWARE X-RAY SNAPSHOT:")
    dut._log.error("!" * 85)
    try:
        dut._log.error(f"  1. TILELINK CHANNEL A & D:")
        dut._log.error(
            f"     - a_valid = {dut.a_valid.value} | a_ready = {dut.a_ready.value} | a_addr = 0x{int(dut.a_address.value):08X}"
        )
        dut._log.error(
            f"     - d_valid = {dut.d_valid.value} | d_ready = {dut.d_ready.value} | d_data = 0x{int(dut.d_data.value):08X}"
        )

        dut._log.error(f"  2. CACHE CONTROLLER INTERNALS:")
        c_inst = dut.cache_inst
        dut._log.error(
            f"     - in_valid = {c_inst.in_valid.value} | in_ready = {c_inst.in_ready.value}"
        )

        if hasattr(c_inst, "c_fsm"):
            dut._log.error(f"     - fsm_cur_state = {c_inst.c_fsm.cur_state.value}")
        if hasattr(c_inst, "fsm_hit"):
            dut._log.error(f"     - fsm_hit = {c_inst.fsm_hit.value}")

        if hasattr(c_inst, "mshr_inst"):
            mshr = c_inst.mshr_inst
            dut._log.error(
                f"  3. MSHR STATE (tl_mshr):"
            )
            dut._log.error(
                f"     - valid_table = {mshr.valid_table.value} | empty = {mshr.empty.value}"
            )
            dut._log.error(
                f"     - deq_valid = {mshr.deq_valid.value} | deq_ready = {mshr.deq_ready.value} | deq_id = {mshr.deq_id.value}"
            )

        dut._log.error(f"  4. DRAM & REFILL PIPELINE:")
        dut._log.error(
            f"     - rd_ctrl state = {c_inst.rd_controller.cur_state.value} | counter_wire = {c_inst.rd_controller.counter_wire.value}"
        )
        dut._log.error(
            f"     - req_valid = {c_inst.req_valid.value} | req_done = {c_inst.req_done.value}"
        )
    except Exception as e:
        dut._log.error(f"  Error capturing X-Ray signals: {e}")
    dut._log.error("!" * 85 + "\n")


# ==============================================================================
# HARDWARE SIGNAL MONITORS (DRAM SIDE SNOOPING)
# ==============================================================================
async def dram_bus_activity_monitor(dut):
    while True:
        await RisingEdge(dut.clk_l)

        # Monitor Refill from DRAM
        rd_ctrl = dut.cache_inst.rd_controller
        if (
            rd_ctrl.mem_read_valid.value == 1
            and rd_ctrl.mem_read_done.value == 1
        ):
            tracker.dram_read_beats += 1
            if int(rd_ctrl.counter_wire.value) == 0:
                tracker.dram_refill_lines += 1

        # Monitor Eviction to DRAM
        dram = dut.dram_inst
        if dram.write_valid.value == 1:
            tracker.dram_write_beats += 1
            wr_ctrl = dut.cache_inst.wr_controller
            if int(wr_ctrl.counter_wire.value) == 0:
                tracker.dram_evicted_lines += 1


# ==============================================================================
# TILELINK DRIVERS WITH AUTO-TIMEOUT
# ==============================================================================
async def execute_tl_write(dut, addr, data, byteen=0x0F, source_id=1):
    """Issue TileLink Channel A PutFullData or PutPartialData with Watchdog."""
    await RisingEdge(dut.clk_h)
    dut.a_valid.value = 1
    dut.a_opcode.value = (
        TL_A_PUT_FULL_DATA if byteen == 0x0F else TL_A_PUT_PARTIAL_DATA
    )
    dut.a_param.value = 0
    dut.a_size.value = 2  # 4 Bytes
    dut.a_source.value = source_id
    dut.a_address.value = addr
    dut.a_mask.value = byteen
    dut.a_data.value = data

    # Handshake Channel A
    a_stall = 0
    while True:
        if dut.a_ready.value == 1:
            await RisingEdge(dut.clk_h)
            dut.a_valid.value = 0
            break
        a_stall += 1
        if a_stall > 150:
            dut._log.error(f"[TIMEOUT] Channel A stuck on write to 0x{addr:08X}!")
            print_hardware_xray(dut)
            assert False, "Channel A Handshake Timeout"
        await RisingEdge(dut.clk_h)

    # Await Response on Channel D
    latency = 0
    while True:
        await RisingEdge(dut.clk_h)
        latency += 1
        if dut.d_valid.value == 1:
            assert (
                int(dut.d_opcode.value) == TL_D_ACCESS_ACK
            ), f"Expected AccessAck (0), got {dut.d_opcode.value}"
            break
        if latency > 200:
            dut._log.error(f"[TIMEOUT] Channel D response stuck on write to 0x{addr:08X}!")
            print_hardware_xray(dut)
            assert False, "Channel D Response Timeout"

    tracker.write_requests += 1
    tracker.write_latency_cycles.append(latency)
    if latency <= 4:
        tracker.write_hits += 1
    else:
        tracker.write_misses += 1


async def execute_tl_read(dut, addr, source_id=0):
    """Issue TileLink Channel A Get and await Channel D AccessAckData with Watchdog."""
    await RisingEdge(dut.clk_h)
    dut.a_valid.value = 1
    dut.a_opcode.value = TL_A_GET
    dut.a_param.value = 0
    dut.a_size.value = 2  # 4 Bytes
    dut.a_source.value = source_id
    dut.a_address.value = addr
    dut.a_mask.value = 0x0F
    dut.a_data.value = 0

    # Handshake Channel A
    a_stall = 0
    while True:
        if dut.a_ready.value == 1:
            await RisingEdge(dut.clk_h)
            dut.a_valid.value = 0
            break
        a_stall += 1
        if a_stall > 150:
            dut._log.error(f"[TIMEOUT] Channel A stuck on read to 0x{addr:08X}!")
            print_hardware_xray(dut)
            assert False, "Channel A Handshake Timeout"
        await RisingEdge(dut.clk_h)

    # Await Response on Channel D
    latency = 0
    rdata = 0
    while True:
        await RisingEdge(dut.clk_h)
        latency += 1
        if dut.d_valid.value == 1:
            assert (
                int(dut.d_opcode.value) == TL_D_ACCESS_ACK_DATA
            ), f"Expected AccessAckData (1), got {dut.d_opcode.value}"
            rdata = int(dut.d_data.value)
            break
        if latency > 200:
            dut._log.error(f"[TIMEOUT] Channel D response stuck on read to 0x{addr:08X}!")
            print_hardware_xray(dut)
            assert False, "Channel D Response Timeout"

    tracker.read_requests += 1
    tracker.read_latency_cycles.append(latency)
    if latency <= 4:
        tracker.read_hits += 1
    else:
        tracker.read_misses += 1

    return rdata


async def setup_dut(dut):
    cocotb.start_soon(Clock(dut.clk_h, 10, unit="ns").start())
    cocotb.start_soon(Clock(dut.clk_l, 20, unit="ns").start())

    dut.rst_n.value = 0
    dut.a_valid.value = 0
    dut.d_ready.value = 1
    dut.cfg_valid.value = 0
    await Timer(40, unit="ns")
    dut.rst_n.value = 1
    await Timer(20, unit="ns")

    cocotb.start_soon(dram_bus_activity_monitor(dut))


# ==============================================================================
# BENCHMARK 1: SEQUENTIAL STREAMING READS
# ==============================================================================
@cocotb.test()
async def test_tl_workload1_sequential_streaming(dut):
    """Measure TileLink on sequential streaming: 64 words across 4 lines."""
    global tracker
    tracker = HardwarePerfTracker()
    await setup_dut(dut)

    dut._log.info(
        "============================================================================="
    )
    dut._log.info(
        " RUNNING TILELINK WORKLOAD 1: SEQUENTIAL STREAMING READS (64 WORDS / 4 LINES)"
    )
    dut._log.info(
        "============================================================================="
    )

    for word_idx in range(64):
        addr = word_idx * 4
        await execute_tl_read(dut, addr, source_id=0)

    await Timer(200, unit="ns")
    tracker.print_hardware_report(
        "TILELINK WORKLOAD 1: SEQUENTIAL READS", dut._log
    )


# ==============================================================================
# BENCHMARK 2: SUB-WORD STORES WITH 16-WAY EVICTIONS
# ==============================================================================
@cocotb.test()
async def test_tl_workload2_subword_writes_with_eviction(dut):
    """Measure TileLink on byte stores (PutPartialData) and 16-way evictions."""
    global tracker
    tracker = HardwarePerfTracker()
    await setup_dut(dut)

    dut._log.info(
        "============================================================================="
    )
    dut._log.info(
        " RUNNING TILELINK WORKLOAD 2: SUB-WORD STORES WITH 16-WAY EVICTIONS"
    )
    dut._log.info(
        "============================================================================="
    )

    # 1. Store Byte across 16 ways in Set 0
    for way in range(16):
        target_addr = (way << TAG_SHIFT) + 0x08
        await execute_tl_write(
            dut,
            addr=target_addr,
            data=0x000000AA,
            byteen=0x01,
            source_id=way % 4,
        )
        await Timer(30, unit="ns")

    # 2. Issue 4 new stores to force dirty line evictions
    for tag in range(16, 20):
        thrash_addr = tag << TAG_SHIFT
        await execute_tl_write(
            dut,
            addr=thrash_addr,
            data=0x55555555,
            byteen=0x0F,
            source_id=(tag % 16),
        )
        await Timer(400, unit="ns")

    await Timer(400, unit="ns")
    tracker.print_hardware_report(
        "TILELINK WORKLOAD 2: SUB-WORD STORES & EVICTIONS", dut._log
    )


# ==============================================================================
# BENCHMARK 3: TRUE ARA PIPELINED VECTOR BURST (osmax = 3)
# ==============================================================================
@cocotb.test()
async def test_tl_workload3_ara_vector_burst_stall(dut):
    """Emulate Ara Vector Coprocessor firing 3 requests back-to-back on Channel A

    with an asynchronous background Channel D receiver.
    """
    await setup_dut(dut)

    async def tag_lookup_probe():
        c_inst = dut.cache_inst
        while True:
            await RisingEdge(dut.clk_h)
            if hasattr(c_inst, "c_fsm") and int(c_inst.c_fsm.cur_state.value) == 1:
                t_now = cocotb.utils.get_sim_time("ns")
                addr = int(c_inst.c_fsm.addr_keep.value)
                hit = int(c_inst.fsm_hit.value)
                set_idx = (addr >> 6) & 0x3F
                tag_done = int(c_inst.tag_array.tag_access_done.value)
                dut._log.info(
                    f"[@{t_now:.0f}ns PROBE] STATE_COMPARE: Addr=0x{addr:08X} (Set {set_idx}) | TagDone={tag_done} | fsm_hit={hit}"
                )
    cocotb.start_soon(tag_lookup_probe())

    dut._log.info(
        "\n"
        + "=" * 85
        + "\n RUNNING WORKLOAD 3: TRUE ARA VECTOR PIPELINE BURST (osmax=3)\n"
        + "=" * 85
    )

    # 1. Warm-up Phase: Pre-load Line B (0x40) and Line C (0x80) into L2
    dut._log.info(
        "---> Step 1: Pre-loading Line B (0x40) and Line C (0x80) into L2..."
    )
    await execute_tl_write(
        dut, addr=0x00000040, data=0xBBBBBBBB, byteen=0x0F, source_id=0
    )
    await Timer(50, unit="ns")
    await execute_tl_write(
        dut, addr=0x00000080, data=0xCCCCCCCC, byteen=0x0F, source_id=0
    )
    await Timer(100, unit="ns")
    dut._log.info(
        "     Warm-up complete: Line B and Line C are resident in L2.\n"
    )

    # 2. Setup Background Receiver for Channel D so responses are never missed
    responses = []

    async def channel_d_receiver():
        while len(responses) < 3:
            await RisingEdge(dut.clk_h)
            if dut.d_valid.value == 1 and dut.d_ready.value == 1:
                rdata = int(dut.d_data.value)
                responses.append(rdata)
                dut._log.info(
                    f"     <- Channel D Response {len(responses)}/3 captured: Data = 0x{rdata:08X}"
                )

    cocotb.start_soon(channel_d_receiver())

    # 3. Pipelined Burst: Ara fires 3 back-to-back requests on Channel A
    burst_addrs = [0x00000100, 0x00000040, 0x00000080]
    req_names = [
        "[Req 1 (MISS 0x100)]",
        "[Req 2 (HIT  0x040)]",
        "[Req 3 (HIT  0x080)]",
    ]
    issue_stall_cycles = [0, 0, 0]

    dut._log.info(
        "---> Step 2: Ara VLSU fires 3 back-to-back requests on Channel A..."
    )
    burst_start_time = cocotb.utils.get_sim_time(unit="ns")

    for i in range(3):
        addr = burst_addrs[i]
        await RisingEdge(dut.clk_h)
        dut.a_valid.value = 1
        dut.a_opcode.value = TL_A_GET
        dut.a_param.value = 0
        dut.a_size.value = 2
        dut.a_source.value = i + 1
        dut.a_address.value = addr
        dut.a_mask.value = 0x0F
        dut.a_data.value = 0

        stalls = 0
        while True:
            if dut.a_ready.value == 1:
                await RisingEdge(dut.clk_h)
                dut.a_valid.value = 0
                break
            stalls += 1
            if stalls > 150:
                dut._log.error(f"[TIMEOUT] Channel A stuck on burst req {i+1}!")
                print_hardware_xray(dut)
                assert False, "Channel A Handshake Timeout during burst"
            await RisingEdge(dut.clk_h)

        issue_stall_cycles[i] = stalls
        dut._log.info(
            f"     {req_names[i]} accepted by L2 after STALLING {stalls} cycles on Channel A!"
        )

    # Wait until all 3 responses are gathered
    wait_cyc = 0
    while len(responses) < 3:
        await RisingEdge(dut.clk_h)
        wait_cyc += 1
        if wait_cyc > 200:
            dut._log.error(
                f"[TIMEOUT] Timed out waiting for all 3 responses! (Got {len(responses)}/3)"
            )
            print_hardware_xray(dut)
            assert False, "Channel D Response Drain Timeout"

    burst_end_time = cocotb.utils.get_sim_time(unit="ns")
    total_burst_cycles = int((burst_end_time - burst_start_time) / 10)
    total_sbfull_cycles = sum(issue_stall_cycles)

    # Print Report
    dut._log.info("\n" + "=" * 85)
    dut._log.info(
        " ARA VECTOR PIPELINE STALL PROFILING REPORT (sbfull_cyc Measurement)"
    )
    dut._log.info("=" * 85)
    dut._log.info(
        f" Total Burst Execution Time        : {total_burst_cycles} cycles (clk_h 100MHz)"
    )
    dut._log.info(
        f" Total Ara Scoreboard Stall Cycles : {total_sbfull_cycles} CYCLES (sbfull_cyc)!"
    )
    dut._log.info("-" * 85)
    dut._log.info(f" Breakdown of Issue Stalls on Channel A:")
    dut._log.info(
        f"  * Req 1 (MISS 0x100): Stalled {issue_stall_cycles[0]} cycles"
    )
    dut._log.info(
        f"  * Req 2 (HIT  0x040): Stalled {issue_stall_cycles[1]} CYCLES!"
    )
    dut._log.info(
        f"  * Req 3 (HIT  0x080): Stalled {issue_stall_cycles[2]} cycles!"
    )
    dut._log.info("-" * 85)
    dut._log.info(f" Architectural Verdict:")
    dut._log.info(
        f"  => Penalty on Req 2 (Cache HIT) : {issue_stall_cycles[1]} stall cycles."
    )
    dut._log.info("=" * 85 + "\n")