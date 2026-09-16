# ==============================================================================
# Cocotb Makefile for Verilator - Non-Blocking TileLink L2 Cache (MSHR Phase)
# Target: Heterogeneous L2 Cache with Decoupled Hit/Miss Pipeline
# ==============================================================================

SIM ?= verilator
TOPLEVEL_LANG ?= verilog

# Verilator Compilation Flags
EXTRA_ARGS += -Wno-fatal --timing --trace --trace-structs -GNUM_WAYS=16 -DMULTIWAY

# Directory Paths
RTL_DIR = ../rtl_2
TLC_DIR = ../rtl_2/tilelinkC

# ==============================================================================
# 1. SYSTEMVERILOG PACKAGE DEFINITIONS (MUST BE FIRST)
# ==============================================================================
VERILOG_SOURCES += $(TLC_DIR)/tl_pkg.sv

# ==============================================================================
# 2. LOGIC PRIMITIVES & BASE MEMORY MODELS
# ==============================================================================
VERILOG_SOURCES += $(RTL_DIR)/D_FF.v
VERILOG_SOURCES += $(RTL_DIR)/counter_offset.v
VERILOG_SOURCES += $(RTL_DIR)/ad_edge_detect.v
VERILOG_SOURCES += $(RTL_DIR)/priority_encoder.v
VERILOG_SOURCES += $(RTL_DIR)/OR_gate.v
VERILOG_SOURCES += $(RTL_DIR)/fifo.v
VERILOG_SOURCES += $(RTL_DIR)/ram_dp.v
VERILOG_SOURCES += $(RTL_DIR)/xilinx_single_port_ram_no_change.v
VERILOG_SOURCES += $(RTL_DIR)/mem_model.v

# ==============================================================================
# 3. CAM (CONTENT-ADDRESSABLE MEMORY) & SECURITY SUBSYSTEM
# ==============================================================================
VERILOG_SOURCES += $(RTL_DIR)/cam_srl.v
VERILOG_SOURCES += $(RTL_DIR)/cam_bram.v
VERILOG_SOURCES += $(RTL_DIR)/cam.v
VERILOG_SOURCES += $(RTL_DIR)/PRNG.v
VERILOG_SOURCES += $(RTL_DIR)/random_fill_engine.v
VERILOG_SOURCES += $(RTL_DIR)/secure_address_translator.v

# ==============================================================================
# 4. CORE CACHE DATAPATH, ARRAYS & MEMORY INTERCONNECT
# ==============================================================================
VERILOG_SOURCES += $(RTL_DIR)/register_file.v
VERILOG_SOURCES += $(RTL_DIR)/request_translator.v
VERILOG_SOURCES += $(RTL_DIR)/tag_array.v
VERILOG_SOURCES += $(RTL_DIR)/data_array.v
VERILOG_SOURCES += $(RTL_DIR)/read_controller.v
VERILOG_SOURCES += $(RTL_DIR)/write_controller.v
VERILOG_SOURCES += $(RTL_DIR)/fetch_unit.sv
VERILOG_SOURCES += $(RTL_DIR)/main_memory_bram.v

# ==============================================================================
# 5. NON-BLOCKING MSHR & DECOUPLED FSM
# ==============================================================================
# 4-Entry MSHR tracking table (Early-release on Hit, Coalescing on Miss)
VERILOG_SOURCES += $(TLC_DIR)/tl_mshr.sv

# Non-Blocking FSM (Decoupled Hit/Miss execution, does not stall on Miss)
VERILOG_SOURCES += $(RTL_DIR)/fsm_nb.v

# ==============================================================================
# 6. NON-BLOCKING CONTROLLER & TILELINK SYSTEM TOP
# ==============================================================================
# Non-Blocking Central Cache Controller (replaces blocking cache_controller.v)
VERILOG_SOURCES += $(RTL_DIR)/cache_controller_nb.v

# TileLink Channel A/D Protocol Adapter
VERILOG_SOURCES += $(TLC_DIR)/tl_adapter.sv

# Top-Level Subsystem Wrapper with Discrete Pins for Cocotb
VERILOG_SOURCES += $(RTL_DIR)/cache_system_tl_top.sv

# ==============================================================================
# COCOTB RUNTIME SETTINGS
# ==============================================================================
TOPLEVEL = cache_system_tl_top
MODULE   = test_cache_tl_top

include $(shell cocotb-config --makefiles)/Makefile.sim