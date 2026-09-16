// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop_cache_system_tl_top___ico_sequent__TOP__cache_system_tl_top__0(Vtop_cache_system_tl_top* vlSelf);
void Vtop_cache_controller_nb___ico_sequent__TOP__cache_system_tl_top__cache_inst__0(Vtop_cache_controller_nb* vlSelf);
void Vtop_tag_array__T80000_DB40_N10___ico_sequent__TOP__cache_system_tl_top__cache_inst__tag_array__0(Vtop_tag_array__T80000_DB40_N10* vlSelf);
void Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0(Vtop_mem_model__M200_MB40* vlSelf);
void Vtop_cache_system_tl_top___ico_sequent__TOP__cache_system_tl_top__1(Vtop_cache_system_tl_top* vlSelf);
void Vtop_cache_controller_nb___ico_sequent__TOP__cache_system_tl_top__cache_inst__1(Vtop_cache_controller_nb* vlSelf);
void Vtop___024root___ico_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop_cache_system_tl_top___ico_sequent__TOP__cache_system_tl_top__2(Vtop_cache_system_tl_top* vlSelf);
void Vtop_tag_array__T80000_DB40_N10___ico_sequent__TOP__cache_system_tl_top__cache_inst__tag_array__1(Vtop_tag_array__T80000_DB40_N10* vlSelf);
void Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__1(Vtop_mem_model__M200_MB40* vlSelf);
void Vtop___024root___ico_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop_cache_controller_nb___ico_sequent__TOP__cache_system_tl_top__cache_inst__2(Vtop_cache_controller_nb* vlSelf);
void Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__2(Vtop_mem_model__M200_MB40* vlSelf);
void Vtop_tag_array__T80000_DB40_N10___ico_sequent__TOP__cache_system_tl_top__cache_inst__tag_array__2(Vtop_tag_array__T80000_DB40_N10* vlSelf);
void Vtop_cache_system_tl_top___ico_sequent__TOP__cache_system_tl_top__3(Vtop_cache_system_tl_top* vlSelf);
void Vtop_cache_controller_nb___ico_sequent__TOP__cache_system_tl_top__cache_inst__3(Vtop_cache_controller_nb* vlSelf);
void Vtop___024root___ico_sequent__TOP__3(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        Vtop_cache_system_tl_top___ico_sequent__TOP__cache_system_tl_top__0((&vlSymsp->TOP__cache_system_tl_top));
        Vtop_cache_controller_nb___ico_sequent__TOP__cache_system_tl_top__cache_inst__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
        Vtop_tag_array__T80000_DB40_N10___ico_sequent__TOP__cache_system_tl_top__cache_inst__tag_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array));
        Vtop_cache_system_tl_top___ico_sequent__TOP__cache_system_tl_top__1((&vlSymsp->TOP__cache_system_tl_top));
        Vtop_cache_controller_nb___ico_sequent__TOP__cache_system_tl_top__cache_inst__1((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
        Vtop___024root___ico_sequent__TOP__1(vlSelf);
        Vtop_cache_system_tl_top___ico_sequent__TOP__cache_system_tl_top__2((&vlSymsp->TOP__cache_system_tl_top));
        Vtop_tag_array__T80000_DB40_N10___ico_sequent__TOP__cache_system_tl_top__cache_inst__tag_array__1((&vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__1((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__1((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__1((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__1((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__1((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__1((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__1((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__1((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__1((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__1((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__1((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__1((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__1((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__1((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__1((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__1((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array));
        Vtop___024root___ico_sequent__TOP__2(vlSelf);
        Vtop_cache_controller_nb___ico_sequent__TOP__cache_system_tl_top__cache_inst__2((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__2((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__2((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__2((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__2((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__2((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__2((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__2((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__2((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__2((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__2((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__2((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__2((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__2((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__2((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__2((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__2((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array));
        Vtop_tag_array__T80000_DB40_N10___ico_sequent__TOP__cache_system_tl_top__cache_inst__tag_array__2((&vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array));
        Vtop_cache_system_tl_top___ico_sequent__TOP__cache_system_tl_top__3((&vlSymsp->TOP__cache_system_tl_top));
        Vtop_cache_controller_nb___ico_sequent__TOP__cache_system_tl_top__cache_inst__3((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
        Vtop___024root___ico_sequent__TOP__3(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.d_corrupt = vlSymsp->TOP__cache_system_tl_top.d_corrupt;
    vlSelfRef.d_denied = vlSymsp->TOP__cache_system_tl_top.d_denied;
    vlSelfRef.d_sink = vlSymsp->TOP__cache_system_tl_top.d_sink;
    vlSelfRef.d_size = vlSymsp->TOP__cache_system_tl_top.d_size;
    vlSelfRef.d_param = vlSymsp->TOP__cache_system_tl_top.d_param;
    vlSymsp->TOP__cache_system_tl_top.a_size = vlSelfRef.a_size;
    vlSymsp->TOP__cache_system_tl_top.a_param = vlSelfRef.a_param;
    vlSymsp->TOP__cache_system_tl_top.a_source = vlSelfRef.a_source;
    vlSymsp->TOP__cache_system_tl_top.clk_l = vlSelfRef.clk_l;
    vlSymsp->TOP__cache_system_tl_top.cfg_data_in = vlSelfRef.cfg_data_in;
    vlSymsp->TOP__cache_system_tl_top.d_ready = vlSelfRef.d_ready;
    vlSymsp->TOP__cache_system_tl_top.cfg_valid = vlSelfRef.cfg_valid;
    vlSymsp->TOP__cache_system_tl_top.cfg_addr = vlSelfRef.cfg_addr;
    vlSymsp->TOP__cache_system_tl_top.clk_h = vlSelfRef.clk_h;
    vlSymsp->TOP__cache_system_tl_top.rst_n = vlSelfRef.rst_n;
    vlSymsp->TOP__cache_system_tl_top.a_mask = vlSelfRef.a_mask;
    vlSymsp->TOP__cache_system_tl_top.a_data = vlSelfRef.a_data;
    vlSymsp->TOP__cache_system_tl_top.a_address = vlSelfRef.a_address;
    vlSymsp->TOP__cache_system_tl_top.a_valid = vlSelfRef.a_valid;
    vlSymsp->TOP__cache_system_tl_top.a_opcode = vlSelfRef.a_opcode;
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cfg_ready = vlSymsp->TOP__cache_system_tl_top.cfg_ready;
    vlSelfRef.cfg_data_out = vlSymsp->TOP__cache_system_tl_top.cfg_data_out;
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.a_ready = vlSymsp->TOP__cache_system_tl_top.a_ready;
    vlSelfRef.d_valid = vlSymsp->TOP__cache_system_tl_top.d_valid;
    vlSelfRef.d_source = vlSymsp->TOP__cache_system_tl_top.d_source;
    vlSelfRef.d_opcode = vlSymsp->TOP__cache_system_tl_top.d_opcode;
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.d_data = vlSymsp->TOP__cache_system_tl_top.d_data;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSymsp->TOP__cache_system_tl_top.clk_l) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__clk_l__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSymsp->TOP__cache_system_tl_top.rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSymsp->TOP__cache_system_tl_top__cache_inst.clk_h) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__clk_h__0))));
    vlSelfRef.__VactTriggered.setBit(3U, ((~ (IData)(vlSymsp->TOP__cache_system_tl_top__cache_inst.rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(4U, ((IData)(vlSymsp->TOP__cache_system_tl_top__cache_inst.clk_l) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__clk_l__0))));
    vlSelfRef.__VactTriggered.setBit(5U, ((~ (IData)(vlSymsp->TOP__cache_system_tl_top__cache_inst.rd_controller__DOT__cur_state)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__rd_controller__DOT__cur_state__0)));
    vlSelfRef.__VactTriggered.setBit(6U, ((~ (IData)(vlSymsp->TOP__cache_system_tl_top__cache_inst.wr_controller__DOT__busy_clk_l)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__wr_controller__DOT__busy_clk_l__0)));
    vlSelfRef.__VactTriggered.setBit(7U, ((IData)(vlSymsp->TOP__cache_system_tl_top__cache_inst.clk_h) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__clk_h__0)));
    vlSelfRef.__VactTriggered.setBit(8U, ((~ (IData)(vlSymsp->TOP__cache_system_tl_top__cache_inst.f_unit__DOT____Vcellinp__rd_mem_counter__rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__f_unit__DOT____Vcellinp__rd_mem_counter__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(9U, ((~ (IData)(vlSymsp->TOP__cache_system_tl_top__cache_inst.f_unit__DOT____Vcellinp__rd_cam_counter__rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__f_unit__DOT____Vcellinp__rd_cam_counter__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(0xaU, ((~ (IData)(vlSymsp->TOP__cache_system_tl_top__cache_inst.f_unit__DOT____Vcellinp__erase_cam_counter__rst_n)) 
                                            & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__f_unit__DOT____Vcellinp__erase_cam_counter__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(0xbU, ((~ (IData)(vlSymsp->TOP__cache_system_tl_top__cache_inst.f_unit__DOT____Vcellinp__wr_mem_counter__rst_n)) 
                                            & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__f_unit__DOT____Vcellinp__wr_mem_counter__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(0xcU, ((~ (IData)(vlSymsp->TOP__cache_system_tl_top__cache_inst.f_unit__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__stream_counter__rst_n)) 
                                            & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__f_unit__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__stream_counter__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(0xdU, ((~ (IData)(vlSymsp->TOP__cache_system_tl_top__cache_inst.f_unit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__stream_counter__rst_n)) 
                                            & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__f_unit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__stream_counter__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(0xeU, ((~ (IData)(vlSymsp->TOP__cache_system_tl_top__cache_inst.f_unit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__stream_counter__rst_n)) 
                                            & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__f_unit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__stream_counter__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(0xfU, ((~ (IData)(vlSymsp->TOP__cache_system_tl_top__cache_inst.f_unit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__stream_counter__rst_n)) 
                                            & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__f_unit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__stream_counter__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(0x10U, ((~ (IData)(vlSymsp->TOP__cache_system_tl_top__cache_inst.d_array__DOT____Vcellinp__latency_counter__rst_n)) 
                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT____Vcellinp__latency_counter__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(0x11U, ((IData)(vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__tag_array__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x12U, ((~ (IData)(vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.rst_n)) 
                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__tag_array__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(0x13U, ((~ (IData)(vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.__Vcellinp__latency_counter__rst_n)) 
                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__tag_array____Vcellinp__latency_counter__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(0x14U, ((IData)(vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array.clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x15U, ((IData)(vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array.clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x16U, ((IData)(vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array.clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x17U, ((IData)(vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array.clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x18U, ((IData)(vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array.clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x19U, ((IData)(vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array.clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x1aU, ((IData)(vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array.clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x1bU, ((IData)(vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array.clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x1cU, ((IData)(vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array.clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x1dU, ((IData)(vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array.clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x1eU, ((IData)(vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array.clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x1fU, ((IData)(vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array.clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x20U, ((IData)(vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array.clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x21U, ((IData)(vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array.clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x22U, ((IData)(vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array.clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x23U, ((IData)(vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array.clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array__clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__clk_l__0 
        = vlSymsp->TOP__cache_system_tl_top.clk_l;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__rst_n__0 
        = vlSymsp->TOP__cache_system_tl_top.rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__clk_h__0 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst.clk_h;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__rst_n__0 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst.rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__clk_l__0 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst.clk_l;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__rd_controller__DOT__cur_state__0 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst.rd_controller__DOT__cur_state;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__wr_controller__DOT__busy_clk_l__0 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst.wr_controller__DOT__busy_clk_l;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__f_unit__DOT____Vcellinp__rd_mem_counter__rst_n__0 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst.f_unit__DOT____Vcellinp__rd_mem_counter__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__f_unit__DOT____Vcellinp__rd_cam_counter__rst_n__0 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst.f_unit__DOT____Vcellinp__rd_cam_counter__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__f_unit__DOT____Vcellinp__erase_cam_counter__rst_n__0 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst.f_unit__DOT____Vcellinp__erase_cam_counter__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__f_unit__DOT____Vcellinp__wr_mem_counter__rst_n__0 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst.f_unit__DOT____Vcellinp__wr_mem_counter__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__f_unit__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__stream_counter__rst_n__0 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst.f_unit__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__stream_counter__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__f_unit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__stream_counter__rst_n__0 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst.f_unit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__stream_counter__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__f_unit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__stream_counter__rst_n__0 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst.f_unit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__stream_counter__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__f_unit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__stream_counter__rst_n__0 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst.f_unit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__stream_counter__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT____Vcellinp__latency_counter__rst_n__0 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst.d_array__DOT____Vcellinp__latency_counter__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__tag_array__clk__0 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__tag_array__rst_n__0 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__tag_array____Vcellinp__latency_counter__rst_n__0 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.__Vcellinp__latency_counter__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__clk__0 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array__clk__0 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array__clk__0 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array__clk__0 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array__clk__0 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array__clk__0 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array__clk__0 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array__clk__0 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array__clk__0 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array__clk__0 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array__clk__0 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array__clk__0 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array__clk__0 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array__clk__0 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array__clk__0 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array__clk__0 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array.clk;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(7U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__0(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__1(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__2(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_system_tl_top___nba_sequent__TOP__cache_system_tl_top__0(Vtop_cache_system_tl_top* vlSelf);
void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__3(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__4(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_system_tl_top___nba_sequent__TOP__cache_system_tl_top__1(Vtop_cache_system_tl_top* vlSelf);
void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__5(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__6(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__7(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__8(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__9(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__10(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__11(Vtop_cache_controller_nb* vlSelf);
void Vtop_mem_model__M200_MB40___nba_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0(Vtop_mem_model__M200_MB40* vlSelf);
void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__12(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__13(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__14(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__15(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__16(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__17(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__18(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__19(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__20(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__21(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__22(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__23(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__24(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__25(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__26(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__27(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__28(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__29(Vtop_cache_controller_nb* vlSelf);
void Vtop_tag_array__T80000_DB40_N10___nba_sequent__TOP__cache_system_tl_top__cache_inst__tag_array__0(Vtop_tag_array__T80000_DB40_N10* vlSelf);
void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__30(Vtop_cache_controller_nb* vlSelf);
void Vtop_tag_array__T80000_DB40_N10___nba_sequent__TOP__cache_system_tl_top__cache_inst__tag_array__1(Vtop_tag_array__T80000_DB40_N10* vlSelf);
void Vtop_tag_array__T80000_DB40_N10___nba_sequent__TOP__cache_system_tl_top__cache_inst__tag_array__2(Vtop_tag_array__T80000_DB40_N10* vlSelf);
void Vtop_tag_array__T80000_DB40_N10___nba_sequent__TOP__cache_system_tl_top__cache_inst__tag_array__3(Vtop_tag_array__T80000_DB40_N10* vlSelf);
void Vtop_tag_array__T80000_DB40_N10___nba_sequent__TOP__cache_system_tl_top__cache_inst__tag_array__4(Vtop_tag_array__T80000_DB40_N10* vlSelf);
void Vtop_tag_array__T80000_DB40_N10___nba_sequent__TOP__cache_system_tl_top__cache_inst__tag_array__5(Vtop_tag_array__T80000_DB40_N10* vlSelf);
void Vtop_tag_array__T80000_DB40_N10___nba_sequent__TOP__cache_system_tl_top__cache_inst__tag_array__6(Vtop_tag_array__T80000_DB40_N10* vlSelf);
void Vtop_tag_array__T80000_DB40_N10___nba_sequent__TOP__cache_system_tl_top__cache_inst__tag_array__7(Vtop_tag_array__T80000_DB40_N10* vlSelf);
void Vtop_tag_array__T80000_DB40_N10___nba_sequent__TOP__cache_system_tl_top__cache_inst__tag_array__8(Vtop_tag_array__T80000_DB40_N10* vlSelf);
void Vtop_tag_array__T80000_DB40_N10___nba_sequent__TOP__cache_system_tl_top__cache_inst__tag_array__9(Vtop_tag_array__T80000_DB40_N10* vlSelf);
void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__31(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_system_tl_top___nba_sequent__TOP__cache_system_tl_top__2(Vtop_cache_system_tl_top* vlSelf);
void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__32(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__33(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__0(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__1(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__34(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__2(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_system_tl_top___nba_sequent__TOP__cache_system_tl_top__3(Vtop_cache_system_tl_top* vlSelf);
void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__35(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__3(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__36(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__37(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__4(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__38(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__5(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__6(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__7(Vtop_cache_controller_nb* vlSelf);
void Vtop_tag_array__T80000_DB40_N10___nba_comb__TOP__cache_system_tl_top__cache_inst__tag_array__0(Vtop_tag_array__T80000_DB40_N10* vlSelf);
void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__8(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__9(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_system_tl_top___nba_comb__TOP__cache_system_tl_top__0(Vtop_cache_system_tl_top* vlSelf);
void Vtop_tag_array__T80000_DB40_N10___nba_comb__TOP__cache_system_tl_top__cache_inst__tag_array__1(Vtop_tag_array__T80000_DB40_N10* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);
void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__10(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__11(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__12(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_system_tl_top___nba_comb__TOP__cache_system_tl_top__1(Vtop_cache_system_tl_top* vlSelf);
void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__13(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__14(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__15(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__39(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__16(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__17(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__18(Vtop_cache_controller_nb* vlSelf);
void Vtop_tag_array__T80000_DB40_N10___nba_comb__TOP__cache_system_tl_top__cache_inst__tag_array__2(Vtop_tag_array__T80000_DB40_N10* vlSelf);
void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__19(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_system_tl_top___nba_comb__TOP__cache_system_tl_top__2(Vtop_cache_system_tl_top* vlSelf);
void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf);
void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__20(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__21(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__22(Vtop_cache_controller_nb* vlSelf);
void Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0(Vtop_mem_model__M200_MB40* vlSelf);
void Vtop_tag_array__T80000_DB40_N10___nba_comb__TOP__cache_system_tl_top__cache_inst__tag_array__3(Vtop_tag_array__T80000_DB40_N10* vlSelf);
void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__23(Vtop_cache_controller_nb* vlSelf);
void Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__1(Vtop_mem_model__M200_MB40* vlSelf);
void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__24(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__25(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__26(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__27(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_system_tl_top___nba_comb__TOP__cache_system_tl_top__3(Vtop_cache_system_tl_top* vlSelf);
void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__28(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__29(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__30(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__31(Vtop_cache_controller_nb* vlSelf);
void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__33(Vtop_cache_controller_nb* vlSelf);
void Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__2(Vtop_mem_model__M200_MB40* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x204ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x10004ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__1((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__2((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_system_tl_top___nba_sequent__TOP__cache_system_tl_top__0((&vlSymsp->TOP__cache_system_tl_top));
    }
    if ((0x404ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__3((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__4((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
        Vtop_cache_system_tl_top___nba_sequent__TOP__cache_system_tl_top__1((&vlSymsp->TOP__cache_system_tl_top));
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x804ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__5((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x30ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__6((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x18ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__7((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x1004ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__8((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x2004ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__9((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x4004ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__10((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x8004ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__11((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x100000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_mem_model__M200_MB40___nba_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array));
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__12((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x200000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_mem_model__M200_MB40___nba_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array));
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__13((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x400000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_mem_model__M200_MB40___nba_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array));
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__14((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x800000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_mem_model__M200_MB40___nba_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array));
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__15((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x1000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_mem_model__M200_MB40___nba_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array));
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__16((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x2000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_mem_model__M200_MB40___nba_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array));
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__17((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x4000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_mem_model__M200_MB40___nba_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array));
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__18((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x8000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_mem_model__M200_MB40___nba_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array));
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__19((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x10000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_mem_model__M200_MB40___nba_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array));
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__20((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x20000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_mem_model__M200_MB40___nba_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array));
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__21((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x40000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_mem_model__M200_MB40___nba_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array));
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__22((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x80000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_mem_model__M200_MB40___nba_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array));
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__23((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x100000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_mem_model__M200_MB40___nba_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array));
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__24((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x200000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_mem_model__M200_MB40___nba_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array));
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__25((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x400000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_mem_model__M200_MB40___nba_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array));
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__26((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x800000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_mem_model__M200_MB40___nba_sequent__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array));
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__27((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x50ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__28((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x104ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__29((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0xa0000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_tag_array__T80000_DB40_N10___nba_sequent__TOP__cache_system_tl_top__cache_inst__tag_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array));
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__30((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x20000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_tag_array__T80000_DB40_N10___nba_sequent__TOP__cache_system_tl_top__cache_inst__tag_array__1((&vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array));
    }
    if ((0x60000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_tag_array__T80000_DB40_N10___nba_sequent__TOP__cache_system_tl_top__cache_inst__tag_array__2((&vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array));
        Vtop_tag_array__T80000_DB40_N10___nba_sequent__TOP__cache_system_tl_top__cache_inst__tag_array__3((&vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array));
        Vtop_tag_array__T80000_DB40_N10___nba_sequent__TOP__cache_system_tl_top__cache_inst__tag_array__4((&vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array));
        Vtop_tag_array__T80000_DB40_N10___nba_sequent__TOP__cache_system_tl_top__cache_inst__tag_array__5((&vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array));
        Vtop_tag_array__T80000_DB40_N10___nba_sequent__TOP__cache_system_tl_top__cache_inst__tag_array__6((&vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array));
        Vtop_tag_array__T80000_DB40_N10___nba_sequent__TOP__cache_system_tl_top__cache_inst__tag_array__7((&vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array));
        Vtop_tag_array__T80000_DB40_N10___nba_sequent__TOP__cache_system_tl_top__cache_inst__tag_array__8((&vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array));
        Vtop_tag_array__T80000_DB40_N10___nba_sequent__TOP__cache_system_tl_top__cache_inst__tag_array__9((&vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array));
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__31((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_system_tl_top___nba_sequent__TOP__cache_system_tl_top__2((&vlSymsp->TOP__cache_system_tl_top));
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__32((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__33((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x40cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__1((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__34((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x80cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__2((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_system_tl_top___nba_sequent__TOP__cache_system_tl_top__3((&vlSymsp->TOP__cache_system_tl_top));
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__35((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x1cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__3((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x30ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__36((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__37((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0xf004ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__4((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x18ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__38((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x5cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__5((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x10cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__6((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0xa000cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__7((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0xe0000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_tag_array__T80000_DB40_N10___nba_comb__TOP__cache_system_tl_top__cache_inst__tag_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array));
        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__8((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x6000cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__9((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
        Vtop_cache_system_tl_top___nba_comb__TOP__cache_system_tl_top__0((&vlSymsp->TOP__cache_system_tl_top));
        Vtop_tag_array__T80000_DB40_N10___nba_comb__TOP__cache_system_tl_top__cache_inst__tag_array__1((&vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array));
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x33ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__10((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x40cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__11((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x3cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__12((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
        Vtop_cache_system_tl_top___nba_comb__TOP__cache_system_tl_top__1((&vlSymsp->TOP__cache_system_tl_top));
    }
    if ((0x80cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__13((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0xf00cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__14((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0xfc0cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__15((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__39((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x1fULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__16((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0xa010cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__17((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0xa090cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__18((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0xe000cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_tag_array__T80000_DB40_N10___nba_comb__TOP__cache_system_tl_top__cache_inst__tag_array__2((&vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array));
        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__19((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
        Vtop_cache_system_tl_top___nba_comb__TOP__cache_system_tl_top__2((&vlSymsp->TOP__cache_system_tl_top));
        Vtop___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0xe080cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__20((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0xef80cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__21((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0xe010cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__22((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__0((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array));
        Vtop_tag_array__T80000_DB40_N10___nba_comb__TOP__cache_system_tl_top__cache_inst__tag_array__3((&vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array));
        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__23((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__1((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__1((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__1((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__1((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__1((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__1((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__1((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__1((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__1((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__1((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__1((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__1((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__1((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__1((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__1((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__1((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array));
    }
    if ((0xe011cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__24((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x6f00cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__25((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0xef90cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__26((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0x5cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__27((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
        Vtop_cache_system_tl_top___nba_comb__TOP__cache_system_tl_top__3((&vlSymsp->TOP__cache_system_tl_top));
    }
    if ((0x5fULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__28((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0xe001cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__29((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0xe015cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__30((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0xffffe010cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__31((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
        Vtop_tag_array__T80000_DB40_N10___ico_sequent__TOP__cache_system_tl_top__cache_inst__tag_array__2((&vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array));
        Vtop_cache_controller_nb___ico_sequent__TOP__cache_system_tl_top__cache_inst__3((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
    }
    if ((0xffffe011cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__33((&vlSymsp->TOP__cache_system_tl_top__cache_inst));
        Vtop_cache_system_tl_top___ico_sequent__TOP__cache_system_tl_top__3((&vlSymsp->TOP__cache_system_tl_top));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__2((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__2((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__2((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__2((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__2((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__2((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__2((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__2((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__2((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__2((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__2((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__2((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__2((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__2((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__2((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__2((&vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array));
        Vtop___024root___ico_sequent__TOP__3(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cfg_data_out = vlSymsp->TOP__cache_system_tl_top.cfg_data_out;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.a_ready = vlSymsp->TOP__cache_system_tl_top.a_ready;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.d_valid = vlSymsp->TOP__cache_system_tl_top.d_valid;
    vlSelfRef.d_source = vlSymsp->TOP__cache_system_tl_top.d_source;
    vlSelfRef.d_opcode = vlSymsp->TOP__cache_system_tl_top.d_opcode;
}
