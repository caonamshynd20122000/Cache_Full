// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
class Vtop_cache_system_tl_top;
class Vtop_tl_pkg;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop_cache_system_tl_top* cache_system_tl_top;
    Vtop_tl_pkg* __PVT__tl_pkg;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_h,0,0);
        VL_IN8(clk_l,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(cfg_addr,7,0);
        VL_IN8(cfg_valid,0,0);
        VL_OUT8(cfg_ready,0,0);
        VL_IN8(a_valid,0,0);
        VL_OUT8(a_ready,0,0);
        VL_IN8(a_opcode,2,0);
        VL_IN8(a_param,2,0);
        VL_IN8(a_size,2,0);
        VL_IN8(a_source,3,0);
        VL_IN8(a_mask,3,0);
        VL_OUT8(d_valid,0,0);
        VL_IN8(d_ready,0,0);
        VL_OUT8(d_opcode,2,0);
        VL_OUT8(d_param,1,0);
        VL_OUT8(d_size,2,0);
        VL_OUT8(d_source,3,0);
        VL_OUT8(d_sink,3,0);
        VL_OUT8(d_denied,0,0);
        VL_OUT8(d_corrupt,0,0);
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_system_tl_top__clk_l__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_system_tl_top__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__clk_h__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__clk_l__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__rd_controller__DOT__cur_state__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__wr_controller__DOT__busy_clk_l__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__f_unit__DOT____Vcellinp__rd_mem_counter__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__f_unit__DOT____Vcellinp__rd_cam_counter__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__f_unit__DOT____Vcellinp__erase_cam_counter__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__f_unit__DOT____Vcellinp__wr_mem_counter__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__f_unit__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__stream_counter__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__f_unit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__stream_counter__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__f_unit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__stream_counter__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__f_unit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__stream_counter__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT____Vcellinp__latency_counter__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__tag_array__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__tag_array__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__tag_array____Vcellinp__latency_counter__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array__clk__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        VL_IN(cfg_data_in,31,0);
        VL_OUT(cfg_data_out,31,0);
        VL_IN(a_address,31,0);
    };
    struct {
        VL_IN(a_data,31,0);
        VL_OUT(d_data,31,0);
        IData/*31:0*/ __VactIterCount;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<36> __VactTriggered;
    VlTriggerVec<36> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
