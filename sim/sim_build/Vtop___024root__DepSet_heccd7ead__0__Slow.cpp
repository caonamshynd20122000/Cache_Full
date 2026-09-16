// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../rtl_2/cache_system_tl_top.sv", 12, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge cache_system_tl_top.clk_l)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge cache_system_tl_top.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge cache_system_tl_top.cache_inst.clk_h)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge cache_system_tl_top.cache_inst.rst_n)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge cache_system_tl_top.cache_inst.clk_l)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(negedge cache_system_tl_top.cache_inst.rd_controller.cur_state)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(negedge cache_system_tl_top.cache_inst.wr_controller.busy_clk_l)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @( cache_system_tl_top.cache_inst.clk_h)\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(negedge cache_system_tl_top.cache_inst.f_unit.__Vcellinp__rd_mem_counter__rst_n)\n");
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @(negedge cache_system_tl_top.cache_inst.f_unit.__Vcellinp__rd_cam_counter__rst_n)\n");
    }
    if ((0x400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @(negedge cache_system_tl_top.cache_inst.f_unit.__Vcellinp__erase_cam_counter__rst_n)\n");
    }
    if ((0x800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @(negedge cache_system_tl_top.cache_inst.f_unit.__Vcellinp__wr_mem_counter__rst_n)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @(negedge cache_system_tl_top.cache_inst.f_unit.__Vcellinp__genblk1[0].stream_counter__rst_n)\n");
    }
    if ((0x2000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @(negedge cache_system_tl_top.cache_inst.f_unit.__Vcellinp__genblk1[1].stream_counter__rst_n)\n");
    }
    if ((0x4000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 14 is active: @(negedge cache_system_tl_top.cache_inst.f_unit.__Vcellinp__genblk1[2].stream_counter__rst_n)\n");
    }
    if ((0x8000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 15 is active: @(negedge cache_system_tl_top.cache_inst.f_unit.__Vcellinp__genblk1[3].stream_counter__rst_n)\n");
    }
    if ((0x10000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 16 is active: @(negedge cache_system_tl_top.cache_inst.d_array.__Vcellinp__latency_counter__rst_n)\n");
    }
    if ((0x20000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 17 is active: @(posedge cache_system_tl_top.cache_inst.tag_array.clk)\n");
    }
    if ((0x40000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 18 is active: @(negedge cache_system_tl_top.cache_inst.tag_array.rst_n)\n");
    }
    if ((0x80000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 19 is active: @(negedge cache_system_tl_top.cache_inst.tag_array.__Vcellinp__latency_counter__rst_n)\n");
    }
    if ((0x100000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 20 is active: @(posedge cache_system_tl_top.cache_inst.d_array.genblk4[0].data_array.clk)\n");
    }
    if ((0x200000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 21 is active: @(posedge cache_system_tl_top.cache_inst.d_array.genblk4[1].data_array.clk)\n");
    }
    if ((0x400000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 22 is active: @(posedge cache_system_tl_top.cache_inst.d_array.genblk4[2].data_array.clk)\n");
    }
    if ((0x800000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 23 is active: @(posedge cache_system_tl_top.cache_inst.d_array.genblk4[3].data_array.clk)\n");
    }
    if ((0x1000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 24 is active: @(posedge cache_system_tl_top.cache_inst.d_array.genblk4[4].data_array.clk)\n");
    }
    if ((0x2000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 25 is active: @(posedge cache_system_tl_top.cache_inst.d_array.genblk4[5].data_array.clk)\n");
    }
    if ((0x4000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 26 is active: @(posedge cache_system_tl_top.cache_inst.d_array.genblk4[6].data_array.clk)\n");
    }
    if ((0x8000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 27 is active: @(posedge cache_system_tl_top.cache_inst.d_array.genblk4[7].data_array.clk)\n");
    }
    if ((0x10000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 28 is active: @(posedge cache_system_tl_top.cache_inst.d_array.genblk4[8].data_array.clk)\n");
    }
    if ((0x20000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 29 is active: @(posedge cache_system_tl_top.cache_inst.d_array.genblk4[9].data_array.clk)\n");
    }
    if ((0x40000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 30 is active: @(posedge cache_system_tl_top.cache_inst.d_array.genblk4[10].data_array.clk)\n");
    }
    if ((0x80000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 31 is active: @(posedge cache_system_tl_top.cache_inst.d_array.genblk4[11].data_array.clk)\n");
    }
    if ((0x100000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 32 is active: @(posedge cache_system_tl_top.cache_inst.d_array.genblk4[12].data_array.clk)\n");
    }
    if ((0x200000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 33 is active: @(posedge cache_system_tl_top.cache_inst.d_array.genblk4[13].data_array.clk)\n");
    }
    if ((0x400000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 34 is active: @(posedge cache_system_tl_top.cache_inst.d_array.genblk4[14].data_array.clk)\n");
    }
    if ((0x800000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 35 is active: @(posedge cache_system_tl_top.cache_inst.d_array.genblk4[15].data_array.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge cache_system_tl_top.clk_l)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge cache_system_tl_top.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge cache_system_tl_top.cache_inst.clk_h)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge cache_system_tl_top.cache_inst.rst_n)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge cache_system_tl_top.cache_inst.clk_l)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(negedge cache_system_tl_top.cache_inst.rd_controller.cur_state)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(negedge cache_system_tl_top.cache_inst.wr_controller.busy_clk_l)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @( cache_system_tl_top.cache_inst.clk_h)\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(negedge cache_system_tl_top.cache_inst.f_unit.__Vcellinp__rd_mem_counter__rst_n)\n");
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @(negedge cache_system_tl_top.cache_inst.f_unit.__Vcellinp__rd_cam_counter__rst_n)\n");
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @(negedge cache_system_tl_top.cache_inst.f_unit.__Vcellinp__erase_cam_counter__rst_n)\n");
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @(negedge cache_system_tl_top.cache_inst.f_unit.__Vcellinp__wr_mem_counter__rst_n)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @(negedge cache_system_tl_top.cache_inst.f_unit.__Vcellinp__genblk1[0].stream_counter__rst_n)\n");
    }
    if ((0x2000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @(negedge cache_system_tl_top.cache_inst.f_unit.__Vcellinp__genblk1[1].stream_counter__rst_n)\n");
    }
    if ((0x4000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 14 is active: @(negedge cache_system_tl_top.cache_inst.f_unit.__Vcellinp__genblk1[2].stream_counter__rst_n)\n");
    }
    if ((0x8000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 15 is active: @(negedge cache_system_tl_top.cache_inst.f_unit.__Vcellinp__genblk1[3].stream_counter__rst_n)\n");
    }
    if ((0x10000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 16 is active: @(negedge cache_system_tl_top.cache_inst.d_array.__Vcellinp__latency_counter__rst_n)\n");
    }
    if ((0x20000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 17 is active: @(posedge cache_system_tl_top.cache_inst.tag_array.clk)\n");
    }
    if ((0x40000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 18 is active: @(negedge cache_system_tl_top.cache_inst.tag_array.rst_n)\n");
    }
    if ((0x80000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 19 is active: @(negedge cache_system_tl_top.cache_inst.tag_array.__Vcellinp__latency_counter__rst_n)\n");
    }
    if ((0x100000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 20 is active: @(posedge cache_system_tl_top.cache_inst.d_array.genblk4[0].data_array.clk)\n");
    }
    if ((0x200000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 21 is active: @(posedge cache_system_tl_top.cache_inst.d_array.genblk4[1].data_array.clk)\n");
    }
    if ((0x400000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 22 is active: @(posedge cache_system_tl_top.cache_inst.d_array.genblk4[2].data_array.clk)\n");
    }
    if ((0x800000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 23 is active: @(posedge cache_system_tl_top.cache_inst.d_array.genblk4[3].data_array.clk)\n");
    }
    if ((0x1000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 24 is active: @(posedge cache_system_tl_top.cache_inst.d_array.genblk4[4].data_array.clk)\n");
    }
    if ((0x2000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 25 is active: @(posedge cache_system_tl_top.cache_inst.d_array.genblk4[5].data_array.clk)\n");
    }
    if ((0x4000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 26 is active: @(posedge cache_system_tl_top.cache_inst.d_array.genblk4[6].data_array.clk)\n");
    }
    if ((0x8000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 27 is active: @(posedge cache_system_tl_top.cache_inst.d_array.genblk4[7].data_array.clk)\n");
    }
    if ((0x10000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 28 is active: @(posedge cache_system_tl_top.cache_inst.d_array.genblk4[8].data_array.clk)\n");
    }
    if ((0x20000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 29 is active: @(posedge cache_system_tl_top.cache_inst.d_array.genblk4[9].data_array.clk)\n");
    }
    if ((0x40000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 30 is active: @(posedge cache_system_tl_top.cache_inst.d_array.genblk4[10].data_array.clk)\n");
    }
    if ((0x80000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 31 is active: @(posedge cache_system_tl_top.cache_inst.d_array.genblk4[11].data_array.clk)\n");
    }
    if ((0x100000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 32 is active: @(posedge cache_system_tl_top.cache_inst.d_array.genblk4[12].data_array.clk)\n");
    }
    if ((0x200000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 33 is active: @(posedge cache_system_tl_top.cache_inst.d_array.genblk4[13].data_array.clk)\n");
    }
    if ((0x400000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 34 is active: @(posedge cache_system_tl_top.cache_inst.d_array.genblk4[14].data_array.clk)\n");
    }
    if ((0x800000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 35 is active: @(posedge cache_system_tl_top.cache_inst.d_array.genblk4[15].data_array.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
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
    vlSelf->__Vtrigprevexpr___TOP__cache_system_tl_top__clk_l__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cache_system_tl_top__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__clk_h__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__clk_l__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__rd_controller__DOT__cur_state__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__wr_controller__DOT__busy_clk_l__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__f_unit__DOT____Vcellinp__rd_mem_counter__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__f_unit__DOT____Vcellinp__rd_cam_counter__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__f_unit__DOT____Vcellinp__erase_cam_counter__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__f_unit__DOT____Vcellinp__wr_mem_counter__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__f_unit__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__stream_counter__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__f_unit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__stream_counter__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__f_unit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__stream_counter__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__f_unit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__stream_counter__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT____Vcellinp__latency_counter__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__tag_array__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__tag_array__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__tag_array____Vcellinp__latency_counter__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
