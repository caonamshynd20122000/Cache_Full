// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

extern const VlUnpacked<CData/*4:0*/, 512> Vtop__ConstPool__TABLE_hde51526f_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtop__ConstPool__TABLE_h2b53f02a_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__22(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__22\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = ((((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__counter_offset_inst__DOT__done) 
                      << 8U) | ((IData)(vlSelfRef.cache_system_tl_top__DOT__read_ready) 
                                << 7U)) | (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__counter_offset_inst__DOT__counter) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__counter_offset_inst__DOT__done_w) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cur_state))));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__counter_offset_inst__DOT__counter 
        = Vtop__ConstPool__TABLE_hde51526f_0[__Vtableidx1];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__counter_offset_inst__DOT__done 
        = Vtop__ConstPool__TABLE_h2b53f02a_0[__Vtableidx1];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__counter_done 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__counter_offset_inst__DOT__done;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__23(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__23\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<16>/*511:0*/ __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data;
    VL_ZERO_W(512, __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data);
    // Body
    __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0U];
    __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[1U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[1U];
    __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[2U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[2U];
    __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[3U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[3U];
    __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[4U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[4U];
    __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[5U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[5U];
    __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[6U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[6U];
    __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[7U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[7U];
    __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[8U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[8U];
    __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[9U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[9U];
    __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xaU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xaU];
    __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xbU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xbU];
    __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xcU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xcU];
    __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xdU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xdU];
    __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xeU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xeU];
    __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xfU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xfU];
    if (vlSelfRef.rst_n) {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__done_keep 
            = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__cur_state)
                ? ((IData)(vlSelfRef.cache_system_tl_top__DOT__write_ready)
                    ? 1U : (1U & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__done_keep)))
                : 0U);
        __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0U] 
            = ((((0U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__data_slot_idx)) 
                 & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cur_state)) 
                & (IData)(vlSelfRef.cache_system_tl_top__DOT__read_ready))
                ? vlSelfRef.cache_system_tl_top__DOT__read_data
                : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0U]);
        __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[1U] 
            = ((((1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__data_slot_idx)) 
                 & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cur_state)) 
                & (IData)(vlSelfRef.cache_system_tl_top__DOT__read_ready))
                ? vlSelfRef.cache_system_tl_top__DOT__read_data
                : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[1U]);
        __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[2U] 
            = ((((2U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__data_slot_idx)) 
                 & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cur_state)) 
                & (IData)(vlSelfRef.cache_system_tl_top__DOT__read_ready))
                ? vlSelfRef.cache_system_tl_top__DOT__read_data
                : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[2U]);
        __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[3U] 
            = ((((3U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__data_slot_idx)) 
                 & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cur_state)) 
                & (IData)(vlSelfRef.cache_system_tl_top__DOT__read_ready))
                ? vlSelfRef.cache_system_tl_top__DOT__read_data
                : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[3U]);
        __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[4U] 
            = ((((4U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__data_slot_idx)) 
                 & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cur_state)) 
                & (IData)(vlSelfRef.cache_system_tl_top__DOT__read_ready))
                ? vlSelfRef.cache_system_tl_top__DOT__read_data
                : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[4U]);
        __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[5U] 
            = ((((5U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__data_slot_idx)) 
                 & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cur_state)) 
                & (IData)(vlSelfRef.cache_system_tl_top__DOT__read_ready))
                ? vlSelfRef.cache_system_tl_top__DOT__read_data
                : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[5U]);
        __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[6U] 
            = ((((6U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__data_slot_idx)) 
                 & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cur_state)) 
                & (IData)(vlSelfRef.cache_system_tl_top__DOT__read_ready))
                ? vlSelfRef.cache_system_tl_top__DOT__read_data
                : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[6U]);
        __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[7U] 
            = ((((7U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__data_slot_idx)) 
                 & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cur_state)) 
                & (IData)(vlSelfRef.cache_system_tl_top__DOT__read_ready))
                ? vlSelfRef.cache_system_tl_top__DOT__read_data
                : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[7U]);
        __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[8U] 
            = ((((8U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__data_slot_idx)) 
                 & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cur_state)) 
                & (IData)(vlSelfRef.cache_system_tl_top__DOT__read_ready))
                ? vlSelfRef.cache_system_tl_top__DOT__read_data
                : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[8U]);
        __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[9U] 
            = ((((9U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__data_slot_idx)) 
                 & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cur_state)) 
                & (IData)(vlSelfRef.cache_system_tl_top__DOT__read_ready))
                ? vlSelfRef.cache_system_tl_top__DOT__read_data
                : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[9U]);
        __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xaU] 
            = ((((0xaU == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__data_slot_idx)) 
                 & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cur_state)) 
                & (IData)(vlSelfRef.cache_system_tl_top__DOT__read_ready))
                ? vlSelfRef.cache_system_tl_top__DOT__read_data
                : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xaU]);
        __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xbU] 
            = ((((0xbU == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__data_slot_idx)) 
                 & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cur_state)) 
                & (IData)(vlSelfRef.cache_system_tl_top__DOT__read_ready))
                ? vlSelfRef.cache_system_tl_top__DOT__read_data
                : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xbU]);
        __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xcU] 
            = ((((0xcU == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__data_slot_idx)) 
                 & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cur_state)) 
                & (IData)(vlSelfRef.cache_system_tl_top__DOT__read_ready))
                ? vlSelfRef.cache_system_tl_top__DOT__read_data
                : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xcU]);
        __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xdU] 
            = ((((0xdU == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__data_slot_idx)) 
                 & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cur_state)) 
                & (IData)(vlSelfRef.cache_system_tl_top__DOT__read_ready))
                ? vlSelfRef.cache_system_tl_top__DOT__read_data
                : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xdU]);
        __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xeU] 
            = ((((0xeU == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__data_slot_idx)) 
                 & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cur_state)) 
                & (IData)(vlSelfRef.cache_system_tl_top__DOT__read_ready))
                ? vlSelfRef.cache_system_tl_top__DOT__read_data
                : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xeU]);
        __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xfU] 
            = ((((0xfU == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__data_slot_idx)) 
                 & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cur_state)) 
                & (IData)(vlSelfRef.cache_system_tl_top__DOT__read_ready))
                ? vlSelfRef.cache_system_tl_top__DOT__read_data
                : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xfU]);
        if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cur_state) {
            if (((0xfU == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__data_slot_idx)) 
                 & (IData)(vlSelfRef.cache_system_tl_top__DOT__read_ready))) {
                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__all_beats_received = 1U;
            }
        } else {
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__all_beats_received = 0U;
        }
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__data_slot_idx 
            = (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cur_state) 
                & (IData)(vlSelfRef.cache_system_tl_top__DOT__read_ready))
                ? (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__counter_wire)
                : 0U);
    } else {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__done_keep = 0U;
        __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0U] = 0U;
        __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[1U] = 0U;
        __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[2U] = 0U;
        __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[3U] = 0U;
        __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[4U] = 0U;
        __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[5U] = 0U;
        __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[6U] = 0U;
        __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[7U] = 0U;
        __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[8U] = 0U;
        __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[9U] = 0U;
        __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xaU] = 0U;
        __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xbU] = 0U;
        __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xcU] = 0U;
        __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xdU] = 0U;
        __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xeU] = 0U;
        __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xfU] = 0U;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__all_beats_received = 0U;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__data_slot_idx = 0U;
    }
    vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__read_ready 
        = ((IData)(vlSelfRef.rst_n) && (IData)(vlSelfRef.cache_system_tl_top__DOT__read_valid));
    vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__write_ready 
        = ((IData)(vlSelfRef.rst_n) && (IData)(vlSelfRef.cache_system_tl_top__DOT__write_valid));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0U] 
        = __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[1U] 
        = __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[1U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[2U] 
        = __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[2U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[3U] 
        = __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[3U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[4U] 
        = __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[4U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[5U] 
        = __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[5U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[6U] 
        = __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[6U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[7U] 
        = __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[7U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[8U] 
        = __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[8U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[9U] 
        = __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[9U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xaU] 
        = __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xaU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xbU] 
        = __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xbU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xcU] 
        = __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xcU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xdU] 
        = __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xdU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xeU] 
        = __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xeU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xfU] 
        = __Vdly__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xfU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[0U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[1U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[1U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[2U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[2U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[3U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[3U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[4U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[4U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[5U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[5U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[6U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[6U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[7U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[7U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[8U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[8U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[9U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[9U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[0xaU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xaU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[0xbU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xbU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[0xcU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xcU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[0xdU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xdU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[0xeU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xeU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[0xfU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[0xfU];
    vlSelfRef.cache_system_tl_top__DOT__write_ready 
        = vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__write_ready;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_data[0U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[0U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_data[1U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[1U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_data[2U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[2U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_data[3U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[3U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_data[4U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[4U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_data[5U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[5U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_data[6U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[6U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_data[7U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[7U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_data[8U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[8U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_data[9U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[9U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_data[0xaU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[0xaU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_data[0xbU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[0xbU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_data[0xcU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[0xcU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_data[0xdU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[0xdU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_data[0xeU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[0xeU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_data[0xfU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[0xfU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write_ready 
        = vlSelfRef.cache_system_tl_top__DOT__write_ready;
    vlSelfRef.cache_system_tl_top__DOT__read_ready 
        = vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__read_ready;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__mem_write_done 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write_ready;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__read_ready 
        = vlSelfRef.cache_system_tl_top__DOT__read_ready;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__mem_read_done 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__read_ready;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__counter_offset_inst__DOT__start 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__mem_read_done;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__24(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__24\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    __Vtableidx3 = ((((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_offset_inst__DOT__done) 
                      << 8U) | ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_step) 
                                << 7U)) | (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_offset_inst__DOT__counter) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_offset_inst__DOT__done_w) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__busy_clk_l))));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_offset_inst__DOT__counter 
        = Vtop__ConstPool__TABLE_hde51526f_0[__Vtableidx3];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_offset_inst__DOT__done 
        = Vtop__ConstPool__TABLE_h2b53f02a_0[__Vtableidx3];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_done 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_offset_inst__DOT__done;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_wire 
        = (0xfU & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_offset_inst__DOT__counter));
}

extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_hda151d36_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_h35af60b1_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__25(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__25\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    __Vtableidx4 = ((((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__rd_mem_counter__DOT__done) 
                      << 3U) | ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__rd_mem_counter__DOT__counter) 
                                << 2U)) | (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__rd_mem_counter__DOT__done_w) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__rd_mem_counter__rst_n)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__rd_mem_counter__DOT__counter 
        = Vtop__ConstPool__TABLE_hda151d36_0[__Vtableidx4];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__rd_mem_counter__DOT__done 
        = Vtop__ConstPool__TABLE_h35af60b1_0[__Vtableidx4];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__rd_mem 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__rd_mem_counter__DOT__counter;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__rd_mem_counter__DOT__done_w 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__rd_mem_counter__DOT__counter;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__rd_mem_done 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__rd_mem_counter__DOT__done;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__26(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__26\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    // Body
    __Vtableidx12 = ((((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__latency_counter__DOT__done) 
                       << 3U) | ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__latency_counter__DOT__counter) 
                                 << 2U)) | (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__latency_counter__DOT__done_w) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT____Vcellinp__latency_counter__rst_n)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__latency_counter__DOT__counter 
        = Vtop__ConstPool__TABLE_hda151d36_0[__Vtableidx12];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__latency_counter__DOT__done 
        = Vtop__ConstPool__TABLE_h35af60b1_0[__Vtableidx12];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__latency_counter__DOT__done_w 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__latency_counter__DOT__counter;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__fsm_accessed 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__latency_counter__DOT__done;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__tag_access_done 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__latency_counter__DOT__done;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_accessed 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__latency_counter__DOT__done;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cache_access_done 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_accessed;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fsm_accessed 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_accessed;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__27(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__27\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_0_0;
    cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_0_0 = 0;
    CData/*0:0*/ cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_0_1;
    cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_0_1 = 0;
    CData/*0:0*/ cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_0_2;
    cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_0_2 = 0;
    CData/*0:0*/ cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_0_3;
    cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_0_3 = 0;
    // Body
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__hit 
        = ((7U & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__hit)) 
           | ((((0U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match_addr)) 
                & (2U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) 
               & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match)) 
              << 3U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__hit 
        = ((0xbU & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__hit)) 
           | ((((1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match_addr)) 
                & (2U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) 
               & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match)) 
              << 2U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__hit 
        = ((0xdU & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__hit)) 
           | ((((2U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match_addr)) 
                & (2U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) 
               & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match)) 
              << 1U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__hit 
        = ((0xeU & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__hit)) 
           | (((3U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match_addr)) 
               & (2U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) 
              & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__allocate 
        = ((7U & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__allocate)) 
           | (((((0U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_idx)) 
                 & (1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) 
                & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_done_keep)) 
               & (0U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__next_state))) 
              << 3U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__allocate 
        = ((0xbU & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__allocate)) 
           | (((((1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_idx)) 
                 & (1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) 
                & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_done_keep)) 
               & (0U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__next_state))) 
              << 2U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__allocate 
        = ((0xdU & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__allocate)) 
           | (((((2U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_idx)) 
                 & (1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) 
                & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_done_keep)) 
               & (0U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__next_state))) 
              << 1U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__allocate 
        = ((0xeU & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__allocate)) 
           | ((((3U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_idx)) 
                & (1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) 
               & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_done_keep)) 
              & (0U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__next_state))));
    cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_0_0 
        = (1U & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__allocate) 
                  | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__hit)) 
                 >> 3U));
    cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_0_1 
        = (1U & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__allocate) 
                  | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__hit)) 
                 >> 2U));
    cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_0_2 
        = (1U & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__allocate) 
                  | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__hit)) 
                 >> 1U));
    cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_0_3 
        = (1U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__allocate) 
                 | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__hit)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__stream_counter__rst_n 
        = ((~ (IData)(cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_0_0)) 
           & (IData)(vlSelfRef.rst_n));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__stream_counter__rst_n 
        = ((~ (IData)(cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_0_1)) 
           & (IData)(vlSelfRef.rst_n));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__stream_counter__rst_n 
        = ((~ (IData)(cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_0_2)) 
           & (IData)(vlSelfRef.rst_n));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__refresh 
        = ((((IData)(cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_0_0) 
             << 3U) | ((IData)(cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_0_1) 
                       << 2U)) | (((IData)(cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_0_2) 
                                   << 1U) | (IData)(cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_0_3)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__stream_counter__rst_n 
        = ((~ (IData)(cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_0_3)) 
           & (IData)(vlSelfRef.rst_n));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__genblk1__BRA__0__KET____DOT__stream_counter__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__stream_counter__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__genblk1__BRA__1__KET____DOT__stream_counter__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__stream_counter__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__genblk1__BRA__2__KET____DOT__stream_counter__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__stream_counter__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__genblk1__BRA__3__KET____DOT__stream_counter__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__stream_counter__rst_n;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__28(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__28\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__wr_mem_counter__rst_n 
        = ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_wr_cam_edge__DOT__signal_out)) 
           & (IData)(vlSelfRef.rst_n));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__tag_data[0U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__0__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__tag_data[1U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__1__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__tag_data[2U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__2__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__tag_data[3U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__3__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__tag_data[4U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__4__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__tag_data[5U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__5__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__tag_data[6U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__6__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__tag_data[7U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__7__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__rd_mem_counter__rst_n 
        = ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_mem_edge__DOT__signal_out)) 
           & (IData)(vlSelfRef.rst_n));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match_addr 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid)
            ? (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded)
            : (2U | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid) 
           | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__wr_mem_counter__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__wr_mem_counter__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__rd_mem_counter__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__rd_mem_counter__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__match_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__output_encoded 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__output_unencoded 
        = (0xfU & ((IData)(1U) << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match_addr)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__match 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__output_valid 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__match_single 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__output_unencoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match_single 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__output_unencoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_single 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__output_unencoded;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__lifetime_p 
        = (((0xc0U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__genblk1__BRA__0__KET____DOT__stream_counter__DOT__counter) 
                      << 6U)) | (0x30U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__genblk1__BRA__1__KET____DOT__stream_counter__DOT__counter) 
                                          << 4U))) 
           | ((0xcU & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__genblk1__BRA__2__KET____DOT__stream_counter__DOT__counter) 
                       << 2U)) | (3U & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__genblk1__BRA__3__KET____DOT__stream_counter__DOT__counter))));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__lifetime 
        = (0xffU & (~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__lifetime_p)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__sig_in 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__lifetime;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__sig_processed 
        = (0xfU & (~ (((((IData)((0U != (3U & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__lifetime)))) 
                         << 1U) | (0U != (3U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__lifetime) 
                                                >> 2U)))) 
                       << 2U) | (((IData)((0U != (3U 
                                                  & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__lifetime) 
                                                     >> 4U)))) 
                                  << 1U) | (0U != (3U 
                                                   & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__lifetime) 
                                                      >> 6U)))))));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__input_unencoded 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__sig_processed;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst1__DOT__input_unencoded 
        = (3U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__sig_processed) 
                 >> 0U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst2__DOT__input_unencoded 
        = (3U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__sig_processed) 
                 >> 2U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid 
        = (0U != (3U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__sig_processed) 
                        >> 2U)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded 
        = (1U & (~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__sig_processed)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded 
        = (1U & (~ ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__sig_processed) 
                    >> 2U)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid 
        = (0U != (3U & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__sig_processed)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__valid2 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__out1 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_unencoded 
        = (3U & ((IData)(1U) << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__out2 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_unencoded 
        = (3U & ((IData)(1U) << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__valid1 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid) 
           | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_idx 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid)
            ? (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded)
            : (2U | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__sig_out 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__output_valid 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__idx 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_idx;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__output_encoded 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_idx;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__output_unencoded 
        = (0xfU & ((IData)(1U) << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_idx)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT____Vcellinp__num_gen__valid 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_secure__DOT__data) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__load));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__valid 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT____Vcellinp__num_gen__valid;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_erase_done 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__erase_cam_counter__DOT__done) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_erase_happend));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_wr_cam_done 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_wr_cam_happend) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__wr_mem_counter__DOT__done));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__29(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__29\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_system_tl_top__DOT__read_data = vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__main_mem_dp__DOT__a_dout_reg;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__read_data 
        = vlSelfRef.cache_system_tl_top__DOT__read_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__mem_read_data 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__read_data;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__refill_word_data 
        = (((0U == (0x1fU & ((VL_SHIFTL_III(9,9,32, 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__refill_word_idx)), 5U) 
                              - (IData)(1U)) - (IData)(0x1fU))))
             ? 0U : (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[
                     (((IData)(0x1fU) + (0x1ffU & (
                                                   (VL_SHIFTL_III(9,9,32, 
                                                                  ((IData)(1U) 
                                                                   + (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__refill_word_idx)), 5U) 
                                                    - (IData)(1U)) 
                                                   - (IData)(0x1fU)))) 
                      >> 5U)] << ((IData)(0x20U) - 
                                  (0x1fU & ((VL_SHIFTL_III(9,9,32, 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__refill_word_idx)), 5U) 
                                             - (IData)(1U)) 
                                            - (IData)(0x1fU)))))) 
           | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_data[
              (0xfU & (((VL_SHIFTL_III(9,9,32, ((IData)(1U) 
                                                + (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__refill_word_idx)), 5U) 
                         - (IData)(1U)) - (IData)(0x1fU)) 
                       >> 5U))] >> (0x1fU & ((VL_SHIFTL_III(9,9,32, 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__refill_word_idx)), 5U) 
                                              - (IData)(1U)) 
                                             - (IData)(0x1fU)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__counter_offset_inst__DOT__done_w 
        = ((0xfU == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__counter_offset_inst__DOT__counter)) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__read_ready));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__30(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__30\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__counter_wire 
        = (0xfU & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__counter_offset_inst__DOT__counter));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__31(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__31\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_n) {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT____Vcellinp__latency_counter__rst_n 
            = (0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_state));
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_done_keep 
            = vlSelfRef.__Vdly__cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_done_keep;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cur_state 
            = (1U & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__next_state));
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state 
            = (3U & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__next_state));
    } else {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT____Vcellinp__latency_counter__rst_n = 0U;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_done_keep 
            = vlSelfRef.__Vdly__cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_done_keep;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cur_state = 0U;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state = 0U;
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__latency_counter__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT____Vcellinp__latency_counter__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__counter_offset_inst__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cur_state;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__in_ready = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__compare_data = 0U;
    if ((0U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__in_ready = 1U;
        if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_valid) {
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__compare_data 
                = (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_addr 
                   >> 6U);
        }
    } else if ((1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
        if ((1U & (~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__trans_done_keep)))) {
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__compare_data 
                = (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__trans_in_addr 
                   >> 6U);
        }
    } else if ((2U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__compare_data 
            = (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__prev_addr 
               >> 6U);
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__compare_data_padded 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__compare_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__compare_data 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__compare_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__compare_data 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__compare_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__a_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__compare_data;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__32(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__32\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__busy_clk_l 
        = ((IData)(vlSelfRef.rst_n) && (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__cur_state));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_offset_inst__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__busy_clk_l;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_hd87f99a1_8_0 = (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__addr_i_reg 
                                                + VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_wire), 2U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT____VdfgRegularize_h5cc42551_0_0 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_offset_inst__DOT__done) 
           | ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__write_all)) 
              & (1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_wire))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_mem_done 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__rd_mem_counter__DOT__done) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_mem_happend));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__8(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT____VdfgRegularize_hdf092656_0_1;
    cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT____VdfgRegularize_hdf092656_0_1 = 0;
    CData/*3:0*/ cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT____Vcellinp__genblk1__DOT__priority_encoder_inst1__input_unencoded;
    cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT____Vcellinp__genblk1__DOT__priority_encoder_inst1__input_unencoded = 0;
    CData/*1:0*/ cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT____Vcellinp__genblk1__DOT__priority_encoder_inst1__input_unencoded;
    cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT____Vcellinp__genblk1__DOT__priority_encoder_inst1__input_unencoded = 0;
    CData/*1:0*/ cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT____Vcellinp__genblk1__DOT__priority_encoder_inst2__input_unencoded;
    cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT____Vcellinp__genblk1__DOT__priority_encoder_inst2__input_unencoded = 0;
    CData/*1:0*/ cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT____Vcellinp__genblk1__DOT__priority_encoder_inst1__input_unencoded;
    cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT____Vcellinp__genblk1__DOT__priority_encoder_inst1__input_unencoded = 0;
    CData/*1:0*/ cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT____Vcellinp__genblk1__DOT__priority_encoder_inst2__input_unencoded;
    cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT____Vcellinp__genblk1__DOT__priority_encoder_inst2__input_unencoded = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_66;
    __VdfgRegularize_hd87f99a1_0_66 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_67;
    __VdfgRegularize_hd87f99a1_0_67 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_68;
    __VdfgRegularize_hd87f99a1_0_68 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_69;
    __VdfgRegularize_hd87f99a1_0_69 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_70;
    __VdfgRegularize_hd87f99a1_0_70 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_71;
    __VdfgRegularize_hd87f99a1_0_71 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_72;
    __VdfgRegularize_hd87f99a1_0_72 = 0;
    // Body
    cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT____VdfgRegularize_hdf092656_0_1 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__latency_counter__DOT__done) 
           & (1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_state)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__mshr_fin_valid = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__mshr_fin_id 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__mshr_id_keep;
    __VdfgRegularize_hd87f99a1_0_66 = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT____VdfgRegularize_hdf092656_0_1) 
                                       & ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__valid_reg
                                           [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__current_set_idx] 
                                           >> 7U) & 
                                          (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__7__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data 
                                           == (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__addr_keep 
                                               >> 0xcU))));
    __VdfgRegularize_hd87f99a1_0_70 = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT____VdfgRegularize_hdf092656_0_1) 
                                       & ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__valid_reg
                                           [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__current_set_idx] 
                                           >> 3U) & 
                                          (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__3__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data 
                                           == (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__addr_keep 
                                               >> 0xcU))));
    __VdfgRegularize_hd87f99a1_0_68 = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT____VdfgRegularize_hdf092656_0_1) 
                                       & ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__valid_reg
                                           [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__current_set_idx] 
                                           >> 5U) & 
                                          (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__5__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data 
                                           == (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__addr_keep 
                                               >> 0xcU))));
    __VdfgRegularize_hd87f99a1_0_67 = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT____VdfgRegularize_hdf092656_0_1) 
                                       & ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__valid_reg
                                           [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__current_set_idx] 
                                           >> 6U) & 
                                          (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__6__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data 
                                           == (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__addr_keep 
                                               >> 0xcU))));
    __VdfgRegularize_hd87f99a1_0_71 = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT____VdfgRegularize_hdf092656_0_1) 
                                       & ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__valid_reg
                                           [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__current_set_idx] 
                                           >> 2U) & 
                                          (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__2__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data 
                                           == (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__addr_keep 
                                               >> 0xcU))));
    __VdfgRegularize_hd87f99a1_0_69 = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT____VdfgRegularize_hdf092656_0_1) 
                                       & ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__valid_reg
                                           [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__current_set_idx] 
                                           >> 4U) & 
                                          (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__4__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data 
                                           == (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__addr_keep 
                                               >> 0xcU))));
    __VdfgRegularize_hd87f99a1_0_72 = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT____VdfgRegularize_hdf092656_0_1) 
                                       & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__valid_reg
                                          [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__current_set_idx] 
                                          & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__0__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data 
                                             == (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__addr_keep 
                                                 >> 0xcU))));
    if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__cur_state) {
        if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__cur_state) {
            if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_accessed) {
                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__mshr_fin_valid = 1U;
                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__mshr_fin_id 
                    = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__mshr_id_keep;
            }
        }
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_fin_valid 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__mshr_fin_valid;
    } else {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_fin_valid 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__mshr_fin_valid;
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_fin_id 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__mshr_fin_id;
    cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT____Vcellinp__genblk1__DOT__priority_encoder_inst2__input_unencoded 
        = (((IData)(__VdfgRegularize_hd87f99a1_0_66) 
            << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_67));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded 
        = (1U & (~ (IData)(__VdfgRegularize_hd87f99a1_0_67)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded 
        = (1U & (~ (IData)(__VdfgRegularize_hd87f99a1_0_71)));
    cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT____Vcellinp__genblk1__DOT__priority_encoder_inst2__input_unencoded 
        = (((IData)(__VdfgRegularize_hd87f99a1_0_70) 
            << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_71));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded 
        = (1U & (~ (IData)(__VdfgRegularize_hd87f99a1_0_69)));
    cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT____Vcellinp__genblk1__DOT__priority_encoder_inst1__input_unencoded 
        = (((IData)(__VdfgRegularize_hd87f99a1_0_68) 
            << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_69));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded 
        = (1U & (~ (IData)(__VdfgRegularize_hd87f99a1_0_72)));
    cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT____Vcellinp__genblk1__DOT__priority_encoder_inst1__input_unencoded 
        = ((0xfffffffeU & (((IData)(cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT____VdfgRegularize_hdf092656_0_1) 
                            << 1U) & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__valid_reg
                                      [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__current_set_idx] 
                                      & ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__1__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data 
                                          == (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__addr_keep 
                                              >> 0xcU)) 
                                         << 1U)))) 
           | (IData)(__VdfgRegularize_hd87f99a1_0_72));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__fin_valid 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_fin_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__fin_id 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_fin_id;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst2__DOT__input_unencoded 
        = cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT____Vcellinp__genblk1__DOT__priority_encoder_inst2__input_unencoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid 
        = (0U != (IData)(cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT____Vcellinp__genblk1__DOT__priority_encoder_inst2__input_unencoded));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__out2 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_unencoded 
        = (3U & ((IData)(1U) << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__out2 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_unencoded 
        = (3U & ((IData)(1U) << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst2__DOT__input_unencoded 
        = cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT____Vcellinp__genblk1__DOT__priority_encoder_inst2__input_unencoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid 
        = (0U != (IData)(cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT____Vcellinp__genblk1__DOT__priority_encoder_inst2__input_unencoded));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__out1 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_unencoded 
        = (3U & ((IData)(1U) << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst1__DOT__input_unencoded 
        = cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT____Vcellinp__genblk1__DOT__priority_encoder_inst1__input_unencoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT__input_unencoded 
        = (((IData)(__VdfgRegularize_hd87f99a1_0_66) 
            << 3U) | (((IData)(__VdfgRegularize_hd87f99a1_0_67) 
                       << 2U) | (IData)(cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT____Vcellinp__genblk1__DOT__priority_encoder_inst1__input_unencoded)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid 
        = (0U != (IData)(cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT____Vcellinp__genblk1__DOT__priority_encoder_inst1__input_unencoded));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__out1 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_unencoded 
        = (3U & ((IData)(1U) << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst1__DOT__input_unencoded 
        = cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT____Vcellinp__genblk1__DOT__priority_encoder_inst1__input_unencoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid 
        = (0U != (IData)(cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT____Vcellinp__genblk1__DOT__priority_encoder_inst1__input_unencoded));
    cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT____Vcellinp__genblk1__DOT__priority_encoder_inst1__input_unencoded 
        = (((IData)(__VdfgRegularize_hd87f99a1_0_70) 
            << 3U) | (((IData)(__VdfgRegularize_hd87f99a1_0_71) 
                       << 2U) | (IData)(cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT____Vcellinp__genblk1__DOT__priority_encoder_inst1__input_unencoded)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__valid2 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__valid2 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__valid1 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid) 
           | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid)
            ? (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded)
            : (2U | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__valid1 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid) 
           | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid)
            ? (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded)
            : (2U | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT__input_unencoded 
        = cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT____Vcellinp__genblk1__DOT__priority_encoder_inst1__input_unencoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_hit 
        = ((((IData)(__VdfgRegularize_hd87f99a1_0_66) 
             << 7U) | ((IData)(__VdfgRegularize_hd87f99a1_0_67) 
                       << 6U)) | (((IData)(__VdfgRegularize_hd87f99a1_0_68) 
                                   << 5U) | (((IData)(__VdfgRegularize_hd87f99a1_0_69) 
                                              << 4U) 
                                             | (IData)(cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT____Vcellinp__genblk1__DOT__priority_encoder_inst1__input_unencoded))));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__valid2 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__out2 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_unencoded 
        = (0xfU & ((IData)(1U) << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__valid1 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__output_valid 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid) 
           | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__out1 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_unencoded 
        = (0xfU & ((IData)(1U) << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_hit_idx 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid)
            ? (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded)
            : (4U | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__input_unencoded 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_hit;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_strb = 0U;
    if ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_state))) {
        if ((1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_state))) {
            if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__tag_access_done) {
                if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_keep) {
                    if ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_hit))) {
                        if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write_through) {
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_strb 
                                = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_strb) 
                                   | (0xffffU & ((IData)(1U) 
                                                 << 
                                                 (0xfU 
                                                  & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__addr_keep 
                                                     >> 2U)))));
                        }
                    } else if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write_through) {
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_strb 
                            = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_strb) 
                               | (0xffffU & ((IData)(1U) 
                                             << (0xfU 
                                                 & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__addr_keep 
                                                    >> 2U)))));
                    } else if ((1U & (~ (IData)((0U 
                                                 != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_vld)))))) {
                        if ((1U & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__dirty_reg
                                   [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__current_set_idx] 
                                   >> (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_MRU)))) {
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_strb = 0xffffU;
                        }
                    }
                } else if ((1U & (~ (IData)((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_hit)))))) {
                    if ((1U & (~ (IData)((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_vld)))))) {
                        if ((1U & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__dirty_reg
                                   [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__current_set_idx] 
                                   >> (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_MRU)))) {
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_strb = 0xffffU;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_hit 
        = (0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_hit));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__output_encoded 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_hit_idx;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__output_unencoded 
        = (0xffU & ((IData)(1U) << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_hit_idx)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cache_write_strb 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_strb;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cache_hit 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_hit;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__ib_valid 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_hit;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fsm_hit 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_hit;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__fsm_hit 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_hit;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__miss_trigger = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_mem 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_cam_done) 
           & (((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_hit)) 
               | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_rw)) 
              & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__mshr_fin_is_hit = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__out_addr = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_addr = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__out_opcode = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__out_source = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_valid = 0U;
    if ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
        if ((1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
            if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__trans_done_keep) {
                if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_rd_cam_happend) {
                    if ((1U & ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match)) 
                               | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__not_match_keep)))) {
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_addr 
                            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__trans_in_addr;
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_valid 
                            = (1U & (~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__read)));
                    }
                }
            }
        } else if ((2U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
            if (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_cam_done) 
                 & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_accessed) 
                    | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cache_access_keep)))) {
                if ((1U & (~ ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_keep) 
                              & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match))))) {
                    if ((1U & (~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_hit)))) {
                        if ((1U & (~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match)))) {
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_addr 
                                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__prev_addr;
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_valid = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__out_valid = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_hit) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_rw));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__cache_write_strb 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cache_write_strb;
    if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__cur_state) {
        if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__cur_state) {
            if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_accessed) {
                if ((1U & (~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_hit)))) {
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__miss_trigger = 1U;
                }
                if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_hit) {
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__mshr_fin_is_hit = 1U;
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__out_addr 
                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__addr_keep;
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__out_opcode 
                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__opcode_keep;
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__out_source 
                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__source_keep;
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__out_valid = 1U;
                } else {
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__mshr_fin_is_hit = 0U;
                }
            }
        }
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__miss_trigger 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__miss_trigger;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_mem_edge__DOT__signal_in 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_mem;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_fin_is_hit 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__mshr_fin_is_hit;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_out_addr 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__out_addr;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_addr 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_addr;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_out_opcode 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__out_opcode;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_out_source 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__out_source;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_valid 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_valid;
    } else {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__miss_trigger 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__miss_trigger;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_mem_edge__DOT__signal_in 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_mem;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_fin_is_hit 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__mshr_fin_is_hit;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_out_addr 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__out_addr;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_addr 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_addr;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_out_opcode 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__out_opcode;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_out_source 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__out_source;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_valid 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_valid;
    }
    if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__out_valid) {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_out_valid = 1U;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__hit_out_valid = 1U;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__out_addr 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__out_addr;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__out_source 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__out_source;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__out_opcode 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__out_opcode;
    } else {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_out_valid = 0U;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__hit_out_valid = 0U;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__out_addr 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_addr;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__out_source 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_source;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__out_opcode 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_opcode;
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__out_valid 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__out_valid) 
           | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_valid));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_out_ready 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__out_valid) 
           & (IData)(vlSelfRef.d_ready));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_deq_ready 
        = ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__out_valid)) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_valid) 
              & (IData)(vlSelfRef.d_ready)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__fin_is_hit 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_fin_is_hit;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_valid 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_valid;
    vlSelfRef.cache_system_tl_top__DOT__core_out_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__out_addr;
    vlSelfRef.d_valid = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__out_valid;
    vlSelfRef.cache_system_tl_top__DOT__d_valid = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__out_valid;
    vlSelfRef.cache_system_tl_top__DOT__core_out_valid 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__out_valid;
    vlSelfRef.d_source = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__out_source;
    vlSelfRef.cache_system_tl_top__DOT__d_source = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__out_source;
    vlSelfRef.cache_system_tl_top__DOT__core_out_source 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__out_source;
    vlSelfRef.cache_system_tl_top__DOT__core_out_opcode 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__out_opcode;
    vlSelfRef.cache_system_tl_top__DOT__d_opcode = 
        ((4U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__out_opcode))
          ? 1U : 0U);
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__out_ready 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_out_ready;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__ib_ready = 0U;
    if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__cur_state) {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__next_state = 1U;
        if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__cur_state) {
            if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_accessed) {
                if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_hit) {
                    if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_out_ready) {
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__ib_ready = 1U;
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__next_state = 0U;
                    } else {
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__ib_ready = 0U;
                    }
                } else {
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__next_state = 0U;
                }
            }
        } else {
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__next_state = 0U;
        }
    } else {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__next_state = 0U;
        if (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_do_alloc) 
             & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_ready))) {
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__next_state = 1U;
        }
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_ready 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_deq_ready;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_fire 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_deq_ready) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_valid));
    vlSelfRef.d_opcode = vlSelfRef.cache_system_tl_top__DOT__d_opcode;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_active_d 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_active_q;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_ptr_d 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_ptr_q;
    if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_done_pulse) {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_active_d = 1U;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_ptr_d 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__miss_mshr_id;
    } else if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_fire) {
        if ((1U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__next_table) 
                   >> (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_ptr_q)))) {
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_active_d = 1U;
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_ptr_d 
                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__next_index
                [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_ptr_q];
        } else {
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_active_d = 0U;
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__9(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_2_0;
    cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_2_0 = 0;
    CData/*0:0*/ cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_2_1;
    cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_2_1 = 0;
    CData/*0:0*/ cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_2_2;
    cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_2_2 = 0;
    CData/*0:0*/ cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_2_3;
    cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_2_3 = 0;
    // Body
    cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_2_0 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__new_req) 
           & (0U != (3U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__lifetime) 
                           >> 6U))));
    cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_2_1 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__new_req) 
           & (0U != (3U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__lifetime) 
                           >> 4U))));
    cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_2_2 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__new_req) 
           & (0U != (3U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__lifetime) 
                           >> 2U))));
    cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_2_3 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__new_req) 
           & (0U != (3U & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__lifetime))));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__trans_valid = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__trans_out_addr = 0U;
    if ((0U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
        if ((1U & (~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_valid)))) {
            if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty) {
                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__trans_valid = 1U;
                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__trans_out_addr 
                    = ((IData)(0x40U) + vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__prev_addr);
            }
        }
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__stream_counter__start 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_2_0) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_pf__DOT__data));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__stream_counter__start 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_2_1) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_pf__DOT__data));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__stream_counter__start 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_2_2) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_pf__DOT__data));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__start 
        = ((((IData)(cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_2_0) 
             << 3U) | ((IData)(cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_2_1) 
                       << 2U)) | (((IData)(cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_2_2) 
                                   << 1U) | (IData)(cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_2_3)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__stream_counter__start 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_2_3) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_pf__DOT__data));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__trans_valid 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__trans_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__trans_out_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__trans_out_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__rand_fill_engine__DOT__add_addr 
        = (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__trans_out_addr 
           + ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__rng_val) 
              & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_h_b__DOT__data)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__genblk1__BRA__0__KET____DOT__stream_counter__DOT__start 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__stream_counter__start;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__genblk1__BRA__0__KET____DOT__stream_counter__DOT__done_w 
        = ((3U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__genblk1__BRA__0__KET____DOT__stream_counter__DOT__counter)) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__stream_counter__start));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__genblk1__BRA__1__KET____DOT__stream_counter__DOT__start 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__stream_counter__start;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__genblk1__BRA__1__KET____DOT__stream_counter__DOT__done_w 
        = ((3U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__genblk1__BRA__1__KET____DOT__stream_counter__DOT__counter)) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__stream_counter__start));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__genblk1__BRA__2__KET____DOT__stream_counter__DOT__start 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__stream_counter__start;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__genblk1__BRA__2__KET____DOT__stream_counter__DOT__done_w 
        = ((3U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__genblk1__BRA__2__KET____DOT__stream_counter__DOT__counter)) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__stream_counter__start));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__genblk1__BRA__3__KET____DOT__stream_counter__DOT__start 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__stream_counter__start;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__genblk1__BRA__3__KET____DOT__stream_counter__DOT__done_w 
        = ((3U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__genblk1__BRA__3__KET____DOT__stream_counter__DOT__counter)) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__stream_counter__start));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__in_valid 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__trans_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__in_raw_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__trans_out_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__rand_fill_engine__DOT__cal_addr 
        = (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__rand_fill_engine__DOT__add_addr 
           + VL_EXTENDS_II(32,4, (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_b__DOT__data)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__rand_fill_engine__DOT__valid 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__in_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__rand_fill_engine__DOT__addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__in_raw_addr;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__10(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_wr_cam 
        = (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_done_keep) 
            | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_done)) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_erase_done));
    if ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
        if ((1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
            if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__trans_done_keep) {
                if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_rd_cam_happend) {
                    if ((1U & ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match)) 
                               | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__not_match_keep)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_done) 
                                      | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_done_keep))))) {
                            if ((1U & (~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_erase_done)))) {
                                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_delete = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_wr_cam_edge__DOT__signal_in 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_wr_cam;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_delete_next 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_delete_reg;
    if ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
        if ((1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_delete_next 
                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_delete;
        }
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__write_delete 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_delete;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_delete 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__write_delete;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__11(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__11\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cur_state) {
        if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cur_state) {
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__mem_read_o_valid 
                = (1U & (~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__counter_done)));
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__mem_read_o_addr 
                = (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__addr_i_reg 
                   + VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__counter_wire), 2U));
        }
    } else {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__mem_read_o_valid = 0U;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__mem_read_o_addr = 0U;
    }
    vlSelfRef.cache_system_tl_top__DOT__read_valid 
        = ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__counter_offset_inst__DOT__done)) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__mem_read_o_valid));
    if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__counter_offset_inst__DOT__done) {
        vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__r_addr = 0U;
        vlSelfRef.cache_system_tl_top__DOT__read_addr = 0U;
    } else {
        vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__r_addr 
            = (0xffffU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__mem_read_o_addr 
                          >> 2U));
        vlSelfRef.cache_system_tl_top__DOT__read_addr 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__mem_read_o_addr;
    }
    vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__read_valid 
        = vlSelfRef.cache_system_tl_top__DOT__read_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__read_valid 
        = vlSelfRef.cache_system_tl_top__DOT__read_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__mem_read_valid 
        = vlSelfRef.cache_system_tl_top__DOT__read_valid;
    vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__main_mem_dp__DOT__a_addr 
        = vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__r_addr;
    vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__read_addr 
        = vlSelfRef.cache_system_tl_top__DOT__read_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__read_addr 
        = vlSelfRef.cache_system_tl_top__DOT__read_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__mem_read_addr 
        = vlSelfRef.cache_system_tl_top__DOT__read_addr;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__12(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__12\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_enable = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_data = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_data = 0U;
    if ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
        if ((1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
            if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__trans_done_keep) {
                if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_rd_cam_happend) {
                    if ((1U & ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match)) 
                               | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__not_match_keep)))) {
                        if (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_done) 
                             | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_done_keep))) {
                            if ((1U & (~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_wr_cam_done)))) {
                                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_enable = 1U;
                                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_data 
                                    = (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__trans_in_addr 
                                       >> 6U);
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__write_enable 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_enable;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_next = 1U;
    if ((0U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_next 
            = ((0U == vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__count_reg)
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_next 
            = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_enable)
                ? 2U : 1U);
    } else if ((2U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_next = 3U;
    } else if ((3U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_next 
            = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_delete_reg)
                ? 1U : 4U);
    } else if ((4U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_next = 5U;
    } else if ((5U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_next = 1U;
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__write_data 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_data_padded 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_enable 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__write_enable;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_data 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__write_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_data_padded_next 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_data_padded_reg;
    if ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
        if ((1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_data_padded_next 
                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_data_padded;
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__13(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__13\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_addr = 0U;
    if ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
        if ((1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
            if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__trans_done_keep) {
                if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_rd_cam_happend) {
                    if ((1U & ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match)) 
                               | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__not_match_keep)))) {
                        if (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_done) 
                             | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_done_keep))) {
                            if ((1U & (~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_wr_cam_done)))) {
                                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_addr 
                                    = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_idx;
                            }
                        } else if ((1U & (~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_erase_done)))) {
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_addr 
                                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_idx;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_addr_next 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_addr_reg;
    if ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
        if ((1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_addr_next 
                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_addr;
        }
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__write_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__clear_bit = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__set_bit = 0U;
    if ((0U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__clear_bit = 0xfU;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__set_bit = 0U;
    } else if ((1U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
        if ((2U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
            if ((3U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__clear_bit 
                    = (0xfU & ((IData)(1U) << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_addr)));
            }
            if ((3U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
                if ((4U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
                    if ((5U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__set_bit 
                            = (0xfU & ((IData)(1U) 
                                       << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_addr)));
                    }
                }
            }
        }
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__write_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__b_din 
        = (((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__clear_bit)) 
            & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__b_dout_reg)) 
           | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__set_bit));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__33(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__33\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__cur_state 
        = ((IData)(vlSelfRef.rst_n) ? (1U & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__next_state))
            : 0U);
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__14(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__14\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_step 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__write_all)
            ? (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__busy_clk_l)
            : (IData)(vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__write_ready));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_offset_inst__DOT__start 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_step;
}

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h93e1b771_0;

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__16(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__16\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__wren = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[0U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[1U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[2U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[3U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[4U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[5U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[6U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[7U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[8U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[9U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[0xaU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[0xbU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[0xcU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[0xdU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[0xeU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[0xfU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
    if ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
        if ((1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
            if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__trans_done_keep) {
                if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_rd_cam_happend) {
                    if ((1U & ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match)) 
                               | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__not_match_keep)))) {
                        if (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_done) 
                             | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_done_keep))) {
                            if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_wr_cam_done) {
                                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__wren = 1U;
                                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[0U] 
                                    = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__buffer_data[0U];
                                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[1U] 
                                    = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__buffer_data[1U];
                                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[2U] 
                                    = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__buffer_data[2U];
                                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[3U] 
                                    = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__buffer_data[3U];
                                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[4U] 
                                    = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__buffer_data[4U];
                                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[5U] 
                                    = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__buffer_data[5U];
                                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[6U] 
                                    = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__buffer_data[6U];
                                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[7U] 
                                    = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__buffer_data[7U];
                                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[8U] 
                                    = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__buffer_data[8U];
                                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[9U] 
                                    = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__buffer_data[9U];
                                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[0xaU] 
                                    = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__buffer_data[0xaU];
                                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[0xbU] 
                                    = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__buffer_data[0xbU];
                                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[0xcU] 
                                    = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__buffer_data[0xcU];
                                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[0xdU] 
                                    = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__buffer_data[0xdU];
                                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[0xeU] 
                                    = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__buffer_data[0xeU];
                                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[0xfU] 
                                    = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__buffer_data[0xfU];
                            }
                        }
                    }
                }
            }
        } else if ((2U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
            if (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_cam_done) 
                 & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_accessed) 
                    | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cache_access_keep)))) {
                if (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_keep) 
                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match))) {
                    if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_mem_done) {
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__wren = 1U;
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[0U] 
                            = ((0U == (0xfU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__prev_addr 
                                               >> 2U)))
                                ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__in_data_keep
                                : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[0U]);
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[1U] 
                            = ((1U == (0xfU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__prev_addr 
                                               >> 2U)))
                                ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__in_data_keep
                                : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[1U]);
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[2U] 
                            = ((2U == (0xfU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__prev_addr 
                                               >> 2U)))
                                ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__in_data_keep
                                : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[2U]);
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[3U] 
                            = ((3U == (0xfU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__prev_addr 
                                               >> 2U)))
                                ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__in_data_keep
                                : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[3U]);
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[4U] 
                            = ((4U == (0xfU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__prev_addr 
                                               >> 2U)))
                                ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__in_data_keep
                                : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[4U]);
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[5U] 
                            = ((5U == (0xfU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__prev_addr 
                                               >> 2U)))
                                ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__in_data_keep
                                : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[5U]);
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[6U] 
                            = ((6U == (0xfU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__prev_addr 
                                               >> 2U)))
                                ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__in_data_keep
                                : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[6U]);
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[7U] 
                            = ((7U == (0xfU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__prev_addr 
                                               >> 2U)))
                                ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__in_data_keep
                                : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[7U]);
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[8U] 
                            = ((8U == (0xfU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__prev_addr 
                                               >> 2U)))
                                ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__in_data_keep
                                : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[8U]);
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[9U] 
                            = ((9U == (0xfU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__prev_addr 
                                               >> 2U)))
                                ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__in_data_keep
                                : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[9U]);
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[0xaU] 
                            = ((0xaU == (0xfU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__prev_addr 
                                                 >> 2U)))
                                ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__in_data_keep
                                : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[0xaU]);
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[0xbU] 
                            = ((0xbU == (0xfU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__prev_addr 
                                                 >> 2U)))
                                ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__in_data_keep
                                : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[0xbU]);
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[0xcU] 
                            = ((0xcU == (0xfU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__prev_addr 
                                                 >> 2U)))
                                ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__in_data_keep
                                : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[0xcU]);
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[0xdU] 
                            = ((0xdU == (0xfU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__prev_addr 
                                                 >> 2U)))
                                ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__in_data_keep
                                : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[0xdU]);
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[0xeU] 
                            = ((0xeU == (0xfU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__prev_addr 
                                                 >> 2U)))
                                ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__in_data_keep
                                : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[0xeU]);
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[0xfU] 
                            = ((0xfU == (0xfU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__prev_addr 
                                                 >> 2U)))
                                ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__in_data_keep
                                : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[0xfU]);
                    }
                }
            }
        }
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__wren 
        = (QData)((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__wren));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__in_data[0U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[0U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__in_data[1U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[1U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__in_data[2U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[2U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__in_data[3U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[3U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__in_data[4U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[4U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__in_data[5U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[5U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__in_data[6U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[6U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__in_data[7U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[7U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__in_data[8U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[8U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__in_data[9U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[9U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__in_data[0xaU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[0xaU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__in_data[0xbU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[0xbU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__in_data[0xcU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[0xcU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__in_data[0xdU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[0xdU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__in_data[0xeU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[0xeU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__in_data[0xfU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_in_data[0xfU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__wea 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__wren;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina[0U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__in_data[0U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina[1U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__in_data[1U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina[2U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__in_data[2U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina[3U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__in_data[3U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina[4U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__in_data[4U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina[5U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__in_data[5U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina[6U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__in_data[6U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina[7U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__in_data[7U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina[8U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__in_data[8U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina[9U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__in_data[9U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina[0xaU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__in_data[0xaU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina[0xbU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__in_data[0xbU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina[0xcU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__in_data[0xcU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina[0xdU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__in_data[0xdU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina[0xeU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__in_data[0xeU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina[0xfU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__in_data[0xfU];
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__17(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__17\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__en = 0U;
    if ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
        if ((1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
            if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__trans_done_keep) {
                if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_rd_cam_happend) {
                    if ((1U & ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match)) 
                               | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__not_match_keep)))) {
                        if (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_done) 
                             | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_done_keep))) {
                            if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_wr_cam_done) {
                                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__en = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((2U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
            if (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_cam_done) 
                 & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_accessed) 
                    | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cache_access_keep)))) {
                if (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_keep) 
                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match))) {
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__en = 1U;
                } else if ((1U & (~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_hit)))) {
                    if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match) {
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__en = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__en 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__en;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ena 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__en;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__18(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__18\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_addr = 0U;
    if ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
        if ((1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
            if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__trans_done_keep) {
                if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_rd_cam_happend) {
                    if ((1U & ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match)) 
                               | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__not_match_keep)))) {
                        if (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_done) 
                             | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_done_keep))) {
                            if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_wr_cam_done) {
                                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_addr 
                                    = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_idx;
                            }
                        }
                    }
                }
            }
        } else if ((2U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
            if (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_cam_done) 
                 & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_accessed) 
                    | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cache_access_keep)))) {
                if (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_keep) 
                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match))) {
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_addr 
                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match_addr;
                } else if ((1U & (~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_hit)))) {
                    if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match) {
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_addr 
                            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match_addr;
                    }
                }
            }
        }
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__in_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__addra 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__in_addr;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__19(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__19\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__next_state 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state;
    if ((0U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
        if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_valid) {
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__next_state = 2U;
        } else if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty) {
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__next_state = 1U;
        }
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_cam 
            = (2U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__next_state));
    } else {
        if ((1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
            if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__trans_done_keep) {
                if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_rd_cam_happend) {
                    if ((1U & ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match)) 
                               | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__not_match_keep)))) {
                        if (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_done) 
                             | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_done_keep))) {
                            if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_wr_cam_done) {
                                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__next_state = 0U;
                            }
                        }
                    } else {
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__next_state = 0U;
                    }
                }
            }
        } else if ((2U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
            if (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_cam_done) 
                 & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_accessed) 
                    | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cache_access_keep)))) {
                if (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_keep) 
                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match))) {
                    if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_mem_done) {
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__next_state = 0U;
                    }
                } else if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_hit) {
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__next_state = 0U;
                } else if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match) {
                    if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_mem_done) {
                        if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__return_ready) {
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__next_state = 0U;
                        }
                    }
                } else if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_ready) {
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__next_state = 3U;
                }
            }
        } else if ((3U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
            if (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_done) 
                 | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_done_keep))) {
                if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__return_ready) {
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__next_state = 0U;
                }
            }
        }
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_cam = 0U;
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_cam_edge__DOT__signal_in 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_cam;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__20(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__20\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[1U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[2U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[3U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[4U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[5U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[6U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[7U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[8U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[9U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xaU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xbU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xcU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xdU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xeU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xfU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
    if ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
        if ((1U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
            if ((2U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
                if (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_cam_done) 
                     & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_accessed) 
                        | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cache_access_keep)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_keep) 
                                  & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match))))) {
                        if ((1U & (~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_hit)))) {
                            if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match) {
                                if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_mem_done) {
                                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0U] 
                                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[0U];
                                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[1U] 
                                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[1U];
                                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[2U] 
                                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[2U];
                                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[3U] 
                                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[3U];
                                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[4U] 
                                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[4U];
                                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[5U] 
                                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[5U];
                                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[6U] 
                                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[6U];
                                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[7U] 
                                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[7U];
                                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[8U] 
                                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[8U];
                                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[9U] 
                                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[9U];
                                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xaU] 
                                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[0xaU];
                                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xbU] 
                                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[0xbU];
                                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xcU] 
                                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[0xcU];
                                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xdU] 
                                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[0xdU];
                                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xeU] 
                                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[0xeU];
                                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xfU] 
                                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[0xfU];
                                }
                            }
                        }
                    }
                }
            } else if ((3U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
                if (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_done) 
                     | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_done_keep))) {
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0U] 
                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[0U];
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[1U] 
                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[1U];
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[2U] 
                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[2U];
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[3U] 
                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[3U];
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[4U] 
                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[4U];
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[5U] 
                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[5U];
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[6U] 
                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[6U];
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[7U] 
                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[7U];
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[8U] 
                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[8U];
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[9U] 
                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[9U];
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xaU] 
                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[0xaU];
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xbU] 
                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[0xbU];
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xcU] 
                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[0xcU];
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xdU] 
                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[0xdU];
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xeU] 
                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[0xeU];
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xfU] 
                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_data[0xfU];
                }
            }
        }
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__return_data[0U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__return_data[1U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[1U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__return_data[2U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[2U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__return_data[3U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[3U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__return_data[4U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[4U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__return_data[5U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[5U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__return_data[6U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[6U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__return_data[7U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[7U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__return_data[8U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[8U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__return_data[9U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[9U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__return_data[0xaU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xaU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__return_data[0xbU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xbU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__return_data[0xcU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xcU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__return_data[0xdU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xdU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__return_data[0xeU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xeU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__return_data[0xfU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xfU];
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 = (0xffU 
                                                & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                    & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__15__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en))
                                                    ? 
                                                   (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                    >> 0x18U)
                                                    : 
                                                   ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                     ? 
                                                    ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xfU] 
                                                      << 8U) 
                                                     | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xfU] 
                                                        >> 0x18U))
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__15__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en)
                                                      ? 
                                                     (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                      >> 0x18U)
                                                      : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 = (0xffU 
                                                & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                    & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__15__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en))
                                                    ? 
                                                   (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                    >> 0x10U)
                                                    : 
                                                   ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                     ? 
                                                    ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xfU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xfU] 
                                                        >> 0x10U))
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__15__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en)
                                                      ? 
                                                     (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                      >> 0x10U)
                                                      : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_2 = (0xffU 
                                                & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                    & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__15__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en))
                                                    ? 
                                                   (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                    >> 8U)
                                                    : 
                                                   ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                     ? 
                                                    ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xfU] 
                                                      << 0x18U) 
                                                     | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xfU] 
                                                        >> 8U))
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__15__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en)
                                                      ? 
                                                     (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                      >> 8U)
                                                      : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_3 = (0xffU 
                                                & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                    & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__15__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en))
                                                    ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data
                                                    : 
                                                   ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                     ? 
                                                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xfU]
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__15__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en)
                                                      ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data
                                                      : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_4 = (0xffU 
                                                & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                    & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__14__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en))
                                                    ? 
                                                   (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                    >> 0x18U)
                                                    : 
                                                   ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                     ? 
                                                    ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xeU] 
                                                      << 8U) 
                                                     | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xeU] 
                                                        >> 0x18U))
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__14__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en)
                                                      ? 
                                                     (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                      >> 0x18U)
                                                      : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_5 = (0xffU 
                                                & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                    & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__14__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en))
                                                    ? 
                                                   (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                    >> 0x10U)
                                                    : 
                                                   ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                     ? 
                                                    ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xeU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xeU] 
                                                        >> 0x10U))
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__14__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en)
                                                      ? 
                                                     (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                      >> 0x10U)
                                                      : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_6 = (0xffU 
                                                & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                    & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__14__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en))
                                                    ? 
                                                   (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                    >> 8U)
                                                    : 
                                                   ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                     ? 
                                                    ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xeU] 
                                                      << 0x18U) 
                                                     | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xeU] 
                                                        >> 8U))
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__14__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en)
                                                      ? 
                                                     (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                      >> 8U)
                                                      : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_7 = (0xffU 
                                                & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                    & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__14__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en))
                                                    ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data
                                                    : 
                                                   ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                     ? 
                                                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xeU]
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__14__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en)
                                                      ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data
                                                      : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_8 = (0xffU 
                                                & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                    & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__13__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en))
                                                    ? 
                                                   (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                    >> 0x18U)
                                                    : 
                                                   ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                     ? 
                                                    ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xdU] 
                                                      << 8U) 
                                                     | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xdU] 
                                                        >> 0x18U))
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__13__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en)
                                                      ? 
                                                     (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                      >> 0x18U)
                                                      : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_9 = (0xffU 
                                                & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                    & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__13__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en))
                                                    ? 
                                                   (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                    >> 0x10U)
                                                    : 
                                                   ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                     ? 
                                                    ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xdU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xdU] 
                                                        >> 0x10U))
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__13__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en)
                                                      ? 
                                                     (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                      >> 0x10U)
                                                      : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_10 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__13__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                     >> 8U)
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xdU] 
                                                       << 0x18U) 
                                                      | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xdU] 
                                                         >> 8U))
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__13__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                       >> 8U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_11 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__13__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en))
                                                     ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xdU]
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__13__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en)
                                                       ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_12 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__12__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                     >> 0x18U)
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xcU] 
                                                       << 8U) 
                                                      | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xcU] 
                                                         >> 0x18U))
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__12__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                       >> 0x18U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_13 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__12__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                     >> 0x10U)
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xcU] 
                                                       << 0x10U) 
                                                      | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xcU] 
                                                         >> 0x10U))
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__12__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                       >> 0x10U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_14 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__12__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                     >> 8U)
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xcU] 
                                                       << 0x18U) 
                                                      | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xcU] 
                                                         >> 8U))
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__12__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                       >> 8U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_15 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__12__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en))
                                                     ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xcU]
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__12__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en)
                                                       ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_16 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__11__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                     >> 0x18U)
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xbU] 
                                                       << 8U) 
                                                      | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xbU] 
                                                         >> 0x18U))
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__11__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                       >> 0x18U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_17 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__11__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                     >> 0x10U)
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xbU] 
                                                       << 0x10U) 
                                                      | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xbU] 
                                                         >> 0x10U))
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__11__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                       >> 0x10U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_18 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__11__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                     >> 8U)
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xbU] 
                                                       << 0x18U) 
                                                      | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xbU] 
                                                         >> 8U))
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__11__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                       >> 8U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_19 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__11__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en))
                                                     ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xbU]
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__11__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en)
                                                       ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_20 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__10__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                     >> 0x18U)
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xaU] 
                                                       << 8U) 
                                                      | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xaU] 
                                                         >> 0x18U))
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__10__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                       >> 0x18U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_21 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__10__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                     >> 0x10U)
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xaU] 
                                                       << 0x10U) 
                                                      | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xaU] 
                                                         >> 0x10U))
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__10__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                       >> 0x10U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_22 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__10__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                     >> 8U)
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xaU] 
                                                       << 0x18U) 
                                                      | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xaU] 
                                                         >> 8U))
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__10__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                       >> 8U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_23 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__10__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en))
                                                     ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0xaU]
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__10__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en)
                                                       ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_24 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__9__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                     >> 0x18U)
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[9U] 
                                                       << 8U) 
                                                      | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[9U] 
                                                         >> 0x18U))
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__9__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                       >> 0x18U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_25 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__9__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                     >> 0x10U)
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[9U] 
                                                       << 0x10U) 
                                                      | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[9U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__9__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                       >> 0x10U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_26 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__9__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                     >> 8U)
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[9U] 
                                                       << 0x18U) 
                                                      | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[9U] 
                                                         >> 8U))
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__9__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                       >> 8U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_27 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__9__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en))
                                                     ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[9U]
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__9__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en)
                                                       ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_28 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__8__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                     >> 0x18U)
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[8U] 
                                                       << 8U) 
                                                      | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[8U] 
                                                         >> 0x18U))
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__8__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                       >> 0x18U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_29 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__8__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                     >> 0x10U)
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[8U] 
                                                       << 0x10U) 
                                                      | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[8U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__8__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                       >> 0x10U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_30 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__8__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                     >> 8U)
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[8U] 
                                                       << 0x18U) 
                                                      | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[8U] 
                                                         >> 8U))
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__8__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                       >> 8U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_31 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__8__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en))
                                                     ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[8U]
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__8__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en)
                                                       ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_32 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__7__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                     >> 0x18U)
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[7U] 
                                                       << 8U) 
                                                      | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[7U] 
                                                         >> 0x18U))
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__7__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                       >> 0x18U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_33 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__7__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                     >> 0x10U)
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[7U] 
                                                       << 0x10U) 
                                                      | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[7U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__7__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                       >> 0x10U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_34 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__7__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                     >> 8U)
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[7U] 
                                                       << 0x18U) 
                                                      | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[7U] 
                                                         >> 8U))
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__7__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                       >> 8U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_35 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__7__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en))
                                                     ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[7U]
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__7__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en)
                                                       ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_36 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__6__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                     >> 0x18U)
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[6U] 
                                                       << 8U) 
                                                      | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[6U] 
                                                         >> 0x18U))
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__6__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                       >> 0x18U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_37 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__6__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                     >> 0x10U)
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[6U] 
                                                       << 0x10U) 
                                                      | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[6U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__6__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                       >> 0x10U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_38 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__6__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                     >> 8U)
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[6U] 
                                                       << 0x18U) 
                                                      | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[6U] 
                                                         >> 8U))
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__6__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                       >> 8U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_39 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__6__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en))
                                                     ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[6U]
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__6__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en)
                                                       ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_40 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__5__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                     >> 0x18U)
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[5U] 
                                                       << 8U) 
                                                      | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[5U] 
                                                         >> 0x18U))
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__5__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                       >> 0x18U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_41 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__5__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                     >> 0x10U)
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[5U] 
                                                       << 0x10U) 
                                                      | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[5U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__5__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                       >> 0x10U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_42 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__5__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                     >> 8U)
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[5U] 
                                                       << 0x18U) 
                                                      | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[5U] 
                                                         >> 8U))
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__5__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                       >> 8U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_43 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__5__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en))
                                                     ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[5U]
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__5__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en)
                                                       ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_44 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__4__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                     >> 0x18U)
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[4U] 
                                                       << 8U) 
                                                      | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[4U] 
                                                         >> 0x18U))
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__4__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                       >> 0x18U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_45 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__4__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                     >> 0x10U)
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[4U] 
                                                       << 0x10U) 
                                                      | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[4U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__4__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                       >> 0x10U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_46 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__4__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                     >> 8U)
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[4U] 
                                                       << 0x18U) 
                                                      | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[4U] 
                                                         >> 8U))
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__4__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                       >> 8U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_47 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__4__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en))
                                                     ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[4U]
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__4__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en)
                                                       ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_48 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__3__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                     >> 0x18U)
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[3U] 
                                                       << 8U) 
                                                      | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[3U] 
                                                         >> 0x18U))
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__3__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                       >> 0x18U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_49 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__3__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                     >> 0x10U)
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[3U] 
                                                       << 0x10U) 
                                                      | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[3U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__3__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                       >> 0x10U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_50 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__3__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                     >> 8U)
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[3U] 
                                                       << 0x18U) 
                                                      | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[3U] 
                                                         >> 8U))
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__3__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                       >> 8U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_51 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__3__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en))
                                                     ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[3U]
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__3__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en)
                                                       ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_52 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__2__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                     >> 0x18U)
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[2U] 
                                                       << 8U) 
                                                      | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[2U] 
                                                         >> 0x18U))
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__2__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                       >> 0x18U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_53 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__2__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                     >> 0x10U)
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[2U] 
                                                       << 0x10U) 
                                                      | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[2U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__2__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                       >> 0x10U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_54 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__2__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                     >> 8U)
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[2U] 
                                                       << 0x18U) 
                                                      | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[2U] 
                                                         >> 8U))
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__2__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                       >> 8U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_55 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__2__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en))
                                                     ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[2U]
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__2__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en)
                                                       ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_56 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__1__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                     >> 0x18U)
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[1U] 
                                                       << 8U) 
                                                      | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[1U] 
                                                         >> 0x18U))
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__1__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                       >> 0x18U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_57 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__1__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                     >> 0x10U)
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[1U] 
                                                       << 0x10U) 
                                                      | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[1U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__1__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                       >> 0x10U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_58 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__1__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                     >> 8U)
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[1U] 
                                                       << 0x18U) 
                                                      | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[1U] 
                                                         >> 8U))
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__1__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                       >> 8U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_59 = (0xffU 
                                                 & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__1__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en))
                                                     ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[1U]
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__1__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en)
                                                       ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_73 = (((
                                                   (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__0__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                     >> 0x18U)
                                                     : 
                                                    ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0U] 
                                                       << 8U) 
                                                      | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0U] 
                                                         >> 0x18U))
                                                      : 
                                                     ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__0__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                       >> 0x18U)
                                                       : 0U))) 
                                                   << 0x18U) 
                                                  | (0xff0000U 
                                                     & ((((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                          & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__0__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en))
                                                          ? 
                                                         (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                          >> 0x10U)
                                                          : 
                                                         ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                           ? 
                                                          ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0U] 
                                                            << 0x10U) 
                                                           | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0U] 
                                                              >> 0x10U))
                                                           : 
                                                          ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__0__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en)
                                                            ? 
                                                           (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                            >> 0x10U)
                                                            : 0U))) 
                                                        << 0x10U))) 
                                                 | ((0xff00U 
                                                     & ((((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                          & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__0__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en))
                                                          ? 
                                                         (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                          >> 8U)
                                                          : 
                                                         ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                           ? 
                                                          ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0U] 
                                                            << 0x18U) 
                                                           | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0U] 
                                                              >> 8U))
                                                           : 
                                                          ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__0__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en)
                                                            ? 
                                                           (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                                                            >> 8U)
                                                            : 0U))) 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
                                                           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__0__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en))
                                                           ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data
                                                           : 
                                                          ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                            ? 
                                                           vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_data[0U]
                                                            : 
                                                           ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__0__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en)
                                                             ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data
                                                             : 0U))))));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__data[0U] 
        = (IData)((((QData)((IData)(((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_56) 
                                       << 0x18U) | 
                                      ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_57) 
                                       << 0x10U)) | 
                                     (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_58) 
                                       << 8U) | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_59))))) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_73))));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__data[1U] 
        = (IData)(((((QData)((IData)(((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_56) 
                                        << 0x18U) | 
                                       ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_57) 
                                        << 0x10U)) 
                                      | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_58) 
                                          << 8U) | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_59))))) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_73))) 
                   >> 0x20U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__data[2U] 
        = (IData)((((QData)((IData)(((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_48) 
                                       << 0x18U) | 
                                      ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_49) 
                                       << 0x10U)) | 
                                     (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_50) 
                                       << 8U) | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_51))))) 
                    << 0x20U) | (QData)((IData)(((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_52) 
                                                   << 0x18U) 
                                                  | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_53) 
                                                     << 0x10U)) 
                                                 | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_54) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_55)))))));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__data[3U] 
        = (IData)(((((QData)((IData)(((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_48) 
                                        << 0x18U) | 
                                       ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_49) 
                                        << 0x10U)) 
                                      | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_50) 
                                          << 8U) | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_51))))) 
                     << 0x20U) | (QData)((IData)(((
                                                   ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_52) 
                                                    << 0x18U) 
                                                   | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_53) 
                                                      << 0x10U)) 
                                                  | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_54) 
                                                      << 8U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_55)))))) 
                   >> 0x20U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__data[4U] 
        = (IData)((((QData)((IData)(((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_40) 
                                       << 0x18U) | 
                                      ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_41) 
                                       << 0x10U)) | 
                                     (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_42) 
                                       << 8U) | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_43))))) 
                    << 0x20U) | (QData)((IData)(((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_44) 
                                                   << 0x18U) 
                                                  | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_45) 
                                                     << 0x10U)) 
                                                 | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_46) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_47)))))));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__data[5U] 
        = (IData)(((((QData)((IData)(((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_40) 
                                        << 0x18U) | 
                                       ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_41) 
                                        << 0x10U)) 
                                      | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_42) 
                                          << 8U) | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_43))))) 
                     << 0x20U) | (QData)((IData)(((
                                                   ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_44) 
                                                    << 0x18U) 
                                                   | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_45) 
                                                      << 0x10U)) 
                                                  | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_46) 
                                                      << 8U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_47)))))) 
                   >> 0x20U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__data[6U] 
        = (IData)((((QData)((IData)(((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_32) 
                                       << 0x18U) | 
                                      ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_33) 
                                       << 0x10U)) | 
                                     (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_34) 
                                       << 8U) | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_35))))) 
                    << 0x20U) | (QData)((IData)(((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_36) 
                                                   << 0x18U) 
                                                  | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_37) 
                                                     << 0x10U)) 
                                                 | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_38) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_39)))))));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__data[7U] 
        = (IData)(((((QData)((IData)(((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_32) 
                                        << 0x18U) | 
                                       ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_33) 
                                        << 0x10U)) 
                                      | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_34) 
                                          << 8U) | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_35))))) 
                     << 0x20U) | (QData)((IData)(((
                                                   ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_36) 
                                                    << 0x18U) 
                                                   | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_37) 
                                                      << 0x10U)) 
                                                  | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_38) 
                                                      << 8U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_39)))))) 
                   >> 0x20U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__data[8U] 
        = (IData)((((QData)((IData)(((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_24) 
                                       << 0x18U) | 
                                      ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_25) 
                                       << 0x10U)) | 
                                     (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_26) 
                                       << 8U) | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_27))))) 
                    << 0x20U) | (QData)((IData)(((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_28) 
                                                   << 0x18U) 
                                                  | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_29) 
                                                     << 0x10U)) 
                                                 | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_30) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_31)))))));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__data[9U] 
        = (IData)(((((QData)((IData)(((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_24) 
                                        << 0x18U) | 
                                       ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_25) 
                                        << 0x10U)) 
                                      | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_26) 
                                          << 8U) | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_27))))) 
                     << 0x20U) | (QData)((IData)(((
                                                   ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_28) 
                                                    << 0x18U) 
                                                   | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_29) 
                                                      << 0x10U)) 
                                                  | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_30) 
                                                      << 8U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_31)))))) 
                   >> 0x20U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__data[0xaU] 
        = (IData)((((QData)((IData)(((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_16) 
                                       << 0x18U) | 
                                      ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_17) 
                                       << 0x10U)) | 
                                     (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_18) 
                                       << 8U) | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_19))))) 
                    << 0x20U) | (QData)((IData)(((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_20) 
                                                   << 0x18U) 
                                                  | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_21) 
                                                     << 0x10U)) 
                                                 | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_22) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_23)))))));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__data[0xbU] 
        = (IData)(((((QData)((IData)(((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_16) 
                                        << 0x18U) | 
                                       ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_17) 
                                        << 0x10U)) 
                                      | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_18) 
                                          << 8U) | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_19))))) 
                     << 0x20U) | (QData)((IData)(((
                                                   ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_20) 
                                                    << 0x18U) 
                                                   | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_21) 
                                                      << 0x10U)) 
                                                  | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_22) 
                                                      << 8U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_23)))))) 
                   >> 0x20U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__data[0xcU] 
        = (IData)((((QData)((IData)(((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_8) 
                                       << 0x18U) | 
                                      ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_9) 
                                       << 0x10U)) | 
                                     (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_10) 
                                       << 8U) | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_11))))) 
                    << 0x20U) | (QData)((IData)(((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_12) 
                                                   << 0x18U) 
                                                  | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_13) 
                                                     << 0x10U)) 
                                                 | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_14) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_15)))))));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__data[0xdU] 
        = (IData)(((((QData)((IData)(((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_8) 
                                        << 0x18U) | 
                                       ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_9) 
                                        << 0x10U)) 
                                      | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_10) 
                                          << 8U) | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_11))))) 
                     << 0x20U) | (QData)((IData)(((
                                                   ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_12) 
                                                    << 0x18U) 
                                                   | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_13) 
                                                      << 0x10U)) 
                                                  | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_14) 
                                                      << 8U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_15)))))) 
                   >> 0x20U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__data[0xeU] 
        = (IData)((((QData)((IData)(((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_0) 
                                       << 0x18U) | 
                                      ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1) 
                                       << 0x10U)) | 
                                     (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2) 
                                       << 8U) | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_3))))) 
                    << 0x20U) | (QData)((IData)(((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_4) 
                                                   << 0x18U) 
                                                  | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_5) 
                                                     << 0x10U)) 
                                                 | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_6) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_7)))))));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__data[0xfU] 
        = (IData)(((((QData)((IData)(((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_0) 
                                        << 0x18U) | 
                                       ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1) 
                                        << 0x10U)) 
                                      | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2) 
                                          << 8U) | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_3))))) 
                     << 0x20U) | (QData)((IData)(((
                                                   ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_4) 
                                                    << 0x18U) 
                                                   | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_5) 
                                                      << 0x10U)) 
                                                  | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_6) 
                                                      << 8U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_7)))))) 
                   >> 0x20U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__data[0U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__data[0U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__data[1U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__data[1U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__data[2U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__data[2U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__data[3U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__data[3U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__data[4U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__data[4U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__data[5U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__data[5U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__data[6U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__data[6U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__data[7U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__data[7U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__data[8U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__data[8U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__data[9U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__data[9U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__data[0xaU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__data[0xaU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__data[0xbU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__data[0xbU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__data[0xcU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__data[0xcU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__data[0xdU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__data[0xdU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__data[0xeU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__data[0xeU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__data[0xfU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__data[0xfU];
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__21(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__21\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cur_state) {
        if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cur_state) {
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__next_state 
                = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__all_beats_received)
                    ? 0U : 1U);
        }
    } else {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__next_state 
            = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_valid)
                ? 1U : 0U);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__22(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__22\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT____VdfgRegularize_h5cc42551_0_0) {
        vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__w_addr = 0U;
        vlSelfRef.cache_system_tl_top__DOT__write_addr = 0U;
        vlSelfRef.cache_system_tl_top__DOT__write_data = 0U;
        vlSelfRef.cache_system_tl_top__DOT__write_byteen = 0U;
    } else if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__cur_state) {
        vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__w_addr 
            = (0xffffU & (vlSelfRef.__VdfgRegularize_hd87f99a1_8_0 
                          >> 2U));
        vlSelfRef.cache_system_tl_top__DOT__write_addr 
            = vlSelfRef.__VdfgRegularize_hd87f99a1_8_0;
        if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__write_all) {
            vlSelfRef.cache_system_tl_top__DOT__write_data 
                = (((0U == (0x1fU & ((VL_SHIFTL_III(9,9,32, 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_wire)), 5U) 
                                      - (IData)(1U)) 
                                     - (IData)(0x1fU))))
                     ? 0U : (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__data_in_i_reg[
                             (((IData)(0x1fU) + (0x1ffU 
                                                 & ((VL_SHIFTL_III(9,9,32, 
                                                                   ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_wire)), 5U) 
                                                     - (IData)(1U)) 
                                                    - (IData)(0x1fU)))) 
                              >> 5U)] << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((VL_SHIFTL_III(9,9,32, 
                                                               ((IData)(1U) 
                                                                + (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_wire)), 5U) 
                                                 - (IData)(1U)) 
                                                - (IData)(0x1fU)))))) 
                   | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__data_in_i_reg[
                      (0xfU & (((VL_SHIFTL_III(9,9,32, 
                                               ((IData)(1U) 
                                                + (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_wire)), 5U) 
                                 - (IData)(1U)) - (IData)(0x1fU)) 
                               >> 5U))] >> (0x1fU & 
                                            ((VL_SHIFTL_III(9,9,32, 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_wire)), 5U) 
                                              - (IData)(1U)) 
                                             - (IData)(0x1fU)))));
            vlSelfRef.cache_system_tl_top__DOT__write_byteen = 0xfU;
        } else {
            vlSelfRef.cache_system_tl_top__DOT__write_data 
                = (((0U == (0x1fU & ((VL_SHIFTL_III(9,9,32, 
                                                    ((IData)(1U) 
                                                     + 
                                                     (0xfU 
                                                      & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__addr_i_reg 
                                                         >> 2U))), 5U) 
                                      - (IData)(1U)) 
                                     - (IData)(0x1fU))))
                     ? 0U : (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__data_in_i_reg[
                             (((IData)(0x1fU) + (0x1ffU 
                                                 & ((VL_SHIFTL_III(9,9,32, 
                                                                   ((IData)(1U) 
                                                                    + 
                                                                    (0xfU 
                                                                     & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__addr_i_reg 
                                                                        >> 2U))), 5U) 
                                                     - (IData)(1U)) 
                                                    - (IData)(0x1fU)))) 
                              >> 5U)] << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((VL_SHIFTL_III(9,9,32, 
                                                               ((IData)(1U) 
                                                                + 
                                                                (0xfU 
                                                                 & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__addr_i_reg 
                                                                    >> 2U))), 5U) 
                                                 - (IData)(1U)) 
                                                - (IData)(0x1fU)))))) 
                   | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__data_in_i_reg[
                      (0xfU & (((VL_SHIFTL_III(9,9,32, 
                                               ((IData)(1U) 
                                                + (0xfU 
                                                   & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__addr_i_reg 
                                                      >> 2U))), 5U) 
                                 - (IData)(1U)) - (IData)(0x1fU)) 
                               >> 5U))] >> (0x1fU & 
                                            ((VL_SHIFTL_III(9,9,32, 
                                                            ((IData)(1U) 
                                                             + 
                                                             (0xfU 
                                                              & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__addr_i_reg 
                                                                 >> 2U))), 5U) 
                                              - (IData)(1U)) 
                                             - (IData)(0x1fU)))));
            vlSelfRef.cache_system_tl_top__DOT__write_byteen 
                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__byteen_i_reg;
        }
    } else {
        vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__w_addr = 0U;
        vlSelfRef.cache_system_tl_top__DOT__write_addr = 0U;
        vlSelfRef.cache_system_tl_top__DOT__write_data = 0U;
        vlSelfRef.cache_system_tl_top__DOT__write_byteen = 0U;
    }
    vlSelfRef.cache_system_tl_top__DOT__write_valid 
        = ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT____VdfgRegularize_h5cc42551_0_0)) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__cur_state));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_offset_inst__DOT__done_w 
        = ((0xfU == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_offset_inst__DOT__counter)) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_step));
    vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__main_mem_dp__DOT__b_addr 
        = vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__w_addr;
    vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__write_addr 
        = vlSelfRef.cache_system_tl_top__DOT__write_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write_addr 
        = vlSelfRef.cache_system_tl_top__DOT__write_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__mem_write_addr 
        = vlSelfRef.cache_system_tl_top__DOT__write_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write_data 
        = vlSelfRef.cache_system_tl_top__DOT__write_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__mem_write_data 
        = vlSelfRef.cache_system_tl_top__DOT__write_data;
    vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__write_data 
        = vlSelfRef.cache_system_tl_top__DOT__write_data;
    if (vlSelfRef.cache_system_tl_top__DOT__write_valid) {
        vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__write_valid = 1U;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write_valid = 1U;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__mem_write_valid = 1U;
        vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__write_byteen 
            = vlSelfRef.cache_system_tl_top__DOT__write_byteen;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write_byteen 
            = vlSelfRef.cache_system_tl_top__DOT__write_byteen;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__mem_write_byteen 
            = vlSelfRef.cache_system_tl_top__DOT__write_byteen;
        vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT____Vcellinp__main_mem_dp__b_we 
            = vlSelfRef.cache_system_tl_top__DOT__write_byteen;
    } else {
        vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__write_valid = 0U;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write_valid = 0U;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__mem_write_valid = 0U;
        vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__write_byteen 
            = vlSelfRef.cache_system_tl_top__DOT__write_byteen;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write_byteen 
            = vlSelfRef.cache_system_tl_top__DOT__write_byteen;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__mem_write_byteen 
            = vlSelfRef.cache_system_tl_top__DOT__write_byteen;
        vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT____Vcellinp__main_mem_dp__b_we = 0U;
    }
    vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__main_mem_dp__DOT__b_din 
        = vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__write_data;
    vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__main_mem_dp__DOT__b_we 
        = vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT____Vcellinp__main_mem_dp__b_we;
}

extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_h9a855263_0;

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__23(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__23\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    __Vtableidx2 = ((((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cache_write_valid) 
                      << 4U) | (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__done_keep) 
                                 << 3U) | ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_done) 
                                           << 2U))) 
                    | (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__write_all) 
                        << 1U) | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__cur_state)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__next_state 
        = Vtop__ConstPool__TABLE_h9a855263_0[__Vtableidx2];
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__24(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__24\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data[0U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
        [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][0U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data[1U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
        [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][1U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data[2U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
        [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][2U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data[3U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
        [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][3U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data[4U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
        [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][4U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data[5U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
        [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][5U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data[6U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
        [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][6U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data[7U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
        [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][7U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data[8U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
        [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][8U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data[9U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
        [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][9U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data[0xaU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
        [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][0xaU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data[0xbU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
        [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][0xbU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data[0xcU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
        [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][0xcU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data[0xdU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
        [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][0xdU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data[0xeU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
        [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][0xeU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data[0xfU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
        [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][0xfU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
        [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][0U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[1U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
        [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][1U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[2U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
        [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][2U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[3U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
        [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][3U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[4U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
        [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][4U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[5U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
        [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][5U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[6U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
        [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][6U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[7U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
        [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][7U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[8U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
        [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][8U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[9U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
        [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][9U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0xaU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
        [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][0xaU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0xbU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
        [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][0xbU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0xcU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
        [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][0xcU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0xdU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
        [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][0xdU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0xeU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
        [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][0xeU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0xfU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
        [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][0xfU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__cache_write_data[0U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__cache_write_data[1U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[1U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__cache_write_data[2U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[2U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__cache_write_data[3U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[3U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__cache_write_data[4U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[4U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__cache_write_data[5U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[5U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__cache_write_data[6U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[6U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__cache_write_data[7U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[7U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__cache_write_data[8U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[8U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__cache_write_data[9U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[9U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__cache_write_data[0xaU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0xaU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__cache_write_data[0xbU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0xbU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__cache_write_data[0xcU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0xcU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__cache_write_data[0xdU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0xdU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__cache_write_data[0xeU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0xeU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__cache_write_data[0xfU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0xfU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__ib_data[0U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__ib_data[1U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[1U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__ib_data[2U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[2U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__ib_data[3U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[3U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__ib_data[4U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[4U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__ib_data[5U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[5U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__ib_data[6U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[6U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__ib_data[7U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[7U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__ib_data[8U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[8U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__ib_data[9U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[9U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__ib_data[0xaU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0xaU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__ib_data[0xbU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0xbU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__ib_data[0xcU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0xcU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__ib_data[0xdU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0xdU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__ib_data[0xeU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0xeU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__ib_data[0xfU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0xfU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_in_data[0U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_in_data[1U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[1U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_in_data[2U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[2U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_in_data[3U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[3U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_in_data[4U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[4U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_in_data[5U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[5U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_in_data[6U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[6U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_in_data[7U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[7U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_in_data[8U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[8U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_in_data[9U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[9U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_in_data[0xaU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0xaU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_in_data[0xbU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0xbU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_in_data[0xcU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0xcU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_in_data[0xdU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0xdU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_in_data[0xeU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0xeU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_in_data[0xfU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0xfU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[0U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[1U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[2U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[3U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[4U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[5U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[6U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[7U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[8U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[9U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[0xaU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[0xbU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[0xcU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[0xdU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[0xeU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[0xfU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
    if ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_state))) {
        if ((1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_state))) {
            if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__tag_access_done) {
                if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_keep) {
                    if ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_hit))) {
                        if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write_through) {
                            VL_ASSIGNSEL_WI(512,32,
                                            (0x1ffU 
                                             & ((VL_SHIFTL_III(9,32,32, 
                                                               ((IData)(1U) 
                                                                + 
                                                                (0xfU 
                                                                 & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__addr_keep 
                                                                    >> 2U))), 5U) 
                                                 - (IData)(1U)) 
                                                - (IData)(0x1fU))), vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data, vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__data_keep);
                        }
                    } else if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write_through) {
                        VL_ASSIGNSEL_WI(512,32,(0x1ffU 
                                                & ((VL_SHIFTL_III(9,32,32, 
                                                                  ((IData)(1U) 
                                                                   + 
                                                                   (0xfU 
                                                                    & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__addr_keep 
                                                                       >> 2U))), 5U) 
                                                    - (IData)(1U)) 
                                                   - (IData)(0x1fU))), vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data, vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__data_keep);
                    } else if ((1U & (~ (IData)((0U 
                                                 != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_vld)))))) {
                        if ((1U & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__dirty_reg
                                   [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__current_set_idx] 
                                   >> (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_MRU)))) {
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[0U] 
                                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0U];
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[1U] 
                                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[1U];
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[2U] 
                                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[2U];
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[3U] 
                                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[3U];
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[4U] 
                                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[4U];
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[5U] 
                                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[5U];
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[6U] 
                                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[6U];
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[7U] 
                                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[7U];
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[8U] 
                                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[8U];
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[9U] 
                                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[9U];
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[0xaU] 
                                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0xaU];
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[0xbU] 
                                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0xbU];
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[0xcU] 
                                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0xcU];
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[0xdU] 
                                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0xdU];
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[0xeU] 
                                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0xeU];
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[0xfU] 
                                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0xfU];
                        }
                    }
                } else if ((1U & (~ (IData)((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_hit)))))) {
                    if ((1U & (~ (IData)((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_vld)))))) {
                        if ((1U & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__dirty_reg
                                   [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__current_set_idx] 
                                   >> (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_MRU)))) {
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[0U] 
                                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0U];
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[1U] 
                                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[1U];
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[2U] 
                                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[2U];
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[3U] 
                                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[3U];
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[4U] 
                                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[4U];
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[5U] 
                                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[5U];
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[6U] 
                                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[6U];
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[7U] 
                                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[7U];
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[8U] 
                                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[8U];
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[9U] 
                                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[9U];
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[0xaU] 
                                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0xaU];
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[0xbU] 
                                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0xbU];
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[0xcU] 
                                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0xcU];
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[0xdU] 
                                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0xdU];
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[0xeU] 
                                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0xeU];
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[0xfU] 
                                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[0xfU];
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__out_data = 0U;
    if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__cur_state) {
        if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__cur_state) {
            if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_accessed) {
                if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_hit) {
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__out_data 
                        = (((0U == (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__word_idx)), 5U) 
                                              - (IData)(1U)) 
                                             - (IData)(0x1fU))))
                             ? 0U : (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[
                                     (((IData)(0x1fU) 
                                       + (0x1ffU & 
                                          ((VL_SHIFTL_III(9,32,32, 
                                                          ((IData)(1U) 
                                                           + (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__word_idx)), 5U) 
                                            - (IData)(1U)) 
                                           - (IData)(0x1fU)))) 
                                      >> 5U)] << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((VL_SHIFTL_III(9,32,32, 
                                                                     ((IData)(1U) 
                                                                      + (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__word_idx)), 5U) 
                                                       - (IData)(1U)) 
                                                      - (IData)(0x1fU)))))) 
                           | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__arr_data[
                              (0xfU & (((VL_SHIFTL_III(9,32,32, 
                                                       ((IData)(1U) 
                                                        + (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__word_idx)), 5U) 
                                         - (IData)(1U)) 
                                        - (IData)(0x1fU)) 
                                       >> 5U))] >> 
                              (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                       ((IData)(1U) 
                                                        + (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__word_idx)), 5U) 
                                         - (IData)(1U)) 
                                        - (IData)(0x1fU)))));
                }
            }
        }
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cache_write_data[0U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[0U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cache_write_data[1U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[1U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cache_write_data[2U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[2U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cache_write_data[3U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[3U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cache_write_data[4U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[4U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cache_write_data[5U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[5U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cache_write_data[6U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[6U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cache_write_data[7U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[7U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cache_write_data[8U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[8U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cache_write_data[9U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[9U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cache_write_data[0xaU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[0xaU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cache_write_data[0xbU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[0xbU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cache_write_data[0xcU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[0xcU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cache_write_data[0xdU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[0xdU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cache_write_data[0xeU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[0xeU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cache_write_data[0xfU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_data[0xfU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_out_data 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__out_data;
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
void Vtop___024root___eval_act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<24> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../rtl_2/cache_system_tl_top.sv", 47, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../rtl_2/cache_system_tl_top.sv", 47, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../rtl_2/cache_system_tl_top.sv", 47, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk_h & 0xfeU)))) {
        Verilated::overWidthError("clk_h");}
    if (VL_UNLIKELY(((vlSelfRef.clk_l & 0xfeU)))) {
        Verilated::overWidthError("clk_l");}
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY(((vlSelfRef.cfg_valid & 0xfeU)))) {
        Verilated::overWidthError("cfg_valid");}
    if (VL_UNLIKELY(((vlSelfRef.a_valid & 0xfeU)))) {
        Verilated::overWidthError("a_valid");}
    if (VL_UNLIKELY(((vlSelfRef.a_opcode & 0xf8U)))) {
        Verilated::overWidthError("a_opcode");}
    if (VL_UNLIKELY(((vlSelfRef.a_param & 0xf8U)))) {
        Verilated::overWidthError("a_param");}
    if (VL_UNLIKELY(((vlSelfRef.a_size & 0xf8U)))) {
        Verilated::overWidthError("a_size");}
    if (VL_UNLIKELY(((vlSelfRef.a_source & 0xf0U)))) {
        Verilated::overWidthError("a_source");}
    if (VL_UNLIKELY(((vlSelfRef.a_mask & 0xf0U)))) {
        Verilated::overWidthError("a_mask");}
    if (VL_UNLIKELY(((vlSelfRef.d_ready & 0xfeU)))) {
        Verilated::overWidthError("d_ready");}
}
#endif  // VL_DEBUG
