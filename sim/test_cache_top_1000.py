# # # # # # # # import random
# # # # # # # # import cocotb
# # # # # # # # from cocotb.clock import Clock
# # # # # # # # from cocotb.triggers import RisingEdge, Timer


# # # # # # # # class CachePerfTracker:
# # # # # # # #     """Tracker class for Cache Hit and Miss performance statistics."""

# # # # # # # #     def __init__(self, cache_type="16-Way Deep Check Benchmark"):
# # # # # # # #         self.cache_type = cache_type
# # # # # # # #         self.total_read_reqs = 0
# # # # # # # #         self.hits = 0
# # # # # # # #         self.misses = 0

# # # # # # # #     def record_access(self, is_hit: bool):
# # # # # # # #         self.total_read_reqs += 1
# # # # # # # #         if is_hit:
# # # # # # # #             self.hits += 1
# # # # # # # #         else:
# # # # # # # #             self.misses += 1

# # # # # # # #     def print_summary(self, logger):
# # # # # # # #         hit_rate = (
# # # # # # # #             (self.hits / self.total_read_reqs * 100.0)
# # # # # # # #             if self.total_read_reqs > 0
# # # # # # # #             else 0.0
# # # # # # # #         )
# # # # # # # #         miss_rate = 100.0 - hit_rate
# # # # # # # #         logger.info("\n" + "=" * 60)
# # # # # # # #         logger.info(f"       {self.cache_type.upper()} PERFORMANCE REPORT")
# # # # # # # #         logger.info("=" * 60)
# # # # # # # #         logger.info(f"  Total Read Requests   : {self.total_read_reqs}")
# # # # # # # #         logger.info(f"  Cache Hits            : {self.hits}")
# # # # # # # #         logger.info(f"  Cache Misses          : {self.misses}")
# # # # # # # #         logger.info(f"  Cache Hit Rate (%)    : {hit_rate:.2f}%")
# # # # # # # #         logger.info(f"  Cache Miss Rate (%)   : {miss_rate:.2f}%")
# # # # # # # #         logger.info("=" * 60 + "\n")


# # # # # # # # async def send_core_req(
# # # # # # # #     dut, addr, data, is_write, byteen=0xF, timeout_cycles=50
# # # # # # # # ):
# # # # # # # #     """Send CPU core request via CPU bus interface."""
# # # # # # # #     await RisingEdge(dut.clk_h)
# # # # # # # #     dut.in_addr.value = addr
# # # # # # # #     dut.in_data.value = data
# # # # # # # #     dut.in_write.value = is_write
# # # # # # # #     dut.in_byteen.value = byteen 
# # # # # # # #     dut.in_valid.value = 1

# # # # # # # #     for _ in range(timeout_cycles):
# # # # # # # #         if dut.in_ready.value == 1:
# # # # # # # #             await RisingEdge(dut.clk_h)
# # # # # # # #             dut.in_valid.value = 0
# # # # # # # #             return True
# # # # # # # #         await RisingEdge(dut.clk_h)

# # # # # # # #     dut.in_valid.value = 0
# # # # # # # #     return False


# # # # # # # # async def expect_rsp(dut, expected_data, timeout_cycles=100):
# # # # # # # #     """Verify out_data response matching expected_data."""
# # # # # # # #     for _ in range(timeout_cycles):
# # # # # # # #         await RisingEdge(dut.clk_h)
# # # # # # # #         if dut.out_valid.value == 1:
# # # # # # # #             actual = int(dut.out_data.value)
# # # # # # # #             assert actual == expected_data, (
# # # # # # # #                 f"DATA MISMATCH: Got 0x{actual:08x}, Expected 0x{expected_data:08x}"
# # # # # # # #             )
# # # # # # # #             return True
# # # # # # # #     return False


# # # # # # # # # ==============================================================================
# # # # # # # # # TEST CASE 1: PROOF OF MISSING NON-BLOCKING FEATURE (NO MSHR)
# # # # # # # # # ==============================================================================
# # # # # # # # @cocotb.test()
# # # # # # # # async def test_proof_missing_mshr_blocking_cache(dut):
# # # # # # # #     """Prove that Cache is Blocking: While a Read Miss is pending DRAM fetch,
# # # # # # # #     a 2nd Read request is rejected (in_ready = 0)."""

# # # # # # # #     cocotb.start_soon(Clock(dut.clk_h, 10, unit="ns").start())
# # # # # # # #     cocotb.start_soon(Clock(dut.clk_l, 40, unit="ns").start())

# # # # # # # #     dut.rst_n.value = 0
# # # # # # # #     dut.in_valid.value = 0
# # # # # # # #     dut.out_ready.value = 1
# # # # # # # #     await Timer(40, unit="ns")
# # # # # # # #     dut.rst_n.value = 1
# # # # # # # #     await Timer(20, unit="ns")

# # # # # # # #     # STEP 1: Pre-load data into Addr_A (Set 1)
# # # # # # # #     addr_A = 0x00000004
# # # # # # # #     data_A = 0xAAAAAAA
# # # # # # # #     await send_core_req(dut, addr_A, data_A, is_write=1)
# # # # # # # #     await expect_rsp(dut, 0x00000000)

# # # # # # # #     # STEP 2: Issue Read Miss to Addr_B (Set 0)
# # # # # # # #     addr_B = 0x00000100
# # # # # # # #     dut._log.info("[TEST MSHR] Issuing Read MISS to Addr_B (0x00000100)...")

# # # # # # # #     await RisingEdge(dut.clk_h)
# # # # # # # #     dut.in_addr.value = addr_B
# # # # # # # #     dut.in_write.value = 0
# # # # # # # #     dut.in_valid.value = 1

# # # # # # # #     while dut.in_ready.value == 0:
# # # # # # # #         await RisingEdge(dut.clk_h)
# # # # # # # #     await RisingEdge(dut.clk_h)

# # # # # # # #     # Send Read Addr_A while waiting for DRAM
# # # # # # # #     dut._log.info("[TEST MSHR] Sending Read Addr_A (0x00000004)...")
# # # # # # # #     dut.in_addr.value = addr_A
# # # # # # # #     dut.in_valid.value = 1

# # # # # # # #     await RisingEdge(dut.clk_h)
# # # # # # # #     is_accepted_during_miss = dut.in_ready.value == 1
# # # # # # # #     dut.in_valid.value = 0

# # # # # # # #     if not is_accepted_during_miss:
# # # # # # # #         dut._log.error("[FAIL] Cache is BLOCKING (Missing MSHR)!")
# # # # # # # #         dut._log.error(
# # # # # # # #             "[FAIL] 2nd Request REJECTED (in_ready = 0) during pending miss."
# # # # # # # #         )
# # # # # # # #     else:
# # # # # # # #         dut._log.info("[PASS] Cache supports Non-Blocking (Hit-under-Miss).")

# # # # # # # #     assert not is_accepted_during_miss, "Cache lacks Non-Blocking MSHR feature!"


# # # # # # # # # ==============================================================================
# # # # # # # # # TEST CASE 2: PROOF OF MISSING BYTE-WRITE ENABLE FEATURE
# # # # # # # # # ==============================================================================
# # # # # # # # @cocotb.test()
# # # # # # # # async def test_proof_missing_byte_write_enable(dut):
# # # # # # # #     """Prove that Cache lacks Sub-word / Byte-Write Enable."""

# # # # # # # #     cocotb.start_soon(Clock(dut.clk_h, 10, unit="ns").start())
# # # # # # # #     cocotb.start_soon(Clock(dut.clk_l, 20, unit="ns").start())

# # # # # # # #     dut.rst_n.value = 0
# # # # # # # #     dut.in_valid.value = 0
# # # # # # # #     dut.out_ready.value = 1
# # # # # # # #     await Timer(40, unit="ns")
# # # # # # # #     dut.rst_n.value = 1
# # # # # # # #     await Timer(20, unit="ns")

# # # # # # # #     addr = 0x00000010
# # # # # # # #     original_word = 0x12345678

# # # # # # # #     # STEP 1: Write initial word
# # # # # # # #     dut._log.info("[TEST BYTE-WRITE] Writing initial word: 0x12345678...")
# # # # # # # #     await send_core_req(dut, addr, original_word, is_write=1)
# # # # # # # #     await expect_rsp(dut, 0x00000000)

# # # # # # # #     # STEP 2: Attempt byte write 0xFF
# # # # # # # #     dut._log.info("[TEST BYTE-WRITE] Attempting byte write 0xFF...")
# # # # # # # #     await send_core_req(dut, addr, 0x000000FF, is_write=1)
# # # # # # # #     await expect_rsp(dut, 0x00000000)

# # # # # # # #     # STEP 3: Read back data
# # # # # # # #     await send_core_req(dut, addr, 0x0, is_write=0)

# # # # # # # #     await RisingEdge(dut.clk_h)
# # # # # # # #     while dut.out_valid.value == 0:
# # # # # # # #         await RisingEdge(dut.clk_h)

# # # # # # # #     read_back = int(dut.out_data.value)
# # # # # # # #     dut._log.info(f"[TEST BYTE-WRITE] Read back value: 0x{read_back:08x}")

# # # # # # # #     if read_back == 0x000000FF:
# # # # # # # #         dut._log.error("[FAIL] Cache LACKS BYTE-WRITE ENABLE FEATURE!")
# # # # # # # #         dut._log.error(
# # # # # # # #             "[FAIL] Upper bytes were OVERWRITTEN due to full word write."
# # # # # # # #         )


# # # # # # # # # ==============================================================================
# # # # # # # # # TEST CASE 3: DEEP-CHECK 16-WAY CAPACITY & EVICTION
# # # # # # # # # ==============================================================================
# # # # # # # # @cocotb.test()
# # # # # # # # async def test_deep_check_16way_capacity_and_eviction(dut):
# # # # # # # #     """Deep-Check Test for 16-WAY Cache."""

# # # # # # # #     tracker = CachePerfTracker(cache_type="16-Way Capacity Check")

# # # # # # # #     cocotb.start_soon(Clock(dut.clk_h, 10, unit="ns").start())
# # # # # # # #     cocotb.start_soon(Clock(dut.clk_l, 20, unit="ns").start())

# # # # # # # #     dut.rst_n.value = 0
# # # # # # # #     dut.in_valid.value = 0
# # # # # # # #     dut.in_write.value = 0
# # # # # # # #     dut.out_ready.value = 1
# # # # # # # #     dut.cfg_valid.value = 0
# # # # # # # #     await Timer(40, unit="ns")
# # # # # # # #     dut.rst_n.value = 1
# # # # # # # #     await Timer(20, unit="ns")

# # # # # # # #     dut._log.info("STARTING DEEP-CHECK FOR 16-WAY CACHE")

# # # # # # # #     addrs_16way = [i << 6 for i in range(17)]
# # # # # # # #     datas_16way = [(0x10101010 * (i + 1)) & 0xFFFFFFFF for i in range(17)]

# # # # # # # #     # PHASE 1: Populate all 16 Ways of Set 0
# # # # # # # #     dut._log.info("[PHASE 1] Pre-loading 16 distinct Tags into Set 0...")
# # # # # # # #     for i in range(16):
# # # # # # # #         await send_core_req(dut, addrs_16way[i], datas_16way[i], is_write=1)
# # # # # # # #         await expect_rsp(dut, 0x00000000)

# # # # # # # #     # PHASE 2: Read-Back all 16 Ways
# # # # # # # #     dut._log.info("[PHASE 2] Reading back all 16 Ways...")

# # # # # # # #     dram_accessed_during_readback = False

# # # # # # # #     async def monitor_dram_read():
# # # # # # # #         nonlocal dram_accessed_during_readback
# # # # # # # #         while True:
# # # # # # # #             await RisingEdge(dut.clk_h)
# # # # # # # #             if dut.dram_inst.read_valid.value == 1:
# # # # # # # #                 dram_accessed_during_readback = True

# # # # # # # #     dram_monitor = cocotb.start_soon(monitor_dram_read())

# # # # # # # #     for i in range(16):
# # # # # # # #         await send_core_req(dut, addrs_16way[i], 0x0, is_write=0)
# # # # # # # #         await expect_rsp(dut, datas_16way[i])
# # # # # # # #         tracker.record_access(is_hit=not dram_accessed_during_readback)

# # # # # # # #     dram_monitor.cancel()

# # # # # # # #     if dram_accessed_during_readback:
# # # # # # # #         dut._log.error("[FAIL] DRAM was accessed during Phase 2 read-back!")
# # # # # # # #         dut._log.error("[FAIL] RTL is not holding 16 ways simultaneously.")
# # # # # # # #         assert False, "Hardware failed to hold 16 ways simultaneously."
# # # # # # # #     else:
# # # # # # # #         dut._log.info(
# # # # # # # #             "[PASS] Phase 2 passed: All 16 Ways resided in Cache simultaneously."
# # # # # # # #         )

# # # # # # # #     # PHASE 3: Issue 17th Tag to Set 0
# # # # # # # #     dut._log.info("[PHASE 3] Issuing 17th Tag to Set 0...")
# # # # # # # #     await send_core_req(dut, addrs_16way[16], datas_16way[16], is_write=1)
# # # # # # # #     await expect_rsp(dut, 0x00000000)

# # # # # # # #     # PHASE 4: Verify Eviction (Read back 1st Tag)
# # # # # # # #     dut._log.info("[PHASE 4] Verifying eviction of 1st Tag...")

# # # # # # # #     dram_accessed_for_evicted_tag = False

# # # # # # # #     async def monitor_dram_eviction():
# # # # # # # #         nonlocal dram_accessed_for_evicted_tag
# # # # # # # #         while True:
# # # # # # # #             await RisingEdge(dut.clk_h)
# # # # # # # #             if dut.dram_inst.read_valid.value == 1:
# # # # # # # #                 dram_accessed_for_evicted_tag = True

# # # # # # # #     evict_monitor = cocotb.start_soon(monitor_dram_eviction())

# # # # # # # #     await send_core_req(dut, addrs_16way[0], 0x0, is_write=0)
# # # # # # # #     await expect_rsp(dut, datas_16way[0])

# # # # # # # #     evict_monitor.cancel()

# # # # # # # #     assert (
# # # # # # # #         dram_accessed_for_evicted_tag
# # # # # # # #     ), "1st Tag was expected to miss, but DRAM was not accessed!"
# # # # # # # #     dut._log.info("[PASS] Phase 4 passed: 1st Tag missed as expected.")

# # # # # # # #     tracker.print_summary(dut._log)
# # # # # # # #     dut._log.info("16-WAY DEEP CHECK BENCHMARK PASSED SUCCESSFULLY")

# # # # # # # import random
# # # # # # # import cocotb
# # # # # # # from cocotb.clock import Clock
# # # # # # # from cocotb.triggers import RisingEdge, Timer


# # # # # # # class CachePerfTracker:
# # # # # # #     """Tracker class for Cache Hit and Miss performance statistics."""

# # # # # # #     def __init__(self, cache_type="16-Way Cache Benchmark"):
# # # # # # #         self.cache_type = cache_type
# # # # # # #         self.total_read_reqs = 0
# # # # # # #         self.hits = 0
# # # # # # #         self.misses = 0

# # # # # # #     def record_access(self, is_hit: bool):
# # # # # # #         self.total_read_reqs += 1
# # # # # # #         if is_hit:
# # # # # # #             self.hits += 1
# # # # # # #         else:
# # # # # # #             self.misses += 1

# # # # # # #     def print_summary(self, logger):
# # # # # # #         hit_rate = (
# # # # # # #             (self.hits / self.total_read_reqs * 100.0)
# # # # # # #             if self.total_read_reqs > 0
# # # # # # #             else 0.0
# # # # # # #         )
# # # # # # #         miss_rate = 100.0 - hit_rate
# # # # # # #         logger.info("\n" + "=" * 60)
# # # # # # #         logger.info(f"       {self.cache_type.upper()} PERFORMANCE REPORT")
# # # # # # #         logger.info("=" * 60)
# # # # # # #         logger.info(f"  Total Read Requests   : {self.total_read_reqs}")
# # # # # # #         logger.info(f"  Cache Hits            : {self.hits}")
# # # # # # #         logger.info(f"  Cache Misses          : {self.misses}")
# # # # # # #         logger.info(f"  Cache Hit Rate (%)    : {hit_rate:.2f}%")
# # # # # # #         logger.info(f"  Cache Miss Rate (%)   : {miss_rate:.2f}%")
# # # # # # #         logger.info("=" * 60 + "\n")


# # # # # # # async def send_core_req(
# # # # # # #     dut, addr, data, is_write, byteen=0x0F, timeout_cycles=50
# # # # # # # ):
# # # # # # #     """Send CPU core request via CPU bus interface including byte enable mask."""
# # # # # # #     await RisingEdge(dut.clk_h)
# # # # # # #     dut.in_addr.value = addr
# # # # # # #     dut.in_data.value = data
# # # # # # #     dut.in_write.value = is_write
# # # # # # #     dut.in_byteen.value = byteen  # Byte enable mask (default 0x0F = 4'b1111)
# # # # # # #     dut.in_valid.value = 1

# # # # # # #     for _ in range(timeout_cycles):
# # # # # # #         if dut.in_ready.value == 1:
# # # # # # #             await RisingEdge(dut.clk_h)
# # # # # # #             dut.in_valid.value = 0
# # # # # # #             return True
# # # # # # #         await RisingEdge(dut.clk_h)

# # # # # # #     dut.in_valid.value = 0
# # # # # # #     return False


# # # # # # # async def expect_rsp(dut, expected_data, timeout_cycles=100):
# # # # # # #     """Verify out_data response matching expected_data."""
# # # # # # #     for _ in range(timeout_cycles):
# # # # # # #         await RisingEdge(dut.clk_h)
# # # # # # #         if dut.out_valid.value == 1:
# # # # # # #             actual = int(dut.out_data.value)
# # # # # # #             assert actual == expected_data, (
# # # # # # #                 f"DATA MISMATCH: Got 0x{actual:08x}, Expected 0x{expected_data:08x}"
# # # # # # #             )
# # # # # # #             return True
# # # # # # #     return False


# # # # # # # # ==============================================================================
# # # # # # # # TEST CASE 1: PROOF OF MISSING NON-BLOCKING FEATURE (NO MSHR)
# # # # # # # # ==============================================================================
# # # # # # # @cocotb.test()
# # # # # # # async def test_proof_missing_mshr_blocking_cache(dut):
# # # # # # #     """Prove that Cache is Blocking: While a Read Miss is pending DRAM fetch,
# # # # # # #     a 2nd Read request is rejected (in_ready = 0)."""

# # # # # # #     cocotb.start_soon(Clock(dut.clk_h, 10, unit="ns").start())
# # # # # # #     cocotb.start_soon(Clock(dut.clk_l, 40, unit="ns").start())

# # # # # # #     dut.rst_n.value = 0
# # # # # # #     dut.in_valid.value = 0
# # # # # # #     dut.out_ready.value = 1
# # # # # # #     dut.cfg_valid.value = 0
# # # # # # #     await Timer(40, unit="ns")
# # # # # # #     dut.rst_n.value = 1
# # # # # # #     await Timer(20, unit="ns")

# # # # # # #     # STEP 1: Pre-load data into Addr_A (Set 1)
# # # # # # #     addr_A = 0x00000004
# # # # # # #     data_A = 0xAAAAAAAA
# # # # # # #     await send_core_req(dut, addr_A, data_A, is_write=1, byteen=0x0F)
# # # # # # #     await expect_rsp(dut, 0x00000000)

# # # # # # #     # STEP 2: Issue Read Miss to Addr_B (Set 0)
# # # # # # #     addr_B = 0x00000100
# # # # # # #     dut._log.info("[TEST MSHR] Issuing Read MISS to Addr_B (0x00000100)...")

# # # # # # #     await RisingEdge(dut.clk_h)
# # # # # # #     dut.in_addr.value = addr_B
# # # # # # #     dut.in_data.value = 0x0
# # # # # # #     dut.in_write.value = 0
# # # # # # #     dut.in_byteen.value = 0x0F
# # # # # # #     dut.in_valid.value = 1

# # # # # # #     while dut.in_ready.value == 0:
# # # # # # #         await RisingEdge(dut.clk_h)
# # # # # # #     await RisingEdge(dut.clk_h)

# # # # # # #     # Send Read Addr_A while waiting for DRAM
# # # # # # #     dut._log.info("[TEST MSHR] Sending Read Addr_A (0x00000004)...")
# # # # # # #     dut.in_addr.value = addr_A
# # # # # # #     dut.in_valid.value = 1

# # # # # # #     await RisingEdge(dut.clk_h)
# # # # # # #     is_accepted_during_miss = dut.in_ready.value == 1
# # # # # # #     dut.in_valid.value = 0

# # # # # # #     if not is_accepted_during_miss:
# # # # # # #         dut._log.info("[EXPECTED RESULT] Cache is BLOCKING (Missing MSHR).")
# # # # # # #         dut._log.info(
# # # # # # #             "[EXPECTED RESULT] 2nd Request REJECTED (in_ready = 0) during pending miss."
# # # # # # #         )
# # # # # # #     else:
# # # # # # #         dut._log.info("[INFO] Cache supports Non-Blocking (Hit-under-Miss).")

# # # # # # #     assert (
# # # # # # #         not is_accepted_during_miss
# # # # # # #     ), "Cache currently lacks Non-Blocking MSHR feature!"


# # # # # # # # ==============================================================================
# # # # # # # # TEST CASE 2: VERIFICATION OF BYTE-WRITE ENABLE FEATURE
# # # # # # # # ==============================================================================
# # # # # # # @cocotb.test()
# # # # # # # async def test_verify_byte_write_enable(dut):
# # # # # # #     """Verify sub-word Byte-Write Enable functionality:
# # # # # # #     1. Write initial word 0x12345678 (byteen = 0xF).
# # # # # # #     2. Perform byte write 0xFF at Byte 0 (byteen = 0x1). Read back -> Expect 0x123456FF.
# # # # # # #     3. Perform byte write 0xAB at Byte 2 (byteen = 0x4). Read back -> Expect 0x12AB56FF.
# # # # # # #     """

# # # # # # #     cocotb.start_soon(Clock(dut.clk_h, 10, unit="ns").start())
# # # # # # #     cocotb.start_soon(Clock(dut.clk_l, 20, unit="ns").start())

# # # # # # #     dut.rst_n.value = 0
# # # # # # #     dut.in_valid.value = 0
# # # # # # #     dut.out_ready.value = 1
# # # # # # #     dut.cfg_valid.value = 0
# # # # # # #     await Timer(40, unit="ns")
# # # # # # #     dut.rst_n.value = 1
# # # # # # #     await Timer(20, unit="ns")

# # # # # # #     addr = 0x00000010
# # # # # # #     original_word = 0x12345678

# # # # # # #     dut._log.info("[SETUP] Pre-fetching line 0x10 into Cache...")
# # # # # # #     await send_core_req(dut, addr, 0x0, is_write=0, byteen=0x0F)
# # # # # # #     await expect_rsp(dut, 0x00000000)

# # # # # # #     # STEP 1: Write full 32-bit word 0x12345678 with byteen = 0xF (4'b1111)
# # # # # # #     dut._log.info(
# # # # # # #         "[TEST BYTE-WRITE] Step 1: Writing full word 0x12345678 (byteen = 0xF)..."
# # # # # # #     )
# # # # # # #     await send_core_req(dut, addr, original_word, is_write=1, byteen=0x0F)
# # # # # # #     await expect_rsp(dut, 0x00000000)

# # # # # # #     # STEP 2: Write 1 Byte 0xFF to Byte 0 using byteen = 0x1 (4'b0001)
# # # # # # #     dut._log.info(
# # # # # # #         "[TEST BYTE-WRITE] Step 2: Writing Byte 0x000000FF to Byte 0 (byteen = 0x1)..."
# # # # # # #     )
# # # # # # #     await send_core_req(dut, addr, 0x000000FF, is_write=1, byteen=0x01)
# # # # # # #     await expect_rsp(dut, 0x00000000)

# # # # # # #     # STEP 3: Read back and verify upper bytes (0x123456..) are preserved
# # # # # # #     dut._log.info("[TEST BYTE-WRITE] Step 3: Verifying read back value...")
# # # # # # #     await send_core_req(dut, addr, 0x0, is_write=0, byteen=0x0F)
# # # # # # #     await expect_rsp(dut, expected_data=0x123456FF)
# # # # # # #     dut._log.info(
# # # # # # #         "[PASS] Step 3 Verified: Byte 0 updated to 0xFF, upper bytes preserved (0x123456FF)."
# # # # # # #     )

# # # # # # #     # STEP 4: Write 1 Byte 0xAB to Byte 2 using byteen = 0x4 (4'b0100)
# # # # # # #     dut._log.info(
# # # # # # #         "[TEST BYTE-WRITE] Step 4: Writing Byte 0x00AB0000 to Byte 2 (byteen = 0x4)..."
# # # # # # #     )
# # # # # # #     await send_core_req(dut, addr, 0x00AB0000, is_write=1, byteen=0x04)
# # # # # # #     await expect_rsp(dut, 0x00000000)

# # # # # # #     # STEP 5: Read back and verify final word
# # # # # # #     dut._log.info(
# # # # # # #         "[TEST BYTE-WRITE] Step 5: Verifying final read back value..."
# # # # # # #     )
# # # # # # #     await send_core_req(dut, addr, 0x0, is_write=0, byteen=0x0F)
# # # # # # #     await expect_rsp(dut, expected_data=0x12AB56FF)
# # # # # # #     dut._log.info(
# # # # # # #         "[PASS] Step 5 Verified: Byte 2 updated to 0xAB, final word is 0x12AB56FF."
# # # # # # #     )

# # # # # # #     dut._log.info("[PASS] BYTE-WRITE ENABLE FEATURE VERIFIED SUCCESSFULLY!")


# # # # # # # # ==============================================================================
# # # # # # # # TEST CASE 3: DEEP-CHECK 16-WAY CAPACITY & EVICTION
# # # # # # # # ==============================================================================
# # # # # # # @cocotb.test()
# # # # # # # async def test_deep_check_16way_capacity_and_eviction(dut):
# # # # # # #     """Deep-Check Test for 16-WAY Cache:
# # # # # # #     1. Pre-loads 16 distinct Tags into Set 0.
# # # # # # #     2. Reads back all 16 Tags & verifies ZERO DRAM ACCESSES occur.
# # # # # # #     3. Issues 17th Tag to Set 0 -> Verifies DRAM Eviction occurs.
# # # # # # #     4. Reads back 1st Tag -> Verifies DRAM Access occurs (Evicted by Modulo Round-Robin).
# # # # # # #     """

# # # # # # #     tracker = CachePerfTracker(cache_type="16-Way Capacity Check")

# # # # # # #     cocotb.start_soon(Clock(dut.clk_h, 10, unit="ns").start())
# # # # # # #     cocotb.start_soon(Clock(dut.clk_l, 20, unit="ns").start())

# # # # # # #     dut.rst_n.value = 0
# # # # # # #     dut.in_valid.value = 0
# # # # # # #     dut.in_write.value = 0
# # # # # # #     dut.out_ready.value = 1
# # # # # # #     dut.cfg_valid.value = 0
# # # # # # #     await Timer(40, unit="ns")
# # # # # # #     dut.rst_n.value = 1
# # # # # # #     await Timer(20, unit="ns")

# # # # # # #     dut._log.info("STARTING DEEP-CHECK FOR 16-WAY CACHE")

# # # # # # #     addrs_16way = [i << 6 for i in range(17)]
# # # # # # #     datas_16way = [(0x10101010 * (i + 1)) & 0xFFFFFFFF for i in range(17)]

# # # # # # #     # PHASE 1: Populate all 16 Ways of Set 0
# # # # # # #     dut._log.info("[PHASE 1] Pre-loading 16 distinct Tags into Set 0...")
# # # # # # #     for i in range(16):
# # # # # # #         await send_core_req(
# # # # # # #             dut, addrs_16way[i], datas_16way[i], is_write=1, byteen=0x0F
# # # # # # #         )
# # # # # # #         await expect_rsp(dut, 0x00000000)

# # # # # # #     # PHASE 2: Read-Back all 16 Ways
# # # # # # #     dut._log.info("[PHASE 2] Reading back all 16 Ways...")

# # # # # # #     dram_accessed_during_readback = False

# # # # # # #     async def monitor_dram_read():
# # # # # # #         nonlocal dram_accessed_during_readback
# # # # # # #         while True:
# # # # # # #             await RisingEdge(dut.clk_h)
# # # # # # #             if dut.dram_inst.read_valid.value == 1:
# # # # # # #                 dram_accessed_during_readback = True

# # # # # # #     dram_monitor = cocotb.start_soon(monitor_dram_read())

# # # # # # #     for i in range(16):
# # # # # # #         await send_core_req(
# # # # # # #             dut, addrs_16way[i], 0x0, is_write=0, byteen=0x0F
# # # # # # #         )
# # # # # # #         await expect_rsp(dut, datas_16way[i])
# # # # # # #         tracker.record_access(is_hit=not dram_accessed_during_readback)

# # # # # # #     dram_monitor.cancel()

# # # # # # #     if dram_accessed_during_readback:
# # # # # # #         dut._log.error("[FAIL] DRAM was accessed during Phase 2 read-back!")
# # # # # # #         dut._log.error("[FAIL] RTL is not holding 16 ways simultaneously.")
# # # # # # #         assert False, "Hardware failed to hold 16 ways simultaneously."
# # # # # # #     else:
# # # # # # #         dut._log.info(
# # # # # # #             "[PASS] Phase 2 passed: All 16 Ways resided in Cache simultaneously."
# # # # # # #         )

# # # # # # #     # PHASE 3: Issue 17th Tag to Set 0
# # # # # # #     dut._log.info("[PHASE 3] Issuing 17th Tag to Set 0...")
# # # # # # #     await send_core_req(
# # # # # # #         dut, addrs_16way[16], datas_16way[16], is_write=1, byteen=0x0F
# # # # # # #     )
# # # # # # #     await expect_rsp(dut, 0x00000000)

# # # # # # #     # PHASE 4: Verify Eviction (Read back 1st Tag)
# # # # # # #     dut._log.info("[PHASE 4] Verifying eviction of 1st Tag...")

# # # # # # #     dram_accessed_for_evicted_tag = False

# # # # # # #     async def monitor_dram_eviction():
# # # # # # #         nonlocal dram_accessed_for_evicted_tag
# # # # # # #         while True:
# # # # # # #             await RisingEdge(dut.clk_h)
# # # # # # #             if dut.dram_inst.read_valid.value == 1:
# # # # # # #                 dram_accessed_for_evicted_tag = True

# # # # # # #     evict_monitor = cocotb.start_soon(monitor_dram_eviction())

# # # # # # #     await send_core_req(dut, addrs_16way[0], 0x0, is_write=0, byteen=0x0F)
# # # # # # #     await expect_rsp(dut, datas_16way[0])

# # # # # # #     evict_monitor.cancel()

# # # # # # #     assert (
# # # # # # #         dram_accessed_for_evicted_tag
# # # # # # #     ), "1st Tag was expected to miss, but DRAM was not accessed!"
# # # # # # #     dut._log.info("[PASS] Phase 4 passed: 1st Tag missed as expected.")

# # # # # # #     tracker.print_summary(dut._log)
# # # # # # #     dut._log.info("16-WAY DEEP CHECK BENCHMARK PASSED SUCCESSFULLY")

# # # # # # import random
# # # # # # import cocotb
# # # # # # from cocotb.clock import Clock
# # # # # # from cocotb.triggers import RisingEdge, Timer


# # # # # # async def send_core_req(
# # # # # #     dut, addr, data, is_write, byteen=0x0F, timeout_cycles=50
# # # # # # ):
# # # # # #     """Send CPU core request via CPU bus interface including byte enable mask."""
# # # # # #     await RisingEdge(dut.clk_h)
# # # # # #     dut.in_addr.value = addr
# # # # # #     dut.in_data.value = data
# # # # # #     dut.in_write.value = is_write
# # # # # #     dut.in_byteen.value = byteen  # Byte enable mask (default 0x0F = 4'b1111)
# # # # # #     dut.in_valid.value = 1

# # # # # #     for _ in range(timeout_cycles):
# # # # # #         if dut.in_ready.value == 1:
# # # # # #             await RisingEdge(dut.clk_h)
# # # # # #             dut.in_valid.value = 0
# # # # # #             return True
# # # # # #         await RisingEdge(dut.clk_h)

# # # # # #     dut.in_valid.value = 0
# # # # # #     return False


# # # # # # async def expect_rsp(dut, expected_data, timeout_cycles=100):
# # # # # #     """Verify out_data response matching expected_data."""
# # # # # #     for _ in range(timeout_cycles):
# # # # # #         await RisingEdge(dut.clk_h)
# # # # # #         if dut.out_valid.value == 1:
# # # # # #             actual = int(dut.out_data.value)
# # # # # #             assert actual == expected_data, (
# # # # # #                 f"DATA MISMATCH: Got 0x{actual:08x}, Expected 0x{expected_data:08x}"
# # # # # #             )
# # # # # #             return True
# # # # # #     return False


# # # # # # # ==============================================================================
# # # # # # # RIGOROUS DEEP-CHECK TEST: BYTE-WRITE ENABLE ON WRITE MISS & WRITE HIT
# # # # # # # ==============================================================================
# # # # # # @cocotb.test()
# # # # # # async def test_deep_check_byte_write_enable(dut):
# # # # # #     """Rigorous Deep-Check Test for Sub-Word Byte-Write Enable:
# # # # # #     PART A: Write Miss testing (Direct Write-Through to DRAM with byte mask, NO PREFETCHING).
# # # # # #     PART B: Write Hit testing across all 4 byte lanes (Byte 0, 1, 2, 3) inside Cache SRAM.
# # # # # #     """

# # # # # #     cocotb.start_soon(Clock(dut.clk_h, 10, unit="ns").start())
# # # # # #     cocotb.start_soon(Clock(dut.clk_l, 20, unit="ns").start())

# # # # # #     dut.rst_n.value = 0
# # # # # #     dut.in_valid.value = 0
# # # # # #     dut.out_ready.value = 1
# # # # # #     dut.cfg_valid.value = 0
# # # # # #     await Timer(40, unit="ns")
# # # # # #     dut.rst_n.value = 1
# # # # # #     await Timer(20, unit="ns")

# # # # # #     dut._log.info("=" * 70)
# # # # # #     dut._log.info(" STARTING RIGOROUS DEEP-CHECK FOR BYTE-WRITE ENABLE FEATURE ")
# # # # # #     dut._log.info("=" * 70)

# # # # # #     target_addr = 0x00000030

# # # # # #     # --------------------------------------------------------------------------
# # # # # #     # PART A: WRITE MISS BYTE WRITE (DIRECT WRITE-THROUGH TO DRAM, NO PREFETCH)
# # # # # #     # --------------------------------------------------------------------------
# # # # # #     dut._log.info(
# # # # # #         "\n[PART A] Testing Write-Through MISS (Direct DRAM byte masking without prefetch)..."
# # # # # #     )

# # # # # #     # Step 1: Write initial 32-bit word 0x12345678 to unallocated address 0x30 (WRITE MISS)
# # # # # #     dut._log.info(
# # # # # #         "[PART A - Step 1] Writing word 0x12345678 to 0x00000030 (WRITE MISS)..."
# # # # # #     )
# # # # # #     await send_core_req(
# # # # # #         dut, target_addr, 0x12345678, is_write=1, byteen=0x0F
# # # # # #     )
# # # # # #     await expect_rsp(dut, 0x00000000)

# # # # # #     # Step 2: Write 1 Byte 0xFF to Byte 0 as a WRITE MISS (byteen = 0x1)
# # # # # #     # NO PREFETCHING! This tests if write_controller + DRAM handles byte mask on a Miss.
# # # # # #     dut._log.info(
# # # # # #         "[PART A - Step 2] Writing Byte 0xFF to Byte 0 (WRITE MISS, byteen = 0x1)..."
# # # # # #     )
# # # # # #     await send_core_req(dut, target_addr, 0x000000FF, is_write=1, byteen=0x01)
# # # # # #     await expect_rsp(dut, 0x00000000)

# # # # # #     # Step 3: Read back address 0x30 (READ MISS -> Fetches updated word from DRAM)
# # # # # #     dut._log.info(
# # # # # #         "[PART A - Step 3] Reading back 0x00000030 from DRAM to verify..."
# # # # # #     )
# # # # # #     await send_core_req(dut, target_addr, 0x00000000, is_write=0, byteen=0x0F)
# # # # # #     await expect_rsp(dut, expected_data=0x123456FF)
# # # # # #     dut._log.info(
# # # # # #         "[PASS] Part A Verified: DRAM preserved upper bytes on Write Miss (0x123456FF)!"
# # # # # #     )

# # # # # #     # --------------------------------------------------------------------------
# # # # # #     # PART B: WRITE HIT BYTE WRITE ACROSS ALL BYTE LANES (SRAM CACHE HIT)
# # # # # #     # --------------------------------------------------------------------------
# # # # # #     # Address 0x30 is now resident in Cache (loaded during Part A Step 3).
# # # # # #     dut._log.info(
# # # # # #         "\n[PART B] Testing Cache HIT sub-word writes across all byte lanes..."
# # # # # #     )

# # # # # #     # Step 4: Write 1 Byte 0xAB to Byte 2 (byteen = 0x4 -> 4'b0100)
# # # # # #     dut._log.info(
# # # # # #         "[PART B - Step 4] Writing Byte 0xAB to Byte 2 (CACHE HIT, byteen = 0x4)..."
# # # # # #     )
# # # # # #     await send_core_req(dut, target_addr, 0x00AB0000, is_write=1, byteen=0x04)
# # # # # #     await expect_rsp(dut, 0x00000000)

# # # # # #     # Verify Step 4
# # # # # #     await send_core_req(dut, target_addr, 0x00000000, is_write=0, byteen=0x0F)
# # # # # #     await expect_rsp(dut, expected_data=0x12AB56FF)
# # # # # #     dut._log.info(
# # # # # #         "[PASS] Step 4 Verified: Byte 2 updated to 0xAB -> 0x12AB56FF."
# # # # # #     )

# # # # # #     # Step 5: Write 1 Byte 0xCD to Byte 1 (byteen = 0x2 -> 4'b0010)
# # # # # #     dut._log.info(
# # # # # #         "[PART B - Step 5] Writing Byte 0xCD to Byte 1 (CACHE HIT, byteen = 0x2)..."
# # # # # #     )
# # # # # #     await send_core_req(dut, target_addr, 0x0000CD00, is_write=1, byteen=0x02)
# # # # # #     await expect_rsp(dut, 0x00000000)

# # # # # #     # Verify Step 5
# # # # # #     await send_core_req(dut, target_addr, 0x00000000, is_write=0, byteen=0x0F)
# # # # # #     await expect_rsp(dut, expected_data=0x12ABCDFF)
# # # # # #     dut._log.info(
# # # # # #         "[PASS] Step 5 Verified: Byte 1 updated to 0xCD -> 0x12ABCDFF."
# # # # # #     )

# # # # # #     # Step 6: Write 1 Byte 0xEF to Byte 3 (byteen = 0x8 -> 4'b1000)
# # # # # #     dut._log.info(
# # # # # #         "[PART B - Step 6] Writing Byte 0xEF to Byte 3 (CACHE HIT, byteen = 0x8)..."
# # # # # #     )
# # # # # #     await send_core_req(dut, target_addr, 0xEF000000, is_write=1, byteen=0x08)
# # # # # #     await expect_rsp(dut, 0x00000000)

# # # # # #     # Verify Step 6
# # # # # #     await send_core_req(dut, target_addr, 0x00000000, is_write=0, byteen=0x0F)
# # # # # #     await expect_rsp(dut, expected_data=0xEFABCDFF)
# # # # # #     dut._log.info(
# # # # # #         "[PASS] Step 6 Verified: Byte 3 updated to 0xEF -> 0xEFABCDFF."
# # # # # #     )

# # # # # #     dut._log.info("=" * 70)
# # # # # #     dut._log.info(
# # # # # #         " BYTE-WRITE ENABLE FEATURE PASSED ALL MISS AND HIT TESTS 100% "
# # # # # #     )
# # # # # #     dut._log.info("=" * 70)

# # # # # import cocotb
# # # # # from cocotb.clock import Clock
# # # # # from cocotb.triggers import RisingEdge, Timer


# # # # # async def configure_cache_mode(dut, write_through_enable=0):
# # # # #     """Configure cache operational mode (0: Write-Back, 1: Write-Through)."""
# # # # #     await RisingEdge(dut.clk_h)
# # # # #     dut.cfg_addr.value = 0x00
# # # # #     dut.cfg_data_in.value = 0x00000001 if write_through_enable else 0x00000000
# # # # #     dut.cfg_valid.value = 1
# # # # #     for _ in range(50):
# # # # #         await RisingEdge(dut.clk_h)
# # # # #         if dut.cfg_ready.value == 1:
# # # # #             break
# # # # #     dut.cfg_valid.value = 0
# # # # #     await RisingEdge(dut.clk_h)


# # # # # async def send_write_req(dut, addr, data, byteen=0x0F):
# # # # #     """Send a CPU core write request and wait for completion."""
# # # # #     await RisingEdge(dut.clk_h)
# # # # #     dut.in_addr.value = addr
# # # # #     dut.in_data.value = data
# # # # #     dut.in_write.value = 1
# # # # #     dut.in_byteen.value = byteen
# # # # #     dut.in_valid.value = 1

# # # # #     while True:
# # # # #         if dut.in_ready.value == 1:
# # # # #             await RisingEdge(dut.clk_h)
# # # # #             dut.in_valid.value = 0
# # # # #             break
# # # # #         await RisingEdge(dut.clk_h)

# # # # #     # Wait for the response handshake to complete
# # # # #     while True:
# # # # #         await RisingEdge(dut.clk_h)
# # # # #         if dut.out_valid.value == 1:
# # # # #             break


# # # # # # ==============================================================================
# # # # # # COROUTINE: MONITOR INTERNAL SIGNALS ACROSS CYCLES
# # # # # # ==============================================================================
# # # # # async def signal_probe_monitor(dut):
# # # # #     """Monitor and trace cycle-by-cycle internal pipeline signals and transitions."""
# # # # #     cycle = 0
# # # # #     while True:
# # # # #         await RisingEdge(dut.clk_h)
# # # # #         cycle += 1

# # # # #         # 1. Probe Data Array write events
# # # # #         d_arr = dut.cache_inst.d_array
# # # # #         if d_arr.valid.value == 1 and (
# # # # #             d_arr.write.value == 1 or d_arr.write_all.value == 1
# # # # #         ):
# # # # #             dut._log.info(
# # # # #                 f"[Cycle {cycle:4d}][DATA_ARRAY WRITE] Addr=0x{int(d_arr.addr.value):08x} "
# # # # #                 f"| WriteAll={int(d_arr.write_all.value)} | WriteHit={int(d_arr.write.value)} "
# # # # #                 f"| DataIn=0x{int(d_arr.data.value):08x} | Way={int(d_arr.way.value) if hasattr(d_arr, 'way') else 0}"
# # # # #             )

# # # # #         # 2. Probe Tag Array eviction triggers
# # # # #         tag_arr = dut.cache_inst.tag_array
# # # # #         if tag_arr.write_valid.value == 1:
# # # # #             dut._log.info(
# # # # #                 f"[Cycle {cycle:4d}][TAG_EVICT_TRIGGER] tag_array -> wr_controller | "
# # # # #                 f"WriteAddr=0x{int(tag_arr.write_addr.value):08x} | "
# # # # #                 f"WriteData=0x{int(tag_arr.write_data.value):08x} | "
# # # # #                 f"arr_in_data=0x{int(tag_arr.arr_in_data.value):08x} | "
# # # # #                 f"WriteStrb=0x{int(tag_arr.write_strb.value):x}"
# # # # #             )

# # # # #         # 3. Probe Write Controller capture events
# # # # #         wr_ctrl = dut.cache_inst.wr_controller
# # # # #         if wr_ctrl.cache_write_valid.value == 1:
# # # # #             dut._log.info(
# # # # #                 f"[Cycle {cycle:4d}][WR_CTRL CAPTURE] WrCtrl State={int(wr_ctrl.cur_state.value)} "
# # # # #                 f"| LatchedDataIn=0x{int(wr_ctrl.cache_write_data.value):08x} "
# # # # #                 f"| LatchedAddr=0x{int(wr_ctrl.cache_write_addr.value):08x}"
# # # # #             )

# # # # #         # 4. Probe DRAM write flush events
# # # # #         dram = dut.dram_inst
# # # # #         if dram.write_valid.value == 1:
# # # # #             dut._log.info(
# # # # #                 f"[Cycle {cycle:4d}][DRAM WRITE FLUSH] Addr=0x{int(dram.write_addr.value):08x} "
# # # # #                 f"| Data=0x{int(dram.write_data.value):08x} | ByteEn=0x{int(dram.write_byteen.value):x}"
# # # # #             )


# # # # # # ==============================================================================
# # # # # # MAIN TESTCASE: WRITE-ALLOCATE & DIRTY EVICTION TRACE
# # # # # # ==============================================================================
# # # # # @cocotb.test()
# # # # # async def test_debug_write_eviction_trace(dut):
# # # # #     """Detailed white-box trace for Write-Miss Allocate and Dirty Line Eviction."""

# # # # #     # 1. Initialize clock generators and apply reset
# # # # #     cocotb.start_soon(Clock(dut.clk_h, 10, unit="ns").start())
# # # # #     cocotb.start_soon(Clock(dut.clk_l, 20, unit="ns").start())

# # # # #     dut.rst_n.value = 0
# # # # #     dut.in_valid.value = 0
# # # # #     dut.out_ready.value = 1
# # # # #     dut.cfg_valid.value = 0
# # # # #     await Timer(40, unit="ns")
# # # # #     dut.rst_n.value = 1
# # # # #     await Timer(20, unit="ns")

# # # # #     # Start signal monitor coroutine
# # # # #     cocotb.start_soon(signal_probe_monitor(dut))

# # # # #     dut._log.info("================================================================")
# # # # #     dut._log.info(" STARTING TRACE: WRITE 0xDEADBEEF TO 0x0 (WRITE-ALLOCATE MISS) ")
# # # # #     dut._log.info("================================================================")

# # # # #     # 2. Configure Cache to Write-Back mode
# # # # #     await configure_cache_mode(dut, write_through_enable=0)

# # # # #     # 3. Step 1: Initial Write Miss to 0x00000000
# # # # #     dut._log.info("\n>>> STEP 1: Core Write 0xDEADBEEF -> Addr 0x00000000")
# # # # #     await send_write_req(dut, addr=0x00000000, data=0xDEADBEEF, byteen=0x0F)
# # # # #     await Timer(50, unit="ns")

# # # # #     # 4. Step 2: Write 16 distinct tags into Set 0 to force eviction of Way 0
# # # # #     dut._log.info("================================================================")
# # # # #     dut._log.info(" STEP 2: WRITE 16 LINES TO SAME SET (0) TO FORCE EVICTION OF WAY 0")
# # # # #     dut._log.info("================================================================")

# # # # #     for i in range(1, 18):
# # # # #         target_addr = i << 6  # Same Set 0, different Tag
# # # # #         dut._log.info(
# # # # #             f"\n--- [Iteration {i:2d}] Core Write 0x55555555 -> Addr 0x{target_addr:08x} ---"
# # # # #         )
# # # # #         await send_write_req(
# # # # #             dut, addr=target_addr, data=0x55555555, byteen=0x0F
# # # # #         )
# # # # #         await Timer(20, unit="ns")

# # # # #     await Timer(100, unit="ns")
# # # # #     dut._log.info("\n>>> TRACE TEST COMPLETED.")

# # # # import cocotb
# # # # from cocotb.clock import Clock
# # # # from cocotb.triggers import RisingEdge, Timer

# # # # # ==============================================================================
# # # # # HẰNG SỐ CẤU HÌNH PHẦN CỨNG (LINE 64B - 64KB - 16 WAYS)
# # # # # ==============================================================================
# # # # DATA_SIZE = 32  # 32 bits = 4 Bytes
# # # # DATA_ELEMENTS = 64  # 64 Bytes mỗi dòng cache (16 words)
# # # # NUM_WAYS = 16  # 16 Ways
# # # # OFFSET_BITS = 6  # log2(64) = 6 bits (bit [1:0] byte, bit [5:2] word)
# # # # LINE_BITS = 6  # log2(64 sets) = 6 bits (bit [11:6])
# # # # TAG_SHIFT = (
# # # #     OFFSET_BITS + LINE_BITS
# # # # )  # = 12 bits. Các Tag khác nhau cùng Set 0 cách nhau: (tag << 12)


# # # # # ==============================================================================
# # # # # DRIVER HELPER COROUTINES
# # # # # ==============================================================================
# # # # async def configure_cache_mode(dut, write_through_enable=0):
# # # #     """Cấu hình chế độ hoạt động của Cache (0: Write-Back, 1: Write-Through)."""
# # # #     await RisingEdge(dut.clk_h)
# # # #     dut.cfg_addr.value = 0x00
# # # #     dut.cfg_data_in.value = 0x00000001 if write_through_enable else 0x00000000
# # # #     dut.cfg_valid.value = 1
# # # #     for _ in range(50):
# # # #         await RisingEdge(dut.clk_h)
# # # #         if dut.cfg_ready.value == 1:
# # # #             break
# # # #     dut.cfg_valid.value = 0
# # # #     await RisingEdge(dut.clk_h)


# # # # async def send_write_req(dut, addr, data, byteen=0x0F):
# # # #     """Gửi request GHI (Store) từ CPU vào Cache và chờ hoàn thành."""
# # # #     await RisingEdge(dut.clk_h)
# # # #     dut.in_addr.value = addr
# # # #     dut.in_data.value = data
# # # #     dut.in_write.value = 1
# # # #     dut.in_byteen.value = byteen
# # # #     dut.in_valid.value = 1

# # # #     while True:
# # # #         if dut.in_ready.value == 1:
# # # #             await RisingEdge(dut.clk_h)
# # # #             dut.in_valid.value = 0
# # # #             break
# # # #         await RisingEdge(dut.clk_h)

# # # #     # Chờ phản hồi out_valid từ FSM
# # # #     while True:
# # # #         await RisingEdge(dut.clk_h)
# # # #         if dut.out_valid.value == 1:
# # # #             break


# # # # async def send_read_req(dut, addr):
# # # #     """Gửi request ĐỌC (Load) từ CPU vào Cache, trả về (dữ_liệu, số_chu_kỳ_latency)."""
# # # #     await RisingEdge(dut.clk_h)
# # # #     dut.in_addr.value = addr
# # # #     dut.in_data.value = 0
# # # #     dut.in_write.value = 0
# # # #     dut.in_byteen.value = 0x0F
# # # #     dut.in_valid.value = 1

# # # #     latency = 0
# # # #     while True:
# # # #         if dut.in_ready.value == 1:
# # # #             await RisingEdge(dut.clk_h)
# # # #             dut.in_valid.value = 0
# # # #             break
# # # #         await RisingEdge(dut.clk_h)

# # # #     while True:
# # # #         await RisingEdge(dut.clk_h)
# # # #         latency += 1
# # # #         if dut.out_valid.value == 1:
# # # #             rdata = int(dut.out_data.value)
# # # #             break

# # # #     return rdata, latency


# # # # def init_dram_word(dut, byte_addr, data_word):
# # # #     """Ghi trực tiếp một Word vào BRAM của Main Memory (DRAM) để chuẩn bị dữ liệu nền."""
# # # #     word_addr = (byte_addr >> 2) % dut.dram_inst.MEM_DEPTH.value
# # # #     dut.dram_inst.main_mem_dp.mem[word_addr].value = data_word


# # # # def read_dram_word(dut, byte_addr):
# # # #     """Đọc trực tiếp một Word từ BRAM của Main Memory (DRAM) để kiểm tra writeback."""
# # # #     word_addr = (byte_addr >> 2) % dut.dram_inst.MEM_DEPTH.value
# # # #     return int(dut.dram_inst.main_mem_dp.mem[word_addr].value)


# # # # # ==============================================================================
# # # # # MONITOR: QUAN SÁT TÍN HIỆU NỘI BỘ THEO TỪNG CHU KỲ
# # # # # ==============================================================================
# # # # async def signal_probe_monitor(dut):
# # # #     """Theo dõi chi tiết các sự kiện BRAM Data, Tag Eviction và DRAM Flushes."""
# # # #     cycle = 0
# # # #     while True:
# # # #         await RisingEdge(dut.clk_h)
# # # #         cycle += 1

# # # #         # 1. Bắt sự kiện ghi vào Data Array (hỗ trợ hiển thị dòng 512-bit / 64-byte)
# # # #         d_arr = dut.cache_inst.d_array
# # # #         if d_arr.valid.value == 1 and (
# # # #             d_arr.write.value == 1 or d_arr.write_all.value == 1
# # # #         ):
# # # #             dut._log.info(
# # # #                 f"[Cycle {cycle:4d}][DATA_ARRAY WRITE] Addr=0x{int(d_arr.addr.value):08x} "
# # # #                 f"| WriteAll={int(d_arr.write_all.value)} | WriteHit={int(d_arr.write.value)} "
# # # #                 f"| Way={int(d_arr.way.value) if hasattr(d_arr, 'way') else 0} "
# # # #                 f"| DataIn(Lower64b)=0x{int(d_arr.data.value) & 0xFFFFFFFFFFFFFFFF:016x}..."
# # # #             )

# # # #         # 2. Bắt sự kiện kích hoạt Eviction từ Tag Array
# # # #         tag_arr = dut.cache_inst.tag_array
# # # #         if tag_arr.write_valid.value == 1:
# # # #             dut._log.info(
# # # #                 f"[Cycle {cycle:4d}][TAG_EVICT_TRIGGER] tag_array -> wr_ctrl | "
# # # #                 f"WriteAddr=0x{int(tag_arr.write_addr.value):08x} | "
# # # #                 f"WriteStrb=0x{int(tag_arr.write_strb.value):04x}"
# # # #             )

# # # #         # 3. Bắt sự kiện nạp dòng từ DRAM (Read Refill Beats)
# # # #         rd_ctrl = dut.cache_inst.rd_controller
# # # #         if rd_ctrl.mem_read_valid.value == 1 and rd_ctrl.mem_read_done.value == 1:
# # # #             dut._log.info(
# # # #                 f"[Cycle {cycle:4d}][DRAM READ BEAT] Addr=0x{int(rd_ctrl.mem_read_addr.value):08x} "
# # # #                 f"| BeatData=0x{int(rd_ctrl.mem_read_data.value):08x}"
# # # #             )

# # # #         # 4. Bắt sự kiện xả dòng ra DRAM (Writeback Beats)
# # # #         dram = dut.dram_inst
# # # #         if dram.write_valid.value == 1:
# # # #             dut._log.info(
# # # #                 f"[Cycle {cycle:4d}][DRAM WRITE FLUSH] Addr=0x{int(dram.write_addr.value):08x} "
# # # #                 f"| Data=0x{int(dram.write_data.value):08x} | ByteEn=0x{int(dram.write_byteen.value):x}"
# # # #             )


# # # # # ==============================================================================
# # # # # HÀM SETUP CHUNG CHO MỌI TESTCASE
# # # # # ==============================================================================
# # # # async def setup_dut(dut):
# # # #     """Khởi tạo Clock (100MHz / 50MHz) và thực hiện Reset phần cứng."""
# # # #     cocotb.start_soon(Clock(dut.clk_h, 10, unit="ns").start())
# # # #     cocotb.start_soon(Clock(dut.clk_l, 20, unit="ns").start())

# # # #     dut.rst_n.value = 0
# # # #     dut.in_valid.value = 0
# # # #     dut.in_write.value = 0
# # # #     dut.in_byteen.value = 0
# # # #     dut.out_ready.value = 1
# # # #     dut.cfg_valid.value = 0
# # # #     await Timer(40, unit="ns")
# # # #     dut.rst_n.value = 1
# # # #     await Timer(20, unit="ns")
# # # #     await configure_cache_mode(dut, write_through_enable=0)


# # # # # ==============================================================================
# # # # # TESTCASE 1: KIỂM TRA TÍNH CỤC BỘ KHÔNG GIAN (SPATIAL LOCALITY - 1 MISS, 15 HITS)
# # # # # ==============================================================================
# # # # @cocotb.test()
# # # # async def test_01_spatial_locality_64b(dut):
# # # #     """Xác nhận nạp dòng 64B: Đọc Word 0 bị Miss nạp 16 beats, 15 Words tiếp theo phải HIT 100%."""
# # # #     await setup_dut(dut)
# # # #     cocotb.start_soon(signal_probe_monitor(dut))

# # # #     base_addr = 0x00001000  # Đầu dòng 64B
# # # #     dut._log.info("================================================================")
# # # #     dut._log.info(" TEST 1: SPATIAL LOCALITY ON 64-BYTE LINE (16 WORDS)")
# # # #     dut._log.info("================================================================")

# # # #     # 1. Khởi tạo 16 words có giá trị khác nhau trong DRAM cho dòng 0x1000
# # # #     expected_words = []
# # # #     for w in range(16):
# # # #         val = 0xA0000000 | (w << 16) | (w + 1)
# # # #         init_dram_word(dut, base_addr + (w * 4), val)
# # # #         expected_words.append(val)

# # # #     # 2. Đọc Word 0 -> Bắt buộc phải là MISS (phải mất nhiều chu kỳ để kéo 16 beats từ DRAM)
# # # #     dut._log.info(f">>> Đọc Word 0 tại 0x{base_addr:08x} (Kỳ vọng: MISS)")
# # # #     rdata, lat = await send_read_req(dut, base_addr)
# # # #     assert (
# # # #         rdata == expected_words[0]
# # # #     ), f"Word 0 sai dữ liệu! Nhận: 0x{rdata:08x}, Kỳ vọng: 0x{expected_words[0]:08x}"
# # # #     dut._log.info(
# # # #         f"    -> Word 0 ĐỌC ĐÚNG: 0x{rdata:08x} (Latency miss: {lat} cycles)"
# # # #     )

# # # #     # 3. Đọc liên tiếp 15 Words còn lại (Word 1 -> Word 15) -> BẮT BUỘC PHẢI HIT (Latency <= 3 cycles)
# # # #     for w in range(1, 16):
# # # #         target_addr = base_addr + (w * 4)
# # # #         rdata, lat = await send_read_req(dut, target_addr)
# # # #         dut._log.info(
# # # #             f"    -> Đọc Word {w:2d} tại 0x{target_addr:08x}: Data=0x{rdata:08x} (Latency={lat} cycles)"
# # # #         )

# # # #         assert (
# # # #             rdata == expected_words[w]
# # # #         ), f"Word {w} sai dữ liệu! Nhận: 0x{rdata:08x}, Kỳ vọng: 0x{expected_words[w]:08x}"
# # # #         assert (
# # # #             lat <= 4
# # # #         ), f"Word {w} bị MISS bất thường (Latency={lat} cycles > 4 cycles)! Spatial locality bị hỏng."

# # # #     dut._log.info(
# # # #         ">>> TEST 1 PASSED: Cả 15 words sau đều HIT ngay lập tức trong L2 Cache!\n"
# # # #     )


# # # # # ==============================================================================
# # # # # TESTCASE 2: KIỂM TRA WRITE-ALLOCATE & PER-BYTE MERGE TRÊN DÒNG 64B
# # # # # ==============================================================================
# # # # @cocotb.test()
# # # # async def test_02_write_allocate_per_byte_merge_64b(dut):
# # # #     """Ghi 1 Byte đơn lẻ (SB) vào 1 dòng đang Miss, xác nhận 63 bytes còn lại được bảo toàn."""
# # # #     await setup_dut(dut)
# # # #     cocotb.start_soon(signal_probe_monitor(dut))

# # # #     base_addr = 0x00002000
# # # #     dut._log.info("================================================================")
# # # #     dut._log.info(" TEST 2: WRITE-ALLOCATE & PER-BYTE MERGE ON 64B LINE")
# # # #     dut._log.info("================================================================")

# # # #     # 1. Nạp sẵn dữ liệu gốc vào DRAM cho toàn bộ 16 words của dòng 0x2000
# # # #     for w in range(16):
# # # #         init_dram_word(dut, base_addr + (w * 4), 0x11223344)

# # # #     # 2. CPU thực hiện lệnh Store Byte (SB: ghi 0xAA với byteen = 4'b0001) vào Word thứ 2 (0x2008)
# # # #     target_addr = base_addr + 0x08
# # # #     dut._log.info(
# # # #         f">>> CPU Ghi Byte 0xAA (byteen=0x1) vào Word 2 tại địa chỉ 0x{target_addr:08x}"
# # # #     )
# # # #     await send_write_req(dut, addr=target_addr, data=0x000000AA, byteen=0x01)
# # # #     await Timer(50, unit="ns")

# # # #     # 3. Đọc lại Word thứ 2: Kỳ vọng nhận về 0x112233AA (chỉ byte 0 bị đổi, 3 byte trên giữ nguyên)
# # # #     rdata, _ = await send_read_req(dut, target_addr)
# # # #     dut._log.info(f"    -> Đọc lại Word 2: 0x{rdata:08x}")
# # # #     assert (
# # # #         rdata == 0x112233AA
# # # #     ), f"Per-Byte Merge thất bại tại Word 2! Nhận: 0x{rdata:08x}, Kỳ vọng: 0x112233AA"

# # # #     # 4. Kiểm tra ngẫu nhiên Word 0 và Word 15 để chắc chắn các word khác trong dòng 64B không bị xóa
# # # #     w0_data, _ = await send_read_req(dut, base_addr)
# # # #     w15_data, _ = await send_read_req(dut, base_addr + 0x3C)
# # # #     assert (
# # # #         w0_data == 0x11223344
# # # #     ), f"Word 0 bị ghi đè sai! Nhận: 0x{w0_data:08x}, Kỳ vọng: 0x11223344"
# # # #     assert (
# # # #         w15_data == 0x11223344
# # # #     ), f"Word 15 bị ghi đè sai! Nhận: 0x{w15_data:08x}, Kỳ vọng: 0x11223344"

# # # #     dut._log.info(
# # # #         ">>> TEST 2 PASSED: Write-Allocate trộn dữ liệu từng Byte thành công hoàn hảo!\n"
# # # #     )


# # # # # ==============================================================================
# # # # # TESTCASE 3: KIỂM TRA XẢ DÒNG BẨN 16 BEATS RA DRAM (16-BEAT DIRTY EVICTION)
# # # # # ==============================================================================
# # # # @cocotb.test()
# # # # async def test_03_dirty_eviction_16beats_flush(dut):
# # # #     """Xác nhận khi dòng bẩn 64B bị thay thế, Write Controller phát đủ 16 beats liên tiếp với mask 0xF."""
# # # #     await setup_dut(dut)
# # # #     cocotb.start_soon(signal_probe_monitor(dut))

# # # #     dut._log.info("================================================================")
# # # #     dut._log.info(" TEST 3: 16-BEAT DIRTY LINE EVICTION VERIFICATION")
# # # #     dut._log.info("================================================================")

# # # #     # 1. Ghi dữ liệu bẩn vào Set 0, Way 0 (Địa chỉ 0x00000000)
# # # #     dirty_val = 0xCAFEBABE
# # # #     dut._log.info(f">>> Ghi bẩn 0x{dirty_val:08x} vào địa chỉ 0x00000000 (Set 0)")
# # # #     await send_write_req(
# # # #         dut, addr=0x00000000, data=dirty_val, byteen=0x0F
# # # #     )  # dirty_reg = 1
# # # #     await Timer(50, unit="ns")

# # # #     # 2. Ghi liên tiếp 16 dòng khác nhau vào CÙNG SET 0 để ép Way 0 bị evict (với line 64B, mỗi tag cách nhau 1 << 12)
# # # #     dut._log.info(
# # # #         ">>> Ghi 16 Tags khác nhau vào Set 0 để ép Evict Way 0 ra DRAM..."
# # # #     )
# # # #     for i in range(1, 17):
# # # #         thrash_addr = i << TAG_SHIFT  # Set 0, Tag = i
# # # #         await send_write_req(
# # # #             dut, addr=thrash_addr, data=0x55555555, byteen=0x0F
# # # #         )
# # # #         await Timer(20, unit="ns")

# # # #     # Chờ DRAM hoàn tất toàn bộ chuỗi ghi xả
# # # #     await Timer(300, unit="ns")

# # # #     # 3. Đọc trực tiếp từ BRAM DRAM để verify giá trị bị evict
# # # #     evicted_dram_data = read_dram_word(dut, 0x00000000)
# # # #     dut._log.info(
# # # #         f">>> Dữ liệu trong DRAM tại địa chỉ 0x00000000: 0x{evicted_dram_data:08x}"
# # # #     )
# # # #     assert (
# # # #         evicted_dram_data == dirty_val
# # # #     ), f"Eviction thất bại! DRAM nhận: 0x{evicted_dram_data:08x}, Kỳ vọng: 0x{dirty_val:08x}"

# # # #     dut._log.info(
# # # #         ">>> TEST 3 PASSED: Dòng bẩn 64B đã được xả trọn vẹn ra DRAM!\n"
# # # #     )


# # # # # ==============================================================================
# # # # # TESTCASE 4: TRACE CHI TIẾT THEO TEST GỐC CỦA BẠN (CẬP NHẬT THEO LINE 64B)
# # # # # ==============================================================================
# # # # @cocotb.test()
# # # # async def test_debug_write_eviction_trace(dut):
# # # #     """Testbench trace chu kỳ trắng gốc của bạn, nâng cấp cho cấu hình Line 64B / 16-Way."""
# # # #     await setup_dut(dut)
# # # #     cocotb.start_soon(signal_probe_monitor(dut))

# # # #     dut._log.info("================================================================")
# # # #     dut._log.info(" TEST 4: ORIGINAL WHITE-BOX TRACE (SCALED FOR 64B LINE / 16-WAY)")
# # # #     dut._log.info("================================================================")

# # # #     # Bước 1: Ghi vào 0x0 (Write-Allocate Miss)
# # # #     dut._log.info("\n>>> STEP 1: Core Write 0xDEADBEEF -> Addr 0x00000000")
# # # #     await send_write_req(dut, addr=0x00000000, data=0xDEADBEEF, byteen=0x0F)
# # # #     await Timer(50, unit="ns")

# # # #     # Bước 2: Ghi liên tiếp 17 lines vào cùng Set 0 để ép Eviction vòng tròn
# # # #     dut._log.info(
# # # #         "\n>>> STEP 2: Ghi 17 lines khác Tag vào Set 0 (Mỗi tag cách nhau 1 << 12)..."
# # # #     )
# # # #     for i in range(1, 18):
# # # #         target_addr = i << TAG_SHIFT  # Cùng Set 0, khác Tag
# # # #         dut._log.info(
# # # #             f"--- [Iteration {i:2d}] Core Write 0x55555555 -> Addr 0x{target_addr:08x} ---"
# # # #         )
# # # #         await send_write_req(
# # # #             dut, addr=target_addr, data=0x55555555, byteen=0x0F
# # # #         )
# # # #         await Timer(20, unit="ns")

# # # #     await Timer(200, unit="ns")
# # # #     dut._log.info("\n>>> TOÀN BỘ 4 TESTCASES ĐÃ HOÀN THÀNH!")
# # # import cocotb
# # # from cocotb.clock import Clock
# # # from cocotb.triggers import RisingEdge, Timer

# # # # ==============================================================================
# # # # HARDWARE CONFIGURATION PARAMETERS (64-BYTE LINE / 16 WAYS)
# # # # ==============================================================================
# # # DATA_SIZE = 32  # 32 bits = 4 Bytes
# # # DATA_ELEMENTS = 64  # 64 Bytes per line (16 words)
# # # NUM_WAYS = 16  # 16-way set associativity
# # # OFFSET_BITS = 6  # log2(64) = 6 bits (bits [1:0] byte, bits [5:2] word)
# # # LINE_BITS = 6  # log2(64 sets) = 6 bits (bits [11:6])
# # # TAG_SHIFT = OFFSET_BITS + LINE_BITS  # 12 bits


# # # # ==============================================================================
# # # # CYCLE-ACCURATE DIAGNOSTIC PROBE MONITOR (ENGLISH LOGS)
# # # # ==============================================================================
# # # async def signal_probe_monitor(dut):
# # #     """Monitor and log internal pipeline transitions and handshakes on every clock cycle."""
# # #     cycle = 0
# # #     while True:
# # #         await RisingEdge(dut.clk_h)
# # #         cycle += 1

# # #         # 1. Core Interface Handshake
# # #         if dut.in_valid.value == 1 and dut.in_ready.value == 1:
# # #             dut._log.info(
# # #                 f"[Cycle {cycle:4d}][CORE REQ ACC] Addr=0x{int(dut.in_addr.value):08x} | "
# # #                 f"Write={int(dut.in_write.value)} | ByteEn=0x{int(dut.in_byteen.value):x}"
# # #             )
# # #         if dut.out_valid.value == 1 and dut.out_ready.value == 1:
# # #             dut._log.info(
# # #                 f"[Cycle {cycle:4d}][CORE RSP RET] Addr=0x{int(dut.out_addr.value):08x} | "
# # #                 f"Data=0x{int(dut.out_data.value):08x}"
# # #             )

# # #         # 2. Central FSM and Tag Status
# # #         c_fsm = dut.cache_inst.c_fsm
# # #         tag_arr = dut.cache_inst.tag_array
# # #         if c_fsm.cur_state.value != 0:  # Active state (non-IDLE)
# # #             dut._log.debug(
# # #                 f"[Cycle {cycle:4d}][FSM STATE] State={int(c_fsm.cur_state.value)} | "
# # #                 f"TagHit={int(tag_arr.fsm_hit.value)} | WayHitIdx={int(tag_arr.way_hit_idx.value) if hasattr(tag_arr, 'way_hit_idx') else 0}"
# # #             )

# # #         # 3. Read Controller DRAM Multi-Beat Refill
# # #         rd_ctrl = dut.cache_inst.rd_controller
# # #         if rd_ctrl.cur_state.value != 0:  # STATE_MEM_RD_WAIT
# # #             counter_val = int(rd_ctrl.counter_wire.value)
# # #             dut._log.info(
# # #                 f"[Cycle {cycle:4d}][DRAM READ BEAT {counter_val:2d}/15] Addr=0x{int(rd_ctrl.mem_read_addr.value):08x} | "
# # #                 f"Valid={int(rd_ctrl.mem_read_valid.value)} | Done={int(rd_ctrl.mem_read_done.value)} | "
# # #                 f"BeatData=0x{int(rd_ctrl.mem_read_data.value):08x}"
# # #             )

# # #         # 4. Data Array Refill / Write
# # #         d_arr = dut.cache_inst.d_array
# # #         if d_arr.valid.value == 1 and (
# # #             d_arr.write.value == 1 or d_arr.write_all.value == 1
# # #         ):
# # #             dut._log.info(
# # #                 f"[Cycle {cycle:4d}][DATA_ARRAY WRITE] Addr=0x{int(d_arr.addr.value):08x} | "
# # #                 f"WriteAll={int(d_arr.write_all.value)} | WriteHit={int(d_arr.write.value)}"
# # #             )


# # # # ==============================================================================
# # # # DRIVER & MEMORY ACCESS HELPERS
# # # # ==============================================================================
# # # async def configure_cache_mode(dut, write_through_enable=0):
# # #     """Set cache mode (0: Write-Back, 1: Write-Through)."""
# # #     await RisingEdge(dut.clk_h)
# # #     dut.cfg_addr.value = 0x00
# # #     dut.cfg_data_in.value = 0x00000001 if write_through_enable else 0x00000000
# # #     dut.cfg_valid.value = 1
# # #     for _ in range(50):
# # #         await RisingEdge(dut.clk_h)
# # #         if dut.cfg_ready.value == 1:
# # #             break
# # #     dut.cfg_valid.value = 0
# # #     await RisingEdge(dut.clk_h)


# # # async def send_read_req(dut, addr, max_timeout_cycles=100):
# # #     """Send CPU read request and measure response latency in clk_h cycles."""
# # #     await RisingEdge(dut.clk_h)
# # #     dut.in_addr.value = addr
# # #     dut.in_data.value = 0
# # #     dut.in_write.value = 0
# # #     dut.in_byteen.value = 0x0F
# # #     dut.in_valid.value = 1

# # #     # Wait for core acceptance handshake
# # #     accepted = False
# # #     for _ in range(max_timeout_cycles):
# # #         if dut.in_ready.value == 1:
# # #             await RisingEdge(dut.clk_h)
# # #             dut.in_valid.value = 0
# # #             accepted = True
# # #             break
# # #         await RisingEdge(dut.clk_h)
# # #     assert (
# # #         accepted
# # #     ), f"[TIMEOUT] Cache refused request: in_ready stuck at 0 for addr 0x{addr:08x}"

# # #     # Wait for response handshake
# # #     latency = 0
# # #     for _ in range(max_timeout_cycles):
# # #         await RisingEdge(dut.clk_h)
# # #         latency += 1
# # #         if dut.out_valid.value == 1:
# # #             rdata = int(dut.out_data.value)
# # #             return rdata, latency

# # #     assert (
# # #         False
# # #     ), f"[TIMEOUT] Cache response stall: out_valid never asserted for addr 0x{addr:08x}"


# # # def init_dram_word(dut, byte_addr, data_word):
# # #     """Pre-seed DRAM BRAM entry at target byte address."""
# # #     word_addr = (byte_addr >> 2) % int(dut.dram_inst.MEM_DEPTH.value)
# # #     dut.dram_inst.main_mem_dp.mem[word_addr].value = data_word


# # # # ==============================================================================
# # # # TESTCASE 1: SPATIAL LOCALITY ON 64-BYTE LINE (1 MISS, 15 HITS)
# # # # ==============================================================================
# # # @cocotb.test()
# # # async def test_01_spatial_locality_64b(dut):
# # #     """Verify 64B line allocation: Word 0 triggers miss (16 beats), Words 1-15 hit with <=4 cycles."""

# # #     # 1. Initialize clock generators (clk_h = 100 MHz, clk_l = 50 MHz)
# # #     cocotb.start_soon(Clock(dut.clk_h, 10, unit="ns").start())
# # #     cocotb.start_soon(Clock(dut.clk_l, 20, unit="ns").start())

# # #     # 2. Reset Sequence
# # #     dut.rst_n.value = 0
# # #     dut.in_valid.value = 0
# # #     dut.in_write.value = 0
# # #     dut.in_byteen.value = 0
# # #     dut.out_ready.value = 1
# # #     dut.cfg_valid.value = 0
# # #     await Timer(40, unit="ns")
# # #     dut.rst_n.value = 1
# # #     await Timer(20, unit="ns")

# # #     # 3. Configure Cache to Write-Back Mode
# # #     await configure_cache_mode(dut, write_through_enable=0)

# # #     # 4. Start Diagnostic Signal Monitor
# # #     cocotb.start_soon(signal_probe_monitor(dut))

# # #     base_addr = 0x00001000
# # #     dut._log.info("========================================================")
# # #     dut._log.info(" STARTING TEST 1: SPATIAL LOCALITY (64-BYTE LINE REFILL)")
# # #     dut._log.info("========================================================")

# # #     # 5. Populate DRAM with 16 distinct words for line 0x00001000
# # #     expected_words = []
# # #     dut._log.info(
# # #         f"[SETUP] Pre-seeding DRAM for line 0x{base_addr:08x} (Words 0 to 15):"
# # #     )
# # #     for w in range(16):
# # #         val = 0xA0000000 | (w << 16) | (w + 1)
# # #         init_dram_word(dut, base_addr + (w * 4), val)
# # #         expected_words.append(val)
# # #         dut._log.info(
# # #             f"   DRAM[0x{base_addr + (w * 4):08x}] = 0x{val:08x} (Word {w:2d})"
# # #         )

# # #     # 6. Request Word 0 (Expect Cache Miss -> 16 DRAM read beats)
# # #     dut._log.info(
# # #         f"\n>>> [STEP 1] Read Word 0 at 0x{base_addr:08x} (EXPECT: CACHE MISS)"
# # #     )
# # #     rdata, lat = await send_read_req(dut, base_addr, max_timeout_cycles=150)
# # #     dut._log.info(
# # #         f">>> [RESULT] Word 0 received: 0x{rdata:08x} (Latency: {lat} cycles)"
# # #     )

# # #     assert (
# # #         rdata == expected_words[0]
# # #     ), f"[DATA MISMATCH] Word 0 read failed! Got 0x{rdata:08x}, Expected 0x{expected_words[0]:08x}"
# # #     assert (
# # #         lat > 4
# # #     ), f"[LATENCY ERROR] Word 0 should be a MISS, but latency was only {lat} cycles!"

# # #     # 7. Request Words 1 to 15 (Expect All Cache Hits: latency <= 4 cycles)
# # #     dut._log.info(
# # #         f"\n>>> [STEP 2] Sequential Read of Words 1 to 15 (EXPECT: ALL CACHE HITS)"
# # #     )
# # #     for w in range(1, 16):
# # #         target_addr = base_addr + (w * 4)
# # #         rdata, lat = await send_read_req(dut, target_addr, max_timeout_cycles=20)
# # #         dut._log.info(
# # #             f">>> [HIT CHECK] Word {w:2d} at 0x{target_addr:08x} -> Data=0x{rdata:08x} | Latency={lat} cycles"
# # #         )

# # #         assert (
# # #             rdata == expected_words[w]
# # #         ), f"[DATA MISMATCH] Word {w} at 0x{target_addr:08x}! Got 0x{rdata:08x}, Expected 0x{expected_words[w]:08x}"
# # #         assert (
# # #             lat <= 4
# # #         ), f"[UNEXPECTED MISS] Word {w} missed in cache (Latency={lat} > 4)! Spatial locality broken."

# # #     dut._log.info(
# # #         "\n===================================================================="
# # #     )
# # #     dut._log.info(
# # #         " >>> TEST 1 PASSED: 1 Line Refill (16 Beats) served all 16 Words! <<<"
# # #     )
# # #     dut._log.info(
# # #         "===================================================================="
# # #     )

# # # # ==============================================================================
# # # # PROBE MONITOR SPECIFICALLY INSTRUMENTED FOR TEST 2 (WRITE-ALLOCATE MERGE)
# # # # ==============================================================================
# # # async def send_write_req(dut, addr, data, byteen=0x0F):
# # #     """Send CPU write request and wait for FSM response."""
# # #     await RisingEdge(dut.clk_h)
# # #     dut.in_addr.value = addr
# # #     dut.in_data.value = data
# # #     dut.in_write.value = 1
# # #     dut.in_byteen.value = byteen
# # #     dut.in_valid.value = 1

# # #     while True:
# # #         if dut.in_ready.value == 1:
# # #             await RisingEdge(dut.clk_h)
# # #             dut.in_valid.value = 0
# # #             break
# # #         await RisingEdge(dut.clk_h)

# # #     # Wait for response completion handshake
# # #     while True:
# # #         await RisingEdge(dut.clk_h)
# # #         if dut.out_valid.value == 1:
# # #             break

# # # async def write_allocate_merge_monitor(dut):
# # #     """Cycle-by-cycle probe tracking write-allocate refill and per-byte data merging."""
# # #     cycle = 0
# # #     while True:
# # #         await RisingEdge(dut.clk_h)
# # #         cycle += 1

# # #         # 1. Probe CPU Store Request
# # #         if dut.in_valid.value == 1 and dut.in_ready.value == 1:
# # #             dut._log.info(
# # #                 f"[Cycle {cycle:4d}][CORE STORE REQ] Addr=0x{int(dut.in_addr.value):08x} | "
# # #                 f"Data=0x{int(dut.in_data.value):08x} | ByteEn=0x{int(dut.in_byteen.value):x} | "
# # #                 f"Write={int(dut.in_write.value)}"
# # #             )

# # #         # 2. Probe DRAM Refill Read Beats
# # #         rd_ctrl = dut.cache_inst.rd_controller
# # #         if rd_ctrl.cur_state.value != 0:
# # #             beat_idx = int(rd_ctrl.counter_wire.value)
# # #             if rd_ctrl.mem_read_valid.value == 1 and rd_ctrl.mem_read_done.value == 1:
# # #                 dut._log.info(
# # #                     f"[Cycle {cycle:4d}][REFILL BEAT {beat_idx:2d}/15] Addr=0x{int(rd_ctrl.mem_read_addr.value):08x} | "
# # #                     f"DRAM Data=0x{int(rd_ctrl.mem_read_data.value):08x}"
# # #                 )

# # #         # 3. Probe Line Merging and Data Array Write
# # #         d_arr = dut.cache_inst.d_array
# # #         if d_arr.valid.value == 1 and (
# # #             d_arr.write.value == 1 or d_arr.write_all.value == 1
# # #         ):
# # #             # Extract lower 64 bits to inspect Word 0 and Word 1, or slice Word 2
# # #             data_raw = int(d_arr.data.value)
# # #             w2_data = (data_raw >> (2 * 32)) & 0xFFFFFFFF
# # #             dut._log.info(
# # #                 f"[Cycle {cycle:4d}][DATA_ARRAY WRITE] Addr=0x{int(d_arr.addr.value):08x} | "
# # #                 f"WriteAll={int(d_arr.write_all.value)} | Merged Word 2 in Line=0x{w2_data:08x}"
# # #             )


# # # # ==============================================================================
# # # # TESTCASE 2: WRITE-ALLOCATE & PER-BYTE DATA MERGING ON 64-BYTE LINE
# # # # ==============================================================================
# # # @cocotb.test()
# # # async def test_02_write_allocate_per_byte_merge_64b(dut):
# # #     """Verify Write-Allocate on Store Miss: A sub-word Store Byte (SB) merges into the fetched line without corrupting adjacent bytes."""

# # #     # 1. Initialize clock generators (clk_h = 100 MHz, clk_l = 50 MHz)
# # #     cocotb.start_soon(Clock(dut.clk_h, 10, unit="ns").start())
# # #     cocotb.start_soon(Clock(dut.clk_l, 20, unit="ns").start())

# # #     # 2. Reset Sequence
# # #     dut.rst_n.value = 0
# # #     dut.in_valid.value = 0
# # #     dut.in_write.value = 0
# # #     dut.in_byteen.value = 0
# # #     dut.out_ready.value = 1
# # #     dut.cfg_valid.value = 0
# # #     await Timer(40, unit="ns")
# # #     dut.rst_n.value = 1
# # #     await Timer(20, unit="ns")

# # #     # 3. Configure Cache to Write-Back Mode
# # #     await configure_cache_mode(dut, write_through_enable=0)

# # #     # 4. Start Diagnostic Monitor
# # #     cocotb.start_soon(write_allocate_merge_monitor(dut))

# # #     # Base address aligned to 64-byte boundary (Word 0 to Word 15 span 0x00000400 - 0x0000043C)
# # #     base_addr = 0x00000400
# # #     dut._log.info("================================================================")
# # #     dut._log.info(" STARTING TEST 2: WRITE-ALLOCATE WITH PER-BYTE MERGING (LINE 64B)")
# # #     dut._log.info("================================================================")

# # #     # 5. Pre-seed DRAM with clean reference data (0x11223344) across all 16 words
# # #     dram_initial_word = 0x11223344
# # #     dut._log.info(
# # #         f"[SETUP] Initializing DRAM line 0x{base_addr:08x} (16 Words with 0x{dram_initial_word:08x}):"
# # #     )
# # #     for w in range(16):
# # #         init_dram_word(dut, base_addr + (w * 4), dram_initial_word)

# # #     # 6. Step 1: Issue Sub-Word Store Miss (Store Byte: 0xAA with byteen = 4'b0001) to Word 2 (0x00000408)
# # #     target_addr = base_addr + 0x08  # Word 2 within line
# # #     store_byte_data = 0x000000AA  # Writing 0xAA to byte 0
# # #     store_byteen = 0x01  # byteen = 4'b0001 (only byte 0 active)

# # #     dut._log.info(
# # #         f"\n>>> [STEP 1] CPU Store Byte: Data=0x{store_byte_data:08x}, ByteEn=0x{store_byteen:x} to Addr=0x{target_addr:08x}"
# # #     )
# # #     dut._log.info(
# # #         "    (Expect: Write-Miss triggers DRAM 16-beat refill, then merges 0xAA into Byte 0 of Word 2)"
# # #     )
# # #     await send_write_req(
# # #         dut, addr=target_addr, data=store_byte_data, byteen=store_byteen
# # #     )
# # #     await Timer(50, unit="ns")

# # #     # 7. Step 2: Read back Word 2 to verify per-byte merging
# # #     # Expected: Byte 0 becomes 0xAA, Bytes [3:1] remain 0x112233 -> 0x112233AA
# # #     expected_word_2 = 0x112233AA
# # #     dut._log.info(
# # #         f"\n>>> [STEP 2] Read back modified Word 2 at 0x{target_addr:08x} (Expect: 0x{expected_word_2:08x})"
# # #     )
# # #     rdata, lat = await send_read_req(dut, target_addr, max_timeout_cycles=50)
# # #     dut._log.info(
# # #         f">>> [RESULT] Word 2 returned: 0x{rdata:08x} (Read Hit Latency: {lat} cycles)"
# # #     )

# # #     assert (
# # #         rdata == expected_word_2
# # #     ), f"[MERGE ERROR] Word 2 corrupted! Got 0x{rdata:08x}, Expected 0x{expected_word_2:08x}"
# # #     dut._log.info(
# # #         f"    [CHECK PASSED] Word 2 successfully merged: 0x11223344 + Byte0(0xAA) = 0x{rdata:08x}"
# # #     )

# # #     # 8. Step 3: Verify untouched words in the 64-byte line (Word 0 and Word 15 must remain intact)
# # #     dut._log.info(
# # #         "\n>>> [STEP 3] Verifying boundary words in the line (Words 0 and 15 must remain 0x11223344)"
# # #     )

# # #     # Check Word 0 (0x00000400)
# # #     w0_data, _ = await send_read_req(dut, base_addr, max_timeout_cycles=20)
# # #     assert (
# # #         w0_data == dram_initial_word
# # #     ), f"[COLLISION ERROR] Word 0 was corrupted by Write-Allocate! Got 0x{w0_data:08x}, Expected 0x{dram_initial_word:08x}"
# # #     dut._log.info(f"    [CHECK PASSED] Word  0 at 0x{base_addr:08x}: 0x{w0_data:08x}")

# # #     # Check Word 15 (0x0000043C)
# # #     w15_addr = base_addr + 0x3C
# # #     w15_data, _ = await send_read_req(dut, w15_addr, max_timeout_cycles=20)
# # #     assert (
# # #         w15_data == dram_initial_word
# # #     ), f"[COLLISION ERROR] Word 15 was corrupted by Write-Allocate! Got 0x{w15_data:08x}, Expected 0x{dram_initial_word:08x}"
# # #     dut._log.info(
# # #         f"    [CHECK PASSED] Word 15 at 0x{w15_addr:08x}: 0x{w15_data:08x}"
# # #     )

# # #     dut._log.info(
# # #         "\n===================================================================="
# # #     )
# # #     dut._log.info(
# # #         " >>> TEST 2 PASSED: Write-Allocate & Per-Byte Merge verified 100%! <<<"
# # #     )
# # #     dut._log.info(
# # #         "===================================================================="
# # #     )

# # import cocotb
# # from cocotb.clock import Clock
# # from cocotb.triggers import RisingEdge, Timer

# # # ==============================================================================
# # # HARDWARE CONFIGURATION PARAMETERS (LINE 64B / 16 WAYS)
# # # ==============================================================================
# # DATA_SIZE = 32  # 32 bits = 4 Bytes
# # DATA_ELEMENTS = 64  # 64 Bytes per cache line (16 words)
# # NUM_WAYS = 16  # 16-way set associativity
# # OFFSET_BITS = 6  # log2(64) = 6 bits (bits [1:0] byte, bits [5:2] word)
# # LINE_BITS = 6  # log2(64 sets) = 6 bits (bits [11:6])
# # TAG_SHIFT = OFFSET_BITS + LINE_BITS  # = 12 bits (addr = tag << 12 for Set 0)


# # # ==============================================================================
# # # CYCLE-ACCURATE PROBE MONITOR DEDICATED FOR TEST 3 (DIRTY EVICTION TRACE)
# # # ==============================================================================
# # async def eviction_probe_monitor(dut):
# #     """Monitor cycle-by-cycle eviction triggers, write controller counters, and DRAM write flushes."""
# #     cycle = 0
# #     evict_beat_count = 0

# #     while True:
# #         await RisingEdge(dut.clk_h)
# #         cycle += 1

# #         # 1. Probe Core Write Requests
# #         if dut.in_valid.value == 1 and dut.in_ready.value == 1:
# #             dut._log.info(
# #                 f"[Cycle {cycle:4d}][CORE WRITE REQ] Addr=0x{int(dut.in_addr.value):08x} | "
# #                 f"Data=0x{int(dut.in_data.value):08x} | ByteEn=0x{int(dut.in_byteen.value):x}"
# #             )

# #         # 2. Probe Tag Array Eviction Trigger
# #         tag_arr = dut.cache_inst.tag_array
# #         if tag_arr.write_valid.value == 1:
# #             dut._log.info(
# #                 f"[Cycle {cycle:4d}][TAG_EVICT_TRIGGER] tag_array -> wr_ctrl | "
# #                 f"EvictAddr=0x{int(tag_arr.write_addr.value):08x} | "
# #                 f"WriteStrb=0x{int(tag_arr.write_strb.value):04x} | "
# #                 f"CurState={int(tag_arr.cur_state.value)}"
# #             )

# #         # 3. Probe Write Controller Streaming Beats
# #         wr_ctrl = dut.cache_inst.wr_controller
# #         if wr_ctrl.cur_state.value == 1:  # STATE_BUSY (Streaming to DRAM)
# #             counter_val = int(wr_ctrl.counter_wire.value)
# #             dut._log.info(
# #                 f"[Cycle {cycle:4d}][WR_CTRL STREAM BEAT {counter_val:2d}/15] "
# #                 f"Addr=0x{int(wr_ctrl.mem_write_addr.value):08x} | "
# #                 f"Data=0x{int(wr_ctrl.mem_write_data.value):08x} | "
# #                 f"ByteEn=0x{int(wr_ctrl.mem_write_byteen.value):x} | "
# #                 f"Valid={int(wr_ctrl.mem_write_valid.value)}"
# #             )

# #         # 4. Probe DRAM Memory Primitive Write Port
# #         dram = dut.dram_inst
# #         if dram.write_valid.value == 1:
# #             evict_beat_count += 1
# #             dut._log.info(
# #                 f"[Cycle {cycle:4d}][DRAM WRITE FLUSH #{evict_beat_count:2d}] "
# #                 f"DRAM Addr=0x{int(dram.write_addr.value):08x} | "
# #                 f"DRAM Data=0x{int(dram.write_data.value):08x} | "
# #                 f"ByteEn=0x{int(dram.write_byteen.value):x}"
# #             )


# # # ==============================================================================
# # # DRIVER & MEMORY ACCESS HELPERS
# # # ==============================================================================
# # async def configure_cache_mode(dut, write_through_enable=0):
# #     """Set cache operational mode (0: Write-Back, 1: Write-Through)."""
# #     await RisingEdge(dut.clk_h)
# #     dut.cfg_addr.value = 0x00
# #     dut.cfg_data_in.value = 0x00000001 if write_through_enable else 0x00000000
# #     dut.cfg_valid.value = 1
# #     for _ in range(50):
# #         await RisingEdge(dut.clk_h)
# #         if dut.cfg_ready.value == 1:
# #             break
# #     dut.cfg_valid.value = 0
# #     await RisingEdge(dut.clk_h)


# # async def send_write_req(dut, addr, data, byteen=0x0F):
# #     """Send a CPU write request and wait for FSM response."""
# #     await RisingEdge(dut.clk_h)
# #     dut.in_addr.value = addr
# #     dut.in_data.value = data
# #     dut.in_write.value = 1
# #     dut.in_byteen.value = byteen
# #     dut.in_valid.value = 1

# #     while True:
# #         if dut.in_ready.value == 1:
# #             await RisingEdge(dut.clk_h)
# #             dut.in_valid.value = 0
# #             break
# #         await RisingEdge(dut.clk_h)

# #     while True:
# #         await RisingEdge(dut.clk_h)
# #         if dut.out_valid.value == 1:
# #             break


# # def read_dram_word(dut, byte_addr):
# #     """Directly inspect DRAM BRAM array at target byte address."""
# #     mem_depth = int(dut.dram_inst.MEM_DEPTH.value)
# #     word_addr = (byte_addr >> 2) % mem_depth
# #     return int(dut.dram_inst.main_mem_dp.mem[word_addr].value)


# # # ==============================================================================
# # # TESTCASE 3: 16-BEAT DIRTY LINE EVICTION TRACE
# # # ==============================================================================
# # @cocotb.test()
# # async def test_03_dirty_eviction_16beats_trace(dut):
# #     """White-box trace: Verify dirty line eviction flushes exactly 16 beats to DRAM with full-word mask 0xF."""

# #     # 1. Initialize Clocks (clk_h = 100 MHz, clk_l = 50 MHz)
# #     cocotb.start_soon(Clock(dut.clk_h, 10, unit="ns").start())
# #     cocotb.start_soon(Clock(dut.clk_l, 20, unit="ns").start())

# #     # 2. Reset Sequence
# #     dut.rst_n.value = 0
# #     dut.in_valid.value = 0
# #     dut.in_write.value = 0
# #     dut.in_byteen.value = 0
# #     dut.out_ready.value = 1
# #     dut.cfg_valid.value = 0
# #     await Timer(40, unit="ns")
# #     dut.rst_n.value = 1
# #     await Timer(20, unit="ns")

# #     # 3. Configure Cache to Write-Back Mode
# #     await configure_cache_mode(dut, write_through_enable=0)

# #     # 4. Start Dedicated Eviction Monitor
# #     cocotb.start_soon(eviction_probe_monitor(dut))

# #     dut._log.info("================================================================")
# #     dut._log.info(" STARTING TEST 3: 16-BEAT DIRTY LINE EVICTION TRACE (SET 0)")
# #     dut._log.info("================================================================")

# #     # 5. Step 1: Prime Set 0, Way 0 with Dirty Data
# #     # Write Word 0 = 0xCAFEBABE, Word 1 = 0xBAADF00D at base address 0x00000000
# #     dirty_val_w0 = 0xCAFEBABE
# #     dirty_val_w1 = 0xBAADF00D
# #     dut._log.info(
# #         f"\n>>> [STEP 1] Writing dirty Word 0 (0x{dirty_val_w0:08x}) at 0x00000000"
# #     )
# #     await send_write_req(
# #         dut, addr=0x00000000, data=dirty_val_w0, byteen=0x0F
# #     )  # triggers write-allocate + sets dirty_reg = 1
# #     await Timer(50, unit="ns")

# #     dut._log.info(
# #         f">>> [STEP 1] Writing dirty Word 1 (0x{dirty_val_w1:08x}) at 0x00000004"
# #     )
# #     await send_write_req(
# #         dut, addr=0x00000004, data=dirty_val_w1, byteen=0x0F
# #     )  # write hit on same line
# #     await Timer(50, unit="ns")

# #     # 6. Step 2: Thrash Set 0 by writing 16 different tags to force Way 0 replacement
# #     # Set 0 is targeted because bits [11:6] = 000000. Each iteration increases the tag: (i << 12)
# #     dut._log.info(
# #         "\n================================================================"
# #     )
# #     dut._log.info(
# #         " >>> [STEP 2] Writing 16 distinct lines to Set 0 to force Way 0 Eviction"
# #     )
# #     dut._log.info(
# #         "================================================================"
# #     )
# #     for i in range(1, 17):
# #         thrash_addr = i << TAG_SHIFT  # Set 0, Tag = i
# #         thrash_data = 0x55550000 | i
# #         dut._log.info(
# #             f"--- [Iteration {i:2d}/16] Core Write 0x{thrash_data:08x} -> Addr 0x{thrash_addr:08x} ---"
# #         )
# #         await send_write_req(
# #             dut, addr=thrash_addr, data=thrash_data, byteen=0x0F
# #         )
# #         await Timer(30, unit="ns")

# #     # 7. Allow pipeline to complete remaining writeback beats
# #     dut._log.info("\n>>> [STEP 3] Waiting for DRAM writeback to settle...")
# #     await Timer(400, unit="ns")

# #     # 8. Step 4: Verify DRAM Content
# #     dram_w0 = read_dram_word(dut, 0x00000000)
# #     dram_w1 = read_dram_word(dut, 0x00000004)
# #     dut._log.info("========================================================")
# #     dut._log.info(" POST-EVICTION DRAM VERIFICATION RESULTS:")
# #     dut._log.info(
# #         f"   DRAM[0x00000000] (Word 0): Got 0x{dram_w0:08x} | Expected 0x{dirty_val_w0:08x}"
# #     )
# #     dut._log.info(
# #         f"   DRAM[0x00000004] (Word 1): Got 0x{dram_w1:08x} | Expected 0x{dirty_val_w1:08x}"
# #     )
# #     dut._log.info("========================================================")

# #     assert (
# #         dram_w0 == dirty_val_w0
# #     ), f"[EVICTION FAILURE] Word 0 mismatch in DRAM! Got 0x{dram_w0:08x}, Expected 0x{dirty_val_w0:08x}"
# #     assert (
# #         dram_w1 == dirty_val_w1
# #     ), f"[EVICTION FAILURE] Word 1 mismatch in DRAM! Got 0x{dram_w1:08x}, Expected 0x{dirty_val_w1:08x}"

# #     dut._log.info(
# #         "\n>>> TEST 3 PASSED: Dirty line 0x00000000 successfully flushed 16 beats to DRAM!\n"
# #     )


# import cocotb
# from cocotb.clock import Clock
# from cocotb.triggers import RisingEdge, Timer

# # ==============================================================================
# # HARDWARE CONFIGURATION PARAMETERS (LINE 64B / 16 WAYS)
# # ==============================================================================
# DATA_SIZE = 32  # 32 bits = 4 Bytes
# DATA_ELEMENTS = 64  # 64 Bytes per line (16 words)
# NUM_WAYS = 16  # 16-way set associativity
# OFFSET_BITS = 6  # log2(64) = 6 bits (bits [1:0] byte, bits [5:2] word)
# LINE_BITS = 6  # log2(64 sets) = 6 bits (bits [11:6])
# TAG_SHIFT = OFFSET_BITS + LINE_BITS  # = 12 bits (Set 0 addresses: tag << 12)


# # ==============================================================================
# # DRIVER & MEMORY ACCESS HELPERS
# # ==============================================================================
# async def configure_cache_mode(dut, write_through_enable=0):
#     """Set cache operational mode (0: Write-Back, 1: Write-Through)."""
#     await RisingEdge(dut.clk_h)
#     dut.cfg_addr.value = 0x00
#     dut.cfg_data_in.value = 0x00000001 if write_through_enable else 0x00000000
#     dut.cfg_valid.value = 1
#     for _ in range(50):
#         await RisingEdge(dut.clk_h)
#         if dut.cfg_ready.value == 1:
#             break
#     dut.cfg_valid.value = 0
#     await RisingEdge(dut.clk_h)


# async def send_write_req(dut, addr, data, byteen=0x0F):
#     """Send CPU write request and wait for completion handshake."""
#     await RisingEdge(dut.clk_h)
#     dut.in_addr.value = addr
#     dut.in_data.value = data
#     dut.in_write.value = 1
#     dut.in_byteen.value = byteen
#     dut.in_valid.value = 1

#     while True:
#         if dut.in_ready.value == 1:
#             await RisingEdge(dut.clk_h)
#             dut.in_valid.value = 0
#             break
#         await RisingEdge(dut.clk_h)

#     while True:
#         await RisingEdge(dut.clk_h)
#         if dut.out_valid.value == 1:
#             break


# async def send_read_req(dut, addr, max_timeout_cycles=100):
#     """Send CPU read request and measure response latency."""
#     await RisingEdge(dut.clk_h)
#     dut.in_addr.value = addr
#     dut.in_data.value = 0
#     dut.in_write.value = 0
#     dut.in_byteen.value = 0x0F
#     dut.in_valid.value = 1

#     accepted = False
#     for _ in range(max_timeout_cycles):
#         if dut.in_ready.value == 1:
#             await RisingEdge(dut.clk_h)
#             dut.in_valid.value = 0
#             accepted = True
#             break
#         await RisingEdge(dut.clk_h)
#     assert (
#         accepted
#     ), f"[TIMEOUT] Cache refused read request for addr 0x{addr:08x}"

#     latency = 0
#     for _ in range(max_timeout_cycles):
#         await RisingEdge(dut.clk_h)
#         latency += 1
#         if dut.out_valid.value == 1:
#             return int(dut.out_data.value), latency

#     assert (
#         False
#     ), f"[TIMEOUT] Cache response stall: out_valid never asserted for addr 0x{addr:08x}"


# def read_dram_word(dut, byte_addr):
#     """Directly inspect DRAM BRAM storage array at target byte address."""
#     mem_depth = int(dut.dram_inst.MEM_DEPTH.value)
#     word_addr = (byte_addr >> 2) % mem_depth
#     return int(dut.dram_inst.main_mem_dp.mem[word_addr].value)


# # ==============================================================================
# # TESTCASE 4: 16-WAY ROUND-ROBIN WRAP-AROUND EVICTION & REPLACEMENT CONSISTENCY
# # ==============================================================================
# @cocotb.test()
# async def test_04_16way_wraparound_eviction(dut):
#     """Functional verification: Saturate Set 0 (Ways 0-15), then verify sequential wrap-around eviction of Way 0 and Way 1."""

#     # 1. Initialize Clocks (clk_h = 100 MHz, clk_l = 50 MHz)
#     cocotb.start_soon(Clock(dut.clk_h, 10, unit="ns").start())
#     cocotb.start_soon(Clock(dut.clk_l, 20, unit="ns").start())

#     # 2. Reset Sequence
#     dut.rst_n.value = 0
#     dut.in_valid.value = 0
#     dut.in_write.value = 0
#     dut.in_byteen.value = 0
#     dut.out_ready.value = 1
#     dut.cfg_valid.value = 0
#     await Timer(40, unit="ns")
#     dut.rst_n.value = 1
#     await Timer(20, unit="ns")

#     # 3. Configure Cache to Write-Back Mode
#     await configure_cache_mode(dut, write_through_enable=0)

#     dut._log.info("================================================================")
#     dut._log.info(" STARTING TEST 4: 16-WAY WRAP-AROUND EVICTION VERIFICATION")
#     dut._log.info("================================================================")

#     # --------------------------------------------------------------------------
#     # PHASE 1: Populate all 16 Ways of Set 0 with unique dirty data (Tags 0 to 15)
#     # --------------------------------------------------------------------------
#     dut._log.info(
#         "\n>>> [PHASE 1] Populating Set 0 (Ways 0-15) with unique dirty lines..."
#     )
#     initial_dirty_data = []

#     for way_idx in range(16):
#         target_addr = way_idx << TAG_SHIFT  # Set 0, Tag = way_idx
#         data_val = 0xAA000000 | way_idx
#         initial_dirty_data.append(data_val)

#         dut._log.info(
#             f"   [Fill Way {way_idx:2d}/15] Core Write 0x{data_val:08x} -> Addr 0x{target_addr:08x}"
#         )
#         await send_write_req(dut, addr=target_addr, data=data_val, byteen=0x0F)
#         await Timer(30, unit="ns")

#     dut._log.info(
#         "\n>>> [STATUS] Set 0 is 100% SATURATED (Ways 0 through 15 are dirty)."
#     )

#     # --------------------------------------------------------------------------
#     # PHASE 2: Trigger 1st Wrap-Around Eviction (Write Tag 16 -> MUST evict Way 0)
#     # --------------------------------------------------------------------------
#     tag_16_addr = 16 << TAG_SHIFT  # 0x00010000 (Set 0, Tag 16)
#     tag_16_data = 0xBB000010
#     dut._log.info(
#         "\n================================================================"
#     )
#     dut._log.info(
#         f">>> [PHASE 2] Writing Tag 16 (0x{tag_16_data:08x}) at 0x{tag_16_addr:08x}"
#     )
#     dut._log.info(
#         f"    (Expect: Evict Way 0, flushing 0x{initial_dirty_data[0]:08x} to DRAM)"
#     )
#     dut._log.info(
#         "================================================================"
#     )

#     await send_write_req(dut, addr=tag_16_addr, data=tag_16_data, byteen=0x0F)
#     await Timer(400, unit="ns")  # Wait for 16-beat writeback to settle in DRAM

#     # Verify DRAM at 0x00000000 received Way 0's dirty value
#     dram_way0 = read_dram_word(dut, 0x00000000)
#     dut._log.info(
#         f"   [VERIFY DRAM WAY 0] DRAM[0x00000000]: Got 0x{dram_way0:08x} | Expected 0x{initial_dirty_data[0]:08x}"
#     )
#     assert (
#         dram_way0 == initial_dirty_data[0]
#     ), f"[REPLACEMENT ERROR] Way 0 dirty data not flushed! Got 0x{dram_way0:08x}, Expected 0x{initial_dirty_data[0]:08x}"

#     # Read back Tag 16 -> MUST be a Cache Hit
#     rdata_16, lat_16 = await send_read_req(dut, tag_16_addr)
#     dut._log.info(
#         f"   [VERIFY CACHE TAG 16] Addr 0x{tag_16_addr:08x} -> Data=0x{rdata_16:08x} | Latency={lat_16} cycles"
#     )
#     assert (
#         rdata_16 == tag_16_data
#     ), f"[DATA CORRUPTION] Tag 16 mismatch! Got 0x{rdata_16:08x}, Expected 0x{tag_16_data:08x}"
#     assert (
#         lat_16 <= 4
#     ), f"[UNEXPECTED MISS] Tag 16 should HIT in Way 0 (Latency={lat_16} > 4)!"

#     # --------------------------------------------------------------------------
#     # PHASE 3: Trigger 2nd Wrap-Around Eviction (Write Tag 17 -> MUST evict Way 1)
#     # --------------------------------------------------------------------------
#     tag_17_addr = 17 << TAG_SHIFT  # 0x00011000 (Set 0, Tag 17)
#     tag_17_data = 0xCC000011
#     dut._log.info(
#         "\n================================================================"
#     )
#     dut._log.info(
#         f">>> [PHASE 3] Writing Tag 17 (0x{tag_17_data:08x}) at 0x{tag_17_addr:08x}"
#     )
#     dut._log.info(
#         f"    (Expect: Evict Way 1, flushing 0x{initial_dirty_data[1]:08x} to DRAM)"
#     )
#     dut._log.info(
#         "================================================================"
#     )

#     await send_write_req(dut, addr=tag_17_addr, data=tag_17_data, byteen=0x0F)
#     await Timer(400, unit="ns")

#     # Verify DRAM at 0x00001000 received Way 1's dirty value
#     dram_way1_addr = 1 << TAG_SHIFT
#     dram_way1 = read_dram_word(dut, dram_way1_addr)
#     dut._log.info(
#         f"   [VERIFY DRAM WAY 1] DRAM[0x{dram_way1_addr:08x}]: Got 0x{dram_way1:08x} | Expected 0x{initial_dirty_data[1]:08x}"
#     )
#     assert (
#         dram_way1 == initial_dirty_data[1]
#     ), f"[REPLACEMENT ERROR] Way 1 dirty data not flushed! Got 0x{dram_way1:08x}, Expected 0x{initial_dirty_data[1]:08x}"

#     # --------------------------------------------------------------------------
#     # PHASE 4: Verify Untouched Resident Way (Way 15) is still intact
#     # --------------------------------------------------------------------------
#     dut._log.info(
#         "\n>>> [PHASE 4] Verifying untouched Way 15 (0x0000F000) is still resident..."
#     )
#     way_15_addr = 15 << TAG_SHIFT
#     rdata_15, lat_15 = await send_read_req(dut, way_15_addr)
#     dut._log.info(
#         f"   [VERIFY WAY 15] Addr 0x{way_15_addr:08x} -> Data=0x{rdata_15:08x} | Latency={lat_15} cycles"
#     )
#     assert (
#         rdata_15 == initial_dirty_data[15]
#     ), f"[RESIDENCY CORRUPTED] Way 15 evicted unexpectedly! Got 0x{rdata_15:08x}, Expected 0x{initial_dirty_data[15]:08x}"
#     assert (
#         lat_15 <= 4
#     ), f"[UNEXPECTED MISS] Way 15 missed in cache (Latency={lat_15} > 4)!"

#     dut._log.info(
#         "\n===================================================================="
#     )
#     dut._log.info(
#         " >>> TEST 4 PASSED: 16-Way Wrap-Around Eviction Verified 100%! <<<"
#     )
#     dut._log.info(
#         "===================================================================="
#     )



import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer

# ==============================================================================
# HARDWARE CONFIGURATION PARAMETERS (LINE 64B / 16 WAYS / 64KB)
# ==============================================================================
DATA_SIZE = 32  # 32-bit word = 4 bytes
DATA_ELEMENTS = 64  # 64-byte line size (16 words)
NUM_WAYS = 16  # 16-way associative
LINE_BYTES = 64
TAG_SHIFT = 12  # Set 0 address stride: (tag << 12)


# ==============================================================================
# HARDWARE PERFORMANCE SCOREBOARD (MEASURES REAL RTL PINS ONLY)
# ==============================================================================
class HardwarePerfTracker:

    def __init__(self):
        # CPU access counters
        self.read_requests = 0
        self.read_hits = 0
        self.read_misses = 0
        self.read_latency_cycles = []

        self.write_requests = 0
        self.write_hits = 0
        self.write_misses = 0
        self.write_latency_cycles = []

        # DRAM bus counters (measured on clk_l domain)
        self.dram_read_beats = 0
        self.dram_write_beats = 0
        self.dram_refill_lines = 0
        self.dram_evicted_lines = 0

    def print_hardware_report(self, workload_name, logger):
        """Print raw physical performance metrics collected from hardware signals."""
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
            sum(
                lat
                for lat in self.read_latency_cycles
                if lat <= 4
            )
            / max(1, self.read_hits)
            if self.read_hits > 0
            else 0.0
        )
        avg_read_miss_lat = (
            sum(
                lat
                for lat in self.read_latency_cycles
                if lat > 4
            )
            / max(1, self.read_misses)
            if self.read_misses > 0
            else 0.0
        )

        # Bus bandwidth in bytes (each beat carries 4 bytes on 32-bit bus)
        dram_read_bytes = self.dram_read_beats * 4
        dram_write_bytes = self.dram_write_beats * 4
        total_dram_traffic = dram_read_bytes + dram_write_bytes
        dram_bus_busy_ns = (
            self.dram_read_beats + self.dram_write_beats
        ) * 20  # 20ns per clk_l cycle

        logger.info("\n" + "=" * 85)
        logger.info(
            f" HARDWARE PERFORMANCE MEASUREMENT REPORT: {workload_name}"
        )
        logger.info("=" * 85)
        logger.info(
            f" 1. CPU INTERFACE METRICS (clk_h domain):"
        )
        logger.info(
            f"    - Total Memory Accesses          : {total_accesses} requests"
        )
        logger.info(
            f"    - Overall Cache Hits / Misses    : {total_hits} Hits | {total_misses} Misses"
        )
        logger.info(
            f"    - Overall Hit Rate               : {hit_rate:.2f}%"
        )
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
            f" 2. DRAM BUS ACTIVITY & BANDWIDTH (Current RTL with 64B Line & Line-Wide Dirty):"
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
# HARDWARE SIGNAL MONITORS (PASSIVE SNOOPING)
# ==============================================================================
async def dram_bus_activity_monitor(dut):
    """Monitor actual transactions on DRAM bus (clk_l domain)."""
    while True:
        await RisingEdge(dut.clk_l)

        # Monitor Read Beats (refill from DRAM)
        rd_ctrl = dut.cache_inst.rd_controller
        if (
            rd_ctrl.mem_read_valid.value == 1
            and rd_ctrl.mem_read_done.value == 1
        ):
            tracker.dram_read_beats += 1
            if int(rd_ctrl.counter_wire.value) == 0:
                tracker.dram_refill_lines += 1

        # Monitor Write Beats (eviction flush to DRAM)
        dram = dut.dram_inst
        if dram.write_valid.value == 1:
            tracker.dram_write_beats += 1
            wr_ctrl = dut.cache_inst.wr_controller
            if int(wr_ctrl.counter_wire.value) == 0:
                tracker.dram_evicted_lines += 1


# ==============================================================================
# DRIVER HELPERS
# ==============================================================================
async def configure_cache_mode(dut, write_through_enable=0):
    """Set cache operational mode."""
    await RisingEdge(dut.clk_h)
    dut.cfg_addr.value = 0x00
    dut.cfg_data_in.value = 0x00000001 if write_through_enable else 0x00000000
    dut.cfg_valid.value = 1
    for _ in range(50):
        await RisingEdge(dut.clk_h)
        if dut.cfg_ready.value == 1:
            break
    dut.cfg_valid.value = 0
    await RisingEdge(dut.clk_h)


async def execute_cpu_write(dut, addr, data, byteen=0x0F):
    """Issue core write request and track hardware latency and hit/miss."""
    await RisingEdge(dut.clk_h)
    dut.in_addr.value = addr
    dut.in_data.value = data
    dut.in_write.value = 1
    dut.in_byteen.value = byteen
    dut.in_valid.value = 1

    latency = 0
    accepted = False
    while not accepted:
        if dut.in_ready.value == 1:
            await RisingEdge(dut.clk_h)
            dut.in_valid.value = 0
            accepted = True
            break
        await RisingEdge(dut.clk_h)

    while True:
        await RisingEdge(dut.clk_h)
        latency += 1
        if dut.out_valid.value == 1:
            break

    tracker.write_requests += 1
    tracker.write_latency_cycles.append(latency)
    # Latency <= 4 cycles indicates cache hit; > 4 cycles indicates write-allocate refill
    if latency <= 4:
        tracker.write_hits += 1
    else:
        tracker.write_misses += 1


async def execute_cpu_read(dut, addr):
    """Issue core read request and track hardware latency and hit/miss."""
    await RisingEdge(dut.clk_h)
    dut.in_addr.value = addr
    dut.in_data.value = 0
    dut.in_write.value = 0
    dut.in_byteen.value = 0x0F
    dut.in_valid.value = 1

    latency = 0
    accepted = False
    while not accepted:
        if dut.in_ready.value == 1:
            await RisingEdge(dut.clk_h)
            dut.in_valid.value = 0
            accepted = True
            break
        await RisingEdge(dut.clk_h)

    while True:
        await RisingEdge(dut.clk_h)
        latency += 1
        if dut.out_valid.value == 1:
            rdata = int(dut.out_data.value)
            break

    tracker.read_requests += 1
    tracker.read_latency_cycles.append(latency)
    if latency <= 4:
        tracker.read_hits += 1
    else:
        tracker.read_misses += 1

    return rdata


async def setup_dut(dut):
    """Initialize clocks, reset hardware, and start DRAM bus monitor."""
    cocotb.start_soon(Clock(dut.clk_h, 10, unit="ns").start())
    cocotb.start_soon(Clock(dut.clk_l, 20, unit="ns").start())

    dut.rst_n.value = 0
    dut.in_valid.value = 0
    dut.in_write.value = 0
    dut.in_byteen.value = 0
    dut.out_ready.value = 1
    dut.cfg_valid.value = 0
    await Timer(40, unit="ns")
    dut.rst_n.value = 1
    await Timer(20, unit="ns")
    await configure_cache_mode(dut, write_through_enable=0)
    cocotb.start_soon(dram_bus_activity_monitor(dut))


# ==============================================================================
# BENCHMARK 1: SEQUENTIAL STREAMING WORKLOAD (SPATIAL LOCALITY ON 64B LINE)
# ==============================================================================
@cocotb.test()
async def test_workload1_sequential_streaming(dut):
    """Measure baseline performance on sequential streaming: 64 words across 4 consecutive 64B lines."""
    global tracker
    tracker = HardwarePerfTracker()
    await setup_dut(dut)

    dut._log.info(
        "============================================================================="
    )
    dut._log.info(
        " RUNNING BENCHMARK WORKLOAD 1: SEQUENTIAL STREAMING READS (64 WORDS / 4 LINES)"
    )
    dut._log.info(
        "============================================================================="
    )

    # Read 64 consecutive words (spanning addresses 0x00000000 to 0x000000FC = 4 cache lines)
    for word_idx in range(64):
        addr = word_idx * 4
        await execute_cpu_read(dut, addr)

    await Timer(200, unit="ns")
    tracker.print_hardware_report(
        "WORKLOAD 1: SEQUENTIAL STREAMING READS", dut._log
    )


# ==============================================================================
# BENCHMARK 2: SUB-WORD WRITES WITH EVICTION (MEASURES REAL LINE-WIDE FLUSH OVERHEAD)
# ==============================================================================
@cocotb.test()
async def test_workload2_subword_writes_with_eviction(dut):
    """Measure baseline hardware performance when modifying single bytes per line, followed by 16-way eviction."""
    global tracker
    tracker = HardwarePerfTracker()
    await setup_dut(dut)

    dut._log.info(
        "============================================================================="
    )
    dut._log.info(
        " RUNNING BENCHMARK WORKLOAD 2: SUB-WORD STORES WITH 16-WAY EVICTIONS"
    )
    dut._log.info(
        "============================================================================="
    )

    # 1. Modify 1 byte per line across 16 ways in Set 0 (Addresses: 0x0000, 0x1000, ..., 0xF000)
    for way in range(16):
        target_addr = (way << TAG_SHIFT) + 0x08  # Word 2, Byte 0
        await execute_cpu_write(
            dut, addr=target_addr, data=0x000000AA, byteen=0x01
        )
        await Timer(30, unit="ns")

    # 2. Issue 4 new writes to Set 0 (Tags 16, 17, 18, 19) to force 4 dirty line evictions
    for tag in range(16, 20):
        thrash_addr = tag << TAG_SHIFT
        await execute_cpu_write(
            dut, addr=thrash_addr, data=0x55555555, byteen=0x0F
        )
        await Timer(400, unit="ns")

    await Timer(400, unit="ns")
    tracker.print_hardware_report(
        "WORKLOAD 2: SUB-WORD STORES & EVICTIONS", dut._log
    )