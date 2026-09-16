// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_cache_system_tl_top.h"

VL_INLINE_OPT void Vtop_cache_system_tl_top___ico_sequent__TOP__cache_system_tl_top__0(Vtop_cache_system_tl_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_cache_system_tl_top___ico_sequent__TOP__cache_system_tl_top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dram_inst__DOT__read_data = vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__a_dout_reg;
    vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__a_dout 
        = vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__a_dout_reg;
    vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__b_dout 
        = vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__b_dout_reg;
    vlSelfRef.read_data = vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__a_dout_reg;
    vlSelfRef.read_ready = vlSelfRef.dram_inst__DOT__read_ready;
    vlSelfRef.write_ready = vlSelfRef.dram_inst__DOT__write_ready;
    vlSymsp->TOP__cache_system_tl_top__cache_inst.in_source 
        = vlSelfRef.a_source;
    vlSelfRef.dram_inst__DOT__clk = vlSelfRef.clk_l;
    vlSymsp->TOP__cache_system_tl_top__cache_inst.clk_l 
        = vlSelfRef.clk_l;
    vlSymsp->TOP__cache_system_tl_top__cache_inst.cfg_data_in 
        = vlSelfRef.cfg_data_in;
    vlSymsp->TOP__cache_system_tl_top__cache_inst.out_ready 
        = vlSelfRef.d_ready;
    vlSymsp->TOP__cache_system_tl_top__cache_inst.cfg_valid 
        = vlSelfRef.cfg_valid;
    vlSymsp->TOP__cache_system_tl_top__cache_inst.cfg_addr 
        = vlSelfRef.cfg_addr;
    vlSymsp->TOP__cache_system_tl_top__cache_inst.clk_h 
        = vlSelfRef.clk_h;
    vlSelfRef.dram_inst__DOT__rst_n = vlSelfRef.rst_n;
    vlSymsp->TOP__cache_system_tl_top__cache_inst.rst_n 
        = vlSelfRef.rst_n;
    vlSymsp->TOP__cache_system_tl_top__cache_inst.in_byteen 
        = vlSelfRef.a_mask;
    vlSymsp->TOP__cache_system_tl_top__cache_inst.in_data 
        = vlSelfRef.a_data;
    vlSymsp->TOP__cache_system_tl_top__cache_inst.in_addr 
        = vlSelfRef.a_address;
    vlSymsp->TOP__cache_system_tl_top__cache_inst.in_valid 
        = vlSelfRef.a_valid;
    vlSymsp->TOP__cache_system_tl_top__cache_inst.in_opcode 
        = vlSelfRef.a_opcode;
    vlSelfRef.is_write_req = ((0U == (IData)(vlSelfRef.a_opcode)) 
                              | (1U == (IData)(vlSelfRef.a_opcode)));
    vlSymsp->TOP__cache_system_tl_top__cache_inst.read_data 
        = vlSelfRef.read_data;
    vlSymsp->TOP__cache_system_tl_top__cache_inst.read_ready 
        = vlSelfRef.read_ready;
    vlSymsp->TOP__cache_system_tl_top__cache_inst.write_ready 
        = vlSelfRef.write_ready;
    vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__a_clk 
        = vlSelfRef.dram_inst__DOT__clk;
    vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__b_clk 
        = vlSelfRef.dram_inst__DOT__clk;
    vlSymsp->TOP__cache_system_tl_top__cache_inst.in_write 
        = vlSelfRef.is_write_req;
}

VL_INLINE_OPT void Vtop_cache_system_tl_top___ico_sequent__TOP__cache_system_tl_top__1(Vtop_cache_system_tl_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_cache_system_tl_top___ico_sequent__TOP__cache_system_tl_top__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cfg_ready = vlSymsp->TOP__cache_system_tl_top__cache_inst.cfg_ready;
    vlSelfRef.cfg_data_out = vlSymsp->TOP__cache_system_tl_top__cache_inst.cfg_data_out;
    vlSelfRef.read_valid = vlSymsp->TOP__cache_system_tl_top__cache_inst.read_valid;
    vlSelfRef.read_addr = vlSymsp->TOP__cache_system_tl_top__cache_inst.read_addr;
    vlSelfRef.write_valid = vlSymsp->TOP__cache_system_tl_top__cache_inst.write_valid;
    vlSelfRef.write_data = vlSymsp->TOP__cache_system_tl_top__cache_inst.write_data;
    vlSelfRef.write_addr = vlSymsp->TOP__cache_system_tl_top__cache_inst.write_addr;
    vlSelfRef.write_byteen = vlSymsp->TOP__cache_system_tl_top__cache_inst.write_byteen;
    vlSelfRef.dram_inst__DOT__read_valid = vlSelfRef.read_valid;
    vlSelfRef.dram_inst__DOT__read_addr = vlSelfRef.read_addr;
    vlSelfRef.dram_inst__DOT__r_addr = (0xffffU & (vlSelfRef.read_addr 
                                                   >> 2U));
    vlSelfRef.dram_inst__DOT__write_valid = vlSelfRef.write_valid;
    vlSelfRef.dram_inst__DOT__write_data = vlSelfRef.write_data;
    vlSelfRef.dram_inst__DOT__write_addr = vlSelfRef.write_addr;
    vlSelfRef.dram_inst__DOT__w_addr = (0xffffU & (vlSelfRef.write_addr 
                                                   >> 2U));
    vlSelfRef.dram_inst__DOT__write_byteen = vlSelfRef.write_byteen;
    vlSelfRef.dram_inst__DOT____Vcellinp__main_mem_dp__b_we 
        = ((IData)(vlSelfRef.write_valid) ? (IData)(vlSelfRef.write_byteen)
            : 0U);
    vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__a_addr 
        = vlSelfRef.dram_inst__DOT__r_addr;
    vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__b_din 
        = vlSelfRef.dram_inst__DOT__write_data;
    vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__b_addr 
        = vlSelfRef.dram_inst__DOT__w_addr;
    vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__b_we 
        = vlSelfRef.dram_inst__DOT____Vcellinp__main_mem_dp__b_we;
}

VL_INLINE_OPT void Vtop_cache_system_tl_top___ico_sequent__TOP__cache_system_tl_top__2(Vtop_cache_system_tl_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_cache_system_tl_top___ico_sequent__TOP__cache_system_tl_top__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.a_ready = vlSymsp->TOP__cache_system_tl_top__cache_inst.in_ready;
    vlSelfRef.core_out_addr = vlSymsp->TOP__cache_system_tl_top__cache_inst.out_addr;
    vlSelfRef.core_out_valid = vlSymsp->TOP__cache_system_tl_top__cache_inst.out_valid;
    vlSelfRef.core_out_source = vlSymsp->TOP__cache_system_tl_top__cache_inst.out_source;
    vlSelfRef.core_out_opcode = vlSymsp->TOP__cache_system_tl_top__cache_inst.out_opcode;
    vlSelfRef.d_valid = vlSelfRef.core_out_valid;
    vlSelfRef.d_source = vlSelfRef.core_out_source;
    vlSelfRef.d_opcode = ((4U == (IData)(vlSelfRef.core_out_opcode))
                           ? 1U : 0U);
}

VL_INLINE_OPT void Vtop_cache_system_tl_top___ico_sequent__TOP__cache_system_tl_top__3(Vtop_cache_system_tl_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_cache_system_tl_top___ico_sequent__TOP__cache_system_tl_top__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.core_out_data = vlSymsp->TOP__cache_system_tl_top__cache_inst.out_data;
    vlSelfRef.d_data = vlSelfRef.core_out_data;
}

VL_INLINE_OPT void Vtop_cache_system_tl_top___nba_sequent__TOP__cache_system_tl_top__1(Vtop_cache_system_tl_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_cache_system_tl_top___nba_sequent__TOP__cache_system_tl_top__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cfg_data_out = vlSymsp->TOP__cache_system_tl_top__cache_inst.cfg_data_out;
}

VL_INLINE_OPT void Vtop_cache_system_tl_top___nba_sequent__TOP__cache_system_tl_top__2(Vtop_cache_system_tl_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_cache_system_tl_top___nba_sequent__TOP__cache_system_tl_top__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dram_inst__DOT__read_ready = ((IData)(vlSelfRef.rst_n) 
                                            && (IData)(vlSelfRef.read_valid));
    vlSelfRef.dram_inst__DOT__write_ready = ((IData)(vlSelfRef.rst_n) 
                                             && (IData)(vlSelfRef.write_valid));
    vlSelfRef.read_ready = vlSelfRef.dram_inst__DOT__read_ready;
    vlSelfRef.write_ready = vlSelfRef.dram_inst__DOT__write_ready;
    vlSymsp->TOP__cache_system_tl_top__cache_inst.read_ready 
        = vlSelfRef.read_ready;
    vlSymsp->TOP__cache_system_tl_top__cache_inst.write_ready 
        = vlSelfRef.write_ready;
}

VL_INLINE_OPT void Vtop_cache_system_tl_top___nba_sequent__TOP__cache_system_tl_top__3(Vtop_cache_system_tl_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_cache_system_tl_top___nba_sequent__TOP__cache_system_tl_top__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__cache_system_tl_top__cache_inst.read_data 
        = vlSelfRef.read_data;
}

VL_INLINE_OPT void Vtop_cache_system_tl_top___nba_comb__TOP__cache_system_tl_top__0(Vtop_cache_system_tl_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_cache_system_tl_top___nba_comb__TOP__cache_system_tl_top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.a_ready = vlSymsp->TOP__cache_system_tl_top__cache_inst.in_ready;
}

VL_INLINE_OPT void Vtop_cache_system_tl_top___nba_comb__TOP__cache_system_tl_top__1(Vtop_cache_system_tl_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_cache_system_tl_top___nba_comb__TOP__cache_system_tl_top__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.read_valid = vlSymsp->TOP__cache_system_tl_top__cache_inst.read_valid;
    vlSelfRef.read_addr = vlSymsp->TOP__cache_system_tl_top__cache_inst.read_addr;
    vlSelfRef.dram_inst__DOT__read_valid = vlSelfRef.read_valid;
    vlSelfRef.dram_inst__DOT__read_addr = vlSelfRef.read_addr;
    vlSelfRef.dram_inst__DOT__r_addr = (0xffffU & (vlSelfRef.read_addr 
                                                   >> 2U));
    vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__a_addr 
        = vlSelfRef.dram_inst__DOT__r_addr;
}

VL_INLINE_OPT void Vtop_cache_system_tl_top___nba_comb__TOP__cache_system_tl_top__2(Vtop_cache_system_tl_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_cache_system_tl_top___nba_comb__TOP__cache_system_tl_top__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.core_out_addr = vlSymsp->TOP__cache_system_tl_top__cache_inst.out_addr;
    vlSelfRef.core_out_valid = vlSymsp->TOP__cache_system_tl_top__cache_inst.out_valid;
    vlSelfRef.core_out_source = vlSymsp->TOP__cache_system_tl_top__cache_inst.out_source;
    vlSelfRef.core_out_opcode = vlSymsp->TOP__cache_system_tl_top__cache_inst.out_opcode;
    vlSelfRef.d_valid = vlSelfRef.core_out_valid;
    vlSelfRef.d_source = vlSelfRef.core_out_source;
    vlSelfRef.d_opcode = ((4U == (IData)(vlSelfRef.core_out_opcode))
                           ? 1U : 0U);
}

VL_INLINE_OPT void Vtop_cache_system_tl_top___nba_comb__TOP__cache_system_tl_top__3(Vtop_cache_system_tl_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_cache_system_tl_top___nba_comb__TOP__cache_system_tl_top__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.write_valid = vlSymsp->TOP__cache_system_tl_top__cache_inst.write_valid;
    vlSelfRef.write_data = vlSymsp->TOP__cache_system_tl_top__cache_inst.write_data;
    vlSelfRef.write_addr = vlSymsp->TOP__cache_system_tl_top__cache_inst.write_addr;
    vlSelfRef.write_byteen = vlSymsp->TOP__cache_system_tl_top__cache_inst.write_byteen;
    vlSelfRef.dram_inst__DOT__write_valid = vlSelfRef.write_valid;
    vlSelfRef.dram_inst__DOT__write_data = vlSelfRef.write_data;
    vlSelfRef.dram_inst__DOT__write_addr = vlSelfRef.write_addr;
    vlSelfRef.dram_inst__DOT__w_addr = (0xffffU & (vlSelfRef.write_addr 
                                                   >> 2U));
    vlSelfRef.dram_inst__DOT__write_byteen = vlSelfRef.write_byteen;
    vlSelfRef.dram_inst__DOT____Vcellinp__main_mem_dp__b_we 
        = ((IData)(vlSelfRef.write_valid) ? (IData)(vlSelfRef.write_byteen)
            : 0U);
    vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__b_din 
        = vlSelfRef.dram_inst__DOT__write_data;
    vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__b_addr 
        = vlSelfRef.dram_inst__DOT__w_addr;
    vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__b_we 
        = vlSelfRef.dram_inst__DOT____Vcellinp__main_mem_dp__b_we;
}
