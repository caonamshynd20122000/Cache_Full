// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__25(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__25\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0U] 
        = (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
            | ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write) 
               & (0U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx))))
            ? vlSelfRef.__VdfgRegularize_hd87f99a1_0_73
            : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
           [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][0U]);
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[1U] 
        = (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
            | ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write) 
               & (1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx))))
            ? ((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_56) 
                 << 0x18U) | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_57) 
                              << 0x10U)) | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_58) 
                                             << 8U) 
                                            | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_59)))
            : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
           [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][1U]);
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[2U] 
        = (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
            | ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write) 
               & (2U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx))))
            ? ((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_52) 
                 << 0x18U) | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_53) 
                              << 0x10U)) | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_54) 
                                             << 8U) 
                                            | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_55)))
            : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
           [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][2U]);
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[3U] 
        = (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
            | ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write) 
               & (3U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx))))
            ? ((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_48) 
                 << 0x18U) | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_49) 
                              << 0x10U)) | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_50) 
                                             << 8U) 
                                            | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_51)))
            : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
           [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][3U]);
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[4U] 
        = (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
            | ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write) 
               & (4U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx))))
            ? ((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_44) 
                 << 0x18U) | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_45) 
                              << 0x10U)) | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_46) 
                                             << 8U) 
                                            | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_47)))
            : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
           [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][4U]);
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[5U] 
        = (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
            | ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write) 
               & (5U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx))))
            ? ((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_40) 
                 << 0x18U) | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_41) 
                              << 0x10U)) | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_42) 
                                             << 8U) 
                                            | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_43)))
            : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
           [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][5U]);
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[6U] 
        = (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
            | ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write) 
               & (6U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx))))
            ? ((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_36) 
                 << 0x18U) | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_37) 
                              << 0x10U)) | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_38) 
                                             << 8U) 
                                            | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_39)))
            : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
           [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][6U]);
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[7U] 
        = (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
            | ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write) 
               & (7U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx))))
            ? ((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_32) 
                 << 0x18U) | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_33) 
                              << 0x10U)) | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_34) 
                                             << 8U) 
                                            | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_35)))
            : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
           [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][7U]);
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[8U] 
        = (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
            | ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write) 
               & (8U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx))))
            ? ((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_28) 
                 << 0x18U) | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_29) 
                              << 0x10U)) | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_30) 
                                             << 8U) 
                                            | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_31)))
            : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
           [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][8U]);
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[9U] 
        = (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
            | ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write) 
               & (9U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx))))
            ? ((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_24) 
                 << 0x18U) | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_25) 
                              << 0x10U)) | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_26) 
                                             << 8U) 
                                            | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_27)))
            : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
           [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][9U]);
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xaU] 
        = (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
            | ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write) 
               & (0xaU == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx))))
            ? ((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_20) 
                 << 0x18U) | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_21) 
                              << 0x10U)) | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_22) 
                                             << 8U) 
                                            | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_23)))
            : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
           [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][0xaU]);
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xbU] 
        = (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
            | ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write) 
               & (0xbU == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx))))
            ? ((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_16) 
                 << 0x18U) | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_17) 
                              << 0x10U)) | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_18) 
                                             << 8U) 
                                            | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_19)))
            : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
           [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][0xbU]);
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xcU] 
        = (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
            | ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write) 
               & (0xcU == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx))))
            ? ((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_12) 
                 << 0x18U) | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_13) 
                              << 0x10U)) | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_14) 
                                             << 8U) 
                                            | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_15)))
            : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
           [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][0xcU]);
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xdU] 
        = (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
            | ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write) 
               & (0xdU == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx))))
            ? ((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_8) 
                 << 0x18U) | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_9) 
                              << 0x10U)) | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_10) 
                                             << 8U) 
                                            | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_11)))
            : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
           [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][0xdU]);
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xeU] 
        = (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
            | ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write) 
               & (0xeU == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx))))
            ? ((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_4) 
                 << 0x18U) | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_5) 
                              << 0x10U)) | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_6) 
                                             << 8U) 
                                            | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_7)))
            : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
           [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][0xeU]);
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xfU] 
        = (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
            | ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write) 
               & (0xfU == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx))))
            ? ((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_0) 
                 << 0x18U) | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1) 
                              << 0x10U)) | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2) 
                                             << 8U) 
                                            | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_3)))
            : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array
           [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way][0xfU]);
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__out_data 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__out_valid)
            ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__out_data
            : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__refill_word_data);
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.in_data[0U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.in_data[1U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[1U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.in_data[2U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[2U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.in_data[3U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[3U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.in_data[4U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[4U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.in_data[5U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[5U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.in_data[6U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[6U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.in_data[7U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[7U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.in_data[8U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[8U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.in_data[9U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[9U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.in_data[0xaU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xaU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.in_data[0xbU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xbU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.in_data[0xcU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xcU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.in_data[0xdU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xdU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.in_data[0xeU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xeU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.in_data[0xfU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xfU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.in_data[0U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.in_data[1U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[1U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.in_data[2U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[2U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.in_data[3U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[3U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.in_data[4U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[4U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.in_data[5U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[5U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.in_data[6U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[6U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.in_data[7U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[7U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.in_data[8U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[8U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.in_data[9U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[9U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.in_data[0xaU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xaU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.in_data[0xbU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xbU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.in_data[0xcU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xcU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.in_data[0xdU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xdU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.in_data[0xeU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xeU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.in_data[0xfU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xfU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.in_data[0U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.in_data[1U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[1U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.in_data[2U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[2U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.in_data[3U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[3U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.in_data[4U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[4U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.in_data[5U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[5U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.in_data[6U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[6U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.in_data[7U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[7U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.in_data[8U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[8U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.in_data[9U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[9U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.in_data[0xaU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xaU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.in_data[0xbU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xbU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.in_data[0xcU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xcU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.in_data[0xdU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xdU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.in_data[0xeU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xeU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.in_data[0xfU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xfU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.in_data[0U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.in_data[1U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[1U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.in_data[2U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[2U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.in_data[3U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[3U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.in_data[4U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[4U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.in_data[5U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[5U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.in_data[6U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[6U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.in_data[7U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[7U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.in_data[8U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[8U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.in_data[9U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[9U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.in_data[0xaU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xaU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.in_data[0xbU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xbU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.in_data[0xcU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xcU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.in_data[0xdU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xdU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.in_data[0xeU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xeU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.in_data[0xfU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xfU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.in_data[0U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.in_data[1U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[1U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.in_data[2U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[2U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.in_data[3U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[3U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.in_data[4U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[4U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.in_data[5U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[5U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.in_data[6U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[6U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.in_data[7U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[7U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.in_data[8U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[8U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.in_data[9U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[9U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.in_data[0xaU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xaU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.in_data[0xbU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xbU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.in_data[0xcU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xcU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.in_data[0xdU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xdU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.in_data[0xeU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xeU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.in_data[0xfU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xfU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.in_data[0U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.in_data[1U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[1U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.in_data[2U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[2U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.in_data[3U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[3U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.in_data[4U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[4U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.in_data[5U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[5U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.in_data[6U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[6U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.in_data[7U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[7U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.in_data[8U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[8U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.in_data[9U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[9U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.in_data[0xaU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xaU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.in_data[0xbU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xbU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.in_data[0xcU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xcU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.in_data[0xdU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xdU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.in_data[0xeU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xeU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.in_data[0xfU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xfU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.in_data[0U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.in_data[1U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[1U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.in_data[2U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[2U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.in_data[3U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[3U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.in_data[4U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[4U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.in_data[5U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[5U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.in_data[6U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[6U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.in_data[7U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[7U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.in_data[8U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[8U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.in_data[9U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[9U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.in_data[0xaU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xaU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.in_data[0xbU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xbU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.in_data[0xcU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xcU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.in_data[0xdU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xdU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.in_data[0xeU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xeU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.in_data[0xfU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xfU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.in_data[0U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.in_data[1U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[1U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.in_data[2U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[2U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.in_data[3U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[3U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.in_data[4U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[4U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.in_data[5U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[5U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.in_data[6U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[6U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.in_data[7U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[7U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.in_data[8U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[8U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.in_data[9U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[9U];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.in_data[0xaU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xaU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.in_data[0xbU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xbU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.in_data[0xcU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xcU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.in_data[0xdU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xdU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.in_data[0xeU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xeU];
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.in_data[0xfU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_data[0xfU];
    vlSelfRef.d_data = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__out_data;
    vlSelfRef.cache_system_tl_top__DOT__d_data = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__out_data;
    vlSelfRef.cache_system_tl_top__DOT__core_out_data 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__out_data;
}
