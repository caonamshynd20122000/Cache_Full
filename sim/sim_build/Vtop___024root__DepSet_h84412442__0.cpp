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
void Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__0(Vtop_mem_model__M200_MB40* vlSelf);
void Vtop___024root___ico_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__1(Vtop_mem_model__M200_MB40* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__0((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__0((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__0((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__0((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__0((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__0((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__0((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__0((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst));
        Vtop___024root___ico_sequent__TOP__1(vlSelf);
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__1((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__1((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__1((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__1((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__1((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__1((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__1((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__1((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst));
    }
}

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h93e1b771_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_h9a855263_0;

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_0;
    cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_0 = 0;
    CData/*0:0*/ cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_9;
    cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_9 = 0;
    CData/*0:0*/ cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_10;
    cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_10 = 0;
    CData/*0:0*/ cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_11;
    cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_11 = 0;
    CData/*0:0*/ cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_12;
    cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_12 = 0;
    CData/*0:0*/ cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_13;
    cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_13 = 0;
    CData/*0:0*/ cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_14;
    cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_14 = 0;
    CData/*0:0*/ cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_15;
    cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_15 = 0;
    CData/*0:0*/ cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_16;
    cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_16 = 0;
    CData/*0:0*/ cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_17;
    cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_17 = 0;
    CData/*0:0*/ cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_18;
    cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_18 = 0;
    CData/*0:0*/ cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_19;
    cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_19 = 0;
    CData/*0:0*/ cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_20;
    cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_20 = 0;
    CData/*0:0*/ cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_21;
    cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_21 = 0;
    CData/*0:0*/ cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_22;
    cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_22 = 0;
    CData/*0:0*/ cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_23;
    cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_23 = 0;
    CData/*0:0*/ cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_0_0;
    cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_0_0 = 0;
    CData/*0:0*/ cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_0_1;
    cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_0_1 = 0;
    CData/*0:0*/ cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_0_2;
    cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_0_2 = 0;
    CData/*0:0*/ cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_0_3;
    cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_0_3 = 0;
    CData/*0:0*/ cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_2_0;
    cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_2_0 = 0;
    CData/*0:0*/ cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_2_1;
    cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_2_1 = 0;
    CData/*0:0*/ cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_2_2;
    cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_2_2 = 0;
    CData/*0:0*/ cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_2_3;
    cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____VdfgRegularize_h6908b0c5_2_3 = 0;
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
    QData/*63:0*/ cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__0__KET____DOT__data_array_inst__wren;
    cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__0__KET____DOT__data_array_inst__wren = 0;
    QData/*63:0*/ cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__1__KET____DOT__data_array_inst__wren;
    cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__1__KET____DOT__data_array_inst__wren = 0;
    QData/*63:0*/ cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__2__KET____DOT__data_array_inst__wren;
    cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__2__KET____DOT__data_array_inst__wren = 0;
    QData/*63:0*/ cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__3__KET____DOT__data_array_inst__wren;
    cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__3__KET____DOT__data_array_inst__wren = 0;
    QData/*63:0*/ cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__4__KET____DOT__data_array_inst__wren;
    cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__4__KET____DOT__data_array_inst__wren = 0;
    QData/*63:0*/ cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__5__KET____DOT__data_array_inst__wren;
    cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__5__KET____DOT__data_array_inst__wren = 0;
    QData/*63:0*/ cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__6__KET____DOT__data_array_inst__wren;
    cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__6__KET____DOT__data_array_inst__wren = 0;
    QData/*63:0*/ cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__7__KET____DOT__data_array_inst__wren;
    cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__7__KET____DOT__data_array_inst__wren = 0;
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
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.cache_system_tl_top__DOT__a_param = vlSelfRef.a_param;
    vlSelfRef.cache_system_tl_top__DOT__a_size = vlSelfRef.a_size;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__load_val_edge__DOT__rst 
        = (1U & (~ (IData)(vlSelfRef.rst_n)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_write__DOT__din 
        = (1U & (vlSelfRef.cfg_data_in >> 0U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_secure__DOT__din 
        = (1U & (vlSelfRef.cfg_data_in >> 0U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_b__DOT__din 
        = (0xfU & (vlSelfRef.cfg_data_in >> 0U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_h_b__DOT__din 
        = (0xfU & (vlSelfRef.cfg_data_in >> 0U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_pf__DOT__din 
        = (1U & (vlSelfRef.cfg_data_in >> 0U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_5__DOT__din 
        = (0xffU & (vlSelfRef.cfg_data_in >> 0U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__counter_offset_inst__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cur_state;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_offset_inst__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__busy_clk_l;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_ready 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__return_ready;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__in_ready = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_rd_cam_edge__DOT__rst 
        = (1U & (~ (IData)(vlSelfRef.rst_n)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_erase_edge__DOT__rst 
        = (1U & (~ (IData)(vlSelfRef.rst_n)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_wr_cam_edge__DOT__rst 
        = (1U & (~ (IData)(vlSelfRef.rst_n)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_cam_edge__DOT__rst 
        = (1U & (~ (IData)(vlSelfRef.rst_n)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_mem_edge__DOT__rst 
        = (1U & (~ (IData)(vlSelfRef.rst_n)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__rsta 
        = (1U & (~ (IData)(vlSelfRef.rst_n)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__fill_id 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__miss_mshr_id;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__0__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__rsta 
        = (1U & (~ (IData)(vlSelfRef.rst_n)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__1__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__rsta 
        = (1U & (~ (IData)(vlSelfRef.rst_n)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__2__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__rsta 
        = (1U & (~ (IData)(vlSelfRef.rst_n)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__3__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__rsta 
        = (1U & (~ (IData)(vlSelfRef.rst_n)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__4__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__rsta 
        = (1U & (~ (IData)(vlSelfRef.rst_n)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__5__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__rsta 
        = (1U & (~ (IData)(vlSelfRef.rst_n)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__6__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__rsta 
        = (1U & (~ (IData)(vlSelfRef.rst_n)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__7__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__rsta 
        = (1U & (~ (IData)(vlSelfRef.rst_n)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__write_through 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_write__DOT__data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__prefetch 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_pf__DOT__data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__secure_request 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_secure__DOT__data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__low_bound 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_b__DOT__data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__high_bound 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_h_b__DOT__data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__set_load_val_prev 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__load_val_edge__DOT__signal_out;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_addr__DOT__data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_write__DOT__dout 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_write__DOT__data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_secure__DOT__dout 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_secure__DOT__data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_b__DOT__dout 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_b__DOT__data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_h_b__DOT__dout 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_h_b__DOT__data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_pf__DOT__dout 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_pf__DOT__data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_0__DOT__dout 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_0__DOT__data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_1__DOT__dout 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_1__DOT__data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_2__DOT__dout 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_2__DOT__data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_3__DOT__dout 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_3__DOT__data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_4__DOT__dout 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_4__DOT__data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_5__DOT__dout 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_5__DOT__data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_addr__DOT__dout 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_addr__DOT__data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_erase 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_rd_cam_happend;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_mem_click 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_mem_edge__DOT__signal_out;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__rd_mem_click 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_mem_edge__DOT__signal_out;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__erase_cam_click 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_erase_click;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_cam_click 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_cam_edge__DOT__signal_out;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_rd_cam_click 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_rd_cam_edge__DOT__signal_out;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_wr_cam_click 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_wr_cam_edge__DOT__signal_out;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__wr_cam_click 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_wr_cam_edge__DOT__signal_out;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__fsm_accessed 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__latency_counter__DOT__done;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__0__KET____DOT__tag_sram__DOT__out_data 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__0__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__0__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__0__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__1__KET____DOT__tag_sram__DOT__out_data 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__1__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__1__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__1__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__2__KET____DOT__tag_sram__DOT__out_data 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__2__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__2__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__2__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__3__KET____DOT__tag_sram__DOT__out_data 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__3__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__3__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__3__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__4__KET____DOT__tag_sram__DOT__out_data 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__4__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__4__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__4__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__5__KET____DOT__tag_sram__DOT__out_data 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__5__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__5__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__5__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__6__KET____DOT__tag_sram__DOT__out_data 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__6__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__6__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__6__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__7__KET____DOT__tag_sram__DOT__out_data 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__7__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__7__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__7__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__valid_prev 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__D_FF_valid__DOT__data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__D_FF_valid__DOT__dout 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__D_FF_valid__DOT__data;
    vlSelfRef.cfg_ready = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__in_ready;
    vlSelfRef.cache_system_tl_top__DOT__cfg_ready = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__in_ready;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cfg_ready 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__in_ready;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__empty 
        = (1U & (~ (IData)((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__valid_table)))));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__full 
        = (0xffU == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__valid_table));
    vlSelfRef.d_param = vlSelfRef.cache_system_tl_top__DOT__d_param;
    vlSelfRef.d_size = vlSelfRef.cache_system_tl_top__DOT__d_size;
    vlSelfRef.d_sink = vlSelfRef.cache_system_tl_top__DOT__d_sink;
    vlSelfRef.d_denied = vlSelfRef.cache_system_tl_top__DOT__d_denied;
    vlSelfRef.d_corrupt = vlSelfRef.cache_system_tl_top__DOT__d_corrupt;
    vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__read_data 
        = vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__main_mem_dp__DOT__a_dout_reg;
    vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__main_mem_dp__DOT__a_dout 
        = vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__main_mem_dp__DOT__a_dout_reg;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__erase_cam_done 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__erase_cam_counter__DOT__done;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__in_trans_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__rand_fill_engine__DOT__out_ff;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__rand_fill_engine__DOT__out 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__rand_fill_engine__DOT__out_ff;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__rand_fill_engine__DOT__done 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__rand_fill_engine__DOT__done_ff;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__wr_cam_done 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__wr_mem_counter__DOT__done;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__rd_mem_done 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__rd_mem_counter__DOT__done;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__out_data[0U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__out_data[1U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[1U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__out_data[2U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[2U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__out_data[3U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[3U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__out_data[4U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[4U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__out_data[5U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[5U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__out_data[6U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[6U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__out_data[7U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[7U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__out_data[8U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[8U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__out_data[9U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[9U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__out_data[0xaU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xaU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__out_data[0xbU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xbU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__out_data[0xcU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xcU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__out_data[0xdU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xdU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__out_data[0xeU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xeU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__out_data[0xfU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xfU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta[0U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta[1U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[1U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta[2U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[2U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta[3U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[3U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta[4U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[4U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta[5U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[5U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta[6U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[6U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta[7U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[7U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta[8U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[8U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta[9U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[9U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta[0xaU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xaU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta[0xbU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xbU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta[0xcU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xcU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta[0xdU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xdU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta[0xeU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xeU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta[0xfU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xfU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__rd_mem 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__rd_mem_counter__DOT__counter;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__rd_mem_counter__DOT__done_w 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__rd_mem_counter__DOT__counter;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__wr_cam 
        = (1U & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__wr_mem_counter__DOT__counter));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__wr_mem_counter__DOT__done_w 
        = (2U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__wr_mem_counter__DOT__counter));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__write_busy 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_busy_reg;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_busy 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_busy_reg;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_busy 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_busy_reg;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__a_dout 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__a_dout_reg;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_data 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__b_dout_reg;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__b_dout 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__b_dout_reg;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__rd_cam 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__rd_cam_counter__DOT__counter;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__rd_cam_counter__DOT__done_w 
        = (1U & (~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__rd_cam_counter__DOT__counter)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__erase_cam 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__erase_cam_counter__DOT__counter;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__erase_cam_counter__DOT__done_w 
        = (2U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__erase_cam_counter__DOT__counter));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__latency_counter__DOT__done_w 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__latency_counter__DOT__counter;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__counter_done 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__latency_counter__DOT__done;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__busy 
        = (1U & (~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__latency_counter__DOT__done)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__latency_counter__DOT__done_w 
        = (2U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__latency_counter__DOT__counter));
    vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__main_mem_dp__DOT__b_dout 
        = vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__main_mem_dp__DOT__b_dout_reg;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__erase_ram_wr_en = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__count_next 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__count_reg;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_byteen 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__byteen_table
        [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_ptr_q];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_rd_cam_done 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__rd_cam_done) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_rd_cam_happend));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__fill_addr 
        = (0xffffffc0U & vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__addr_table
           [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__miss_mshr_id]);
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__counter_offset_inst__DOT__done_w 
        = ((0xfU == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__counter_offset_inst__DOT__counter)) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__read_ready));
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.clk 
        = vlSelfRef.clk_h;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.clk 
        = vlSelfRef.clk_h;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.clk 
        = vlSelfRef.clk_h;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.clk 
        = vlSelfRef.clk_h;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.clk 
        = vlSelfRef.clk_h;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.clk 
        = vlSelfRef.clk_h;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.clk 
        = vlSelfRef.clk_h;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.clk 
        = vlSelfRef.clk_h;
    vlSelfRef.cache_system_tl_top__DOT__cfg_addr = vlSelfRef.cfg_addr;
    vlSelfRef.cache_system_tl_top__DOT__a_valid = vlSelfRef.a_valid;
    vlSelfRef.cache_system_tl_top__DOT__d_ready = vlSelfRef.d_ready;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__in_addr 
        = (0x3fU & ((IData)(vlSelfRef.cfg_addr) >> 0U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__rst 
        = (1U & (~ (IData)(vlSelfRef.rst_n)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__wr_en = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_id 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_ptr_q;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__0__KET____DOT__tag_sram__DOT__in_data 
        = (0xfffffU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__addr_keep 
                       >> 0xcU));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__1__KET____DOT__tag_sram__DOT__in_data 
        = (0xfffffU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__addr_keep 
                       >> 0xcU));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__2__KET____DOT__tag_sram__DOT__in_data 
        = (0xfffffU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__addr_keep 
                       >> 0xcU));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__3__KET____DOT__tag_sram__DOT__in_data 
        = (0xfffffU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__addr_keep 
                       >> 0xcU));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__4__KET____DOT__tag_sram__DOT__in_data 
        = (0xfffffU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__addr_keep 
                       >> 0xcU));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__5__KET____DOT__tag_sram__DOT__in_data 
        = (0xfffffU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__addr_keep 
                       >> 0xcU));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__6__KET____DOT__tag_sram__DOT__in_data 
        = (0xfffffU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__addr_keep 
                       >> 0xcU));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__7__KET____DOT__tag_sram__DOT__in_data 
        = (0xfffffU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__addr_keep 
                       >> 0xcU));
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.rst_n 
        = vlSelfRef.rst_n;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.rst_n 
        = vlSelfRef.rst_n;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.rst_n 
        = vlSelfRef.rst_n;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.rst_n 
        = vlSelfRef.rst_n;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.rst_n 
        = vlSelfRef.rst_n;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.rst_n 
        = vlSelfRef.rst_n;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.rst_n 
        = vlSelfRef.rst_n;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.rst_n 
        = vlSelfRef.rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__prefetch 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_pf__DOT__data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__trans_done 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__rand_fill_engine__DOT__done_ff;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__in_done 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__rand_fill_engine__DOT__done_ff;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__rd_mem_counter__rst_n 
        = ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_mem_edge__DOT__signal_out)) 
           & (IData)(vlSelfRef.rst_n));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__erase_cam_counter__rst_n 
        = ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_erase_click)) 
           & (IData)(vlSelfRef.rst_n));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__wr_mem_counter__rst_n 
        = ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_wr_cam_edge__DOT__signal_out)) 
           & (IData)(vlSelfRef.rst_n));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT____Vcellinp__latency_counter__rst_n 
        = ((IData)(vlSelfRef.rst_n) & (0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_state)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_rw 
        = (1U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__rw_table) 
                 >> (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_ptr_q)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_data 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__data_table
        [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_ptr_q];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__set_write 
        = ((0U == (0x3fU & (IData)(vlSelfRef.cfg_addr))) 
           & (IData)(vlSelfRef.cfg_valid));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__set_secure 
        = ((4U == (0x3fU & (IData)(vlSelfRef.cfg_addr))) 
           & (IData)(vlSelfRef.cfg_valid));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__set_low_bound 
        = ((8U == (0x3fU & (IData)(vlSelfRef.cfg_addr))) 
           & (IData)(vlSelfRef.cfg_valid));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__set_high_bound 
        = ((0xcU == (0x3fU & (IData)(vlSelfRef.cfg_addr))) 
           & (IData)(vlSelfRef.cfg_valid));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__set_prefetch 
        = ((0x10U == (0x3fU & (IData)(vlSelfRef.cfg_addr))) 
           & (IData)(vlSelfRef.cfg_valid));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__set_load_val_0 
        = ((0x14U == (0x3fU & (IData)(vlSelfRef.cfg_addr))) 
           & (IData)(vlSelfRef.cfg_valid));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__set_load_val_1 
        = ((0x18U == (0x3fU & (IData)(vlSelfRef.cfg_addr))) 
           & (IData)(vlSelfRef.cfg_valid));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__set_load_val_2 
        = ((0x1cU == (0x3fU & (IData)(vlSelfRef.cfg_addr))) 
           & (IData)(vlSelfRef.cfg_valid));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__set_load_val_3 
        = ((0x20U == (0x3fU & (IData)(vlSelfRef.cfg_addr))) 
           & (IData)(vlSelfRef.cfg_valid));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__set_load_val_4 
        = ((0x24U == (0x3fU & (IData)(vlSelfRef.cfg_addr))) 
           & (IData)(vlSelfRef.cfg_valid));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__set_load_val_5 
        = ((0x28U == (0x3fU & (IData)(vlSelfRef.cfg_addr))) 
           & (IData)(vlSelfRef.cfg_valid));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__ram_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__erase_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__secure_request 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_secure__DOT__data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__low_bound 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_b__DOT__data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__high_bound 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_h_b__DOT__data;
    vlSelfRef.cache_system_tl_top__DOT__read_data = vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__main_mem_dp__DOT__a_dout_reg;
    vlSelfRef.cache_system_tl_top__DOT__write_ready 
        = vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__write_ready;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_rd_cam 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__rand_fill_engine__DOT__done_ff;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__rd_cam_click 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_cam_edge__DOT__signal_out) 
           | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_rd_cam_edge__DOT__signal_out));
    vlSelfRef.cache_system_tl_top__DOT__cfg_valid = vlSelfRef.cfg_valid;
    vlSelfRef.cache_system_tl_top__DOT__a_opcode = vlSelfRef.a_opcode;
    vlSelfRef.cache_system_tl_top__DOT__a_source = vlSelfRef.a_source;
    vlSelfRef.cache_system_tl_top__DOT__a_address = vlSelfRef.a_address;
    vlSelfRef.cache_system_tl_top__DOT__a_data = vlSelfRef.a_data;
    vlSelfRef.cache_system_tl_top__DOT__read_ready 
        = vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__read_ready;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_step 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__write_all)
            ? (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__busy_clk_l)
            : (IData)(vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__write_ready));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_done 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_offset_inst__DOT__done;
    vlSelfRef.cache_system_tl_top__DOT__a_mask = vlSelfRef.a_mask;
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
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__load_val[0U] 
        = ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_4__DOT__data 
            << 8U) | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_5__DOT__data));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__load_val[1U] 
        = ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_4__DOT__data 
            >> 0x18U) | ((IData)((((QData)((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_2__DOT__data)) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_3__DOT__data)))) 
                         << 8U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__load_val[2U] 
        = (((IData)((((QData)((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_2__DOT__data)) 
                      << 0x20U) | (QData)((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_3__DOT__data)))) 
            >> 0x18U) | ((IData)(((((QData)((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_2__DOT__data)) 
                                    << 0x20U) | (QData)((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_3__DOT__data))) 
                                  >> 0x20U)) << 8U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__load_val[3U] 
        = ((0xffffff00U & vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__load_val[3U]) 
           | ((IData)(((((QData)((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_2__DOT__data)) 
                         << 0x20U) | (QData)((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_3__DOT__data))) 
                       >> 0x20U)) >> 0x18U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__load_val[3U] 
        = ((0xffU & vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__load_val[3U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_0__DOT__data)) 
                        << 0x20U) | (QData)((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_1__DOT__data)))) 
              << 8U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__load_val[4U] 
        = (((IData)((((QData)((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_0__DOT__data)) 
                      << 0x20U) | (QData)((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_1__DOT__data)))) 
            >> 0x18U) | ((IData)(((((QData)((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_0__DOT__data)) 
                                    << 0x20U) | (QData)((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_1__DOT__data))) 
                                  >> 0x20U)) << 8U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__load_val[5U] 
        = ((IData)(((((QData)((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_0__DOT__data)) 
                      << 0x20U) | (QData)((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_1__DOT__data))) 
                    >> 0x20U)) >> 0x18U);
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__counter_done 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__counter_offset_inst__DOT__done;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_source 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__source_table
        [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_ptr_q];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_opcode 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__opcode_table
        [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_ptr_q];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__out_w 
        = (~ ((((((VL_REDXOR_32(((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[5U] 
                                  << 0x18U) | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                               >> 8U))) 
                   << 0x1fU) | (0x40000000U & (VL_REDXOR_32(
                                                            ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[5U] 
                                                              << 0x19U) 
                                                             | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                                >> 7U))) 
                                               << 0x1eU))) 
                 | ((0x20000000U & (VL_REDXOR_32(((
                                                   vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[5U] 
                                                   << 0x1aU) 
                                                  | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                     >> 6U))) 
                                    << 0x1dU)) | (0x10000000U 
                                                  & (VL_REDXOR_32(
                                                                  ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[5U] 
                                                                    << 0x1bU) 
                                                                   | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                                      >> 5U))) 
                                                     << 0x1cU)))) 
                | (((0x8000000U & (VL_REDXOR_32(((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[5U] 
                                                  << 0x1cU) 
                                                 | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                    >> 4U))) 
                                   << 0x1bU)) | (0x4000000U 
                                                 & (VL_REDXOR_32(
                                                                 ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[5U] 
                                                                   << 0x1dU) 
                                                                  | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                                     >> 3U))) 
                                                    << 0x1aU))) 
                   | ((0x2000000U & (VL_REDXOR_32((
                                                   (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[5U] 
                                                    << 0x1eU) 
                                                   | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                      >> 2U))) 
                                     << 0x19U)) | (0x1000000U 
                                                   & (VL_REDXOR_32(
                                                                   ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[5U] 
                                                                     << 0x1fU) 
                                                                    | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                                       >> 1U))) 
                                                      << 0x18U))))) 
               | ((((0x800000U & (VL_REDXOR_32(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U]) 
                                  << 0x17U)) | (0x400000U 
                                                & (VL_REDXOR_32(
                                                                ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                                  << 1U) 
                                                                 | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                                    >> 0x1fU))) 
                                                   << 0x16U))) 
                   | ((0x200000U & (VL_REDXOR_32(((
                                                   vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                   << 2U) 
                                                  | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                     >> 0x1eU))) 
                                    << 0x15U)) | (0x100000U 
                                                  & (VL_REDXOR_32(
                                                                  ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                                    << 3U) 
                                                                   | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                                      >> 0x1dU))) 
                                                     << 0x14U)))) 
                  | (((0x80000U & (VL_REDXOR_32(((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                  << 4U) 
                                                 | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                    >> 0x1cU))) 
                                   << 0x13U)) | (0x40000U 
                                                 & (VL_REDXOR_32(
                                                                 ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                                   << 5U) 
                                                                  | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                                     >> 0x1bU))) 
                                                    << 0x12U))) 
                     | ((0x20000U & (VL_REDXOR_32((
                                                   (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                    << 6U) 
                                                   | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                      >> 0x1aU))) 
                                     << 0x11U)) | (0x10000U 
                                                   & (VL_REDXOR_32(
                                                                   ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                                     << 7U) 
                                                                    | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                                       >> 0x19U))) 
                                                      << 0x10U)))))) 
              | (((((0x8000U & (VL_REDXOR_32(((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                               << 8U) 
                                              | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                 >> 0x18U))) 
                                << 0xfU)) | (0x4000U 
                                             & (VL_REDXOR_32(
                                                             ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                               << 9U) 
                                                              | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                                 >> 0x17U))) 
                                                << 0xeU))) 
                   | ((0x2000U & (VL_REDXOR_32(((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                 << 0xaU) 
                                                | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                   >> 0x16U))) 
                                  << 0xdU)) | (0x1000U 
                                               & (VL_REDXOR_32(
                                                               ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                                 << 0xbU) 
                                                                | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                                   >> 0x15U))) 
                                                  << 0xcU)))) 
                  | (((0x800U & (VL_REDXOR_32(((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                << 0xcU) 
                                               | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                  >> 0x14U))) 
                                 << 0xbU)) | (0x400U 
                                              & (VL_REDXOR_32(
                                                              ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                                << 0xdU) 
                                                               | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                                  >> 0x13U))) 
                                                 << 0xaU))) 
                     | ((0x200U & (VL_REDXOR_32(((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                  << 0xeU) 
                                                 | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                    >> 0x12U))) 
                                   << 9U)) | (0x100U 
                                              & (VL_REDXOR_32(
                                                              ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                                << 0xfU) 
                                                               | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                                  >> 0x11U))) 
                                                 << 8U))))) 
                 | ((((0x80U & (VL_REDXOR_32(((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                               << 0x10U) 
                                              | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                 >> 0x10U))) 
                                << 7U)) | (0x40U & 
                                           (VL_REDXOR_32(
                                                         ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                           << 0x11U) 
                                                          | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                             >> 0xfU))) 
                                            << 6U))) 
                     | ((0x20U & (VL_REDXOR_32(((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                 << 0x12U) 
                                                | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                   >> 0xeU))) 
                                  << 5U)) | (0x10U 
                                             & (VL_REDXOR_32(
                                                             ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                               << 0x13U) 
                                                              | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                                 >> 0xdU))) 
                                                << 4U)))) 
                    | (((8U & (VL_REDXOR_32(((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                              << 0x14U) 
                                             | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                >> 0xcU))) 
                               << 3U)) | (4U & (VL_REDXOR_32(
                                                             ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                               << 0x15U) 
                                                              | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                                 >> 0xbU))) 
                                                << 2U))) 
                       | ((2U & (VL_REDXOR_32(((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                << 0x16U) 
                                               | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                  >> 0xaU))) 
                                 << 1U)) | (1U & VL_REDXOR_32(
                                                              ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                                << 0x17U) 
                                                               | (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                                  >> 9U))))))))));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_done_pulse 
        = ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_done_sync_2)) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_done_sync_1));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__out_data 
        = ((0U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_addr__DOT__data))
            ? (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_write__DOT__data)
            : ((4U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_addr__DOT__data))
                ? (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_secure__DOT__data)
                : ((8U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_addr__DOT__data))
                    ? (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_b__DOT__data)
                    : ((0xcU == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_addr__DOT__data))
                        ? (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_h_b__DOT__data)
                        : ((0x10U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_addr__DOT__data))
                            ? (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_pf__DOT__data)
                            : ((0x14U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_addr__DOT__data))
                                ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_0__DOT__data
                                : ((0x18U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_addr__DOT__data))
                                    ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_1__DOT__data
                                    : ((0x1cU == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_addr__DOT__data))
                                        ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_2__DOT__data
                                        : ((0x20U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_addr__DOT__data))
                                            ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_3__DOT__data
                                            : ((0x24U 
                                                == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_addr__DOT__data))
                                                ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_4__DOT__data
                                                : (
                                                   (0x28U 
                                                    == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_addr__DOT__data))
                                                    ? (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_5__DOT__data)
                                                    : 
                                                   ((0x2cU 
                                                     == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_addr__DOT__data))
                                                     ? 1U
                                                     : 0U))))))))))));
    vlSelfRef.cache_system_tl_top__DOT__cfg_data_in 
        = vlSelfRef.cfg_data_in;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__set_load_val 
        = ((0x2cU == (0x3fU & (IData)(vlSelfRef.cfg_addr))) 
           & (IData)(vlSelfRef.cfg_valid));
    vlSelfRef.cache_system_tl_top__DOT__clk_l = vlSelfRef.clk_l;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__word_idx 
        = (0xfU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__addr_keep 
                   >> 2U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__counter_wire 
        = (0xfU & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__counter_offset_inst__DOT__counter));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_ready 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_ready;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__addr_table
        [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_ptr_q];
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
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_valid 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_active_q;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__trans_in_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__rand_fill_engine__DOT__out_ff;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_erase_done 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__erase_cam_counter__DOT__done) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_erase_happend));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__new_req 
        = ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__busy_p)) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__busy));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cache_write_ready 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__cache_write_ready;
    vlSelfRef.cache_system_tl_top__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_wire 
        = (0xfU & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_offset_inst__DOT__counter));
    vlSelfRef.cache_system_tl_top__DOT__clk_h = vlSelfRef.clk_h;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_wr_cam_done 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_wr_cam_happend) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__wr_mem_counter__DOT__done));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__incoming_line_addr 
        = (vlSelfRef.a_address >> 6U);
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__lifetime_p 
        = (((0xc0U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__genblk1__BRA__0__KET____DOT__stream_counter__DOT__counter) 
                      << 6U)) | (0x30U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__genblk1__BRA__1__KET____DOT__stream_counter__DOT__counter) 
                                          << 4U))) 
           | ((0xcU & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__genblk1__BRA__2__KET____DOT__stream_counter__DOT__counter) 
                       << 2U)) | (3U & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__genblk1__BRA__3__KET____DOT__stream_counter__DOT__counter))));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__tag_access_done 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__latency_counter__DOT__done;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write_through 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_write__DOT__data;
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
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[0U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[1U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[1U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[2U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[2U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[3U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[3U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[4U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[4U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[5U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[5U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[6U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[6U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[7U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[7U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[8U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[8U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[9U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[9U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[0xaU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xaU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[0xbU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xbU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[0xcU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xcU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[0xdU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xdU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[0xeU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xeU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_out_data[0xfU] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xfU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_mem_done 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__rd_mem_counter__DOT__done) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_mem_happend));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_cam_done 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__rd_cam_done) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_cam_happend));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_done 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_done;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_accessed 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__latency_counter__DOT__done;
    vlSelfRef.cache_system_tl_top__DOT__is_write_req 
        = ((0U == (IData)(vlSelfRef.a_opcode)) | (1U 
                                                  == (IData)(vlSelfRef.a_opcode)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__match_data 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__a_dout_reg;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__fsm_ready 
        = (0U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_state));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slots 
        = (0xffU & (~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__valid_table)));
    cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT____VdfgRegularize_hdf092656_0_1 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__latency_counter__DOT__done) 
           & (1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_state)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__current_set_idx 
        = (0x3fU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__addr_keep 
                    >> 6U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cfg_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cfg_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__in_valid 
        = vlSelfRef.cache_system_tl_top__DOT__a_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__out_ready 
        = vlSelfRef.cache_system_tl_top__DOT__d_ready;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_addr__DOT__din 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__in_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__rst 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__rst;
    if ((0U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
        if ((0U != vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__count_reg)) {
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__count_next 
                = (0x3ffffffU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__count_reg 
                                 - (IData)(1U)));
        }
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__wr_en = 1U;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__b_we 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__wr_en;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_deq_id 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_id;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__0__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__0__KET____DOT__tag_sram__DOT__in_data;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__1__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__1__KET____DOT__tag_sram__DOT__in_data;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__2__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__2__KET____DOT__tag_sram__DOT__in_data;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__3__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__3__KET____DOT__tag_sram__DOT__in_data;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__4__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__4__KET____DOT__tag_sram__DOT__in_data;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__5__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__5__KET____DOT__tag_sram__DOT__in_data;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__6__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__6__KET____DOT__tag_sram__DOT__in_data;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__7__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__7__KET____DOT__tag_sram__DOT__in_data;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__prefetch 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__prefetch;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__trans_done 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__trans_done;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__request 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__in_done;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__rd_mem_counter__DOT__rst_n 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__rd_mem_counter__rst_n;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__erase_cam_counter__DOT__rst_n 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__erase_cam_counter__rst_n;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__wr_mem_counter__DOT__rst_n 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__wr_mem_counter__rst_n;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__latency_counter__DOT__rst_n 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT____Vcellinp__latency_counter__rst_n;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_deq_rw 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_rw;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_deq_data 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_data;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_write__DOT__set 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__set_write;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_secure__DOT__set 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__set_secure;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_b__DOT__set 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__set_low_bound;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_h_b__DOT__set 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__set_high_bound;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_pf__DOT__set 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__set_prefetch;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_0__DOT__set 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__set_load_val_0;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_1__DOT__set 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__set_load_val_1;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_2__DOT__set 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__set_load_val_2;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_3__DOT__set 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__set_load_val_3;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_4__DOT__set 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__set_load_val_4;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_5__DOT__set 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__set_load_val_5;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__ram_addr 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__count_reg;
    } else {
        if ((1U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
            if ((2U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
                if ((3U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__wr_en = 1U;
                } else if ((4U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
                    if ((5U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__wr_en = 1U;
                    }
                }
            }
        }
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__b_we 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__wr_en;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_deq_id 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_id;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__0__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__0__KET____DOT__tag_sram__DOT__in_data;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__1__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__1__KET____DOT__tag_sram__DOT__in_data;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__2__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__2__KET____DOT__tag_sram__DOT__in_data;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__3__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__3__KET____DOT__tag_sram__DOT__in_data;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__4__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__4__KET____DOT__tag_sram__DOT__in_data;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__5__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__5__KET____DOT__tag_sram__DOT__in_data;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__6__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__6__KET____DOT__tag_sram__DOT__in_data;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__7__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__7__KET____DOT__tag_sram__DOT__in_data;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__prefetch 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__prefetch;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__trans_done 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__trans_done;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__request 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__in_done;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__rd_mem_counter__DOT__rst_n 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__rd_mem_counter__rst_n;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__erase_cam_counter__DOT__rst_n 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__erase_cam_counter__rst_n;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__wr_mem_counter__DOT__rst_n 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__wr_mem_counter__rst_n;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__latency_counter__DOT__rst_n 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT____Vcellinp__latency_counter__rst_n;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_deq_rw 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_rw;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_deq_data 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_data;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_write__DOT__set 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__set_write;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_secure__DOT__set 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__set_secure;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_b__DOT__set 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__set_low_bound;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_h_b__DOT__set 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__set_high_bound;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_pf__DOT__set 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__set_prefetch;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_0__DOT__set 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__set_load_val_0;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_1__DOT__set 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__set_load_val_1;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_2__DOT__set 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__set_load_val_2;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_3__DOT__set 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__set_load_val_3;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_4__DOT__set 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__set_load_val_4;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_5__DOT__set 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__set_load_val_5;
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__b_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__ram_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__cfg_en 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__secure_request;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__cfg_low_bound 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__low_bound;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__cfg_high_bound 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__high_bound;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__read_data 
        = vlSelfRef.cache_system_tl_top__DOT__read_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write_ready 
        = vlSelfRef.cache_system_tl_top__DOT__write_ready;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_rd_cam_edge__DOT__signal_in 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_rd_cam;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_erase_edge__DOT__signal_in 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_rd_cam;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__rd_cam_counter__rst_n 
        = ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__rd_cam_click)) 
           & (IData)(vlSelfRef.rst_n));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cfg_valid 
        = vlSelfRef.cache_system_tl_top__DOT__cfg_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__in_opcode 
        = vlSelfRef.cache_system_tl_top__DOT__a_opcode;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__in_source 
        = vlSelfRef.cache_system_tl_top__DOT__a_source;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__in_addr 
        = vlSelfRef.cache_system_tl_top__DOT__a_address;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__in_data 
        = vlSelfRef.cache_system_tl_top__DOT__a_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__read_ready 
        = vlSelfRef.cache_system_tl_top__DOT__read_ready;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_offset_inst__DOT__start 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_step;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_offset_inst__DOT__done_w 
        = ((0xfU == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_offset_inst__DOT__counter)) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_step));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__in_byteen 
        = vlSelfRef.cache_system_tl_top__DOT__a_mask;
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
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__load_val[0U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__load_val[0U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__load_val[1U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__load_val[1U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__load_val[2U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__load_val[2U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__load_val[3U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__load_val[3U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__load_val[4U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__load_val[4U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__load_val[5U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__load_val[5U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__cfg_load_val[0U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__load_val[0U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__cfg_load_val[1U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__load_val[1U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__cfg_load_val[2U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__load_val[2U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__cfg_load_val[3U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__load_val[3U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__cfg_load_val[4U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__load_val[4U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__cfg_load_val[5U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__load_val[5U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_deq_source 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_source;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_deq_opcode 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_opcode;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__rng_val 
        = (0xfU & vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__out_w);
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__fill_valid 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_done_pulse;
    vlSelfRef.cfg_data_out = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__out_data;
    vlSelfRef.cache_system_tl_top__DOT__cfg_data_out 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__out_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cfg_data_out 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__out_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cfg_data_in 
        = vlSelfRef.cache_system_tl_top__DOT__cfg_data_in;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__load_val_edge__DOT__signal_in 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__set_load_val;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__load 
        = ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__load_val_edge__DOT__signal_out)) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__set_load_val));
    vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__clk_l;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__clk_l 
        = vlSelfRef.cache_system_tl_top__DOT__clk_l;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_ready 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_ready;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_deq_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__refill_word_idx 
        = (0xfU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_addr 
                   >> 2U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_deq_valid 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__refill_out_valid 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__deq_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__trans_in_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__trans_in_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_wr_cam 
        = (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_done_keep) 
            | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_done)) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_erase_done));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_ready 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cache_write_ready;
    vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__rst_n;
    vlSelfRef.__VdfgRegularize_hd87f99a1_8_0 = (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__addr_i_reg 
                                                + VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_wire), 2U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT____VdfgRegularize_h5cc42551_0_0 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_offset_inst__DOT__done) 
           | ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__write_all)) 
              & (1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_wire))));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__clk_h 
        = vlSelfRef.cache_system_tl_top__DOT__clk_h;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__addr_matches 
        = ((((0xffffff80U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__valid_table) 
                             & (((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__addr_table
                                  [7U] >> 6U) == vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__incoming_line_addr) 
                                << 7U))) | (0xffffffc0U 
                                            & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__valid_table) 
                                               & (((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__addr_table
                                                    [6U] 
                                                    >> 6U) 
                                                   == vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__incoming_line_addr) 
                                                  << 6U)))) 
            | ((0xffffffe0U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__valid_table) 
                               & (((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__addr_table
                                    [5U] >> 6U) == vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__incoming_line_addr) 
                                  << 5U))) | (0xfffffff0U 
                                              & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__valid_table) 
                                                 & (((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__addr_table
                                                      [4U] 
                                                      >> 6U) 
                                                     == vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__incoming_line_addr) 
                                                    << 4U))))) 
           | (((0xfffffff8U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__valid_table) 
                               & (((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__addr_table
                                    [3U] >> 6U) == vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__incoming_line_addr) 
                                  << 3U))) | (0xfffffffcU 
                                              & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__valid_table) 
                                                 & (((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__addr_table
                                                      [2U] 
                                                      >> 6U) 
                                                     == vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__incoming_line_addr) 
                                                    << 2U)))) 
              | ((0xfffffffeU & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__valid_table) 
                                 & (((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__addr_table
                                      [1U] >> 6U) == vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__incoming_line_addr) 
                                    << 1U))) | ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__valid_table) 
                                                & ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__addr_table
                                                    [0U] 
                                                    >> 6U) 
                                                   == vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__incoming_line_addr)))));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__lifetime 
        = (0xffU & (~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__lifetime_p)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_through 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write_through;
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
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_done 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_done;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cache_access_done 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_accessed;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fsm_accessed 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_accessed;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__mshr_fin_valid = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__mshr_fin_id 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__mshr_id_keep;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__in_write 
        = vlSelfRef.cache_system_tl_top__DOT__is_write_req;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_raw_out[0U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__match_data;
    if ((0U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_state))) {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__fsm_ready = 1U;
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_ready 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__fsm_ready;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__in_ready 
        = ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__cur_state)) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__fsm_ready));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__input_unencoded 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slots;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__input_unencoded 
        = (0xfU & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slots) 
                   >> 0U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst1__DOT__input_unencoded 
        = (3U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slots) 
                 >> 0U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst2__DOT__input_unencoded 
        = (3U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slots) 
                 >> 2U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__input_unencoded 
        = (0xfU & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slots) 
                   >> 4U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst1__DOT__input_unencoded 
        = (3U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slots) 
                 >> 4U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst2__DOT__input_unencoded 
        = (3U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slots) 
                 >> 6U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded 
        = (1U & (~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slots)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded 
        = (1U & (~ ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slots) 
                    >> 2U)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded 
        = (1U & (~ ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slots) 
                    >> 4U)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded 
        = (1U & (~ ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slots) 
                    >> 6U)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid 
        = (0U != (3U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slots) 
                        >> 6U)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid 
        = (0U != (3U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slots) 
                        >> 2U)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid 
        = (0U != (3U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slots) 
                        >> 4U)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid 
        = (0U != (3U & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slots)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__0__KET____DOT__tag_sram__DOT__in_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__current_set_idx;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__1__KET____DOT__tag_sram__DOT__in_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__current_set_idx;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__2__KET____DOT__tag_sram__DOT__in_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__current_set_idx;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__3__KET____DOT__tag_sram__DOT__in_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__current_set_idx;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__4__KET____DOT__tag_sram__DOT__in_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__current_set_idx;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__5__KET____DOT__tag_sram__DOT__in_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__current_set_idx;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__6__KET____DOT__tag_sram__DOT__in_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__current_set_idx;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__7__KET____DOT__tag_sram__DOT__in_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__current_set_idx;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_MRU 
        = (7U & ((IData)(1U) + vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__MRU
                 [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__current_set_idx]));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_vld 
        = (0xffU & (~ vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__valid_reg
                    [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__current_set_idx]));
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
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__rand_fill_engine__DOT__en 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__cfg_en;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__rand_fill_engine__DOT__low_bound 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__cfg_low_bound;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__rand_fill_engine__DOT__high_bound 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__cfg_high_bound;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__mem_read_data 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__read_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__mem_write_done 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write_ready;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__rd_cam_counter__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__rd_cam_counter__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__in_valid 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cfg_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__in_opcode 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__in_opcode;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__alloc_opcode 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__in_opcode;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__in_source 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__in_source;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__alloc_source 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__in_source;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__in_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__in_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__alloc_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__in_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__in_data 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__in_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__alloc_data 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__in_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__mem_read_done 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__read_ready;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__cache_write_byteen 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__in_byteen;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__alloc_byteen 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__in_byteen;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_byteen 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__in_byteen;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__genblk1__BRA__0__KET____DOT__stream_counter__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__stream_counter__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__genblk1__BRA__1__KET____DOT__stream_counter__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__stream_counter__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__genblk1__BRA__2__KET____DOT__stream_counter__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__stream_counter__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__genblk1__BRA__3__KET____DOT__stream_counter__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__stream_counter__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__in[0U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__cfg_load_val[0U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__in[1U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__cfg_load_val[1U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__in[2U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__cfg_load_val[2U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__in[3U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__cfg_load_val[3U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__in[4U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__cfg_load_val[4U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__in[5U] 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__cfg_load_val[5U];
    if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cur_state) {
        if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cur_state) {
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__mem_read_o_valid 
                = (1U & (~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__counter_done)));
        }
    } else {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__mem_read_o_valid = 0U;
    }
    vlSelfRef.cache_system_tl_top__DOT__read_valid 
        = ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__counter_offset_inst__DOT__done)) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__mem_read_o_valid));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__rand_fill_engine__DOT__rng_val 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__rng_val;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__out 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__rng_val;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__in_data 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cfg_data_in;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__cfg_load 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__load;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__load 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__load;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT____Vcellinp__num_gen__valid 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_secure__DOT__data) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__load));
    vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__main_mem_dp__DOT__a_clk 
        = vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__main_mem_dp__DOT__b_clk 
        = vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__clk_l 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__clk_l;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__clk_l 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__clk_l;
    if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cur_state) {
        if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cur_state) {
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__mem_read_o_addr 
                = (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__addr_i_reg 
                   + VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__counter_wire), 2U));
        }
    } else {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__mem_read_o_addr = 0U;
    }
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
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_wr_cam_edge__DOT__signal_in 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_wr_cam;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rst_n;
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
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__clk_h 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__clk_h;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__clk_h 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__clk_h;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__clk_h;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__clk_h;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__clk_h;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__clk_h;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__clk_h;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__clk_h;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__clk_h;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__alloc_match 
        = (0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__addr_matches));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_candidates 
        = ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__next_table)) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__addr_matches));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__sig_in 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__lifetime;
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
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__in_rw 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__in_write;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__alloc_rw 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__in_write;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_many_raw = 0xfU;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_many_raw 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_many_raw) 
           & vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_raw_out
           [0U]);
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_ready 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_ready;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_in_ready 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__in_ready;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__out1 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_unencoded 
        = (3U & ((IData)(1U) << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__out2 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_unencoded 
        = (3U & ((IData)(1U) << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__out1 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_unencoded 
        = (3U & ((IData)(1U) << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__out2 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_unencoded 
        = (3U & ((IData)(1U) << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__valid2 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__valid2 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid;
    if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid) {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__valid1 = 1U;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded;
    } else {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__valid1 = 0U;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded 
            = (2U | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded));
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid) 
           | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid));
    if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid) {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__valid1 = 1U;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded;
    } else {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__valid1 = 0U;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded 
            = (2U | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded));
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid) 
           | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__0__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__addra 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__0__KET____DOT__tag_sram__DOT__in_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__1__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__addra 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__1__KET____DOT__tag_sram__DOT__in_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__2__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__addra 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__2__KET____DOT__tag_sram__DOT__in_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__3__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__addra 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__3__KET____DOT__tag_sram__DOT__in_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__4__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__addra 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__4__KET____DOT__tag_sram__DOT__in_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__5__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__addra 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__5__KET____DOT__tag_sram__DOT__in_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__6__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__addra 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__6__KET____DOT__tag_sram__DOT__in_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__7__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__addra 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__7__KET____DOT__tag_sram__DOT__in_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__input_unencoded 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_vld;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst1__DOT__input_unencoded 
        = (0xfU & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_vld) 
                   >> 0U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst1__DOT__input_unencoded 
        = (3U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_vld) 
                 >> 0U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst2__DOT__input_unencoded 
        = (3U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_vld) 
                 >> 2U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst2__DOT__input_unencoded 
        = (0xfU & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_vld) 
                   >> 4U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst1__DOT__input_unencoded 
        = (3U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_vld) 
                 >> 4U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst2__DOT__input_unencoded 
        = (3U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_vld) 
                 >> 6U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid 
        = (0U != (3U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_vld) 
                        >> 6U)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid 
        = (0U != (3U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_vld) 
                        >> 2U)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded 
        = (1U & (~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_vld)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded 
        = (1U & (~ ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_vld) 
                    >> 2U)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded 
        = (1U & (~ ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_vld) 
                    >> 4U)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded 
        = (1U & (~ ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_vld) 
                    >> 6U)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid 
        = (0U != (3U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_vld) 
                        >> 4U)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid 
        = (0U != (3U & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_vld)));
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
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_addr__DOT__set 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__in_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__counter_offset_inst__DOT__start 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__mem_read_done;
    vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__read_valid 
        = vlSelfRef.cache_system_tl_top__DOT__read_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__read_valid 
        = vlSelfRef.cache_system_tl_top__DOT__read_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__mem_read_valid 
        = vlSelfRef.cache_system_tl_top__DOT__read_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_0__DOT__din 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__in_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_1__DOT__din 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__in_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_2__DOT__din 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__in_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_3__DOT__din 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__in_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_4__DOT__din 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__in_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__valid 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT____Vcellinp__num_gen__valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__counter_offset_inst__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__clk_l;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_offset_inst__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__clk_l;
    vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__main_mem_dp__DOT__a_addr 
        = vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__r_addr;
    vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__read_addr 
        = vlSelfRef.cache_system_tl_top__DOT__read_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__read_addr 
        = vlSelfRef.cache_system_tl_top__DOT__read_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__mem_read_addr 
        = vlSelfRef.cache_system_tl_top__DOT__read_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__D_FF_valid__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__rand_fill_engine__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__0__KET____DOT__tag_sram__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__1__KET____DOT__tag_sram__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__2__KET____DOT__tag_sram__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__3__KET____DOT__tag_sram__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__4__KET____DOT__tag_sram__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__5__KET____DOT__tag_sram__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__6__KET____DOT__tag_sram__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__7__KET____DOT__tag_sram__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_write__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_secure__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_b__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_h_b__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_pf__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_0__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_1__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_2__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_3__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_4__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_5__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_addr__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__rst_n;
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
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__D_FF_valid__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__latency_counter__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__num_gen__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__rand_fill_engine__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__load_val_edge__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_write__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_secure__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_b__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_h_b__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_pf__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_0__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_1__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_2__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_3__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_4__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_va_5__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_addr__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__latency_counter__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__0__KET____DOT__tag_sram__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__1__KET____DOT__tag_sram__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__2__KET____DOT__tag_sram__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__3__KET____DOT__tag_sram__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__4__KET____DOT__tag_sram__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__5__KET____DOT__tag_sram__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__6__KET____DOT__tag_sram__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__7__KET____DOT__tag_sram__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_tracker__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_rd_cam_edge__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_erase_edge__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_wr_cam_edge__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_cam_edge__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_mem_edge__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__rd_mem_counter__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__rd_cam_counter__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__erase_cam_counter__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__wr_mem_counter__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__genblk1__BRA__0__KET____DOT__stream_counter__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__genblk1__BRA__1__KET____DOT__stream_counter__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__genblk1__BRA__2__KET____DOT__stream_counter__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__genblk1__BRA__3__KET____DOT__stream_counter__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_alloc_match 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__alloc_match;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__input_unencoded 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_candidates;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__input_unencoded 
        = (0xfU & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_candidates) 
                   >> 0U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst1__DOT__input_unencoded 
        = (3U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_candidates) 
                 >> 0U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst2__DOT__input_unencoded 
        = (3U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_candidates) 
                 >> 2U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__input_unencoded 
        = (0xfU & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_candidates) 
                   >> 4U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst1__DOT__input_unencoded 
        = (3U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_candidates) 
                 >> 4U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst2__DOT__input_unencoded 
        = (3U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_candidates) 
                 >> 6U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid 
        = (0U != (3U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_candidates) 
                        >> 6U)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid 
        = (0U != (3U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_candidates) 
                        >> 2U)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded 
        = (1U & (~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_candidates)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded 
        = (1U & (~ ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_candidates) 
                    >> 2U)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded 
        = (1U & (~ ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_candidates) 
                    >> 4U)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded 
        = (1U & (~ ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_candidates) 
                    >> 6U)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid 
        = (0U != (3U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_candidates) 
                        >> 4U)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid 
        = (0U != (3U & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_candidates)));
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
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__fin_valid 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_fin_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__fin_id 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_fin_id;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__input_unencoded 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_many_raw;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst1__DOT__input_unencoded 
        = (3U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_many_raw) 
                 >> 0U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst2__DOT__input_unencoded 
        = (3U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_many_raw) 
                 >> 2U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__match_many 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_many_raw;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match_many 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_many_raw;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_many 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_many_raw;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded 
        = (1U & (~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_many_raw)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded 
        = (1U & (~ ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_many_raw) 
                    >> 2U)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid 
        = (0U != (3U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_many_raw) 
                        >> 2U)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid 
        = (0U != (3U & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_many_raw)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__out2 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_unencoded 
        = (0xfU & ((IData)(1U) << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__valid2 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__out1 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_unencoded 
        = (0xfU & ((IData)(1U) << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded)));
    if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid) {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__valid1 = 1U;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__alloc_id 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded;
    } else {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__valid1 = 0U;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__alloc_id 
            = (4U | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded));
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__output_valid 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid) 
           | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__valid2 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__valid2 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__out1 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_unencoded 
        = (3U & ((IData)(1U) << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__out2 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_unencoded 
        = (3U & ((IData)(1U) << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__out1 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_unencoded 
        = (3U & ((IData)(1U) << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__out2 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_unencoded 
        = (3U & ((IData)(1U) << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__valid1 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid) 
           | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid)
            ? (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded)
            : (2U | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__valid1 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid) 
           | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid)
            ? (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded)
            : (2U | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded)));
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
    vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__main_mem_dp__DOT__b_din 
        = vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__write_data;
    vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT__main_mem_dp__DOT__b_we 
        = vlSelfRef.cache_system_tl_top__DOT__dram_inst__DOT____Vcellinp__main_mem_dp__b_we;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__0__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__clka 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__0__KET____DOT__tag_sram__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__1__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__clka 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__1__KET____DOT__tag_sram__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__2__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__clka 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__2__KET____DOT__tag_sram__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__3__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__clka 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__3__KET____DOT__tag_sram__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__4__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__clka 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__4__KET____DOT__tag_sram__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__5__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__clka 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__5__KET____DOT__tag_sram__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__6__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__clka 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__6__KET____DOT__tag_sram__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__7__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__clka 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__7__KET____DOT__tag_sram__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__clka 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__valid2 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__valid2 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__out1 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_unencoded 
        = (3U & ((IData)(1U) << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__out2 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_unencoded 
        = (3U & ((IData)(1U) << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__out1 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_unencoded 
        = (3U & ((IData)(1U) << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__out2 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_unencoded 
        = (3U & ((IData)(1U) << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__valid1 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid) 
           | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid)
            ? (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded)
            : (2U | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__valid1 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid) 
           | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid)
            ? (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded)
            : (2U | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded)));
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
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__out1 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_unencoded 
        = (3U & ((IData)(1U) << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__out2 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_unencoded 
        = (3U & ((IData)(1U) << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__valid2 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid;
    if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid) {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__valid1 = 1U;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match_addr 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded;
    } else {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__valid1 = 0U;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match_addr 
            = (2U | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded));
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid) 
           | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__next_free_id 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__alloc_id;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__output_encoded 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__alloc_id;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__output_unencoded 
        = (0xffU & ((IData)(1U) << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__alloc_id)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_alloc_id 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__alloc_id;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_alloc_ready 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__output_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__alloc_ready 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__output_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_exists 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__output_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__in_ready 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__in_ready) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__is_write_req) 
              | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__output_valid)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__valid2 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__out2 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_unencoded 
        = (0xfU & ((IData)(1U) << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__valid1 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__output_valid 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid) 
           | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__out1 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_unencoded 
        = (0xfU & ((IData)(1U) << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_vld 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid)
            ? (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded)
            : (4U | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded)));
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
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__a_clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__b_clk 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__clk;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__valid2 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__out2 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_unencoded 
        = (0xfU & ((IData)(1U) << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__valid1 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__output_valid 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid) 
           | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__out1 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_unencoded 
        = (0xfU & ((IData)(1U) << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__output_encoded 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid)
            ? (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded)
            : (4U | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded)));
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
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__wren = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_enable = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_data = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_data = 0U;
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
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_addr = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__in_mshr_id 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_alloc_id;
    vlSelfRef.a_ready = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__in_ready;
    vlSelfRef.cache_system_tl_top__DOT__a_ready = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__in_ready;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_do_alloc 
        = ((IData)(vlSelfRef.a_valid) & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__in_ready));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__output_encoded 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_vld;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_way__DOT__output_unencoded 
        = (0xffU & ((IData)(1U) << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_vld)));
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
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_hit 
        = (0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_hit));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__alloc_match_id 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__output_encoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_alloc_match_id 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__output_encoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_idx 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__output_encoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__output_unencoded 
        = (0xffU & ((IData)(1U) << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__tail_encoder__DOT__output_encoded)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__match_single 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__output_unencoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match_single 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__output_unencoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_single 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__output_unencoded;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_delete_next 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_delete_reg;
    if ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
        if ((1U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
            if ((2U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
                if (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_cam_done) 
                     & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_accessed) 
                        | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cache_access_keep)))) {
                    if (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_keep) 
                         & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match))) {
                        if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_mem_done) {
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__unnamedblk1__DOT__j = 1U;
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__unnamedblk1__DOT__j = 2U;
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__unnamedblk1__DOT__j = 3U;
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__unnamedblk1__DOT__j = 4U;
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__unnamedblk1__DOT__j = 5U;
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__unnamedblk1__DOT__j = 6U;
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__unnamedblk1__DOT__j = 7U;
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__unnamedblk1__DOT__j = 8U;
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__unnamedblk1__DOT__j = 9U;
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__unnamedblk1__DOT__j = 0xaU;
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__unnamedblk1__DOT__j = 0xbU;
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__unnamedblk1__DOT__j = 0xcU;
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__unnamedblk1__DOT__j = 0xdU;
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__unnamedblk1__DOT__j = 0xeU;
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__unnamedblk1__DOT__j = 0xfU;
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__unnamedblk1__DOT__j = 0x10U;
                        }
                    }
                }
            }
        }
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
                        if (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_done) 
                             | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_done_keep))) {
                            if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_wr_cam_done) {
                                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__wren = 1U;
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
                    }
                }
            }
        }
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__write_delete 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_delete;
    } else {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__write_delete 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_delete;
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__wren 
        = (QData)((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__wren));
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
                                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_addr 
                                    = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_idx;
                            }
                            if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_wr_cam_done) {
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
                        } else if ((1U & (~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_erase_done)))) {
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_addr 
                                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_idx;
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
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__write_enable 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_enable;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_next = 1U;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__write_data 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_data;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_data_padded 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_data;
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
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_addr_next 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_addr_reg;
    } else {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__write_enable 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_enable;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_next = 1U;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__write_data 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_data;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_data_padded 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_data;
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
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_addr_next 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_addr_reg;
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__write_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__clear_bit = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__set_bit = 0U;
    if ((0U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_next 
            = ((0U == vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__count_reg)
                ? 1U : 0U);
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__clear_bit = 0xfU;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__set_bit = 0U;
    } else {
        if ((1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
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
        if ((1U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
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
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__in_valid 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_do_alloc;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__alloc_valid 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_do_alloc;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__alloc_fire 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_do_alloc) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__free_slot_encoder__DOT__output_valid));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_valid = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_addr = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_rw = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__output_encoded 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_hit_idx;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_hit__DOT__output_unencoded 
        = (0xffU & ((IData)(1U) << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_hit_idx)));
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
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__mshr_fin_is_hit = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__out_addr = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_addr = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__en = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_addr = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__out_opcode = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__out_source = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_valid = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__out_valid = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_addr = 0U;
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
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid = 0U;
    if ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
        if ((1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
            if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__trans_done_keep) {
                if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_rd_cam_happend) {
                    if ((1U & ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match)) 
                               | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__not_match_keep)))) {
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_addr 
                            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__trans_in_addr;
                        if (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_done) 
                             | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_done_keep))) {
                            if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_prefetch_wr_cam_done) {
                                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__en = 1U;
                                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_addr 
                                    = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty_idx;
                            }
                        }
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
                if (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_keep) 
                     & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match))) {
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__en = 1U;
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_addr 
                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match_addr;
                } else if ((1U & (~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_hit)))) {
                    if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match) {
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__en = 1U;
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_addr 
                            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match_addr;
                    }
                }
            }
        }
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
                                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_addr 
                                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__prev_addr;
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
                                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((3U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
                if (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_done) 
                     | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_done_keep))) {
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_addr 
                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__prev_addr;
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
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid = 1U;
                }
            }
        }
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_delete 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__write_delete;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__wea 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__wren;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_enable 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__write_enable;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_data 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__write_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_data_padded_next 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_data_padded_reg;
    if ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
        if ((1U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
            if ((2U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
                if ((3U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
                    if ((1U & (~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_delete_reg)))) {
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__erase_ram_wr_en = 1U;
                    }
                }
            }
        }
        if ((1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_delete_next 
                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_delete;
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_addr_next 
                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_addr;
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_data_padded_next 
                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_data_padded;
        }
    }
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
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__write_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__b_din 
        = (((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__clear_bit)) 
            & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__b_dout_reg)) 
           | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__set_bit));
    if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__cur_state) {
        if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__cur_state) {
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_valid = 1U;
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__data_keep;
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_addr 
                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__addr_keep;
        }
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_valid 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_valid;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_data 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data;
    } else {
        if (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_do_alloc) 
             & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_ready))) {
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_valid = 1U;
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data 
                = vlSelfRef.a_data;
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_addr 
                = vlSelfRef.a_address;
        }
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_valid 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_valid;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_data 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_data;
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_word_idx 
        = (0xfU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_addr 
                   >> 2U));
    if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__cur_state) {
        if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__cur_state) {
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_rw 
                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__write_keep;
        }
    } else if (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_do_alloc) 
                & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_ready))) {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_rw 
            = vlSelfRef.cache_system_tl_top__DOT__is_write_req;
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_rw 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_rw;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_mem 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_cam_done) 
           & (((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_hit)) 
               | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_rw)) 
              & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match)));
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
                } else {
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__mshr_fin_is_hit = 0U;
                }
            }
        }
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__miss_trigger 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__miss_trigger;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_fin_is_hit 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__mshr_fin_is_hit;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_out_addr 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__out_addr;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_addr 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_addr;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__en 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__en;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__in_addr 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_addr;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_out_opcode 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__out_opcode;
    } else {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__miss_trigger 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__miss_trigger;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_fin_is_hit 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__mshr_fin_is_hit;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_out_addr 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__out_addr;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_addr 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_addr;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__en 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__en;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__in_addr 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__mem_addr;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_out_opcode 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__out_opcode;
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_out_source 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__out_source;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_valid 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_valid;
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
    if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__cur_state) {
        if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__cur_state) {
            if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_accessed) {
                if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_hit) {
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__out_valid = 1U;
                }
            }
        }
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
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__return_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_addr;
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
    if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write_all = 1U;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__addr 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_addr;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__return_valid = 1U;
    } else {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write_all = 0U;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__addr 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_addr;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__return_valid = 0U;
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__in_valid 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__fsm_valid 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__l = 1U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__l = 2U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__l = 3U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__l = 4U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__l = 5U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__l = 6U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__l = 7U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__l = 8U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__trans_valid = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__trans_out_addr = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__next_state 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__en = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__in_data 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__fsm_data 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__in_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__fsm_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__compare_data = 0U;
    if ((0U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__in_ready = 1U;
        if ((1U & (~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_valid)))) {
            if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty) {
                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__trans_valid = 1U;
                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__trans_out_addr 
                    = ((IData)(0x40U) + vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__prev_addr);
            }
        }
        if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_valid) {
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__next_state = 2U;
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__compare_data 
                = (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_addr 
                   >> 6U);
        } else if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__empty) {
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__next_state = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
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
        if ((1U & (~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__trans_done_keep)))) {
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__compare_data 
                = (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__trans_in_addr 
                   >> 6U);
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
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__compare_data 
            = (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__prev_addr 
               >> 6U);
    } else if ((3U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
        if (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_done) 
             | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_done_keep))) {
            if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__return_ready) {
                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__next_state = 0U;
            }
        }
    }
    cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_9 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_rw) 
           & (1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_word_idx)));
    cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_10 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_rw) 
           & (2U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_word_idx)));
    cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_11 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_rw) 
           & (3U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_word_idx)));
    cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_12 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_rw) 
           & (4U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_word_idx)));
    cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_13 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_rw) 
           & (5U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_word_idx)));
    cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_14 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_rw) 
           & (6U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_word_idx)));
    cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_15 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_rw) 
           & (7U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_word_idx)));
    cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_16 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_rw) 
           & (8U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_word_idx)));
    cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_17 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_rw) 
           & (9U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_word_idx)));
    cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_18 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_rw) 
           & (0xaU == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_word_idx)));
    cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_19 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_rw) 
           & (0xbU == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_word_idx)));
    cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_20 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_rw) 
           & (0xcU == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_word_idx)));
    cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_21 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_rw) 
           & (0xdU == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_word_idx)));
    cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_22 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_rw) 
           & (0xeU == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_word_idx)));
    cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_23 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_rw) 
           & (0xfU == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_word_idx)));
    cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_0 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_rw) 
           & (0U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_word_idx)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_rw;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__fsm_write 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_rw;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_mem_edge__DOT__signal_in 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_mem;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__valid 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
           | ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write) 
              | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_valid)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click 
        = ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_prev)) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write) 
              | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_inst__DOT__fin_is_hit 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__mshr_fin_is_hit;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cache_read_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ena 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__en;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__addra 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__data_buffer__DOT__in_addr;
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
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__ib_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__return_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_all 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write_all;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__addr;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.in_addr 
        = (0x3fU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__addr 
                    >> 6U));
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.in_addr 
        = (0x3fU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__addr 
                    >> 6U));
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.in_addr 
        = (0x3fU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__addr 
                    >> 6U));
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.in_addr 
        = (0x3fU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__addr 
                    >> 6U));
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.in_addr 
        = (0x3fU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__addr 
                    >> 6U));
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.in_addr 
        = (0x3fU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__addr 
                    >> 6U));
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.in_addr 
        = (0x3fU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__addr 
                    >> 6U));
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.in_addr 
        = (0x3fU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__addr 
                    >> 6U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx 
        = (0xfU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__addr 
                   >> 2U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__fetch_done 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__return_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_write = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_valid = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_addr = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_out_data = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_state 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_state;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__wren = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_valid = 0U;
    if ((0U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_state))) {
        if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_valid) {
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__l = 1U;
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__l = 2U;
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__l = 3U;
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__l = 4U;
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__l = 5U;
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__l = 6U;
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__l = 7U;
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__l = 8U;
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__en = 0xffU;
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_state = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_state))) {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__l = 1U;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__l = 2U;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__l = 3U;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__l = 4U;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__l = 5U;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__l = 6U;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__l = 7U;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__l = 8U;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__en = 0xffU;
        if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__tag_access_done) {
            if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_keep) {
                if ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_hit))) {
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_state = 0U;
                    if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write_through) {
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_valid = 1U;
                        if ((1U & (~ ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_valid) 
                                      & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cache_write_ready))))) {
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_state = 1U;
                        }
                    }
                } else if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write_through) {
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_valid = 1U;
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_state = 0U;
                    if ((1U & (~ ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_valid) 
                                  & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cache_write_ready))))) {
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_state = 1U;
                    }
                } else if ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_vld))) {
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__wren 
                        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__wren) 
                           | (0xffU & ((IData)(1U) 
                                       << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_vld))));
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_state = 2U;
                } else {
                    if ((1U & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__dirty_reg
                               [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__current_set_idx] 
                               >> (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_MRU)))) {
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_valid = 1U;
                    }
                    if ((1U & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_valid) 
                                & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cache_write_ready)) 
                               | (~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_valid))))) {
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__wren 
                            = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__wren) 
                               | (0xffU & ((IData)(1U) 
                                           << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_MRU))));
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_state = 2U;
                    }
                }
            } else if ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_hit))) {
                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_state = 0U;
            } else if ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_vld))) {
                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__wren 
                    = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__wren) 
                       | (0xffU & ((IData)(1U) << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_vld))));
                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_state = 0U;
            } else {
                if ((1U & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__dirty_reg
                           [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__current_set_idx] 
                           >> (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_MRU)))) {
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_valid = 1U;
                }
                if ((1U & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_valid) 
                            & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cache_write_ready)) 
                           | (~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_valid))))) {
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__wren 
                        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__wren) 
                           | (0xffU & ((IData)(1U) 
                                       << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_MRU))));
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_state = 0U;
                }
            }
        }
    } else if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__return_valid) {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_state = 0U;
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__trans_valid 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__trans_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__trans_out_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__trans_out_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__rand_fill_engine__DOT__add_addr 
        = (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__trans_out_addr 
           + ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__rng_val) 
              & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_h_b__DOT__data)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_cam 
        = ((0U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state)) 
           & (2U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__next_state)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__0__KET____DOT__tag_sram__DOT__en 
        = (1U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__en) 
                 >> 0U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__1__KET____DOT__tag_sram__DOT__en 
        = (1U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__en) 
                 >> 1U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__2__KET____DOT__tag_sram__DOT__en 
        = (1U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__en) 
                 >> 2U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__3__KET____DOT__tag_sram__DOT__en 
        = (1U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__en) 
                 >> 3U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__4__KET____DOT__tag_sram__DOT__en 
        = (1U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__en) 
                 >> 4U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__5__KET____DOT__tag_sram__DOT__en 
        = (1U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__en) 
                 >> 5U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__6__KET____DOT__tag_sram__DOT__en 
        = (1U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__en) 
                 >> 6U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__7__KET____DOT__tag_sram__DOT__en 
        = (1U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__en) 
                 >> 7U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__compare_data_padded 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__compare_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__compare_data 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__compare_data;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__1__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_9) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 3U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__1__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_9) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 2U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__1__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_9) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 1U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__1__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_9) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__2__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_10) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 3U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__2__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_10) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 2U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__2__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_10) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 1U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__2__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_10) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__3__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_11) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 3U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__3__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_11) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 2U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__3__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_11) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 1U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__3__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_11) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__4__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_12) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 3U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__4__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_12) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 2U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__4__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_12) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 1U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__4__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_12) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__5__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_13) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 3U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__5__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_13) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 2U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__5__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_13) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 1U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__5__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_13) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__6__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_14) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 3U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__6__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_14) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 2U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__6__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_14) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 1U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__6__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_14) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__7__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_15) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 3U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__7__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_15) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 2U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__7__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_15) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 1U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__7__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_15) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__8__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_16) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 3U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__8__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_16) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 2U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__8__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_16) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 1U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__8__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_16) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__9__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_17) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 3U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__9__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_17) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 2U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__9__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_17) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 1U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__9__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_17) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__10__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_18) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 3U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__10__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_18) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 2U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__10__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_18) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 1U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__10__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_18) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__11__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_19) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 3U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__11__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_19) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 2U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__11__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_19) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 1U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__11__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_19) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__12__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_20) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 3U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__12__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_20) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 2U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__12__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_20) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 1U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__12__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_20) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__13__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_21) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 3U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__13__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_21) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 2U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__13__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_21) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 1U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__13__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_21) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__14__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_22) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 3U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__14__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_22) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 2U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__14__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_22) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 1U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__14__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_22) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__15__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_23) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 3U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__15__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_23) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 2U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__15__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_23) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 1U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__15__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_23) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__0__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_0) 
           & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__0__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_0) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 3U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__0__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_0) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 2U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__g_word_transfer__BRA__0__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en 
        = ((IData)(cache_system_tl_top__DOT__cache_inst__DOT____VdfgRegularize_haae396c2_4_0) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__byteen_keep) 
              >> 1U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__en 
        = (0xffU & (- (IData)((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__valid))));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__valid 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__valid;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.en 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__valid;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.en 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__valid;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.en 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__valid;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.en 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__valid;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.en 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__valid;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.en 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__valid;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.en 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__valid;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.en 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__latency_counter__rst_n 
        = ((~ ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__D_FF_valid__DOT__data)) 
               & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__valid))) 
           & (IData)(vlSelfRef.rst_n));
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
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__byte_mask 
        = (((QData)((IData)(((((((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                  ? 0xfU : (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
                                             & (0xfU 
                                                == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx)))
                                             ? (IData)(vlSelfRef.a_mask)
                                             : 0U)) 
                                << 0x1cU) | (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                               ? 0xfU
                                               : (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
                                                   & (0xeU 
                                                      == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx)))
                                                   ? (IData)(vlSelfRef.a_mask)
                                                   : 0U)) 
                                             << 0x18U)) 
                              | ((((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                    ? 0xfU : (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
                                               & (0xdU 
                                                  == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx)))
                                               ? (IData)(vlSelfRef.a_mask)
                                               : 0U)) 
                                  << 0x14U) | (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                 ? 0xfU
                                                 : 
                                                (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
                                                  & (0xcU 
                                                     == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx)))
                                                  ? (IData)(vlSelfRef.a_mask)
                                                  : 0U)) 
                                               << 0x10U))) 
                             | (((((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                    ? 0xfU : (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
                                               & (0xbU 
                                                  == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx)))
                                               ? (IData)(vlSelfRef.a_mask)
                                               : 0U)) 
                                  << 0xcU) | (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                ? 0xfU
                                                : (
                                                   ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
                                                    & (0xaU 
                                                       == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx)))
                                                    ? (IData)(vlSelfRef.a_mask)
                                                    : 0U)) 
                                              << 8U)) 
                                | ((((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                      ? 0xfU : (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
                                                 & (9U 
                                                    == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx)))
                                                 ? (IData)(vlSelfRef.a_mask)
                                                 : 0U)) 
                                    << 4U) | ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                               ? 0xfU
                                               : (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
                                                   & (8U 
                                                      == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx)))
                                                   ? (IData)(vlSelfRef.a_mask)
                                                   : 0U))))))) 
            << 0x20U) | (QData)((IData)(((((((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                              ? 0xfU
                                              : (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
                                                  & (7U 
                                                     == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx)))
                                                  ? (IData)(vlSelfRef.a_mask)
                                                  : 0U)) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                ? 0xfU
                                                : (
                                                   ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
                                                    & (6U 
                                                       == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx)))
                                                    ? (IData)(vlSelfRef.a_mask)
                                                    : 0U)) 
                                              << 0x18U)) 
                                          | ((((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                ? 0xfU
                                                : (
                                                   ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
                                                    & (5U 
                                                       == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx)))
                                                    ? (IData)(vlSelfRef.a_mask)
                                                    : 0U)) 
                                              << 0x14U) 
                                             | (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                  ? 0xfU
                                                  : 
                                                 (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
                                                   & (4U 
                                                      == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx)))
                                                   ? (IData)(vlSelfRef.a_mask)
                                                   : 0U)) 
                                                << 0x10U))) 
                                         | (((((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                ? 0xfU
                                                : (
                                                   ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
                                                    & (3U 
                                                       == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx)))
                                                    ? (IData)(vlSelfRef.a_mask)
                                                    : 0U)) 
                                              << 0xcU) 
                                             | (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                  ? 0xfU
                                                  : 
                                                 (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
                                                   & (2U 
                                                      == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx)))
                                                   ? (IData)(vlSelfRef.a_mask)
                                                   : 0U)) 
                                                << 8U)) 
                                            | ((((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                  ? 0xfU
                                                  : 
                                                 (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
                                                   & (1U 
                                                      == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx)))
                                                   ? (IData)(vlSelfRef.a_mask)
                                                   : 0U)) 
                                                << 4U) 
                                               | ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                   ? 0xfU
                                                   : 
                                                  (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
                                                    & (0U 
                                                       == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx)))
                                                    ? (IData)(vlSelfRef.a_mask)
                                                    : 0U))))))));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cache_write_valid 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__0__KET____DOT__tag_sram__DOT__wren 
        = (1U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__wren) 
                 >> 0U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__1__KET____DOT__tag_sram__DOT__wren 
        = (1U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__wren) 
                 >> 1U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__2__KET____DOT__tag_sram__DOT__wren 
        = (1U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__wren) 
                 >> 2U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__3__KET____DOT__tag_sram__DOT__wren 
        = (1U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__wren) 
                 >> 3U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__4__KET____DOT__tag_sram__DOT__wren 
        = (1U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__wren) 
                 >> 4U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__5__KET____DOT__tag_sram__DOT__wren 
        = (1U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__wren) 
                 >> 5U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__6__KET____DOT__tag_sram__DOT__wren 
        = (1U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__wren) 
                 >> 6U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__7__KET____DOT__tag_sram__DOT__wren 
        = (1U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__wren) 
                 >> 7U));
    if ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_state))) {
        if ((1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_state))) {
            if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__tag_access_done) {
                if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_keep) {
                    if ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_hit))) {
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_write = 1U;
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_valid = 1U;
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_addr 
                            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__addr_keep;
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_out_data 
                            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__data_keep;
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way 
                            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_hit_idx;
                    } else if ((1U & (~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write_through)))) {
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way 
                            = ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_vld))
                                ? (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_vld)
                                : (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_MRU));
                    }
                } else {
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way 
                        = ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_hit))
                            ? (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_hit_idx)
                            : ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_vld))
                                ? (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_vld)
                                : (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_MRU)));
                }
            }
        } else if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__return_valid) {
            if (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_keep) 
                 & (~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write_through)))) {
                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_write = 1U;
                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_valid = 1U;
                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_addr 
                    = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__addr_keep;
                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_out_data 
                    = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__data_keep;
                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way 
                    = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_keep;
            }
        }
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__victim_is_dirty 
        = (1U & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__dirty_reg
                 [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__current_set_idx] 
                 >> (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__stable_evict_addr 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__evict_buf_valid)
            ? ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__evict_tag_buf 
                << 0xcU) | ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__evict_set_buf) 
                            << 6U)) : ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__tag_data
                                        [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way] 
                                        << 0xcU) | 
                                       ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__current_set_idx) 
                                        << 6U)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way 
        = ((1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_state))
            ? (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way)
            : (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_keep));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__in_valid 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__trans_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__in_raw_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__trans_out_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__rand_fill_engine__DOT__cal_addr 
        = (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__rand_fill_engine__DOT__add_addr 
           + VL_EXTENDS_II(32,4, (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_l_b__DOT__data)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_cam_edge__DOT__signal_in 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_cam;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__0__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ena 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__0__KET____DOT__tag_sram__DOT__en;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__1__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ena 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__1__KET____DOT__tag_sram__DOT__en;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__2__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ena 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__2__KET____DOT__tag_sram__DOT__en;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__3__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ena 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__3__KET____DOT__tag_sram__DOT__en;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__4__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ena 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__4__KET____DOT__tag_sram__DOT__en;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__5__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ena 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__5__KET____DOT__tag_sram__DOT__en;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__6__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ena 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__6__KET____DOT__tag_sram__DOT__en;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__7__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ena 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__7__KET____DOT__tag_sram__DOT__en;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__compare_data 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__compare_data;
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
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__D_FF_valid__DOT__din 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__latency_counter__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__latency_counter__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__cache_write_valid 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cache_write_valid;
    __Vtableidx2 = ((((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cache_write_valid) 
                      << 4U) | (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__done_keep) 
                                 << 3U) | ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__counter_done) 
                                           << 2U))) 
                    | (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__write_all) 
                        << 1U) | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__cur_state)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__next_state 
        = Vtop__ConstPool__TABLE_h9a855263_0[__Vtableidx2];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__0__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__wea 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__0__KET____DOT__tag_sram__DOT__wren;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__1__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__wea 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__1__KET____DOT__tag_sram__DOT__wren;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__2__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__wea 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__2__KET____DOT__tag_sram__DOT__wren;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__3__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__wea 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__3__KET____DOT__tag_sram__DOT__wren;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__4__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__wea 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__4__KET____DOT__tag_sram__DOT__wren;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__5__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__wea 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__5__KET____DOT__tag_sram__DOT__wren;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__6__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__wea 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__6__KET____DOT__tag_sram__DOT__wren;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__7__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__wea 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__7__KET____DOT__tag_sram__DOT__wren;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__is_dirty_miss 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__latency_counter__DOT__done) 
           & ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_hit)) 
              & ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_write__DOT__data)) 
                 & ((~ (IData)((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_vld)))) 
                    & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__victim_is_dirty)))));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__stable_evict_addr;
    if ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_state))) {
        if ((1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_state))) {
            if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__tag_access_done) {
                if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_keep) {
                    if ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_hit))) {
                        if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write_through) {
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_addr 
                                = (0xfffffffcU & vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__addr_keep);
                        }
                    } else if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write_through) {
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_addr 
                            = (0xfffffffcU & vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__addr_keep);
                    } else if ((1U & (~ (IData)((0U 
                                                 != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_vld)))))) {
                        if ((1U & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__dirty_reg
                                   [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__current_set_idx] 
                                   >> (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_MRU)))) {
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_addr 
                                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__stable_evict_addr;
                        }
                    }
                } else if ((1U & (~ (IData)((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_hit)))))) {
                    if ((1U & (~ (IData)((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_vld)))))) {
                        if ((1U & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__dirty_reg
                                   [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__current_set_idx] 
                                   >> (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_MRU)))) {
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_addr 
                                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__stable_evict_addr;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__way 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__fsm_way 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way;
    cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__0__KET____DOT__data_array_inst__wren 
        = (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
            & (0U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way)))
            ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__byte_mask
            : 0ULL);
    cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__1__KET____DOT__data_array_inst__wren 
        = (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
            & (1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way)))
            ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__byte_mask
            : 0ULL);
    cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__2__KET____DOT__data_array_inst__wren 
        = (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
            & (2U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way)))
            ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__byte_mask
            : 0ULL);
    cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__3__KET____DOT__data_array_inst__wren 
        = (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
            & (3U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way)))
            ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__byte_mask
            : 0ULL);
    cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__4__KET____DOT__data_array_inst__wren 
        = (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
            & (4U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way)))
            ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__byte_mask
            : 0ULL);
    cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__5__KET____DOT__data_array_inst__wren 
        = (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
            & (5U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way)))
            ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__byte_mask
            : 0ULL);
    cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__6__KET____DOT__data_array_inst__wren 
        = (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
            & (6U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way)))
            ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__byte_mask
            : 0ULL);
    cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__7__KET____DOT__data_array_inst__wren 
        = (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
            & (7U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way)))
            ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__byte_mask
            : 0ULL);
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__rand_fill_engine__DOT__valid 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__in_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__rand_fill_engine__DOT__addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__sec_address_translator__DOT__in_raw_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__a_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__compare_data;
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
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cache_write_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_addr;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.wren 
        = cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__0__KET____DOT__data_array_inst__wren;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__wren[0U] 
        = cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__0__KET____DOT__data_array_inst__wren;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.wren 
        = cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__1__KET____DOT__data_array_inst__wren;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__wren[1U] 
        = cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__1__KET____DOT__data_array_inst__wren;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.wren 
        = cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__2__KET____DOT__data_array_inst__wren;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__wren[2U] 
        = cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__2__KET____DOT__data_array_inst__wren;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.wren 
        = cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__3__KET____DOT__data_array_inst__wren;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__wren[3U] 
        = cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__3__KET____DOT__data_array_inst__wren;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.wren 
        = cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__4__KET____DOT__data_array_inst__wren;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__wren[4U] 
        = cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__4__KET____DOT__data_array_inst__wren;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.wren 
        = cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__5__KET____DOT__data_array_inst__wren;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__wren[5U] 
        = cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__5__KET____DOT__data_array_inst__wren;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.wren 
        = cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__6__KET____DOT__data_array_inst__wren;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__wren[6U] 
        = cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__6__KET____DOT__data_array_inst__wren;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.wren 
        = cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__7__KET____DOT__data_array_inst__wren;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__wren[7U] 
        = cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__7__KET____DOT__data_array_inst__wren;
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
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__cache_write_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cache_write_addr;
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[0U][0U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.out_data[0U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[0U][1U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.out_data[1U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[0U][2U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.out_data[2U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[0U][3U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.out_data[3U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[0U][4U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.out_data[4U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[0U][5U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.out_data[5U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[0U][6U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.out_data[6U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[0U][7U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.out_data[7U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[0U][8U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.out_data[8U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[0U][9U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.out_data[9U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[0U][0xaU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.out_data[0xaU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[0U][0xbU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.out_data[0xbU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[0U][0xcU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.out_data[0xcU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[0U][0xdU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.out_data[0xdU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[0U][0xeU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.out_data[0xeU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[0U][0xfU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.out_data[0xfU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[1U][0U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.out_data[0U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[1U][1U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.out_data[1U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[1U][2U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.out_data[2U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[1U][3U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.out_data[3U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[1U][4U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.out_data[4U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[1U][5U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.out_data[5U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[1U][6U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.out_data[6U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[1U][7U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.out_data[7U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[1U][8U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.out_data[8U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[1U][9U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.out_data[9U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[1U][0xaU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.out_data[0xaU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[1U][0xbU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.out_data[0xbU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[1U][0xcU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.out_data[0xcU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[1U][0xdU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.out_data[0xdU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[1U][0xeU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.out_data[0xeU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[1U][0xfU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.out_data[0xfU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[2U][0U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.out_data[0U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[2U][1U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.out_data[1U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[2U][2U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.out_data[2U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[2U][3U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.out_data[3U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[2U][4U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.out_data[4U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[2U][5U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.out_data[5U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[2U][6U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.out_data[6U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[2U][7U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.out_data[7U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[2U][8U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.out_data[8U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[2U][9U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.out_data[9U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[2U][0xaU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.out_data[0xaU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[2U][0xbU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.out_data[0xbU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[2U][0xcU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.out_data[0xcU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[2U][0xdU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.out_data[0xdU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[2U][0xeU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.out_data[0xeU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[2U][0xfU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.out_data[0xfU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[3U][0U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.out_data[0U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[3U][1U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.out_data[1U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[3U][2U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.out_data[2U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[3U][3U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.out_data[3U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[3U][4U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.out_data[4U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[3U][5U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.out_data[5U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[3U][6U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.out_data[6U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[3U][7U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.out_data[7U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[3U][8U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.out_data[8U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[3U][9U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.out_data[9U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[3U][0xaU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.out_data[0xaU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[3U][0xbU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.out_data[0xbU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[3U][0xcU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.out_data[0xcU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[3U][0xdU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.out_data[0xdU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[3U][0xeU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.out_data[0xeU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[3U][0xfU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.out_data[0xfU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[4U][0U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.out_data[0U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[4U][1U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.out_data[1U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[4U][2U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.out_data[2U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[4U][3U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.out_data[3U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[4U][4U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.out_data[4U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[4U][5U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.out_data[5U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[4U][6U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.out_data[6U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[4U][7U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.out_data[7U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[4U][8U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.out_data[8U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[4U][9U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.out_data[9U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[4U][0xaU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.out_data[0xaU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[4U][0xbU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.out_data[0xbU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[4U][0xcU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.out_data[0xcU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[4U][0xdU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.out_data[0xdU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[4U][0xeU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.out_data[0xeU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[4U][0xfU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.out_data[0xfU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[5U][0U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.out_data[0U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[5U][1U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.out_data[1U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[5U][2U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.out_data[2U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[5U][3U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.out_data[3U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[5U][4U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.out_data[4U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[5U][5U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.out_data[5U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[5U][6U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.out_data[6U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[5U][7U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.out_data[7U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[5U][8U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.out_data[8U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[5U][9U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.out_data[9U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[5U][0xaU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.out_data[0xaU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[5U][0xbU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.out_data[0xbU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[5U][0xcU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.out_data[0xcU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[5U][0xdU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.out_data[0xdU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[5U][0xeU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.out_data[0xeU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[5U][0xfU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.out_data[0xfU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[6U][0U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.out_data[0U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[6U][1U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.out_data[1U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[6U][2U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.out_data[2U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[6U][3U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.out_data[3U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[6U][4U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.out_data[4U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[6U][5U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.out_data[5U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[6U][6U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.out_data[6U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[6U][7U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.out_data[7U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[6U][8U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.out_data[8U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[6U][9U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.out_data[9U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[6U][0xaU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.out_data[0xaU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[6U][0xbU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.out_data[0xbU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[6U][0xcU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.out_data[0xcU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[6U][0xdU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.out_data[0xdU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[6U][0xeU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.out_data[0xeU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[6U][0xfU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.out_data[0xfU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[7U][0U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.out_data[0U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[7U][1U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.out_data[1U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[7U][2U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.out_data[2U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[7U][3U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.out_data[3U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[7U][4U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.out_data[4U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[7U][5U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.out_data[5U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[7U][6U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.out_data[6U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[7U][7U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.out_data[7U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[7U][8U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.out_data[8U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[7U][9U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.out_data[9U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[7U][0xaU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.out_data[0xaU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[7U][0xbU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.out_data[0xbU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[7U][0xcU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.out_data[0xcU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[7U][0xdU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.out_data[0xdU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[7U][0xeU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.out_data[0xeU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[7U][0xfU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.out_data[0xfU];
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
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__out_data 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__out_valid)
            ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__out_data
            : vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__refill_word_data);
    vlSelfRef.d_data = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__out_data;
    vlSelfRef.cache_system_tl_top__DOT__d_data = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__out_data;
    vlSelfRef.cache_system_tl_top__DOT__core_out_data 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__out_data;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk_h) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk_h__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSelfRef.clk_l) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk_l__0))));
    vlSelfRef.__VactTriggered.setBit(3U, ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cur_state)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cur_state__0)));
    vlSelfRef.__VactTriggered.setBit(4U, ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__busy_clk_l)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__busy_clk_l__0)));
    vlSelfRef.__VactTriggered.setBit(5U, ((IData)(vlSelfRef.clk_h) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk_h__0)));
    vlSelfRef.__VactTriggered.setBit(6U, ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__rd_mem_counter__rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__rd_mem_counter__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(7U, ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__rd_cam_counter__rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__rd_cam_counter__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(8U, ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__erase_cam_counter__rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__erase_cam_counter__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(9U, ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__wr_mem_counter__rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__wr_mem_counter__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(0xaU, ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__stream_counter__rst_n)) 
                                            & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__stream_counter__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(0xbU, ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__stream_counter__rst_n)) 
                                            & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__stream_counter__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(0xcU, ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__stream_counter__rst_n)) 
                                            & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__stream_counter__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(0xdU, ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__stream_counter__rst_n)) 
                                            & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__stream_counter__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(0xeU, ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT____Vcellinp__latency_counter__rst_n)) 
                                            & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT____Vcellinp__latency_counter__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(0xfU, ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__latency_counter__rst_n)) 
                                            & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__latency_counter__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(0x10U, ((IData)(vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x11U, ((IData)(vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x12U, ((IData)(vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x13U, ((IData)(vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x14U, ((IData)(vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x15U, ((IData)(vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x16U, ((IData)(vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x17U, ((IData)(vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst__clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk_h__0 = vlSelfRef.clk_h;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__clk_l__0 = vlSelfRef.clk_l;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cur_state__0 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__rd_controller__DOT__cur_state;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__busy_clk_l__0 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__busy_clk_l;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__rd_mem_counter__rst_n__0 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__rd_mem_counter__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__rd_cam_counter__rst_n__0 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__rd_cam_counter__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__erase_cam_counter__rst_n__0 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__erase_cam_counter__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__wr_mem_counter__rst_n__0 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__wr_mem_counter__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__stream_counter__rst_n__0 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__stream_counter__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__stream_counter__rst_n__0 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__stream_counter__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__stream_counter__rst_n__0 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__stream_counter__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__stream_counter__rst_n__0 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__stream_counter__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT____Vcellinp__latency_counter__rst_n__0 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT____Vcellinp__latency_counter__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__latency_counter__rst_n__0 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__latency_counter__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__clk__0 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst__clk__0 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst__clk__0 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst__clk__0 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst__clk__0 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst__clk__0 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst__clk__0 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst__clk__0 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.clk;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(5U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf);
void Vtop_mem_model__M200_MB40___nba_sequent__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__0(Vtop_mem_model__M200_MB40* vlSelf);
void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__11(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__12(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__13(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__14(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__15(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__16(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__17(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__18(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__19(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__20(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__21(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__22(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__23(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__24(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__25(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__26(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__27(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__28(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__29(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__5(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__30(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__31(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__32(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__6(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__7(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__8(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__9(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__10(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__11(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__12(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__13(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__33(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__14(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__15(Vtop___024root* vlSelf);
void Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__0(Vtop_mem_model__M200_MB40* vlSelf);
void Vtop___024root___nba_comb__TOP__16(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__17(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__18(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__19(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__20(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__21(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__22(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__23(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__24(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__25(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x81ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x8001ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x101ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x201ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x401ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0x801ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x1001ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((0x2001ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((0x10000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_mem_model__M200_MB40___nba_sequent__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__0((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst));
        Vtop___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((0x20000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_mem_model__M200_MB40___nba_sequent__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__0((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst));
        Vtop___024root___nba_sequent__TOP__11(vlSelf);
    }
    if ((0x40000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_mem_model__M200_MB40___nba_sequent__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__0((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst));
        Vtop___024root___nba_sequent__TOP__12(vlSelf);
    }
    if ((0x80000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_mem_model__M200_MB40___nba_sequent__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__0((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst));
        Vtop___024root___nba_sequent__TOP__13(vlSelf);
    }
    if ((0x100000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_mem_model__M200_MB40___nba_sequent__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__0((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst));
        Vtop___024root___nba_sequent__TOP__14(vlSelf);
    }
    if ((0x200000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_mem_model__M200_MB40___nba_sequent__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__0((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst));
        Vtop___024root___nba_sequent__TOP__15(vlSelf);
    }
    if ((0x400000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_mem_model__M200_MB40___nba_sequent__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__0((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst));
        Vtop___024root___nba_sequent__TOP__16(vlSelf);
    }
    if ((0x800000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_mem_model__M200_MB40___nba_sequent__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__0((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst));
        Vtop___024root___nba_sequent__TOP__17(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__18(vlSelf);
        Vtop___024root___nba_sequent__TOP__19(vlSelf);
        Vtop___024root___nba_sequent__TOP__20(vlSelf);
        Vtop___024root___nba_sequent__TOP__21(vlSelf);
    }
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__22(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__23(vlSelf);
    }
    if ((0x14ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__24(vlSelf);
    }
    if ((0x41ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__25(vlSelf);
    }
    if ((0x4001ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__26(vlSelf);
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__27(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__28(vlSelf);
    }
    if ((0x3c01ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x103ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x203ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__29(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((0xeULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__5(vlSelf);
    }
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__30(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__31(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__32(vlSelf);
    }
    if ((0x17ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__6(vlSelf);
    }
    if ((0x43ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__7(vlSelf);
    }
    if ((0x4003ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__8(vlSelf);
    }
    if ((0x3c03ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__9(vlSelf);
    }
    if ((0x103ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__10(vlSelf);
    }
    if ((0xfULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__11(vlSelf);
    }
    if ((0x203ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__12(vlSelf);
    }
    if ((0x3f03ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__13(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__33(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__14(vlSelf);
    }
    if ((0x4043ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__15(vlSelf);
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__0((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__0((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__0((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__0((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__0((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__0((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__0((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst));
        Vtop_mem_model__M200_MB40___nba_comb__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__0((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst));
    }
    if ((0x4243ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__16(vlSelf);
    }
    if ((0x4203ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__17(vlSelf);
    }
    if ((0x7e03ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__18(vlSelf);
    }
    if ((0x7e43ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__19(vlSelf);
    }
    if ((0x4047ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__20(vlSelf);
    }
    if ((0x4007ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__21(vlSelf);
    }
    if ((0x17ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__22(vlSelf);
    }
    if ((0x4057ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__23(vlSelf);
    }
    if ((0xff4043ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__24(vlSelf);
    }
    if ((0xff4047ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__25(vlSelf);
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__1((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__1((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__1((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__1((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__1((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__1((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__1((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst));
        Vtop_mem_model__M200_MB40___ico_sequent__TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst__1((&vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[0U][0U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.out_data[0U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[0U][1U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.out_data[1U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[0U][2U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.out_data[2U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[0U][3U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.out_data[3U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[0U][4U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.out_data[4U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[0U][5U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.out_data[5U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[0U][6U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.out_data[6U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[0U][7U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.out_data[7U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[0U][8U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.out_data[8U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[0U][9U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.out_data[9U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[0U][0xaU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.out_data[0xaU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[0U][0xbU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.out_data[0xbU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[0U][0xcU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.out_data[0xcU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[0U][0xdU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.out_data[0xdU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[0U][0xeU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.out_data[0xeU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[0U][0xfU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.out_data[0xfU];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__11(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__11\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[1U][0U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.out_data[0U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[1U][1U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.out_data[1U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[1U][2U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.out_data[2U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[1U][3U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.out_data[3U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[1U][4U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.out_data[4U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[1U][5U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.out_data[5U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[1U][6U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.out_data[6U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[1U][7U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.out_data[7U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[1U][8U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.out_data[8U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[1U][9U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.out_data[9U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[1U][0xaU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.out_data[0xaU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[1U][0xbU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.out_data[0xbU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[1U][0xcU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.out_data[0xcU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[1U][0xdU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.out_data[0xdU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[1U][0xeU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.out_data[0xeU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[1U][0xfU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.out_data[0xfU];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__12(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__12\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[2U][0U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.out_data[0U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[2U][1U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.out_data[1U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[2U][2U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.out_data[2U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[2U][3U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.out_data[3U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[2U][4U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.out_data[4U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[2U][5U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.out_data[5U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[2U][6U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.out_data[6U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[2U][7U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.out_data[7U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[2U][8U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.out_data[8U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[2U][9U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.out_data[9U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[2U][0xaU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.out_data[0xaU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[2U][0xbU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.out_data[0xbU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[2U][0xcU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.out_data[0xcU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[2U][0xdU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.out_data[0xdU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[2U][0xeU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.out_data[0xeU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[2U][0xfU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.out_data[0xfU];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__13(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__13\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[3U][0U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.out_data[0U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[3U][1U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.out_data[1U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[3U][2U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.out_data[2U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[3U][3U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.out_data[3U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[3U][4U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.out_data[4U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[3U][5U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.out_data[5U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[3U][6U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.out_data[6U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[3U][7U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.out_data[7U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[3U][8U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.out_data[8U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[3U][9U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.out_data[9U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[3U][0xaU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.out_data[0xaU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[3U][0xbU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.out_data[0xbU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[3U][0xcU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.out_data[0xcU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[3U][0xdU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.out_data[0xdU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[3U][0xeU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.out_data[0xeU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[3U][0xfU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.out_data[0xfU];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__14(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__14\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[4U][0U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.out_data[0U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[4U][1U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.out_data[1U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[4U][2U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.out_data[2U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[4U][3U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.out_data[3U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[4U][4U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.out_data[4U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[4U][5U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.out_data[5U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[4U][6U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.out_data[6U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[4U][7U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.out_data[7U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[4U][8U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.out_data[8U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[4U][9U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.out_data[9U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[4U][0xaU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.out_data[0xaU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[4U][0xbU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.out_data[0xbU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[4U][0xcU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.out_data[0xcU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[4U][0xdU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.out_data[0xdU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[4U][0xeU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.out_data[0xeU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[4U][0xfU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.out_data[0xfU];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__15(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__15\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[5U][0U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.out_data[0U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[5U][1U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.out_data[1U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[5U][2U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.out_data[2U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[5U][3U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.out_data[3U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[5U][4U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.out_data[4U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[5U][5U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.out_data[5U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[5U][6U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.out_data[6U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[5U][7U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.out_data[7U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[5U][8U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.out_data[8U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[5U][9U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.out_data[9U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[5U][0xaU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.out_data[0xaU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[5U][0xbU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.out_data[0xbU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[5U][0xcU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.out_data[0xcU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[5U][0xdU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.out_data[0xdU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[5U][0xeU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.out_data[0xeU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[5U][0xfU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.out_data[0xfU];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__16(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__16\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[6U][0U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.out_data[0U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[6U][1U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.out_data[1U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[6U][2U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.out_data[2U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[6U][3U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.out_data[3U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[6U][4U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.out_data[4U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[6U][5U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.out_data[5U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[6U][6U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.out_data[6U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[6U][7U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.out_data[7U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[6U][8U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.out_data[8U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[6U][9U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.out_data[9U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[6U][0xaU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.out_data[0xaU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[6U][0xbU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.out_data[0xbU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[6U][0xcU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.out_data[0xcU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[6U][0xdU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.out_data[0xdU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[6U][0xeU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.out_data[0xeU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[6U][0xfU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.out_data[0xfU];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__17(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__17\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[7U][0U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.out_data[0U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[7U][1U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.out_data[1U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[7U][2U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.out_data[2U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[7U][3U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.out_data[3U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[7U][4U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.out_data[4U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[7U][5U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.out_data[5U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[7U][6U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.out_data[6U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[7U][7U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.out_data[7U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[7U][8U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.out_data[8U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[7U][9U] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.out_data[9U];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[7U][0xaU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.out_data[0xaU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[7U][0xbU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.out_data[0xbU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[7U][0xcU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.out_data[0xcU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[7U][0xdU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.out_data[0xdU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[7U][0xeU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.out_data[0xeU];
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__out_data_array[7U][0xfU] 
        = vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.out_data[0xfU];
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__15(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__15\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__0__KET____DOT__data_array_inst__wren;
    cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__0__KET____DOT__data_array_inst__wren = 0;
    QData/*63:0*/ cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__1__KET____DOT__data_array_inst__wren;
    cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__1__KET____DOT__data_array_inst__wren = 0;
    QData/*63:0*/ cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__2__KET____DOT__data_array_inst__wren;
    cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__2__KET____DOT__data_array_inst__wren = 0;
    QData/*63:0*/ cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__3__KET____DOT__data_array_inst__wren;
    cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__3__KET____DOT__data_array_inst__wren = 0;
    QData/*63:0*/ cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__4__KET____DOT__data_array_inst__wren;
    cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__4__KET____DOT__data_array_inst__wren = 0;
    QData/*63:0*/ cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__5__KET____DOT__data_array_inst__wren;
    cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__5__KET____DOT__data_array_inst__wren = 0;
    QData/*63:0*/ cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__6__KET____DOT__data_array_inst__wren;
    cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__6__KET____DOT__data_array_inst__wren = 0;
    QData/*63:0*/ cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__7__KET____DOT__data_array_inst__wren;
    cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__7__KET____DOT__data_array_inst__wren = 0;
    // Body
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_addr = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid = 0U;
    if ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
        if ((1U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
            if ((2U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
                if (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_cam_done) 
                     & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_accessed) 
                        | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cache_access_keep)))) {
                    if (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_keep) 
                         & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match))) {
                        if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_mem_done) {
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__unnamedblk1__DOT__j = 1U;
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__unnamedblk1__DOT__j = 2U;
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__unnamedblk1__DOT__j = 3U;
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__unnamedblk1__DOT__j = 4U;
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__unnamedblk1__DOT__j = 5U;
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__unnamedblk1__DOT__j = 6U;
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__unnamedblk1__DOT__j = 7U;
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__unnamedblk1__DOT__j = 8U;
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__unnamedblk1__DOT__j = 9U;
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__unnamedblk1__DOT__j = 0xaU;
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__unnamedblk1__DOT__j = 0xbU;
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__unnamedblk1__DOT__j = 0xcU;
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__unnamedblk1__DOT__j = 0xdU;
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__unnamedblk1__DOT__j = 0xeU;
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__unnamedblk1__DOT__j = 0xfU;
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__unnamedblk1__DOT__j = 0x10U;
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__write_keep) 
                                  & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match))))) {
                        if ((1U & (~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_hit)))) {
                            if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__match) {
                                if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__w_compare_rd_mem_done) {
                                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_addr 
                                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__prev_addr;
                                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((3U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__cur_state))) {
                if (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__req_done) 
                     | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__req_done_keep))) {
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_addr 
                        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__prev_addr;
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid = 1U;
                }
            }
        }
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__return_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write_all 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__valid 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) 
           | ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write) 
              | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_valid)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click 
        = ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_prev)) 
           & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write) 
              | (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)));
    if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid) {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__addr 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_addr;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__return_valid = 1U;
    } else {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__addr 
            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__fw_addr;
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__return_valid = 0U;
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__c_fsm__DOT__ib_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__return_addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_all 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write_all;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__en 
        = (0xffU & (- (IData)((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__valid))));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__valid 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__valid;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.en 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__valid;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.en 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__valid;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.en 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__valid;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.en 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__valid;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.en 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__valid;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.en 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__valid;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.en 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__valid;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.en 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__latency_counter__rst_n 
        = ((~ ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__D_FF_valid__DOT__data)) 
               & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__valid))) 
           & (IData)(vlSelfRef.rst_n));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__addr;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__in_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__addr;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.in_addr 
        = (0x3fU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__addr 
                    >> 6U));
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.in_addr 
        = (0x3fU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__addr 
                    >> 6U));
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.in_addr 
        = (0x3fU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__addr 
                    >> 6U));
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.in_addr 
        = (0x3fU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__addr 
                    >> 6U));
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.in_addr 
        = (0x3fU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__addr 
                    >> 6U));
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.in_addr 
        = (0x3fU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__addr 
                    >> 6U));
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.in_addr 
        = (0x3fU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__addr 
                    >> 6U));
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.in_addr 
        = (0x3fU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__addr 
                    >> 6U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx 
        = (0xfU & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__addr 
                   >> 2U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__fetch_done 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__return_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_write = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_valid = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_addr = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_out_data = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_state 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_state;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__wren = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_valid = 0U;
    if ((0U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_state))) {
        if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_valid) {
            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_state = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_state))) {
        if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__tag_access_done) {
            if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_keep) {
                if ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_hit))) {
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_state = 0U;
                    if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write_through) {
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_valid = 1U;
                        if ((1U & (~ ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_valid) 
                                      & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cache_write_ready))))) {
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_state = 1U;
                        }
                    }
                } else if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write_through) {
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_valid = 1U;
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_state = 0U;
                    if ((1U & (~ ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_valid) 
                                  & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cache_write_ready))))) {
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_state = 1U;
                    }
                } else if ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_vld))) {
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__wren 
                        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__wren) 
                           | (0xffU & ((IData)(1U) 
                                       << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_vld))));
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_state = 2U;
                } else {
                    if ((1U & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__dirty_reg
                               [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__current_set_idx] 
                               >> (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_MRU)))) {
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_valid = 1U;
                    }
                    if ((1U & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_valid) 
                                & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cache_write_ready)) 
                               | (~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_valid))))) {
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__wren 
                            = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__wren) 
                               | (0xffU & ((IData)(1U) 
                                           << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_MRU))));
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_state = 2U;
                    }
                }
            } else if ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_hit))) {
                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_state = 0U;
            } else if ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_vld))) {
                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__wren 
                    = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__wren) 
                       | (0xffU & ((IData)(1U) << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_vld))));
                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_state = 0U;
            } else {
                if ((1U & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__dirty_reg
                           [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__current_set_idx] 
                           >> (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_MRU)))) {
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_valid = 1U;
                }
                if ((1U & (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_valid) 
                            & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cache_write_ready)) 
                           | (~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_valid))))) {
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__wren 
                        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__wren) 
                           | (0xffU & ((IData)(1U) 
                                       << (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_MRU))));
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_state = 0U;
                }
            }
        }
    } else if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__return_valid) {
        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_state = 0U;
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way = 0U;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__D_FF_valid__DOT__din 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__latency_counter__DOT__rst_n 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__latency_counter__rst_n;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__byte_mask 
        = (((QData)((IData)(((((((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                  ? 0xfU : (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
                                             & (0xfU 
                                                == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx)))
                                             ? (IData)(vlSelfRef.a_mask)
                                             : 0U)) 
                                << 0x1cU) | (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                               ? 0xfU
                                               : (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
                                                   & (0xeU 
                                                      == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx)))
                                                   ? (IData)(vlSelfRef.a_mask)
                                                   : 0U)) 
                                             << 0x18U)) 
                              | ((((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                    ? 0xfU : (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
                                               & (0xdU 
                                                  == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx)))
                                               ? (IData)(vlSelfRef.a_mask)
                                               : 0U)) 
                                  << 0x14U) | (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                 ? 0xfU
                                                 : 
                                                (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
                                                  & (0xcU 
                                                     == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx)))
                                                  ? (IData)(vlSelfRef.a_mask)
                                                  : 0U)) 
                                               << 0x10U))) 
                             | (((((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                    ? 0xfU : (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
                                               & (0xbU 
                                                  == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx)))
                                               ? (IData)(vlSelfRef.a_mask)
                                               : 0U)) 
                                  << 0xcU) | (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                ? 0xfU
                                                : (
                                                   ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
                                                    & (0xaU 
                                                       == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx)))
                                                    ? (IData)(vlSelfRef.a_mask)
                                                    : 0U)) 
                                              << 8U)) 
                                | ((((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                      ? 0xfU : (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
                                                 & (9U 
                                                    == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx)))
                                                 ? (IData)(vlSelfRef.a_mask)
                                                 : 0U)) 
                                    << 4U) | ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                               ? 0xfU
                                               : (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
                                                   & (8U 
                                                      == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx)))
                                                   ? (IData)(vlSelfRef.a_mask)
                                                   : 0U))))))) 
            << 0x20U) | (QData)((IData)(((((((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                              ? 0xfU
                                              : (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
                                                  & (7U 
                                                     == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx)))
                                                  ? (IData)(vlSelfRef.a_mask)
                                                  : 0U)) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                ? 0xfU
                                                : (
                                                   ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
                                                    & (6U 
                                                       == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx)))
                                                    ? (IData)(vlSelfRef.a_mask)
                                                    : 0U)) 
                                              << 0x18U)) 
                                          | ((((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                ? 0xfU
                                                : (
                                                   ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
                                                    & (5U 
                                                       == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx)))
                                                    ? (IData)(vlSelfRef.a_mask)
                                                    : 0U)) 
                                              << 0x14U) 
                                             | (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                  ? 0xfU
                                                  : 
                                                 (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
                                                   & (4U 
                                                      == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx)))
                                                   ? (IData)(vlSelfRef.a_mask)
                                                   : 0U)) 
                                                << 0x10U))) 
                                         | (((((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                ? 0xfU
                                                : (
                                                   ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
                                                    & (3U 
                                                       == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx)))
                                                    ? (IData)(vlSelfRef.a_mask)
                                                    : 0U)) 
                                              << 0xcU) 
                                             | (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                  ? 0xfU
                                                  : 
                                                 (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
                                                   & (2U 
                                                      == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx)))
                                                   ? (IData)(vlSelfRef.a_mask)
                                                   : 0U)) 
                                                << 8U)) 
                                            | ((((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                  ? 0xfU
                                                  : 
                                                 (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
                                                   & (1U 
                                                      == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx)))
                                                   ? (IData)(vlSelfRef.a_mask)
                                                   : 0U)) 
                                                << 4U) 
                                               | ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__f_unit__DOT__out_valid)
                                                   ? 0xfU
                                                   : 
                                                  (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
                                                    & (0U 
                                                       == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__word_idx)))
                                                    ? (IData)(vlSelfRef.a_mask)
                                                    : 0U))))))));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cache_write_valid 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__0__KET____DOT__tag_sram__DOT__wren 
        = (1U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__wren) 
                 >> 0U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__1__KET____DOT__tag_sram__DOT__wren 
        = (1U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__wren) 
                 >> 1U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__2__KET____DOT__tag_sram__DOT__wren 
        = (1U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__wren) 
                 >> 2U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__3__KET____DOT__tag_sram__DOT__wren 
        = (1U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__wren) 
                 >> 3U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__4__KET____DOT__tag_sram__DOT__wren 
        = (1U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__wren) 
                 >> 4U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__5__KET____DOT__tag_sram__DOT__wren 
        = (1U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__wren) 
                 >> 5U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__6__KET____DOT__tag_sram__DOT__wren 
        = (1U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__wren) 
                 >> 6U));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__7__KET____DOT__tag_sram__DOT__wren 
        = (1U & ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__wren) 
                 >> 7U));
    if ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_state))) {
        if ((1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_state))) {
            if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__tag_access_done) {
                if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_keep) {
                    if ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_hit))) {
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_write = 1U;
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_valid = 1U;
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_addr 
                            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__addr_keep;
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_out_data 
                            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__data_keep;
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way 
                            = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_hit_idx;
                    } else if ((1U & (~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write_through)))) {
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way 
                            = ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_vld))
                                ? (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_vld)
                                : (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_MRU));
                    }
                } else {
                    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way 
                        = ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_hit))
                            ? (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_hit_idx)
                            : ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_vld))
                                ? (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_vld)
                                : (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_MRU)));
                }
            }
        } else if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__return_valid) {
            if (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_keep) 
                 & (~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write_through)))) {
                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_write = 1U;
                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_valid = 1U;
                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_addr 
                    = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__addr_keep;
                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__arr_out_data 
                    = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__data_keep;
                vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way 
                    = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_keep;
            }
        }
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__victim_is_dirty 
        = (1U & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__dirty_reg
                 [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__current_set_idx] 
                 >> (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__stable_evict_addr 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__evict_buf_valid)
            ? ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__evict_tag_buf 
                << 0xcU) | ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__evict_set_buf) 
                            << 6U)) : ((vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__tag_data
                                        [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way] 
                                        << 0xcU) | 
                                       ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__current_set_idx) 
                                        << 6U)));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way 
        = ((1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_state))
            ? (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way)
            : (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_keep));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__cache_write_valid 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cache_write_valid;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__0__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__wea 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__0__KET____DOT__tag_sram__DOT__wren;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__1__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__wea 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__1__KET____DOT__tag_sram__DOT__wren;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__2__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__wea 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__2__KET____DOT__tag_sram__DOT__wren;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__3__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__wea 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__3__KET____DOT__tag_sram__DOT__wren;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__4__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__wea 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__4__KET____DOT__tag_sram__DOT__wren;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__5__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__wea 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__5__KET____DOT__tag_sram__DOT__wren;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__6__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__wea 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__6__KET____DOT__tag_sram__DOT__wren;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__7__KET____DOT__tag_sram__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__wea 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__g_tag_ways__BRA__7__KET____DOT__tag_sram__DOT__wren;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__is_dirty_miss 
        = ((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__latency_counter__DOT__done) 
           & ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_hit)) 
              & ((~ (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__reg_file__DOT__D_FF_write__DOT__data)) 
                 & ((~ (IData)((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_vld)))) 
                    & (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__victim_is_dirty)))));
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__stable_evict_addr;
    if ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_state))) {
        if ((1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_state))) {
            if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__tag_access_done) {
                if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_keep) {
                    if ((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_hit))) {
                        if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write_through) {
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_addr 
                                = (0xfffffffcU & vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__addr_keep);
                        }
                    } else if (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__write_through) {
                        vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_addr 
                            = (0xfffffffcU & vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__addr_keep);
                    } else if ((1U & (~ (IData)((0U 
                                                 != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_vld)))))) {
                        if ((1U & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__dirty_reg
                                   [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__current_set_idx] 
                                   >> (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_MRU)))) {
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_addr 
                                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__stable_evict_addr;
                        }
                    }
                } else if ((1U & (~ (IData)((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__way_hit)))))) {
                    if ((1U & (~ (IData)((0U != (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__cur_vld)))))) {
                        if ((1U & (vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__dirty_reg
                                   [vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__current_set_idx] 
                                   >> (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__next_MRU)))) {
                            vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_addr 
                                = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__stable_evict_addr;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__way 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__fsm_way 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way;
    cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__0__KET____DOT__data_array_inst__wren 
        = (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
            & (0U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way)))
            ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__byte_mask
            : 0ULL);
    cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__1__KET____DOT__data_array_inst__wren 
        = (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
            & (1U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way)))
            ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__byte_mask
            : 0ULL);
    cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__2__KET____DOT__data_array_inst__wren 
        = (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
            & (2U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way)))
            ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__byte_mask
            : 0ULL);
    cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__3__KET____DOT__data_array_inst__wren 
        = (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
            & (3U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way)))
            ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__byte_mask
            : 0ULL);
    cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__4__KET____DOT__data_array_inst__wren 
        = (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
            & (4U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way)))
            ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__byte_mask
            : 0ULL);
    cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__5__KET____DOT__data_array_inst__wren 
        = (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
            & (5U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way)))
            ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__byte_mask
            : 0ULL);
    cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__6__KET____DOT__data_array_inst__wren 
        = (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
            & (6U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way)))
            ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__byte_mask
            : 0ULL);
    cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__7__KET____DOT__data_array_inst__wren 
        = (((IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__write_click) 
            & (7U == (IData)(vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__fsm_way)))
            ? vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__byte_mask
            : 0ULL);
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cache_write_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__tag_array__DOT__write_addr;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__0__KET____DOT__data_array_inst.wren 
        = cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__0__KET____DOT__data_array_inst__wren;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__wren[0U] 
        = cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__0__KET____DOT__data_array_inst__wren;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__1__KET____DOT__data_array_inst.wren 
        = cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__1__KET____DOT__data_array_inst__wren;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__wren[1U] 
        = cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__1__KET____DOT__data_array_inst__wren;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__2__KET____DOT__data_array_inst.wren 
        = cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__2__KET____DOT__data_array_inst__wren;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__wren[2U] 
        = cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__2__KET____DOT__data_array_inst__wren;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__3__KET____DOT__data_array_inst.wren 
        = cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__3__KET____DOT__data_array_inst__wren;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__wren[3U] 
        = cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__3__KET____DOT__data_array_inst__wren;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__4__KET____DOT__data_array_inst.wren 
        = cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__4__KET____DOT__data_array_inst__wren;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__wren[4U] 
        = cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__4__KET____DOT__data_array_inst__wren;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__5__KET____DOT__data_array_inst.wren 
        = cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__5__KET____DOT__data_array_inst__wren;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__wren[5U] 
        = cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__5__KET____DOT__data_array_inst__wren;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__6__KET____DOT__data_array_inst.wren 
        = cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__6__KET____DOT__data_array_inst__wren;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__wren[6U] 
        = cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__6__KET____DOT__data_array_inst__wren;
    vlSymsp->TOP__cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__g_data_ways__BRA__7__KET____DOT__data_array_inst.wren 
        = cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__7__KET____DOT__data_array_inst__wren;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT__wren[7U] 
        = cache_system_tl_top__DOT__cache_inst__DOT__d_array__DOT____Vcellinp__g_data_ways__BRA__7__KET____DOT__data_array_inst__wren;
    vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__wr_controller__DOT__cache_write_addr 
        = vlSelfRef.cache_system_tl_top__DOT__cache_inst__DOT__cache_write_addr;
}
