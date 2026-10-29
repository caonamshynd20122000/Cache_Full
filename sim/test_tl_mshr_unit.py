# ==============================================================================
# File: test_tl_mshr_unit.py
# Description: Cocotb Standalone Unit Test for tl_mshr.sv
# References: Vortex VX_cache_mshr.sv runtime assertions & functional verification
# ==============================================================================

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer


async def setup_mshr(dut):
    """Initialize clock and reset tl_mshr."""
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())

    dut.rst_n.value = 0
    dut.alloc_valid.value = 0
    dut.fin_valid.value = 0
    dut.fill_valid.value = 0
    dut.deq_ready.value = 1

    await Timer(40, unit="ns")
    dut.rst_n.value = 1
    await RisingEdge(dut.clk)
    assert (
        int(dut.empty.value) == 1
    ), "MSHR should be empty immediately after reset!"


# ==============================================================================
# TESTCASE 1: HIT EARLY RELEASE (CORE REQUIREMENT FOR HIT-UNDER-MISS)
# ==============================================================================
@cocotb.test()
async def test_mshr_hit_early_release(dut):
    """Verify that a Cache HIT immediately releases the allocated MSHR slot in 1 cycle."""
    await setup_mshr(dut)
    dut._log.info("--> [TEST 1] Verifying Hit Early Release (Pre-alloc & Free)")

    # 1. Allocate a slot for incoming read at 0x00000040
    await RisingEdge(dut.clk)
    dut.alloc_valid.value = 1
    dut.alloc_addr.value = 0x00000040
    dut.alloc_source.value = 2  # Ara Client ID
    dut.alloc_opcode.value = 4  # TL_A_GET
    dut.alloc_byteen.value = 0xF
    dut.alloc_data.value = 0

    await RisingEdge(dut.clk)
    dut.alloc_valid.value = 0
    assert (
        int(dut.alloc_id.value) == 0
    ), "Slot 0 should be allocated for the first request!"

    # MSHR slot 0 is now tentatively active
    await RisingEdge(dut.clk)
    assert (
        int(dut.valid_table.value) & 0x1 == 1
    ), "Slot 0 must be marked valid after allocation!"

    # 2. Tag comparison completes: IT IS A HIT!
    # Trigger Early Release: fin_is_hit = 1
    dut.fin_valid.value = 1
    dut.fin_id.value = 0
    dut.fin_is_hit.value = 1
    dut.fin_is_coalesced.value = 0
    dut.fin_prev_id.value = 0

    await RisingEdge(dut.clk)
    dut.fin_valid.value = 0

    # 3. Verify Slot 0 is immediately cleared in the very next cycle!
    await RisingEdge(dut.clk)
    assert (
        int(dut.valid_table.value) == 0
    ), f"Slot 0 should be freed on HIT! Got valid_table = {dut.valid_table.value}"
    assert (
        int(dut.empty.value) == 1
    ), "MSHR should return to empty after early release!"
    dut._log.info(
        "    PASSED: Slot was cleanly freed upon HIT without waiting for DRAM!"
    )


# ==============================================================================
# TESTCASE 2: MISS PERSISTENCE (SLOT MUST PERSIST ACROSS DRAM REFILL)
# ==============================================================================
@cocotb.test()
async def test_mshr_miss_persistence(dut):
    """Verify that a Cache MISS keeps the slot allocated in valid_table."""
    await setup_mshr(dut)
    dut._log.info("--> [TEST 2] Verifying Miss Persistence in MSHR Table")

    # 1. Allocate a slot for read at 0x00000100
    await RisingEdge(dut.clk)
    dut.alloc_valid.value = 1
    dut.alloc_addr.value = 0x00000100
    dut.alloc_source.value = 1
    dut.alloc_opcode.value = 4

    await RisingEdge(dut.clk)
    dut.alloc_valid.value = 0

    # 2. Tag comparison completes: IT IS A MISS!
    dut.fin_valid.value = 1
    dut.fin_id.value = 0
    dut.fin_is_hit.value = 0  # MISS!
    dut.fin_is_coalesced.value = 0

    await RisingEdge(dut.clk)
    dut.fin_valid.value = 0

    # 3. Verify Slot 0 remains VALID over multiple clock cycles
    for _ in range(5):
        await RisingEdge(dut.clk)
        assert (
            int(dut.valid_table.value) & 0x1 == 1
        ), "Slot 0 must persist while waiting for DRAM!"
        assert (
            int(dut.empty.value) == 0
        ), "MSHR must not be empty while holding a miss!"

    dut._log.info(
        "    PASSED: Miss entry persisted in MSHR table as expected."
    )


# ==============================================================================
# TESTCASE 3: MISS COALESCING & DRAM FILL DEQUEUE
# ==============================================================================
@cocotb.test()
async def test_mshr_coalescing_and_fill_dequeue(dut):
    """Verify linking two misses to the same 64B line, followed by sequential dequeue on fill."""
    await setup_mshr(dut)
    dut._log.info("--> [TEST 3] Verifying Miss Coalescing & Sequential Dequeue")

    # 1. Allocate Req 1 to Line 0x200 (Word 0) -> Miss
    await RisingEdge(dut.clk)
    dut.alloc_valid.value = 1
    dut.alloc_addr.value = 0x00000200
    dut.alloc_source.value = 1  # Client 1
    dut.alloc_opcode.value = 4

    await RisingEdge(dut.clk)
    dut.alloc_valid.value = 0

    dut.fin_valid.value = 1
    dut.fin_id.value = 0
    dut.fin_is_hit.value = 0
    dut.fin_is_coalesced.value = 0
    await RisingEdge(dut.clk)
    dut.fin_valid.value = 0

    # 2. Allocate Req 2 to Line 0x200 (Word 2 = 0x208) -> SAME LINE!
    await RisingEdge(dut.clk)
    dut.alloc_valid.value = 1
    dut.alloc_addr.value = 0x00000208
    dut.alloc_source.value = 2  # Client 2
    dut.alloc_opcode.value = 4

    # Check CAM Match
    await Timer(1, unit="ns")
    assert (
        int(dut.alloc_match.value) == 1
    ), "MSHR CAM should detect matching line address 0x200!"
    assert (
        int(dut.alloc_match_id.value) == 0
    ), "Matching tail ID must point to Slot 0!"

    await RisingEdge(dut.clk)
    dut.alloc_valid.value = 0

    # Finalize Req 2 as COALESCED (linked behind Slot 0)
    dut.fin_valid.value = 1
    dut.fin_id.value = 1
    dut.fin_is_hit.value = 0
    dut.fin_is_coalesced.value = 1
    dut.fin_prev_id.value = 0
    await RisingEdge(dut.clk)
    dut.fin_valid.value = 0

    # 3. DRAM Refill finishes for Line 0x200! Trigger fill_valid on Slot 0
    await RisingEdge(dut.clk)
    dut.fill_valid.value = 1
    dut.fill_id.value = 0
    await RisingEdge(dut.clk)
    dut.fill_valid.value = 0

    # 4. Dequeue Req 1 (Slot 0)
    await RisingEdge(dut.clk)
    assert int(dut.deq_valid.value) == 1, "Dequeue must be active!"
    assert (
        int(dut.deq_id.value) == 0
    ), "First dequeue must be Slot 0 (Req 1)!"
    assert (
        int(dut.deq_source.value) == 1
    ), "Deq source must match Client 1 ID!"

    # 5. Step to Req 2 (Slot 1) via linked-list traversal!
    await RisingEdge(dut.clk)
    assert int(dut.deq_valid.value) == 1, "Dequeue must step to Req 2!"
    assert (
        int(dut.deq_id.value) == 1
    ), "Second dequeue must be Slot 1 (Req 2)!"
    assert (
        int(dut.deq_source.value) == 2
    ), "Deq source must match Client 2 ID!"

    # Chain complete
    await RisingEdge(dut.clk)
    assert (
        int(dut.deq_valid.value) == 0
    ), "Dequeue should complete after draining chain!"
    assert (
        int(dut.empty.value) == 1
    ), "All slots should be freed after dequeue!"
    dut._log.info(
        "    PASSED: Coalescing and sequential linked-list dequeue verified 100%!"
    )