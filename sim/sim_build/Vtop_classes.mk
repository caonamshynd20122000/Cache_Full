# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtop.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace-fst/--trace-saif/--trace-vcd)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing output mode in SAIF format?  0/1 (from --trace-saif)
VM_TRACE_SAIF = 0
# Tracing output mode in VCD format?  0/1 (from --trace-vcd)
VM_TRACE_VCD = 1

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtop \
	Vtop___024root__DepSet_h84412442__0 \
	Vtop___024root__DepSet_heccd7ead__0 \
	Vtop_cache_system_tl_top__DepSet_hd5b1bb39__0 \
	Vtop_cache_system_tl_top__DepSet_h1cfd07e4__0 \
	Vtop_cache_controller_nb__DepSet_h357bb99b__0 \
	Vtop_cache_controller_nb__DepSet_h357bb99b__1 \
	Vtop_cache_controller_nb__DepSet_h7db70986__0 \
	Vtop_tag_array__T80000_DB40_N10__DepSet_hcd7fbeb5__0 \
	Vtop_tag_array__T80000_DB40_N10__DepSet_hcd7fbeb5__1 \
	Vtop_tag_array__T80000_DB40_N10__DepSet_hcd7fbeb5__2 \
	Vtop_tag_array__T80000_DB40_N10__DepSet_hcd7fbeb5__3 \
	Vtop_tag_array__T80000_DB40_N10__DepSet_hcd7fbeb5__4 \
	Vtop_tag_array__T80000_DB40_N10__DepSet_hcd7fbeb5__5 \
	Vtop_mem_model__M200_MB40__DepSet_h80d4cb54__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtop__ConstPool_0 \
	Vtop___024root__Slow \
	Vtop___024root__DepSet_h84412442__0__Slow \
	Vtop___024root__DepSet_heccd7ead__0__Slow \
	Vtop_cache_system_tl_top__Slow \
	Vtop_cache_system_tl_top__DepSet_h1cfd07e4__0__Slow \
	Vtop_cache_controller_nb__Slow \
	Vtop_cache_controller_nb__DepSet_h7db70986__0__Slow \
	Vtop_tag_array__T80000_DB40_N10__Slow \
	Vtop_tag_array__T80000_DB40_N10__DepSet_hcd7fbeb5__0__Slow \
	Vtop_tl_pkg__Slow \
	Vtop_tl_pkg__DepSet_h1525744d__0__Slow \
	Vtop_mem_model__M200_MB40__Slow \
	Vtop_mem_model__M200_MB40__DepSet_h80d4cb54__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtop__Dpi \
	Vtop__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtop__Syms \
	Vtop__Trace__0__Slow \
	Vtop__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vpi \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
