// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_cache_system_tl_top.h"

VL_INLINE_OPT void Vtop_cache_system_tl_top___nba_sequent__TOP__cache_system_tl_top__0(Vtop_cache_system_tl_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_cache_system_tl_top___nba_sequent__TOP__cache_system_tl_top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__dram_inst__DOT__main_mem_dp__DOT__mem__v0;
    __VdlyVal__dram_inst__DOT__main_mem_dp__DOT__mem__v0 = 0;
    SData/*15:0*/ __VdlyDim0__dram_inst__DOT__main_mem_dp__DOT__mem__v0;
    __VdlyDim0__dram_inst__DOT__main_mem_dp__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__dram_inst__DOT__main_mem_dp__DOT__mem__v0;
    __VdlySet__dram_inst__DOT__main_mem_dp__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__dram_inst__DOT__main_mem_dp__DOT__mem__v1;
    __VdlyVal__dram_inst__DOT__main_mem_dp__DOT__mem__v1 = 0;
    SData/*15:0*/ __VdlyDim0__dram_inst__DOT__main_mem_dp__DOT__mem__v1;
    __VdlyDim0__dram_inst__DOT__main_mem_dp__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__dram_inst__DOT__main_mem_dp__DOT__mem__v1;
    __VdlySet__dram_inst__DOT__main_mem_dp__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__dram_inst__DOT__main_mem_dp__DOT__mem__v2;
    __VdlyVal__dram_inst__DOT__main_mem_dp__DOT__mem__v2 = 0;
    SData/*15:0*/ __VdlyDim0__dram_inst__DOT__main_mem_dp__DOT__mem__v2;
    __VdlyDim0__dram_inst__DOT__main_mem_dp__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__dram_inst__DOT__main_mem_dp__DOT__mem__v2;
    __VdlySet__dram_inst__DOT__main_mem_dp__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__dram_inst__DOT__main_mem_dp__DOT__mem__v3;
    __VdlyVal__dram_inst__DOT__main_mem_dp__DOT__mem__v3 = 0;
    SData/*15:0*/ __VdlyDim0__dram_inst__DOT__main_mem_dp__DOT__mem__v3;
    __VdlyDim0__dram_inst__DOT__main_mem_dp__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__dram_inst__DOT__main_mem_dp__DOT__mem__v3;
    __VdlySet__dram_inst__DOT__main_mem_dp__DOT__mem__v3 = 0;
    // Body
    __VdlySet__dram_inst__DOT__main_mem_dp__DOT__mem__v0 = 0U;
    __VdlySet__dram_inst__DOT__main_mem_dp__DOT__mem__v1 = 0U;
    __VdlySet__dram_inst__DOT__main_mem_dp__DOT__mem__v2 = 0U;
    __VdlySet__dram_inst__DOT__main_mem_dp__DOT__mem__v3 = 0U;
    if ((1U & (IData)(vlSelfRef.dram_inst__DOT____Vcellinp__main_mem_dp__b_we))) {
        __VdlyVal__dram_inst__DOT__main_mem_dp__DOT__mem__v0 
            = (0xffU & vlSelfRef.write_data);
        __VdlyDim0__dram_inst__DOT__main_mem_dp__DOT__mem__v0 
            = vlSelfRef.dram_inst__DOT__w_addr;
        __VdlySet__dram_inst__DOT__main_mem_dp__DOT__mem__v0 = 1U;
    }
    if ((2U & (IData)(vlSelfRef.dram_inst__DOT____Vcellinp__main_mem_dp__b_we))) {
        __VdlyVal__dram_inst__DOT__main_mem_dp__DOT__mem__v1 
            = (0xffU & (vlSelfRef.write_data >> 8U));
        __VdlyDim0__dram_inst__DOT__main_mem_dp__DOT__mem__v1 
            = vlSelfRef.dram_inst__DOT__w_addr;
        __VdlySet__dram_inst__DOT__main_mem_dp__DOT__mem__v1 = 1U;
    }
    if ((4U & (IData)(vlSelfRef.dram_inst__DOT____Vcellinp__main_mem_dp__b_we))) {
        __VdlyVal__dram_inst__DOT__main_mem_dp__DOT__mem__v2 
            = (0xffU & (vlSelfRef.write_data >> 0x10U));
        __VdlyDim0__dram_inst__DOT__main_mem_dp__DOT__mem__v2 
            = vlSelfRef.dram_inst__DOT__w_addr;
        __VdlySet__dram_inst__DOT__main_mem_dp__DOT__mem__v2 = 1U;
    }
    if ((8U & (IData)(vlSelfRef.dram_inst__DOT____Vcellinp__main_mem_dp__b_we))) {
        __VdlyVal__dram_inst__DOT__main_mem_dp__DOT__mem__v3 
            = (vlSelfRef.write_data >> 0x18U);
        __VdlyDim0__dram_inst__DOT__main_mem_dp__DOT__mem__v3 
            = vlSelfRef.dram_inst__DOT__w_addr;
        __VdlySet__dram_inst__DOT__main_mem_dp__DOT__mem__v3 = 1U;
    }
    vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__b_dout_reg 
        = vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__mem
        [vlSelfRef.dram_inst__DOT__w_addr];
    vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__a_dout_reg 
        = vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__mem
        [vlSelfRef.dram_inst__DOT__r_addr];
    if (__VdlySet__dram_inst__DOT__main_mem_dp__DOT__mem__v0) {
        vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__mem[__VdlyDim0__dram_inst__DOT__main_mem_dp__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__mem
                [__VdlyDim0__dram_inst__DOT__main_mem_dp__DOT__mem__v0]) 
               | (IData)(__VdlyVal__dram_inst__DOT__main_mem_dp__DOT__mem__v0));
    }
    if (__VdlySet__dram_inst__DOT__main_mem_dp__DOT__mem__v1) {
        vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__mem[__VdlyDim0__dram_inst__DOT__main_mem_dp__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__mem
                [__VdlyDim0__dram_inst__DOT__main_mem_dp__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__dram_inst__DOT__main_mem_dp__DOT__mem__v1) 
                  << 8U));
    }
    if (__VdlySet__dram_inst__DOT__main_mem_dp__DOT__mem__v2) {
        vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__mem[__VdlyDim0__dram_inst__DOT__main_mem_dp__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__mem
                [__VdlyDim0__dram_inst__DOT__main_mem_dp__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__dram_inst__DOT__main_mem_dp__DOT__mem__v2) 
                  << 0x10U));
    }
    if (__VdlySet__dram_inst__DOT__main_mem_dp__DOT__mem__v3) {
        vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__mem[__VdlyDim0__dram_inst__DOT__main_mem_dp__DOT__mem__v3] 
            = ((0xffffffU & vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__mem
                [__VdlyDim0__dram_inst__DOT__main_mem_dp__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__dram_inst__DOT__main_mem_dp__DOT__mem__v3) 
                  << 0x18U));
    }
    vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__b_dout 
        = vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__b_dout_reg;
    vlSelfRef.dram_inst__DOT__read_data = vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__a_dout_reg;
    vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__a_dout 
        = vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__a_dout_reg;
    vlSelfRef.read_data = vlSelfRef.dram_inst__DOT__main_mem_dp__DOT__a_dout_reg;
}
