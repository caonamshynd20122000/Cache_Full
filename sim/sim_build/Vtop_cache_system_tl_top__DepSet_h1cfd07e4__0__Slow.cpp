// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_cache_system_tl_top.h"

VL_ATTR_COLD void Vtop_cache_system_tl_top___eval_static__TOP__cache_system_tl_top(Vtop_cache_system_tl_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_cache_system_tl_top___eval_static__TOP__cache_system_tl_top\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__a_dout_reg = 0U;
    vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__b_dout_reg = 0U;
}

VL_ATTR_COLD void Vtop_cache_system_tl_top___eval_initial__TOP__cache_system_tl_top(Vtop_cache_system_tl_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_cache_system_tl_top___eval_initial__TOP__cache_system_tl_top\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.d_param = 0U;
    vlSelfRef.d_size = 2U;
    vlSelfRef.d_sink = 0U;
    vlSelfRef.d_denied = 0U;
    vlSelfRef.d_corrupt = 0U;
    vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__i = 0U;
    while (VL_GTS_III(32, 0x10000U, vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__i)) {
        vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__j 
            = vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__i;
        while (VL_LTS_III(32, vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__j, 
                          ((IData)(0x100U) + vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__i))) {
            vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__mem[(0xffffU 
                                                             & vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__j)] = 0U;
            vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__j 
                = ((IData)(1U) + vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__j);
        }
        vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__i 
            = ((IData)(0x100U) + vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__i);
    }
    vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__a_we = 0U;
    vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__a_din = 0U;
}

VL_ATTR_COLD void Vtop_cache_system_tl_top___ctor_var_reset(Vtop_cache_system_tl_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_cache_system_tl_top___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk_h = VL_RAND_RESET_I(1);
    vlSelf->clk_l = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->cfg_addr = VL_RAND_RESET_I(8);
    vlSelf->cfg_data_in = VL_RAND_RESET_I(32);
    vlSelf->cfg_data_out = VL_RAND_RESET_I(32);
    vlSelf->cfg_valid = VL_RAND_RESET_I(1);
    vlSelf->cfg_ready = VL_RAND_RESET_I(1);
    vlSelf->a_valid = VL_RAND_RESET_I(1);
    vlSelf->a_ready = VL_RAND_RESET_I(1);
    vlSelf->a_opcode = VL_RAND_RESET_I(3);
    vlSelf->a_param = VL_RAND_RESET_I(3);
    vlSelf->a_size = VL_RAND_RESET_I(3);
    vlSelf->a_source = VL_RAND_RESET_I(4);
    vlSelf->a_address = VL_RAND_RESET_I(32);
    vlSelf->a_mask = VL_RAND_RESET_I(4);
    vlSelf->a_data = VL_RAND_RESET_I(32);
    vlSelf->d_valid = VL_RAND_RESET_I(1);
    vlSelf->d_ready = VL_RAND_RESET_I(1);
    vlSelf->d_opcode = VL_RAND_RESET_I(3);
    vlSelf->d_param = VL_RAND_RESET_I(2);
    vlSelf->d_size = VL_RAND_RESET_I(3);
    vlSelf->d_source = VL_RAND_RESET_I(4);
    vlSelf->d_sink = VL_RAND_RESET_I(4);
    vlSelf->d_denied = VL_RAND_RESET_I(1);
    vlSelf->d_data = VL_RAND_RESET_I(32);
    vlSelf->d_corrupt = VL_RAND_RESET_I(1);
    vlSelf->is_write_req = VL_RAND_RESET_I(1);
    vlSelf->core_out_addr = VL_RAND_RESET_I(32);
    vlSelf->core_out_data = VL_RAND_RESET_I(32);
    vlSelf->core_out_source = VL_RAND_RESET_I(4);
    vlSelf->core_out_opcode = VL_RAND_RESET_I(3);
    vlSelf->core_out_valid = VL_RAND_RESET_I(1);
    vlSelf->read_addr = VL_RAND_RESET_I(32);
    vlSelf->read_data = VL_RAND_RESET_I(32);
    vlSelf->read_valid = VL_RAND_RESET_I(1);
    vlSelf->read_ready = VL_RAND_RESET_I(1);
    vlSelf->write_addr = VL_RAND_RESET_I(32);
    vlSelf->write_data = VL_RAND_RESET_I(32);
    vlSelf->write_byteen = VL_RAND_RESET_I(4);
    vlSelf->write_valid = VL_RAND_RESET_I(1);
    vlSelf->write_ready = VL_RAND_RESET_I(1);
    vlSelf->dram_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dram_inst__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->dram_inst__DOT__read_addr = VL_RAND_RESET_I(32);
    vlSelf->dram_inst__DOT__read_data = VL_RAND_RESET_I(32);
    vlSelf->dram_inst__DOT__read_valid = VL_RAND_RESET_I(1);
    vlSelf->dram_inst__DOT__read_ready = VL_RAND_RESET_I(1);
    vlSelf->dram_inst__DOT__write_addr = VL_RAND_RESET_I(32);
    vlSelf->dram_inst__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->dram_inst__DOT__write_byteen = VL_RAND_RESET_I(4);
    vlSelf->dram_inst__DOT__write_valid = VL_RAND_RESET_I(1);
    vlSelf->dram_inst__DOT__write_ready = VL_RAND_RESET_I(1);
    vlSelf->dram_inst__DOT__r_addr = VL_RAND_RESET_I(16);
    vlSelf->dram_inst__DOT__w_addr = VL_RAND_RESET_I(16);
    vlSelf->dram_inst__DOT____Vcellinp__main_mem_dp__b_we = VL_RAND_RESET_I(4);
    vlSelf->dram_inst__DOT__main_mem_dp__DOT__a_clk = VL_RAND_RESET_I(1);
    vlSelf->dram_inst__DOT__main_mem_dp__DOT__a_we = VL_RAND_RESET_I(1);
    vlSelf->dram_inst__DOT__main_mem_dp__DOT__a_addr = VL_RAND_RESET_I(16);
    vlSelf->dram_inst__DOT__main_mem_dp__DOT__a_din = VL_RAND_RESET_I(32);
    vlSelf->dram_inst__DOT__main_mem_dp__DOT__a_dout = VL_RAND_RESET_I(32);
    vlSelf->dram_inst__DOT__main_mem_dp__DOT__b_clk = VL_RAND_RESET_I(1);
    vlSelf->dram_inst__DOT__main_mem_dp__DOT__b_we = VL_RAND_RESET_I(4);
    vlSelf->dram_inst__DOT__main_mem_dp__DOT__b_addr = VL_RAND_RESET_I(16);
    vlSelf->dram_inst__DOT__main_mem_dp__DOT__b_din = VL_RAND_RESET_I(32);
    vlSelf->dram_inst__DOT__main_mem_dp__DOT__b_dout = VL_RAND_RESET_I(32);
    vlSelf->dram_inst__DOT__main_mem_dp__DOT__a_dout_reg = VL_RAND_RESET_I(32);
    vlSelf->dram_inst__DOT__main_mem_dp__DOT__b_dout_reg = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->dram_inst__DOT__main_mem_dp__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->dram_inst__DOT__main_mem_dp__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->dram_inst__DOT__main_mem_dp__DOT__j = VL_RAND_RESET_I(32);
}
