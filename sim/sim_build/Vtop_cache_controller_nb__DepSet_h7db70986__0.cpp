// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_cache_controller_nb.h"

extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_hda151d36_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_h35af60b1_0;

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__0(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    __Vtableidx5 = ((((IData)(vlSelfRef.f_unit__DOT__rd_cam_counter__DOT__done) 
                      << 3U) | ((IData)(vlSelfRef.f_unit__DOT__rd_cam_counter__DOT__counter) 
                                << 2U)) | (((IData)(vlSelfRef.f_unit__DOT__rd_cam_counter__DOT__done_w) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.f_unit__DOT____Vcellinp__rd_cam_counter__rst_n)));
    vlSelfRef.f_unit__DOT__rd_cam_counter__DOT__counter 
        = Vtop__ConstPool__TABLE_hda151d36_0[__Vtableidx5];
    vlSelfRef.f_unit__DOT__rd_cam_counter__DOT__done 
        = Vtop__ConstPool__TABLE_h35af60b1_0[__Vtableidx5];
    vlSelfRef.f_unit__DOT__rd_cam = vlSelfRef.f_unit__DOT__rd_cam_counter__DOT__counter;
    vlSelfRef.f_unit__DOT__rd_cam_counter__DOT__done_w 
        = (1U & (~ (IData)(vlSelfRef.f_unit__DOT__rd_cam_counter__DOT__counter)));
}

extern const VlUnpacked<CData/*1:0*/, 32> Vtop__ConstPool__TABLE_h6205814d_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_hc0d3507d_0;

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__1(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    // Body
    __Vtableidx12 = ((((IData)(vlSelfRef.d_array__DOT__latency_counter__DOT__done) 
                       << 4U) | ((IData)(vlSelfRef.d_array__DOT__latency_counter__DOT__counter) 
                                 << 2U)) | (((IData)(vlSelfRef.d_array__DOT__latency_counter__DOT__done_w) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.d_array__DOT____Vcellinp__latency_counter__rst_n)));
    vlSelfRef.d_array__DOT__latency_counter__DOT__counter 
        = Vtop__ConstPool__TABLE_h6205814d_0[__Vtableidx12];
    vlSelfRef.d_array__DOT__latency_counter__DOT__done 
        = Vtop__ConstPool__TABLE_hc0d3507d_0[__Vtableidx12];
    vlSelfRef.d_array__DOT__latency_counter__DOT__done_w 
        = (2U == (IData)(vlSelfRef.d_array__DOT__latency_counter__DOT__counter));
    vlSelfRef.d_array__DOT__counter_done = vlSelfRef.d_array__DOT__latency_counter__DOT__done;
    vlSelfRef.d_array__DOT__busy = (1U & (~ (IData)(vlSelfRef.d_array__DOT__latency_counter__DOT__done)));
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__2(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*25:0*/ __VdlyVal__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__erase_ram__v0;
    __VdlyVal__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__erase_ram__v0 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__erase_ram__v0;
    __VdlyDim0__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__erase_ram__v0 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__erase_ram__v0;
    __VdlySet__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__erase_ram__v0 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v0;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v0 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v0;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v0 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v0;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v0 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v1;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v1 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v1;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v1 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v1;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v1 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v2;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v2 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v2;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v2 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v2;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v2 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v3;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v3 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v3;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v3 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v3;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v3 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v4;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v4 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v4;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v4 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v4;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v4 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v5;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v5 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v5;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v5 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v5;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v5 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v6;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v6 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v6;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v6 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v6;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v6 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v7;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v7 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v7;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v7 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v7;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v7 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v8;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v8 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v8;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v8 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v8;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v8 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v9;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v9 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v9;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v9 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v9;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v9 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v10;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v10 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v10;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v10 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v10;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v10 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v11;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v11 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v11;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v11 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v11;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v11 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v12;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v12 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v12;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v12 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v12;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v12 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v13;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v13 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v13;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v13 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v13;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v13 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v14;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v14 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v14;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v14 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v14;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v14 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v15;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v15 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v15;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v15 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v15;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v15 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v16;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v16 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v16;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v16 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v16;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v16 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v17;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v17 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v17;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v17 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v17;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v17 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v18;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v18 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v18;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v18 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v18;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v18 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v19;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v19 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v19;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v19 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v19;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v19 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v20;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v20 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v20;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v20 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v20;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v20 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v21;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v21 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v21;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v21 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v21;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v21 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v22;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v22 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v22;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v22 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v22;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v22 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v23;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v23 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v23;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v23 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v23;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v23 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v24;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v24 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v24;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v24 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v24;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v24 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v25;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v25 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v25;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v25 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v25;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v25 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v26;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v26 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v26;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v26 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v26;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v26 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v27;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v27 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v27;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v27 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v27;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v27 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v28;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v28 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v28;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v28 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v28;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v28 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v29;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v29 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v29;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v29 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v29;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v29 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v30;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v30 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v30;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v30 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v30;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v30 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v31;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v31 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v31;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v31 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v31;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v31 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v32;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v32 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v32;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v32 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v32;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v32 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v33;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v33 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v33;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v33 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v33;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v33 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v34;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v34 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v34;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v34 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v34;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v34 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v35;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v35 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v35;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v35 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v35;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v35 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v36;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v36 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v36;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v36 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v36;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v36 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v37;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v37 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v37;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v37 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v37;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v37 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v38;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v38 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v38;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v38 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v38;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v38 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v39;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v39 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v39;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v39 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v39;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v39 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v40;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v40 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v40;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v40 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v40;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v40 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v41;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v41 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v41;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v41 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v41;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v41 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v42;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v42 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v42;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v42 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v42;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v42 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v43;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v43 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v43;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v43 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v43;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v43 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v44;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v44 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v44;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v44 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v44;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v44 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v45;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v45 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v45;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v45 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v45;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v45 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v46;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v46 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v46;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v46 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v46;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v46 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v47;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v47 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v47;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v47 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v47;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v47 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v48;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v48 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v48;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v48 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v48;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v48 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v49;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v49 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v49;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v49 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v49;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v49 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v50;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v50 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v50;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v50 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v50;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v50 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v51;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v51 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v51;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v51 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v51;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v51 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v52;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v52 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v52;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v52 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v52;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v52 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v53;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v53 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v53;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v53 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v53;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v53 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v54;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v54 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v54;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v54 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v54;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v54 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v55;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v55 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v55;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v55 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v55;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v55 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v56;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v56 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v56;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v56 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v56;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v56 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v57;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v57 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v57;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v57 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v57;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v57 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v58;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v58 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v58;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v58 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v58;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v58 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v59;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v59 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v59;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v59 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v59;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v59 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v60;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v60 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v60;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v60 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v60;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v60 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v61;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v61 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v61;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v61 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v61;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v61 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v62;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v62 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v62;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v62 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v62;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v62 = 0;
    CData/*7:0*/ __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v63;
    __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v63 = 0;
    CData/*1:0*/ __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v63;
    __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v63 = 0;
    CData/*0:0*/ __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v63;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v63 = 0;
    // Body
    __VdlySet__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__erase_ram__v0 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v0 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v1 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v2 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v3 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v4 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v5 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v6 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v7 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v8 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v9 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v10 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v11 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v12 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v13 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v14 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v15 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v16 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v17 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v18 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v19 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v20 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v21 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v22 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v23 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v24 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v25 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v26 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v27 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v28 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v29 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v30 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v31 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v32 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v33 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v34 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v35 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v36 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v37 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v38 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v39 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v40 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v41 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v42 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v43 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v44 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v45 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v46 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v47 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v48 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v49 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v50 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v51 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v52 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v53 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v54 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v55 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v56 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v57 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v58 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v59 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v60 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v61 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v62 = 0U;
    __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v63 = 0U;
    if (vlSelfRef.f_unit__DOT__en) {
        if (vlSelfRef.f_unit__DOT__wren) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v0 
                = (0xffU & vlSelfRef.f_unit__DOT__mem_in_data[0U]);
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v0 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v0 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 1U)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v1 
                = (0xffU & (vlSelfRef.f_unit__DOT__mem_in_data[0U] 
                            >> 8U));
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v1 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v1 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 2U)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v2 
                = (0xffU & (vlSelfRef.f_unit__DOT__mem_in_data[0U] 
                            >> 0x10U));
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v2 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v2 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 3U)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v3 
                = (vlSelfRef.f_unit__DOT__mem_in_data[0U] 
                   >> 0x18U);
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v3 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v3 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 4U)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v4 
                = (0xffU & vlSelfRef.f_unit__DOT__mem_in_data[1U]);
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v4 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v4 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 5U)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v5 
                = (0xffU & (vlSelfRef.f_unit__DOT__mem_in_data[1U] 
                            >> 8U));
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v5 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v5 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 6U)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v6 
                = (0xffU & (vlSelfRef.f_unit__DOT__mem_in_data[1U] 
                            >> 0x10U));
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v6 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v6 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 7U)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v7 
                = (vlSelfRef.f_unit__DOT__mem_in_data[1U] 
                   >> 0x18U);
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v7 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v7 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 8U)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v8 
                = (0xffU & vlSelfRef.f_unit__DOT__mem_in_data[2U]);
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v8 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v8 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 9U)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v9 
                = (0xffU & (vlSelfRef.f_unit__DOT__mem_in_data[2U] 
                            >> 8U));
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v9 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v9 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0xaU)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v10 
                = (0xffU & (vlSelfRef.f_unit__DOT__mem_in_data[2U] 
                            >> 0x10U));
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v10 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v10 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0xbU)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v11 
                = (vlSelfRef.f_unit__DOT__mem_in_data[2U] 
                   >> 0x18U);
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v11 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v11 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0xcU)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v12 
                = (0xffU & vlSelfRef.f_unit__DOT__mem_in_data[3U]);
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v12 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v12 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0xdU)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v13 
                = (0xffU & (vlSelfRef.f_unit__DOT__mem_in_data[3U] 
                            >> 8U));
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v13 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v13 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0xeU)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v14 
                = (0xffU & (vlSelfRef.f_unit__DOT__mem_in_data[3U] 
                            >> 0x10U));
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v14 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v14 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0xfU)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v15 
                = (vlSelfRef.f_unit__DOT__mem_in_data[3U] 
                   >> 0x18U);
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v15 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v15 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x10U)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v16 
                = (0xffU & vlSelfRef.f_unit__DOT__mem_in_data[4U]);
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v16 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v16 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x11U)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v17 
                = (0xffU & (vlSelfRef.f_unit__DOT__mem_in_data[4U] 
                            >> 8U));
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v17 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v17 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x12U)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v18 
                = (0xffU & (vlSelfRef.f_unit__DOT__mem_in_data[4U] 
                            >> 0x10U));
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v18 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v18 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x13U)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v19 
                = (vlSelfRef.f_unit__DOT__mem_in_data[4U] 
                   >> 0x18U);
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v19 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v19 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x14U)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v20 
                = (0xffU & vlSelfRef.f_unit__DOT__mem_in_data[5U]);
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v20 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v20 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x15U)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v21 
                = (0xffU & (vlSelfRef.f_unit__DOT__mem_in_data[5U] 
                            >> 8U));
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v21 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v21 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x16U)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v22 
                = (0xffU & (vlSelfRef.f_unit__DOT__mem_in_data[5U] 
                            >> 0x10U));
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v22 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v22 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x17U)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v23 
                = (vlSelfRef.f_unit__DOT__mem_in_data[5U] 
                   >> 0x18U);
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v23 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v23 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x18U)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v24 
                = (0xffU & vlSelfRef.f_unit__DOT__mem_in_data[6U]);
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v24 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v24 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x19U)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v25 
                = (0xffU & (vlSelfRef.f_unit__DOT__mem_in_data[6U] 
                            >> 8U));
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v25 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v25 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x1aU)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v26 
                = (0xffU & (vlSelfRef.f_unit__DOT__mem_in_data[6U] 
                            >> 0x10U));
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v26 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v26 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x1bU)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v27 
                = (vlSelfRef.f_unit__DOT__mem_in_data[6U] 
                   >> 0x18U);
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v27 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v27 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x1cU)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v28 
                = (0xffU & vlSelfRef.f_unit__DOT__mem_in_data[7U]);
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v28 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v28 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x1dU)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v29 
                = (0xffU & (vlSelfRef.f_unit__DOT__mem_in_data[7U] 
                            >> 8U));
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v29 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v29 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x1eU)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v30 
                = (0xffU & (vlSelfRef.f_unit__DOT__mem_in_data[7U] 
                            >> 0x10U));
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v30 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v30 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x1fU)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v31 
                = (vlSelfRef.f_unit__DOT__mem_in_data[7U] 
                   >> 0x18U);
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v31 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v31 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x20U)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v32 
                = (0xffU & vlSelfRef.f_unit__DOT__mem_in_data[8U]);
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v32 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v32 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x21U)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v33 
                = (0xffU & (vlSelfRef.f_unit__DOT__mem_in_data[8U] 
                            >> 8U));
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v33 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v33 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x22U)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v34 
                = (0xffU & (vlSelfRef.f_unit__DOT__mem_in_data[8U] 
                            >> 0x10U));
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v34 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v34 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x23U)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v35 
                = (vlSelfRef.f_unit__DOT__mem_in_data[8U] 
                   >> 0x18U);
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v35 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v35 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x24U)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v36 
                = (0xffU & vlSelfRef.f_unit__DOT__mem_in_data[9U]);
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v36 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v36 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x25U)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v37 
                = (0xffU & (vlSelfRef.f_unit__DOT__mem_in_data[9U] 
                            >> 8U));
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v37 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v37 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x26U)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v38 
                = (0xffU & (vlSelfRef.f_unit__DOT__mem_in_data[9U] 
                            >> 0x10U));
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v38 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v38 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x27U)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v39 
                = (vlSelfRef.f_unit__DOT__mem_in_data[9U] 
                   >> 0x18U);
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v39 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v39 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x28U)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v40 
                = (0xffU & vlSelfRef.f_unit__DOT__mem_in_data[0xaU]);
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v40 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v40 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x29U)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v41 
                = (0xffU & (vlSelfRef.f_unit__DOT__mem_in_data[0xaU] 
                            >> 8U));
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v41 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v41 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x2aU)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v42 
                = (0xffU & (vlSelfRef.f_unit__DOT__mem_in_data[0xaU] 
                            >> 0x10U));
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v42 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v42 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x2bU)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v43 
                = (vlSelfRef.f_unit__DOT__mem_in_data[0xaU] 
                   >> 0x18U);
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v43 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v43 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x2cU)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v44 
                = (0xffU & vlSelfRef.f_unit__DOT__mem_in_data[0xbU]);
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v44 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v44 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x2dU)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v45 
                = (0xffU & (vlSelfRef.f_unit__DOT__mem_in_data[0xbU] 
                            >> 8U));
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v45 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v45 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x2eU)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v46 
                = (0xffU & (vlSelfRef.f_unit__DOT__mem_in_data[0xbU] 
                            >> 0x10U));
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v46 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v46 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x2fU)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v47 
                = (vlSelfRef.f_unit__DOT__mem_in_data[0xbU] 
                   >> 0x18U);
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v47 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v47 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x30U)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v48 
                = (0xffU & vlSelfRef.f_unit__DOT__mem_in_data[0xcU]);
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v48 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v48 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x31U)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v49 
                = (0xffU & (vlSelfRef.f_unit__DOT__mem_in_data[0xcU] 
                            >> 8U));
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v49 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v49 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x32U)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v50 
                = (0xffU & (vlSelfRef.f_unit__DOT__mem_in_data[0xcU] 
                            >> 0x10U));
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v50 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v50 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x33U)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v51 
                = (vlSelfRef.f_unit__DOT__mem_in_data[0xcU] 
                   >> 0x18U);
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v51 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v51 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x34U)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v52 
                = (0xffU & vlSelfRef.f_unit__DOT__mem_in_data[0xdU]);
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v52 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v52 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x35U)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v53 
                = (0xffU & (vlSelfRef.f_unit__DOT__mem_in_data[0xdU] 
                            >> 8U));
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v53 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v53 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x36U)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v54 
                = (0xffU & (vlSelfRef.f_unit__DOT__mem_in_data[0xdU] 
                            >> 0x10U));
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v54 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v54 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x37U)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v55 
                = (vlSelfRef.f_unit__DOT__mem_in_data[0xdU] 
                   >> 0x18U);
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v55 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v55 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x38U)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v56 
                = (0xffU & vlSelfRef.f_unit__DOT__mem_in_data[0xeU]);
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v56 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v56 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x39U)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v57 
                = (0xffU & (vlSelfRef.f_unit__DOT__mem_in_data[0xeU] 
                            >> 8U));
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v57 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v57 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x3aU)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v58 
                = (0xffU & (vlSelfRef.f_unit__DOT__mem_in_data[0xeU] 
                            >> 0x10U));
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v58 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v58 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x3bU)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v59 
                = (vlSelfRef.f_unit__DOT__mem_in_data[0xeU] 
                   >> 0x18U);
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v59 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v59 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x3cU)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v60 
                = (0xffU & vlSelfRef.f_unit__DOT__mem_in_data[0xfU]);
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v60 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v60 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x3dU)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v61 
                = (0xffU & (vlSelfRef.f_unit__DOT__mem_in_data[0xfU] 
                            >> 8U));
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v61 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v61 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x3eU)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v62 
                = (0xffU & (vlSelfRef.f_unit__DOT__mem_in_data[0xfU] 
                            >> 0x10U));
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v62 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v62 = 1U;
        }
        if ((1U & (IData)(((QData)((IData)(vlSelfRef.f_unit__DOT__wren)) 
                           >> 0x3fU)))) {
            __VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v63 
                = (vlSelfRef.f_unit__DOT__mem_in_data[0xfU] 
                   >> 0x18U);
            __VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v63 
                = vlSelfRef.f_unit__DOT__mem_addr;
            __VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v63 = 1U;
        }
    }
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_addr_reg 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_addr_next;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__b_dout_reg 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__mem
        [vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__ram_addr];
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_delete_reg 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_delete_next;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__erase_data 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__erase_ram
        [vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_addr_next];
    if (vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__erase_ram_wr_en) {
        __VdlyVal__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__erase_ram__v0 
            = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_data_padded_reg;
        __VdlyDim0__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__erase_ram__v0 
            = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_addr_next;
        __VdlySet__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__erase_ram__v0 = 1U;
        vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__erase_data 
            = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_data_padded_reg;
    }
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_busy_reg 
        = ((1U & (~ (IData)(vlSelfRef.rst_n))) || (1U 
                                                   != (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_next)));
    if (vlSelfRef.rst_n) {
        vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__count_reg 
            = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__count_next;
        vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg 
            = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_next;
    } else {
        vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__count_reg = 0x3ffffffU;
        vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg = 0U;
    }
    vlSelfRef.f_unit__DOT__w_prefetch_erase_edge__DOT__signal_out 
        = ((IData)(vlSelfRef.rst_n) && ((IData)(vlSelfRef.f_unit__DOT__w_prefetch_rd_cam) 
                                        & (~ (IData)(vlSelfRef.f_unit__DOT__w_prefetch_erase_edge__DOT__ff_m1))));
    vlSelfRef.f_unit__DOT__w_prefetch_wr_cam_edge__DOT__signal_out 
        = ((IData)(vlSelfRef.rst_n) && ((IData)(vlSelfRef.f_unit__DOT__w_prefetch_wr_cam) 
                                        & (~ (IData)(vlSelfRef.f_unit__DOT__w_prefetch_wr_cam_edge__DOT__ff_m1))));
    vlSelfRef.f_unit__DOT__w_compare_rd_cam_edge__DOT__signal_out 
        = ((IData)(vlSelfRef.rst_n) && ((IData)(vlSelfRef.f_unit__DOT__w_compare_rd_cam) 
                                        & (~ (IData)(vlSelfRef.f_unit__DOT__w_compare_rd_cam_edge__DOT__ff_m1))));
    vlSelfRef.f_unit__DOT__w_compare_rd_mem_edge__DOT__signal_out 
        = ((IData)(vlSelfRef.rst_n) && ((IData)(vlSelfRef.f_unit__DOT__w_compare_rd_mem) 
                                        & (~ (IData)(vlSelfRef.f_unit__DOT__w_compare_rd_mem_edge__DOT__ff_m1))));
    vlSelfRef.f_unit__DOT__w_prefetch_rd_cam_edge__DOT__signal_out 
        = ((IData)(vlSelfRef.rst_n) && ((IData)(vlSelfRef.f_unit__DOT__w_prefetch_rd_cam) 
                                        & (~ (IData)(vlSelfRef.f_unit__DOT__w_prefetch_rd_cam_edge__DOT__ff_m1))));
    vlSelfRef.reg_file__DOT__load_val_edge__DOT__signal_out 
        = ((IData)(vlSelfRef.rst_n) && ((IData)(vlSelfRef.reg_file__DOT__set_load_val) 
                                        & (~ (IData)(vlSelfRef.reg_file__DOT__load_val_edge__DOT__ff_m1))));
    if (((IData)(vlSelfRef.f_unit__DOT__en) & (~ (IData)(vlSelfRef.f_unit__DOT__wren)))) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0U] 
            = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
            [vlSelfRef.f_unit__DOT__mem_addr][0U];
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[1U] 
            = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
            [vlSelfRef.f_unit__DOT__mem_addr][1U];
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[2U] 
            = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
            [vlSelfRef.f_unit__DOT__mem_addr][2U];
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[3U] 
            = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
            [vlSelfRef.f_unit__DOT__mem_addr][3U];
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[4U] 
            = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
            [vlSelfRef.f_unit__DOT__mem_addr][4U];
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[5U] 
            = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
            [vlSelfRef.f_unit__DOT__mem_addr][5U];
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[6U] 
            = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
            [vlSelfRef.f_unit__DOT__mem_addr][6U];
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[7U] 
            = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
            [vlSelfRef.f_unit__DOT__mem_addr][7U];
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[8U] 
            = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
            [vlSelfRef.f_unit__DOT__mem_addr][8U];
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[9U] 
            = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
            [vlSelfRef.f_unit__DOT__mem_addr][9U];
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xaU] 
            = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
            [vlSelfRef.f_unit__DOT__mem_addr][0xaU];
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xbU] 
            = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
            [vlSelfRef.f_unit__DOT__mem_addr][0xbU];
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xcU] 
            = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
            [vlSelfRef.f_unit__DOT__mem_addr][0xcU];
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xdU] 
            = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
            [vlSelfRef.f_unit__DOT__mem_addr][0xdU];
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xeU] 
            = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
            [vlSelfRef.f_unit__DOT__mem_addr][0xeU];
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xfU] 
            = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
            [vlSelfRef.f_unit__DOT__mem_addr][0xfU];
    }
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__a_dout_reg 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__mem
        [vlSelfRef.f_unit__DOT__compare_data];
    if (__VdlySet__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__erase_ram__v0) {
        vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__erase_ram[__VdlyDim0__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__erase_ram__v0] 
            = __VdlyVal__f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__erase_ram__v0;
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v0) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v0][0U] 
            = ((0xffffff00U & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v0][0U]) 
               | (IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v0));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v1) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v1][0U] 
            = ((0xffff00ffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v1][0U]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v1) 
                  << 8U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v2) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v2][0U] 
            = ((0xff00ffffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v2][0U]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v2) 
                  << 0x10U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v3) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v3][0U] 
            = ((0xffffffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v3][0U]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v3) 
                  << 0x18U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v4) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v4][1U] 
            = ((0xffffff00U & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v4][1U]) 
               | (IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v4));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v5) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v5][1U] 
            = ((0xffff00ffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v5][1U]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v5) 
                  << 8U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v6) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v6][1U] 
            = ((0xff00ffffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v6][1U]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v6) 
                  << 0x10U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v7) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v7][1U] 
            = ((0xffffffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v7][1U]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v7) 
                  << 0x18U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v8) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v8][2U] 
            = ((0xffffff00U & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v8][2U]) 
               | (IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v8));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v9) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v9][2U] 
            = ((0xffff00ffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v9][2U]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v9) 
                  << 8U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v10) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v10][2U] 
            = ((0xff00ffffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v10][2U]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v10) 
                  << 0x10U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v11) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v11][2U] 
            = ((0xffffffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v11][2U]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v11) 
                  << 0x18U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v12) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v12][3U] 
            = ((0xffffff00U & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v12][3U]) 
               | (IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v12));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v13) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v13][3U] 
            = ((0xffff00ffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v13][3U]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v13) 
                  << 8U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v14) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v14][3U] 
            = ((0xff00ffffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v14][3U]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v14) 
                  << 0x10U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v15) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v15][3U] 
            = ((0xffffffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v15][3U]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v15) 
                  << 0x18U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v16) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v16][4U] 
            = ((0xffffff00U & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v16][4U]) 
               | (IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v16));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v17) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v17][4U] 
            = ((0xffff00ffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v17][4U]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v17) 
                  << 8U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v18) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v18][4U] 
            = ((0xff00ffffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v18][4U]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v18) 
                  << 0x10U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v19) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v19][4U] 
            = ((0xffffffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v19][4U]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v19) 
                  << 0x18U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v20) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v20][5U] 
            = ((0xffffff00U & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v20][5U]) 
               | (IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v20));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v21) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v21][5U] 
            = ((0xffff00ffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v21][5U]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v21) 
                  << 8U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v22) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v22][5U] 
            = ((0xff00ffffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v22][5U]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v22) 
                  << 0x10U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v23) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v23][5U] 
            = ((0xffffffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v23][5U]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v23) 
                  << 0x18U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v24) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v24][6U] 
            = ((0xffffff00U & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v24][6U]) 
               | (IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v24));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v25) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v25][6U] 
            = ((0xffff00ffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v25][6U]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v25) 
                  << 8U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v26) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v26][6U] 
            = ((0xff00ffffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v26][6U]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v26) 
                  << 0x10U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v27) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v27][6U] 
            = ((0xffffffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v27][6U]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v27) 
                  << 0x18U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v28) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v28][7U] 
            = ((0xffffff00U & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v28][7U]) 
               | (IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v28));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v29) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v29][7U] 
            = ((0xffff00ffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v29][7U]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v29) 
                  << 8U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v30) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v30][7U] 
            = ((0xff00ffffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v30][7U]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v30) 
                  << 0x10U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v31) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v31][7U] 
            = ((0xffffffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v31][7U]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v31) 
                  << 0x18U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v32) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v32][8U] 
            = ((0xffffff00U & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v32][8U]) 
               | (IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v32));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v33) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v33][8U] 
            = ((0xffff00ffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v33][8U]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v33) 
                  << 8U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v34) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v34][8U] 
            = ((0xff00ffffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v34][8U]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v34) 
                  << 0x10U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v35) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v35][8U] 
            = ((0xffffffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v35][8U]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v35) 
                  << 0x18U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v36) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v36][9U] 
            = ((0xffffff00U & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v36][9U]) 
               | (IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v36));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v37) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v37][9U] 
            = ((0xffff00ffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v37][9U]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v37) 
                  << 8U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v38) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v38][9U] 
            = ((0xff00ffffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v38][9U]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v38) 
                  << 0x10U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v39) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v39][9U] 
            = ((0xffffffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v39][9U]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v39) 
                  << 0x18U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v40) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v40][0xaU] 
            = ((0xffffff00U & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v40][0xaU]) 
               | (IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v40));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v41) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v41][0xaU] 
            = ((0xffff00ffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v41][0xaU]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v41) 
                  << 8U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v42) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v42][0xaU] 
            = ((0xff00ffffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v42][0xaU]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v42) 
                  << 0x10U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v43) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v43][0xaU] 
            = ((0xffffffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v43][0xaU]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v43) 
                  << 0x18U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v44) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v44][0xbU] 
            = ((0xffffff00U & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v44][0xbU]) 
               | (IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v44));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v45) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v45][0xbU] 
            = ((0xffff00ffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v45][0xbU]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v45) 
                  << 8U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v46) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v46][0xbU] 
            = ((0xff00ffffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v46][0xbU]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v46) 
                  << 0x10U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v47) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v47][0xbU] 
            = ((0xffffffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v47][0xbU]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v47) 
                  << 0x18U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v48) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v48][0xcU] 
            = ((0xffffff00U & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v48][0xcU]) 
               | (IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v48));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v49) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v49][0xcU] 
            = ((0xffff00ffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v49][0xcU]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v49) 
                  << 8U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v50) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v50][0xcU] 
            = ((0xff00ffffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v50][0xcU]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v50) 
                  << 0x10U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v51) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v51][0xcU] 
            = ((0xffffffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v51][0xcU]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v51) 
                  << 0x18U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v52) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v52][0xdU] 
            = ((0xffffff00U & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v52][0xdU]) 
               | (IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v52));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v53) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v53][0xdU] 
            = ((0xffff00ffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v53][0xdU]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v53) 
                  << 8U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v54) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v54][0xdU] 
            = ((0xff00ffffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v54][0xdU]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v54) 
                  << 0x10U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v55) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v55][0xdU] 
            = ((0xffffffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v55][0xdU]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v55) 
                  << 0x18U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v56) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v56][0xeU] 
            = ((0xffffff00U & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v56][0xeU]) 
               | (IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v56));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v57) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v57][0xeU] 
            = ((0xffff00ffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v57][0xeU]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v57) 
                  << 8U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v58) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v58][0xeU] 
            = ((0xff00ffffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v58][0xeU]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v58) 
                  << 0x10U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v59) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v59][0xeU] 
            = ((0xffffffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v59][0xeU]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v59) 
                  << 0x18U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v60) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v60][0xfU] 
            = ((0xffffff00U & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v60][0xfU]) 
               | (IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v60));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v61) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v61][0xfU] 
            = ((0xffff00ffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v61][0xfU]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v61) 
                  << 8U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v62) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v62][0xfU] 
            = ((0xff00ffffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v62][0xfU]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v62) 
                  << 0x10U));
    }
    if (__VdlySet__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v63) {
        vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v63][0xfU] 
            = ((0xffffffU & vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM
                [__VdlyDim0__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v63][0xfU]) 
               | ((IData)(__VdlyVal__f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM__v63) 
                  << 0x18U));
    }
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_data 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__b_dout_reg;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__b_dout 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__b_dout_reg;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_data_padded_reg 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_data_padded_next;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__write_busy 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_busy_reg;
    vlSelfRef.f_unit__DOT__write_busy = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_busy_reg;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_busy 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_busy_reg;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__erase_ram_wr_en = 0U;
    if ((0U != (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
        if ((1U != (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
            if ((2U != (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
                if ((3U == (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
                    if ((1U & (~ (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_delete_reg)))) {
                        vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__erase_ram_wr_en = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__count_next 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__count_reg;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__wr_en = 0U;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__ram_addr 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__erase_data;
    if ((0U == (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
        if ((0U != vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__count_reg)) {
            vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__count_next 
                = (0x3ffffffU & (vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__count_reg 
                                 - (IData)(1U)));
        }
        vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__wr_en = 1U;
        vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__ram_addr 
            = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__count_reg;
    } else if ((1U != (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
        if ((2U != (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
            if ((3U == (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
                vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__wr_en = 1U;
            } else if ((4U != (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
                if ((5U == (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
                    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__wr_en = 1U;
                }
            }
        }
    }
    vlSelfRef.f_unit__DOT__w_prefetch_erase_edge__DOT__ff_m1 
        = ((IData)(vlSelfRef.rst_n) && (IData)(vlSelfRef.f_unit__DOT__w_prefetch_rd_cam));
    vlSelfRef.f_unit__DOT__w_prefetch_wr_cam_click 
        = vlSelfRef.f_unit__DOT__w_prefetch_wr_cam_edge__DOT__signal_out;
    vlSelfRef.f_unit__DOT__wr_cam_click = vlSelfRef.f_unit__DOT__w_prefetch_wr_cam_edge__DOT__signal_out;
    vlSelfRef.f_unit__DOT__w_prefetch_wr_cam_edge__DOT__ff_m1 
        = ((IData)(vlSelfRef.rst_n) && (IData)(vlSelfRef.f_unit__DOT__w_prefetch_wr_cam));
    vlSelfRef.f_unit__DOT__w_compare_rd_cam_click = vlSelfRef.f_unit__DOT__w_compare_rd_cam_edge__DOT__signal_out;
    vlSelfRef.f_unit__DOT__w_compare_rd_cam_edge__DOT__ff_m1 
        = ((IData)(vlSelfRef.rst_n) && (IData)(vlSelfRef.f_unit__DOT__w_compare_rd_cam));
    vlSelfRef.f_unit__DOT__w_compare_rd_mem_click = vlSelfRef.f_unit__DOT__w_compare_rd_mem_edge__DOT__signal_out;
    vlSelfRef.f_unit__DOT__rd_mem_click = vlSelfRef.f_unit__DOT__w_compare_rd_mem_edge__DOT__signal_out;
    vlSelfRef.f_unit__DOT__w_compare_rd_mem_edge__DOT__ff_m1 
        = ((IData)(vlSelfRef.rst_n) && (IData)(vlSelfRef.f_unit__DOT__w_compare_rd_mem));
    vlSelfRef.f_unit__DOT__w_prefetch_rd_cam_click 
        = vlSelfRef.f_unit__DOT__w_prefetch_rd_cam_edge__DOT__signal_out;
    vlSelfRef.f_unit__DOT__rd_cam_click = ((IData)(vlSelfRef.f_unit__DOT__w_compare_rd_cam_edge__DOT__signal_out) 
                                           | (IData)(vlSelfRef.f_unit__DOT__w_prefetch_rd_cam_edge__DOT__signal_out));
    vlSelfRef.f_unit__DOT__w_prefetch_rd_cam_edge__DOT__ff_m1 
        = ((IData)(vlSelfRef.rst_n) && (IData)(vlSelfRef.f_unit__DOT__w_prefetch_rd_cam));
    vlSelfRef.reg_file__DOT__set_load_val_prev = vlSelfRef.reg_file__DOT__load_val_edge__DOT__signal_out;
    vlSelfRef.load = ((~ (IData)(vlSelfRef.reg_file__DOT__load_val_edge__DOT__signal_out)) 
                      & (IData)(vlSelfRef.reg_file__DOT__set_load_val));
    vlSelfRef.reg_file__DOT__load_val_edge__DOT__ff_m1 
        = ((IData)(vlSelfRef.rst_n) && (IData)(vlSelfRef.reg_file__DOT__set_load_val));
    vlSelfRef.f_unit__DOT__data_buffer__DOT__out_data[0U] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__out_data[1U] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[1U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__out_data[2U] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[2U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__out_data[3U] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[3U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__out_data[4U] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[4U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__out_data[5U] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[5U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__out_data[6U] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[6U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__out_data[7U] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[7U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__out_data[8U] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[8U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__out_data[9U] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[9U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__out_data[0xaU] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xaU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__out_data[0xbU] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xbU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__out_data[0xcU] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xcU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__out_data[0xdU] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xdU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__out_data[0xeU] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xeU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__out_data[0xfU] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xfU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta[0U] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta[1U] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[1U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta[2U] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[2U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta[3U] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[3U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta[4U] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[4U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta[5U] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[5U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta[6U] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[6U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta[7U] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[7U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta[8U] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[8U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta[9U] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[9U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta[0xaU] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xaU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta[0xbU] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xbU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta[0xcU] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xcU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta[0xdU] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xdU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta[0xeU] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xeU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta[0xfU] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xfU];
    vlSelfRef.f_unit__DOT__mem_out_data[0U] = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0U];
    vlSelfRef.f_unit__DOT__mem_out_data[1U] = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[1U];
    vlSelfRef.f_unit__DOT__mem_out_data[2U] = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[2U];
    vlSelfRef.f_unit__DOT__mem_out_data[3U] = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[3U];
    vlSelfRef.f_unit__DOT__mem_out_data[4U] = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[4U];
    vlSelfRef.f_unit__DOT__mem_out_data[5U] = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[5U];
    vlSelfRef.f_unit__DOT__mem_out_data[6U] = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[6U];
    vlSelfRef.f_unit__DOT__mem_out_data[7U] = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[7U];
    vlSelfRef.f_unit__DOT__mem_out_data[8U] = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[8U];
    vlSelfRef.f_unit__DOT__mem_out_data[9U] = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[9U];
    vlSelfRef.f_unit__DOT__mem_out_data[0xaU] = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xaU];
    vlSelfRef.f_unit__DOT__mem_out_data[0xbU] = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xbU];
    vlSelfRef.f_unit__DOT__mem_out_data[0xcU] = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xcU];
    vlSelfRef.f_unit__DOT__mem_out_data[0xdU] = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xdU];
    vlSelfRef.f_unit__DOT__mem_out_data[0xeU] = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xeU];
    vlSelfRef.f_unit__DOT__mem_out_data[0xfU] = vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xfU];
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__a_dout 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__a_dout_reg;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__match_data 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__a_dout_reg;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__b_we 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__wr_en;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__b_addr 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__ram_addr;
    vlSelfRef.f_unit__DOT____Vcellinp__rd_cam_counter__rst_n 
        = ((~ (IData)(vlSelfRef.f_unit__DOT__rd_cam_click)) 
           & (IData)(vlSelfRef.rst_n));
    vlSelfRef.sec_address_translator__DOT__cfg_load 
        = vlSelfRef.load;
    vlSelfRef.reg_file__DOT__load = vlSelfRef.load;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_raw_out[0U] 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__match_data;
    vlSelfRef.f_unit__DOT__rd_cam_counter__DOT__rst_n 
        = vlSelfRef.f_unit__DOT____Vcellinp__rd_cam_counter__rst_n;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_many_raw = 0xfU;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_many_raw 
        = ((IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_many_raw) 
           & vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_raw_out
           [0U]);
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__input_unencoded 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_many_raw;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst1__DOT__input_unencoded 
        = (3U & ((IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_many_raw) 
                 >> 0U));
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst2__DOT__input_unencoded 
        = (3U & ((IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_many_raw) 
                 >> 2U));
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__match_many 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_many_raw;
    vlSelfRef.f_unit__DOT__match_many = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_many_raw;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_many 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_many_raw;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded 
        = (1U & (~ (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_many_raw)));
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded 
        = (1U & (~ ((IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_many_raw) 
                    >> 2U)));
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid 
        = (0U != (3U & ((IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_many_raw) 
                        >> 2U)));
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid 
        = (0U != (3U & (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_many_raw)));
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__out1 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_unencoded 
        = (3U & ((IData)(1U) << (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded)));
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__out2 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_unencoded 
        = (3U & ((IData)(1U) << (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded)));
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__valid2 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__valid1 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid;
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__3(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    __Vtableidx6 = ((((IData)(vlSelfRef.f_unit__DOT__erase_cam_counter__DOT__done) 
                      << 4U) | ((IData)(vlSelfRef.f_unit__DOT__erase_cam_counter__DOT__counter) 
                                << 2U)) | (((IData)(vlSelfRef.f_unit__DOT__erase_cam_counter__DOT__done_w) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.f_unit__DOT____Vcellinp__erase_cam_counter__rst_n)));
    vlSelfRef.f_unit__DOT__erase_cam_counter__DOT__counter 
        = Vtop__ConstPool__TABLE_h6205814d_0[__Vtableidx6];
    vlSelfRef.f_unit__DOT__erase_cam_counter__DOT__done 
        = Vtop__ConstPool__TABLE_hc0d3507d_0[__Vtableidx6];
    vlSelfRef.f_unit__DOT__erase_cam = vlSelfRef.f_unit__DOT__erase_cam_counter__DOT__counter;
    vlSelfRef.f_unit__DOT__erase_cam_counter__DOT__done_w 
        = (2U == (IData)(vlSelfRef.f_unit__DOT__erase_cam_counter__DOT__counter));
    vlSelfRef.f_unit__DOT__erase_cam_done = vlSelfRef.f_unit__DOT__erase_cam_counter__DOT__done;
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__5(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
    __Vtableidx7 = ((((IData)(vlSelfRef.f_unit__DOT__wr_mem_counter__DOT__done) 
                      << 4U) | ((IData)(vlSelfRef.f_unit__DOT__wr_mem_counter__DOT__counter) 
                                << 2U)) | (((IData)(vlSelfRef.f_unit__DOT__wr_mem_counter__DOT__done_w) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.f_unit__DOT____Vcellinp__wr_mem_counter__rst_n)));
    vlSelfRef.f_unit__DOT__wr_mem_counter__DOT__counter 
        = Vtop__ConstPool__TABLE_h6205814d_0[__Vtableidx7];
    vlSelfRef.f_unit__DOT__wr_mem_counter__DOT__done 
        = Vtop__ConstPool__TABLE_hc0d3507d_0[__Vtableidx7];
    vlSelfRef.f_unit__DOT__wr_cam = (1U & (IData)(vlSelfRef.f_unit__DOT__wr_mem_counter__DOT__counter));
    vlSelfRef.f_unit__DOT__wr_mem_counter__DOT__done_w 
        = (2U == (IData)(vlSelfRef.f_unit__DOT__wr_mem_counter__DOT__counter));
    vlSelfRef.f_unit__DOT__wr_cam_done = vlSelfRef.f_unit__DOT__wr_mem_counter__DOT__done;
}

extern const VlUnpacked<CData/*4:0*/, 512> Vtop__ConstPool__TABLE_hde51526f_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtop__ConstPool__TABLE_h2b53f02a_0;

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__6(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = ((((IData)(vlSelfRef.rd_controller__DOT__counter_offset_inst__DOT__done) 
                      << 8U) | ((IData)(vlSelfRef.read_ready) 
                                << 7U)) | (((IData)(vlSelfRef.rd_controller__DOT__counter_offset_inst__DOT__counter) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.rd_controller__DOT__counter_offset_inst__DOT__done_w) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.rd_controller__DOT__cur_state))));
    vlSelfRef.rd_controller__DOT__counter_offset_inst__DOT__counter 
        = Vtop__ConstPool__TABLE_hde51526f_0[__Vtableidx1];
    vlSelfRef.rd_controller__DOT__counter_offset_inst__DOT__done 
        = Vtop__ConstPool__TABLE_h2b53f02a_0[__Vtableidx1];
    vlSelfRef.rd_controller__DOT__counter_done = vlSelfRef.rd_controller__DOT__counter_offset_inst__DOT__done;
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__7(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<16>/*511:0*/ __Vdly__rd_controller__DOT__cache_read_data;
    VL_ZERO_W(512, __Vdly__rd_controller__DOT__cache_read_data);
    // Body
    __Vdly__rd_controller__DOT__cache_read_data[0U] 
        = vlSelfRef.rd_controller__DOT__cache_read_data[0U];
    __Vdly__rd_controller__DOT__cache_read_data[1U] 
        = vlSelfRef.rd_controller__DOT__cache_read_data[1U];
    __Vdly__rd_controller__DOT__cache_read_data[2U] 
        = vlSelfRef.rd_controller__DOT__cache_read_data[2U];
    __Vdly__rd_controller__DOT__cache_read_data[3U] 
        = vlSelfRef.rd_controller__DOT__cache_read_data[3U];
    __Vdly__rd_controller__DOT__cache_read_data[4U] 
        = vlSelfRef.rd_controller__DOT__cache_read_data[4U];
    __Vdly__rd_controller__DOT__cache_read_data[5U] 
        = vlSelfRef.rd_controller__DOT__cache_read_data[5U];
    __Vdly__rd_controller__DOT__cache_read_data[6U] 
        = vlSelfRef.rd_controller__DOT__cache_read_data[6U];
    __Vdly__rd_controller__DOT__cache_read_data[7U] 
        = vlSelfRef.rd_controller__DOT__cache_read_data[7U];
    __Vdly__rd_controller__DOT__cache_read_data[8U] 
        = vlSelfRef.rd_controller__DOT__cache_read_data[8U];
    __Vdly__rd_controller__DOT__cache_read_data[9U] 
        = vlSelfRef.rd_controller__DOT__cache_read_data[9U];
    __Vdly__rd_controller__DOT__cache_read_data[0xaU] 
        = vlSelfRef.rd_controller__DOT__cache_read_data[0xaU];
    __Vdly__rd_controller__DOT__cache_read_data[0xbU] 
        = vlSelfRef.rd_controller__DOT__cache_read_data[0xbU];
    __Vdly__rd_controller__DOT__cache_read_data[0xcU] 
        = vlSelfRef.rd_controller__DOT__cache_read_data[0xcU];
    __Vdly__rd_controller__DOT__cache_read_data[0xdU] 
        = vlSelfRef.rd_controller__DOT__cache_read_data[0xdU];
    __Vdly__rd_controller__DOT__cache_read_data[0xeU] 
        = vlSelfRef.rd_controller__DOT__cache_read_data[0xeU];
    __Vdly__rd_controller__DOT__cache_read_data[0xfU] 
        = vlSelfRef.rd_controller__DOT__cache_read_data[0xfU];
    if (vlSelfRef.rst_n) {
        vlSelfRef.wr_controller__DOT__done_keep = ((IData)(vlSelfRef.wr_controller__DOT__cur_state)
                                                    ? 
                                                   ((IData)(vlSelfRef.write_ready)
                                                     ? 1U
                                                     : 
                                                    (1U 
                                                     & (IData)(vlSelfRef.wr_controller__DOT__done_keep)))
                                                    : 0U);
        __Vdly__rd_controller__DOT__cache_read_data[0U] 
            = ((((0U == (IData)(vlSelfRef.rd_controller__DOT__data_slot_idx)) 
                 & (IData)(vlSelfRef.rd_controller__DOT__cur_state)) 
                & (IData)(vlSelfRef.read_ready)) ? vlSelfRef.read_data
                : vlSelfRef.rd_controller__DOT__cache_read_data[0U]);
        __Vdly__rd_controller__DOT__cache_read_data[1U] 
            = ((((1U == (IData)(vlSelfRef.rd_controller__DOT__data_slot_idx)) 
                 & (IData)(vlSelfRef.rd_controller__DOT__cur_state)) 
                & (IData)(vlSelfRef.read_ready)) ? vlSelfRef.read_data
                : vlSelfRef.rd_controller__DOT__cache_read_data[1U]);
        __Vdly__rd_controller__DOT__cache_read_data[2U] 
            = ((((2U == (IData)(vlSelfRef.rd_controller__DOT__data_slot_idx)) 
                 & (IData)(vlSelfRef.rd_controller__DOT__cur_state)) 
                & (IData)(vlSelfRef.read_ready)) ? vlSelfRef.read_data
                : vlSelfRef.rd_controller__DOT__cache_read_data[2U]);
        __Vdly__rd_controller__DOT__cache_read_data[3U] 
            = ((((3U == (IData)(vlSelfRef.rd_controller__DOT__data_slot_idx)) 
                 & (IData)(vlSelfRef.rd_controller__DOT__cur_state)) 
                & (IData)(vlSelfRef.read_ready)) ? vlSelfRef.read_data
                : vlSelfRef.rd_controller__DOT__cache_read_data[3U]);
        __Vdly__rd_controller__DOT__cache_read_data[4U] 
            = ((((4U == (IData)(vlSelfRef.rd_controller__DOT__data_slot_idx)) 
                 & (IData)(vlSelfRef.rd_controller__DOT__cur_state)) 
                & (IData)(vlSelfRef.read_ready)) ? vlSelfRef.read_data
                : vlSelfRef.rd_controller__DOT__cache_read_data[4U]);
        __Vdly__rd_controller__DOT__cache_read_data[5U] 
            = ((((5U == (IData)(vlSelfRef.rd_controller__DOT__data_slot_idx)) 
                 & (IData)(vlSelfRef.rd_controller__DOT__cur_state)) 
                & (IData)(vlSelfRef.read_ready)) ? vlSelfRef.read_data
                : vlSelfRef.rd_controller__DOT__cache_read_data[5U]);
        __Vdly__rd_controller__DOT__cache_read_data[6U] 
            = ((((6U == (IData)(vlSelfRef.rd_controller__DOT__data_slot_idx)) 
                 & (IData)(vlSelfRef.rd_controller__DOT__cur_state)) 
                & (IData)(vlSelfRef.read_ready)) ? vlSelfRef.read_data
                : vlSelfRef.rd_controller__DOT__cache_read_data[6U]);
        __Vdly__rd_controller__DOT__cache_read_data[7U] 
            = ((((7U == (IData)(vlSelfRef.rd_controller__DOT__data_slot_idx)) 
                 & (IData)(vlSelfRef.rd_controller__DOT__cur_state)) 
                & (IData)(vlSelfRef.read_ready)) ? vlSelfRef.read_data
                : vlSelfRef.rd_controller__DOT__cache_read_data[7U]);
        __Vdly__rd_controller__DOT__cache_read_data[8U] 
            = ((((8U == (IData)(vlSelfRef.rd_controller__DOT__data_slot_idx)) 
                 & (IData)(vlSelfRef.rd_controller__DOT__cur_state)) 
                & (IData)(vlSelfRef.read_ready)) ? vlSelfRef.read_data
                : vlSelfRef.rd_controller__DOT__cache_read_data[8U]);
        __Vdly__rd_controller__DOT__cache_read_data[9U] 
            = ((((9U == (IData)(vlSelfRef.rd_controller__DOT__data_slot_idx)) 
                 & (IData)(vlSelfRef.rd_controller__DOT__cur_state)) 
                & (IData)(vlSelfRef.read_ready)) ? vlSelfRef.read_data
                : vlSelfRef.rd_controller__DOT__cache_read_data[9U]);
        __Vdly__rd_controller__DOT__cache_read_data[0xaU] 
            = ((((0xaU == (IData)(vlSelfRef.rd_controller__DOT__data_slot_idx)) 
                 & (IData)(vlSelfRef.rd_controller__DOT__cur_state)) 
                & (IData)(vlSelfRef.read_ready)) ? vlSelfRef.read_data
                : vlSelfRef.rd_controller__DOT__cache_read_data[0xaU]);
        __Vdly__rd_controller__DOT__cache_read_data[0xbU] 
            = ((((0xbU == (IData)(vlSelfRef.rd_controller__DOT__data_slot_idx)) 
                 & (IData)(vlSelfRef.rd_controller__DOT__cur_state)) 
                & (IData)(vlSelfRef.read_ready)) ? vlSelfRef.read_data
                : vlSelfRef.rd_controller__DOT__cache_read_data[0xbU]);
        __Vdly__rd_controller__DOT__cache_read_data[0xcU] 
            = ((((0xcU == (IData)(vlSelfRef.rd_controller__DOT__data_slot_idx)) 
                 & (IData)(vlSelfRef.rd_controller__DOT__cur_state)) 
                & (IData)(vlSelfRef.read_ready)) ? vlSelfRef.read_data
                : vlSelfRef.rd_controller__DOT__cache_read_data[0xcU]);
        __Vdly__rd_controller__DOT__cache_read_data[0xdU] 
            = ((((0xdU == (IData)(vlSelfRef.rd_controller__DOT__data_slot_idx)) 
                 & (IData)(vlSelfRef.rd_controller__DOT__cur_state)) 
                & (IData)(vlSelfRef.read_ready)) ? vlSelfRef.read_data
                : vlSelfRef.rd_controller__DOT__cache_read_data[0xdU]);
        __Vdly__rd_controller__DOT__cache_read_data[0xeU] 
            = ((((0xeU == (IData)(vlSelfRef.rd_controller__DOT__data_slot_idx)) 
                 & (IData)(vlSelfRef.rd_controller__DOT__cur_state)) 
                & (IData)(vlSelfRef.read_ready)) ? vlSelfRef.read_data
                : vlSelfRef.rd_controller__DOT__cache_read_data[0xeU]);
        __Vdly__rd_controller__DOT__cache_read_data[0xfU] 
            = ((((0xfU == (IData)(vlSelfRef.rd_controller__DOT__data_slot_idx)) 
                 & (IData)(vlSelfRef.rd_controller__DOT__cur_state)) 
                & (IData)(vlSelfRef.read_ready)) ? vlSelfRef.read_data
                : vlSelfRef.rd_controller__DOT__cache_read_data[0xfU]);
        if (vlSelfRef.rd_controller__DOT__cur_state) {
            if (((0xfU == (IData)(vlSelfRef.rd_controller__DOT__data_slot_idx)) 
                 & (IData)(vlSelfRef.read_ready))) {
                vlSelfRef.rd_controller__DOT__all_beats_received = 1U;
            }
        } else {
            vlSelfRef.rd_controller__DOT__all_beats_received = 0U;
        }
        vlSelfRef.rd_controller__DOT__data_slot_idx 
            = (((IData)(vlSelfRef.rd_controller__DOT__cur_state) 
                & (IData)(vlSelfRef.read_ready)) ? (IData)(vlSelfRef.rd_controller__DOT__counter_wire)
                : 0U);
    } else {
        vlSelfRef.wr_controller__DOT__done_keep = 0U;
        __Vdly__rd_controller__DOT__cache_read_data[0U] = 0U;
        __Vdly__rd_controller__DOT__cache_read_data[1U] = 0U;
        __Vdly__rd_controller__DOT__cache_read_data[2U] = 0U;
        __Vdly__rd_controller__DOT__cache_read_data[3U] = 0U;
        __Vdly__rd_controller__DOT__cache_read_data[4U] = 0U;
        __Vdly__rd_controller__DOT__cache_read_data[5U] = 0U;
        __Vdly__rd_controller__DOT__cache_read_data[6U] = 0U;
        __Vdly__rd_controller__DOT__cache_read_data[7U] = 0U;
        __Vdly__rd_controller__DOT__cache_read_data[8U] = 0U;
        __Vdly__rd_controller__DOT__cache_read_data[9U] = 0U;
        __Vdly__rd_controller__DOT__cache_read_data[0xaU] = 0U;
        __Vdly__rd_controller__DOT__cache_read_data[0xbU] = 0U;
        __Vdly__rd_controller__DOT__cache_read_data[0xcU] = 0U;
        __Vdly__rd_controller__DOT__cache_read_data[0xdU] = 0U;
        __Vdly__rd_controller__DOT__cache_read_data[0xeU] = 0U;
        __Vdly__rd_controller__DOT__cache_read_data[0xfU] = 0U;
        vlSelfRef.rd_controller__DOT__all_beats_received = 0U;
        vlSelfRef.rd_controller__DOT__data_slot_idx = 0U;
    }
    vlSelfRef.rd_controller__DOT__cache_read_data[0U] 
        = __Vdly__rd_controller__DOT__cache_read_data[0U];
    vlSelfRef.rd_controller__DOT__cache_read_data[1U] 
        = __Vdly__rd_controller__DOT__cache_read_data[1U];
    vlSelfRef.rd_controller__DOT__cache_read_data[2U] 
        = __Vdly__rd_controller__DOT__cache_read_data[2U];
    vlSelfRef.rd_controller__DOT__cache_read_data[3U] 
        = __Vdly__rd_controller__DOT__cache_read_data[3U];
    vlSelfRef.rd_controller__DOT__cache_read_data[4U] 
        = __Vdly__rd_controller__DOT__cache_read_data[4U];
    vlSelfRef.rd_controller__DOT__cache_read_data[5U] 
        = __Vdly__rd_controller__DOT__cache_read_data[5U];
    vlSelfRef.rd_controller__DOT__cache_read_data[6U] 
        = __Vdly__rd_controller__DOT__cache_read_data[6U];
    vlSelfRef.rd_controller__DOT__cache_read_data[7U] 
        = __Vdly__rd_controller__DOT__cache_read_data[7U];
    vlSelfRef.rd_controller__DOT__cache_read_data[8U] 
        = __Vdly__rd_controller__DOT__cache_read_data[8U];
    vlSelfRef.rd_controller__DOT__cache_read_data[9U] 
        = __Vdly__rd_controller__DOT__cache_read_data[9U];
    vlSelfRef.rd_controller__DOT__cache_read_data[0xaU] 
        = __Vdly__rd_controller__DOT__cache_read_data[0xaU];
    vlSelfRef.rd_controller__DOT__cache_read_data[0xbU] 
        = __Vdly__rd_controller__DOT__cache_read_data[0xbU];
    vlSelfRef.rd_controller__DOT__cache_read_data[0xcU] 
        = __Vdly__rd_controller__DOT__cache_read_data[0xcU];
    vlSelfRef.rd_controller__DOT__cache_read_data[0xdU] 
        = __Vdly__rd_controller__DOT__cache_read_data[0xdU];
    vlSelfRef.rd_controller__DOT__cache_read_data[0xeU] 
        = __Vdly__rd_controller__DOT__cache_read_data[0xeU];
    vlSelfRef.rd_controller__DOT__cache_read_data[0xfU] 
        = __Vdly__rd_controller__DOT__cache_read_data[0xfU];
    vlSelfRef.req_data[0U] = vlSelfRef.rd_controller__DOT__cache_read_data[0U];
    vlSelfRef.req_data[1U] = vlSelfRef.rd_controller__DOT__cache_read_data[1U];
    vlSelfRef.req_data[2U] = vlSelfRef.rd_controller__DOT__cache_read_data[2U];
    vlSelfRef.req_data[3U] = vlSelfRef.rd_controller__DOT__cache_read_data[3U];
    vlSelfRef.req_data[4U] = vlSelfRef.rd_controller__DOT__cache_read_data[4U];
    vlSelfRef.req_data[5U] = vlSelfRef.rd_controller__DOT__cache_read_data[5U];
    vlSelfRef.req_data[6U] = vlSelfRef.rd_controller__DOT__cache_read_data[6U];
    vlSelfRef.req_data[7U] = vlSelfRef.rd_controller__DOT__cache_read_data[7U];
    vlSelfRef.req_data[8U] = vlSelfRef.rd_controller__DOT__cache_read_data[8U];
    vlSelfRef.req_data[9U] = vlSelfRef.rd_controller__DOT__cache_read_data[9U];
    vlSelfRef.req_data[0xaU] = vlSelfRef.rd_controller__DOT__cache_read_data[0xaU];
    vlSelfRef.req_data[0xbU] = vlSelfRef.rd_controller__DOT__cache_read_data[0xbU];
    vlSelfRef.req_data[0xcU] = vlSelfRef.rd_controller__DOT__cache_read_data[0xcU];
    vlSelfRef.req_data[0xdU] = vlSelfRef.rd_controller__DOT__cache_read_data[0xdU];
    vlSelfRef.req_data[0xeU] = vlSelfRef.rd_controller__DOT__cache_read_data[0xeU];
    vlSelfRef.req_data[0xfU] = vlSelfRef.rd_controller__DOT__cache_read_data[0xfU];
    vlSelfRef.f_unit__DOT__req_data[0U] = vlSelfRef.req_data[0U];
    vlSelfRef.f_unit__DOT__req_data[1U] = vlSelfRef.req_data[1U];
    vlSelfRef.f_unit__DOT__req_data[2U] = vlSelfRef.req_data[2U];
    vlSelfRef.f_unit__DOT__req_data[3U] = vlSelfRef.req_data[3U];
    vlSelfRef.f_unit__DOT__req_data[4U] = vlSelfRef.req_data[4U];
    vlSelfRef.f_unit__DOT__req_data[5U] = vlSelfRef.req_data[5U];
    vlSelfRef.f_unit__DOT__req_data[6U] = vlSelfRef.req_data[6U];
    vlSelfRef.f_unit__DOT__req_data[7U] = vlSelfRef.req_data[7U];
    vlSelfRef.f_unit__DOT__req_data[8U] = vlSelfRef.req_data[8U];
    vlSelfRef.f_unit__DOT__req_data[9U] = vlSelfRef.req_data[9U];
    vlSelfRef.f_unit__DOT__req_data[0xaU] = vlSelfRef.req_data[0xaU];
    vlSelfRef.f_unit__DOT__req_data[0xbU] = vlSelfRef.req_data[0xbU];
    vlSelfRef.f_unit__DOT__req_data[0xcU] = vlSelfRef.req_data[0xcU];
    vlSelfRef.f_unit__DOT__req_data[0xdU] = vlSelfRef.req_data[0xdU];
    vlSelfRef.f_unit__DOT__req_data[0xeU] = vlSelfRef.req_data[0xeU];
    vlSelfRef.f_unit__DOT__req_data[0xfU] = vlSelfRef.req_data[0xfU];
}

extern const VlUnpacked<CData/*2:0*/, 128> Vtop__ConstPool__TABLE_h347470f9_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hfb06f368_0;

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__8(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    __Vtableidx8 = ((((IData)(vlSelfRef.f_unit__DOT__genblk1__BRA__0__KET____DOT__stream_counter__DOT__done) 
                      << 6U) | ((IData)(vlSelfRef.f_unit__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__stream_counter__start) 
                                << 5U)) | (((IData)(vlSelfRef.f_unit__DOT__genblk1__BRA__0__KET____DOT__stream_counter__DOT__counter) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.f_unit__DOT__genblk1__BRA__0__KET____DOT__stream_counter__DOT__done_w) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.f_unit__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__stream_counter__rst_n))));
    vlSelfRef.f_unit__DOT__genblk1__BRA__0__KET____DOT__stream_counter__DOT__counter 
        = Vtop__ConstPool__TABLE_h347470f9_0[__Vtableidx8];
    vlSelfRef.f_unit__DOT__genblk1__BRA__0__KET____DOT__stream_counter__DOT__done 
        = Vtop__ConstPool__TABLE_hfb06f368_0[__Vtableidx8];
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__9(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    // Body
    __Vtableidx9 = ((((IData)(vlSelfRef.f_unit__DOT__genblk1__BRA__1__KET____DOT__stream_counter__DOT__done) 
                      << 6U) | ((IData)(vlSelfRef.f_unit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__stream_counter__start) 
                                << 5U)) | (((IData)(vlSelfRef.f_unit__DOT__genblk1__BRA__1__KET____DOT__stream_counter__DOT__counter) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.f_unit__DOT__genblk1__BRA__1__KET____DOT__stream_counter__DOT__done_w) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.f_unit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__stream_counter__rst_n))));
    vlSelfRef.f_unit__DOT__genblk1__BRA__1__KET____DOT__stream_counter__DOT__counter 
        = Vtop__ConstPool__TABLE_h347470f9_0[__Vtableidx9];
    vlSelfRef.f_unit__DOT__genblk1__BRA__1__KET____DOT__stream_counter__DOT__done 
        = Vtop__ConstPool__TABLE_hfb06f368_0[__Vtableidx9];
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__10(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    // Body
    __Vtableidx10 = ((((IData)(vlSelfRef.f_unit__DOT__genblk1__BRA__2__KET____DOT__stream_counter__DOT__done) 
                       << 6U) | ((IData)(vlSelfRef.f_unit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__stream_counter__start) 
                                 << 5U)) | (((IData)(vlSelfRef.f_unit__DOT__genblk1__BRA__2__KET____DOT__stream_counter__DOT__counter) 
                                             << 2U) 
                                            | (((IData)(vlSelfRef.f_unit__DOT__genblk1__BRA__2__KET____DOT__stream_counter__DOT__done_w) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.f_unit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__stream_counter__rst_n))));
    vlSelfRef.f_unit__DOT__genblk1__BRA__2__KET____DOT__stream_counter__DOT__counter 
        = Vtop__ConstPool__TABLE_h347470f9_0[__Vtableidx10];
    vlSelfRef.f_unit__DOT__genblk1__BRA__2__KET____DOT__stream_counter__DOT__done 
        = Vtop__ConstPool__TABLE_hfb06f368_0[__Vtableidx10];
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__11(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__11\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    // Body
    __Vtableidx11 = ((((IData)(vlSelfRef.f_unit__DOT__genblk1__BRA__3__KET____DOT__stream_counter__DOT__done) 
                       << 6U) | ((IData)(vlSelfRef.f_unit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__stream_counter__start) 
                                 << 5U)) | (((IData)(vlSelfRef.f_unit__DOT__genblk1__BRA__3__KET____DOT__stream_counter__DOT__counter) 
                                             << 2U) 
                                            | (((IData)(vlSelfRef.f_unit__DOT__genblk1__BRA__3__KET____DOT__stream_counter__DOT__done_w) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.f_unit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__stream_counter__rst_n))));
    vlSelfRef.f_unit__DOT__genblk1__BRA__3__KET____DOT__stream_counter__DOT__counter 
        = Vtop__ConstPool__TABLE_h347470f9_0[__Vtableidx11];
    vlSelfRef.f_unit__DOT__genblk1__BRA__3__KET____DOT__stream_counter__DOT__done 
        = Vtop__ConstPool__TABLE_hfb06f368_0[__Vtableidx11];
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__28(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__28\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    __Vtableidx3 = ((((IData)(vlSelfRef.wr_controller__DOT__counter_offset_inst__DOT__done) 
                      << 8U) | ((IData)(vlSelfRef.wr_controller__DOT__counter_step) 
                                << 7U)) | (((IData)(vlSelfRef.wr_controller__DOT__counter_offset_inst__DOT__counter) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.wr_controller__DOT__counter_offset_inst__DOT__done_w) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.wr_controller__DOT__busy_clk_l))));
    vlSelfRef.wr_controller__DOT__counter_offset_inst__DOT__counter 
        = Vtop__ConstPool__TABLE_hde51526f_0[__Vtableidx3];
    vlSelfRef.wr_controller__DOT__counter_offset_inst__DOT__done 
        = Vtop__ConstPool__TABLE_h2b53f02a_0[__Vtableidx3];
    vlSelfRef.wr_controller__DOT__counter_done = vlSelfRef.wr_controller__DOT__counter_offset_inst__DOT__done;
    vlSelfRef.wr_controller__DOT__counter_wire = (0xfU 
                                                  & (IData)(vlSelfRef.wr_controller__DOT__counter_offset_inst__DOT__counter));
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__29(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__29\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    __Vtableidx4 = ((((IData)(vlSelfRef.f_unit__DOT__rd_mem_counter__DOT__done) 
                      << 3U) | ((IData)(vlSelfRef.f_unit__DOT__rd_mem_counter__DOT__counter) 
                                << 2U)) | (((IData)(vlSelfRef.f_unit__DOT__rd_mem_counter__DOT__done_w) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.f_unit__DOT____Vcellinp__rd_mem_counter__rst_n)));
    vlSelfRef.f_unit__DOT__rd_mem_counter__DOT__counter 
        = Vtop__ConstPool__TABLE_hda151d36_0[__Vtableidx4];
    vlSelfRef.f_unit__DOT__rd_mem_counter__DOT__done 
        = Vtop__ConstPool__TABLE_h35af60b1_0[__Vtableidx4];
    vlSelfRef.f_unit__DOT__rd_mem = vlSelfRef.f_unit__DOT__rd_mem_counter__DOT__counter;
    vlSelfRef.f_unit__DOT__rd_mem_counter__DOT__done_w 
        = vlSelfRef.f_unit__DOT__rd_mem_counter__DOT__counter;
    vlSelfRef.f_unit__DOT__rd_mem_done = vlSelfRef.f_unit__DOT__rd_mem_counter__DOT__done;
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__32(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__32\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rd_controller__DOT__mem_read_done = vlSelfRef.read_ready;
    vlSelfRef.wr_controller__DOT__mem_write_done = vlSelfRef.write_ready;
    vlSelfRef.rd_controller__DOT__counter_offset_inst__DOT__start 
        = vlSelfRef.rd_controller__DOT__mem_read_done;
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__33(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__33\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ f_unit__DOT____VdfgRegularize_hd6c16759_0_0;
    f_unit__DOT____VdfgRegularize_hd6c16759_0_0 = 0;
    CData/*0:0*/ f_unit__DOT____VdfgRegularize_hd6c16759_0_1;
    f_unit__DOT____VdfgRegularize_hd6c16759_0_1 = 0;
    CData/*0:0*/ f_unit__DOT____VdfgRegularize_hd6c16759_0_2;
    f_unit__DOT____VdfgRegularize_hd6c16759_0_2 = 0;
    CData/*0:0*/ f_unit__DOT____VdfgRegularize_hd6c16759_0_3;
    f_unit__DOT____VdfgRegularize_hd6c16759_0_3 = 0;
    // Body
    vlSelfRef.f_unit__DOT__hit = ((7U & (IData)(vlSelfRef.f_unit__DOT__hit)) 
                                  | ((((0U == (IData)(vlSelfRef.f_unit__DOT__match_addr)) 
                                       & (2U == (IData)(vlSelfRef.f_unit__DOT__cur_state))) 
                                      & (IData)(vlSelfRef.f_unit__DOT__match)) 
                                     << 3U));
    vlSelfRef.f_unit__DOT__hit = ((0xbU & (IData)(vlSelfRef.f_unit__DOT__hit)) 
                                  | ((((1U == (IData)(vlSelfRef.f_unit__DOT__match_addr)) 
                                       & (2U == (IData)(vlSelfRef.f_unit__DOT__cur_state))) 
                                      & (IData)(vlSelfRef.f_unit__DOT__match)) 
                                     << 2U));
    vlSelfRef.f_unit__DOT__hit = ((0xdU & (IData)(vlSelfRef.f_unit__DOT__hit)) 
                                  | ((((2U == (IData)(vlSelfRef.f_unit__DOT__match_addr)) 
                                       & (2U == (IData)(vlSelfRef.f_unit__DOT__cur_state))) 
                                      & (IData)(vlSelfRef.f_unit__DOT__match)) 
                                     << 1U));
    vlSelfRef.f_unit__DOT__hit = ((0xeU & (IData)(vlSelfRef.f_unit__DOT__hit)) 
                                  | (((3U == (IData)(vlSelfRef.f_unit__DOT__match_addr)) 
                                      & (2U == (IData)(vlSelfRef.f_unit__DOT__cur_state))) 
                                     & (IData)(vlSelfRef.f_unit__DOT__match)));
    vlSelfRef.f_unit__DOT__allocate = ((7U & (IData)(vlSelfRef.f_unit__DOT__allocate)) 
                                       | (((((0U == (IData)(vlSelfRef.f_unit__DOT__empty_idx)) 
                                             & (1U 
                                                == (IData)(vlSelfRef.f_unit__DOT__cur_state))) 
                                            & (IData)(vlSelfRef.f_unit__DOT__req_done_keep)) 
                                           & (0U == (IData)(vlSelfRef.f_unit__DOT__next_state))) 
                                          << 3U));
    vlSelfRef.f_unit__DOT__allocate = ((0xbU & (IData)(vlSelfRef.f_unit__DOT__allocate)) 
                                       | (((((1U == (IData)(vlSelfRef.f_unit__DOT__empty_idx)) 
                                             & (1U 
                                                == (IData)(vlSelfRef.f_unit__DOT__cur_state))) 
                                            & (IData)(vlSelfRef.f_unit__DOT__req_done_keep)) 
                                           & (0U == (IData)(vlSelfRef.f_unit__DOT__next_state))) 
                                          << 2U));
    vlSelfRef.f_unit__DOT__allocate = ((0xdU & (IData)(vlSelfRef.f_unit__DOT__allocate)) 
                                       | (((((2U == (IData)(vlSelfRef.f_unit__DOT__empty_idx)) 
                                             & (1U 
                                                == (IData)(vlSelfRef.f_unit__DOT__cur_state))) 
                                            & (IData)(vlSelfRef.f_unit__DOT__req_done_keep)) 
                                           & (0U == (IData)(vlSelfRef.f_unit__DOT__next_state))) 
                                          << 1U));
    vlSelfRef.f_unit__DOT__allocate = ((0xeU & (IData)(vlSelfRef.f_unit__DOT__allocate)) 
                                       | ((((3U == (IData)(vlSelfRef.f_unit__DOT__empty_idx)) 
                                            & (1U == (IData)(vlSelfRef.f_unit__DOT__cur_state))) 
                                           & (IData)(vlSelfRef.f_unit__DOT__req_done_keep)) 
                                          & (0U == (IData)(vlSelfRef.f_unit__DOT__next_state))));
    f_unit__DOT____VdfgRegularize_hd6c16759_0_0 = (1U 
                                                   & (((IData)(vlSelfRef.f_unit__DOT__allocate) 
                                                       | (IData)(vlSelfRef.f_unit__DOT__hit)) 
                                                      >> 3U));
    f_unit__DOT____VdfgRegularize_hd6c16759_0_1 = (1U 
                                                   & (((IData)(vlSelfRef.f_unit__DOT__allocate) 
                                                       | (IData)(vlSelfRef.f_unit__DOT__hit)) 
                                                      >> 2U));
    f_unit__DOT____VdfgRegularize_hd6c16759_0_2 = (1U 
                                                   & (((IData)(vlSelfRef.f_unit__DOT__allocate) 
                                                       | (IData)(vlSelfRef.f_unit__DOT__hit)) 
                                                      >> 1U));
    f_unit__DOT____VdfgRegularize_hd6c16759_0_3 = (1U 
                                                   & ((IData)(vlSelfRef.f_unit__DOT__allocate) 
                                                      | (IData)(vlSelfRef.f_unit__DOT__hit)));
    vlSelfRef.f_unit__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__stream_counter__rst_n 
        = ((~ (IData)(f_unit__DOT____VdfgRegularize_hd6c16759_0_0)) 
           & (IData)(vlSelfRef.rst_n));
    vlSelfRef.f_unit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__stream_counter__rst_n 
        = ((~ (IData)(f_unit__DOT____VdfgRegularize_hd6c16759_0_1)) 
           & (IData)(vlSelfRef.rst_n));
    vlSelfRef.f_unit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__stream_counter__rst_n 
        = ((~ (IData)(f_unit__DOT____VdfgRegularize_hd6c16759_0_2)) 
           & (IData)(vlSelfRef.rst_n));
    vlSelfRef.f_unit__DOT__refresh = ((((IData)(f_unit__DOT____VdfgRegularize_hd6c16759_0_0) 
                                        << 3U) | ((IData)(f_unit__DOT____VdfgRegularize_hd6c16759_0_1) 
                                                  << 2U)) 
                                      | (((IData)(f_unit__DOT____VdfgRegularize_hd6c16759_0_2) 
                                          << 1U) | (IData)(f_unit__DOT____VdfgRegularize_hd6c16759_0_3)));
    vlSelfRef.f_unit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__stream_counter__rst_n 
        = ((~ (IData)(f_unit__DOT____VdfgRegularize_hd6c16759_0_3)) 
           & (IData)(vlSelfRef.rst_n));
    vlSelfRef.f_unit__DOT__genblk1__BRA__0__KET____DOT__stream_counter__DOT__rst_n 
        = vlSelfRef.f_unit__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__stream_counter__rst_n;
    vlSelfRef.f_unit__DOT__genblk1__BRA__1__KET____DOT__stream_counter__DOT__rst_n 
        = vlSelfRef.f_unit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__stream_counter__rst_n;
    vlSelfRef.f_unit__DOT__genblk1__BRA__2__KET____DOT__stream_counter__DOT__rst_n 
        = vlSelfRef.f_unit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__stream_counter__rst_n;
    vlSelfRef.f_unit__DOT__genblk1__BRA__3__KET____DOT__stream_counter__DOT__rst_n 
        = vlSelfRef.f_unit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__stream_counter__rst_n;
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__0(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sec_address_translator__DOT____Vcellinp__num_gen__valid 
        = ((IData)(vlSelfRef.reg_file__DOT__D_FF_secure__DOT__data) 
           & (IData)(vlSelfRef.load));
    vlSelfRef.sec_address_translator__DOT__num_gen__DOT__valid 
        = vlSelfRef.sec_address_translator__DOT____Vcellinp__num_gen__valid;
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__1(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.f_unit__DOT__w_prefetch_erase_done = 
        ((IData)(vlSelfRef.f_unit__DOT__erase_cam_counter__DOT__done) 
         & (IData)(vlSelfRef.f_unit__DOT__w_prefetch_erase_happend));
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__34(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__34\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.f_unit__DOT____Vcellinp__wr_mem_counter__rst_n 
        = ((~ (IData)(vlSelfRef.f_unit__DOT__w_prefetch_wr_cam_edge__DOT__signal_out)) 
           & (IData)(vlSelfRef.rst_n));
    vlSelfRef.f_unit__DOT____Vcellinp__rd_mem_counter__rst_n 
        = ((~ (IData)(vlSelfRef.f_unit__DOT__w_compare_rd_mem_edge__DOT__signal_out)) 
           & (IData)(vlSelfRef.rst_n));
    vlSelfRef.f_unit__DOT__match_addr = ((IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid)
                                          ? (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded)
                                          : (2U | (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded)));
    vlSelfRef.f_unit__DOT__match = ((IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid) 
                                    | (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid));
    vlSelfRef.f_unit__DOT__wr_mem_counter__DOT__rst_n 
        = vlSelfRef.f_unit__DOT____Vcellinp__wr_mem_counter__rst_n;
    vlSelfRef.f_unit__DOT__rd_mem_counter__DOT__rst_n 
        = vlSelfRef.f_unit__DOT____Vcellinp__rd_mem_counter__rst_n;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__match_addr 
        = vlSelfRef.f_unit__DOT__match_addr;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_addr 
        = vlSelfRef.f_unit__DOT__match_addr;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__output_encoded 
        = vlSelfRef.f_unit__DOT__match_addr;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__output_unencoded 
        = (0xfU & ((IData)(1U) << (IData)(vlSelfRef.f_unit__DOT__match_addr)));
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__match = vlSelfRef.f_unit__DOT__match;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match 
        = vlSelfRef.f_unit__DOT__match;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__output_valid 
        = vlSelfRef.f_unit__DOT__match;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__match_single 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__output_unencoded;
    vlSelfRef.f_unit__DOT__match_single = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__output_unencoded;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_single 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__output_unencoded;
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__2(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.f_unit__DOT__w_prefetch_wr_cam_done = 
        ((IData)(vlSelfRef.f_unit__DOT__w_prefetch_wr_cam_happend) 
         & (IData)(vlSelfRef.f_unit__DOT__wr_mem_counter__DOT__done));
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__35(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__35\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rd_controller__DOT__mem_read_data = vlSelfRef.read_data;
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__3(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.refill_word_data = (((0U == (0x1fU & 
                                           ((VL_SHIFTL_III(9,9,32, 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelfRef.refill_word_idx)), 5U) 
                                             - (IData)(1U)) 
                                            - (IData)(0x1fU))))
                                    ? 0U : (vlSelfRef.rd_controller__DOT__cache_read_data[
                                            (((IData)(0x1fU) 
                                              + (0x1ffU 
                                                 & ((VL_SHIFTL_III(9,9,32, 
                                                                   ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.refill_word_idx)), 5U) 
                                                     - (IData)(1U)) 
                                                    - (IData)(0x1fU)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((VL_SHIFTL_III(9,9,32, 
                                                                     ((IData)(1U) 
                                                                      + (IData)(vlSelfRef.refill_word_idx)), 5U) 
                                                       - (IData)(1U)) 
                                                      - (IData)(0x1fU)))))) 
                                  | (vlSelfRef.rd_controller__DOT__cache_read_data[
                                     (0xfU & (((VL_SHIFTL_III(9,9,32, 
                                                              ((IData)(1U) 
                                                               + (IData)(vlSelfRef.refill_word_idx)), 5U) 
                                                - (IData)(1U)) 
                                               - (IData)(0x1fU)) 
                                              >> 5U))] 
                                     >> (0x1fU & ((
                                                   VL_SHIFTL_III(9,9,32, 
                                                                 ((IData)(1U) 
                                                                  + (IData)(vlSelfRef.refill_word_idx)), 5U) 
                                                   - (IData)(1U)) 
                                                  - (IData)(0x1fU)))));
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__36(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__36\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rd_controller__DOT__counter_wire = (0xfU 
                                                  & (IData)(vlSelfRef.rd_controller__DOT__counter_offset_inst__DOT__counter));
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__4(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.f_unit__DOT__lifetime_p = (((0xc0U & 
                                           ((IData)(vlSelfRef.f_unit__DOT__genblk1__BRA__0__KET____DOT__stream_counter__DOT__counter) 
                                            << 6U)) 
                                          | (0x30U 
                                             & ((IData)(vlSelfRef.f_unit__DOT__genblk1__BRA__1__KET____DOT__stream_counter__DOT__counter) 
                                                << 4U))) 
                                         | ((0xcU & 
                                             ((IData)(vlSelfRef.f_unit__DOT__genblk1__BRA__2__KET____DOT__stream_counter__DOT__counter) 
                                              << 2U)) 
                                            | (3U & (IData)(vlSelfRef.f_unit__DOT__genblk1__BRA__3__KET____DOT__stream_counter__DOT__counter))));
    vlSelfRef.f_unit__DOT__lifetime = (0xffU & (~ (IData)(vlSelfRef.f_unit__DOT__lifetime_p)));
    vlSelfRef.f_unit__DOT__empty_tracker__DOT__sig_in 
        = vlSelfRef.f_unit__DOT__lifetime;
    vlSelfRef.f_unit__DOT__empty_tracker__DOT__sig_processed 
        = (0xfU & (~ (((((IData)((0U != (3U & (IData)(vlSelfRef.f_unit__DOT__lifetime)))) 
                         << 1U) | (0U != (3U & ((IData)(vlSelfRef.f_unit__DOT__lifetime) 
                                                >> 2U)))) 
                       << 2U) | (((IData)((0U != (3U 
                                                  & ((IData)(vlSelfRef.f_unit__DOT__lifetime) 
                                                     >> 4U)))) 
                                  << 1U) | (0U != (3U 
                                                   & ((IData)(vlSelfRef.f_unit__DOT__lifetime) 
                                                      >> 6U)))))));
    vlSelfRef.f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__input_unencoded 
        = vlSelfRef.f_unit__DOT__empty_tracker__DOT__sig_processed;
    vlSelfRef.f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst1__DOT__input_unencoded 
        = (3U & ((IData)(vlSelfRef.f_unit__DOT__empty_tracker__DOT__sig_processed) 
                 >> 0U));
    vlSelfRef.f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst2__DOT__input_unencoded 
        = (3U & ((IData)(vlSelfRef.f_unit__DOT__empty_tracker__DOT__sig_processed) 
                 >> 2U));
    vlSelfRef.f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid 
        = (0U != (3U & ((IData)(vlSelfRef.f_unit__DOT__empty_tracker__DOT__sig_processed) 
                        >> 2U)));
    vlSelfRef.f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded 
        = (1U & (~ (IData)(vlSelfRef.f_unit__DOT__empty_tracker__DOT__sig_processed)));
    vlSelfRef.f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded 
        = (1U & (~ ((IData)(vlSelfRef.f_unit__DOT__empty_tracker__DOT__sig_processed) 
                    >> 2U)));
    vlSelfRef.f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid 
        = (0U != (3U & (IData)(vlSelfRef.f_unit__DOT__empty_tracker__DOT__sig_processed)));
    vlSelfRef.f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__valid2 
        = vlSelfRef.f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid;
    vlSelfRef.f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__out1 
        = vlSelfRef.f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded;
    vlSelfRef.f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_unencoded 
        = (3U & ((IData)(1U) << (IData)(vlSelfRef.f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded)));
    vlSelfRef.f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__out2 
        = vlSelfRef.f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded;
    vlSelfRef.f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_unencoded 
        = (3U & ((IData)(1U) << (IData)(vlSelfRef.f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded)));
    vlSelfRef.f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__valid1 
        = vlSelfRef.f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid;
    vlSelfRef.f_unit__DOT__empty = ((IData)(vlSelfRef.f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid) 
                                    | (IData)(vlSelfRef.f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid));
    vlSelfRef.f_unit__DOT__empty_idx = ((IData)(vlSelfRef.f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid)
                                         ? (IData)(vlSelfRef.f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded)
                                         : (2U | (IData)(vlSelfRef.f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded)));
    vlSelfRef.f_unit__DOT__empty_tracker__DOT__sig_out 
        = vlSelfRef.f_unit__DOT__empty;
    vlSelfRef.f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__output_valid 
        = vlSelfRef.f_unit__DOT__empty;
    vlSelfRef.f_unit__DOT__empty_tracker__DOT__idx 
        = vlSelfRef.f_unit__DOT__empty_idx;
    vlSelfRef.f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__output_encoded 
        = vlSelfRef.f_unit__DOT__empty_idx;
    vlSelfRef.f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__output_unencoded 
        = (0xfU & ((IData)(1U) << (IData)(vlSelfRef.f_unit__DOT__empty_idx)));
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__38(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__38\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wr_controller__DOT__busy_clk_l = ((IData)(vlSelfRef.rst_n) 
                                                && (IData)(vlSelfRef.wr_controller__DOT__cur_state));
    vlSelfRef.wr_controller__DOT__counter_offset_inst__DOT__rst_n 
        = vlSelfRef.wr_controller__DOT__busy_clk_l;
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__5(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wr_controller__DOT____VdfgRegularize_h5cc42551_0_0 
        = ((IData)(vlSelfRef.wr_controller__DOT__counter_offset_inst__DOT__done) 
           | ((~ (IData)(vlSelfRef.wr_controller__DOT__write_all)) 
              & (1U == (IData)(vlSelfRef.wr_controller__DOT__counter_wire))));
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__6(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.f_unit__DOT__w_compare_rd_mem_done = 
        ((IData)(vlSelfRef.f_unit__DOT__rd_mem_counter__DOT__done) 
         & (IData)(vlSelfRef.f_unit__DOT__w_compare_rd_mem_happend));
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__7(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.c_fsm__DOT__mshr_fin_valid = 0U;
    vlSelfRef.c_fsm__DOT__mshr_fin_id = vlSelfRef.c_fsm__DOT__mshr_id_keep;
    if (vlSelfRef.c_fsm__DOT__cur_state) {
        if (vlSelfRef.c_fsm__DOT__cur_state) {
            if (vlSelfRef.fsm_accessed) {
                vlSelfRef.c_fsm__DOT__mshr_fin_valid = 1U;
                vlSelfRef.c_fsm__DOT__mshr_fin_id = vlSelfRef.c_fsm__DOT__mshr_id_keep;
            }
        }
    }
    vlSelfRef.mshr_fin_valid = vlSelfRef.c_fsm__DOT__mshr_fin_valid;
    vlSelfRef.mshr_fin_id = vlSelfRef.c_fsm__DOT__mshr_fin_id;
    vlSelfRef.mshr_inst__DOT__fin_valid = vlSelfRef.mshr_fin_valid;
    vlSelfRef.mshr_inst__DOT__fin_id = vlSelfRef.mshr_fin_id;
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__10(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rd_controller__DOT__counter_offset_inst__DOT__done_w 
        = ((0xfU == (IData)(vlSelfRef.rd_controller__DOT__counter_offset_inst__DOT__counter)) 
           & (IData)(vlSelfRef.read_ready));
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__11(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__11\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.f_unit__DOT__w_prefetch_wr_cam = (((IData)(vlSelfRef.f_unit__DOT__req_done_keep) 
                                                 | (IData)(vlSelfRef.rd_controller__DOT__cache_read_done)) 
                                                & (IData)(vlSelfRef.f_unit__DOT__w_prefetch_erase_done));
    if ((0U != (IData)(vlSelfRef.f_unit__DOT__cur_state))) {
        if ((1U == (IData)(vlSelfRef.f_unit__DOT__cur_state))) {
            if (vlSelfRef.f_unit__DOT__trans_done_keep) {
                if (vlSelfRef.f_unit__DOT__w_prefetch_rd_cam_happend) {
                    if ((1U & ((~ (IData)(vlSelfRef.f_unit__DOT__match)) 
                               | (IData)(vlSelfRef.f_unit__DOT__not_match_keep)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.req_done) 
                                      | (IData)(vlSelfRef.f_unit__DOT__req_done_keep))))) {
                            if ((1U & (~ (IData)(vlSelfRef.f_unit__DOT__w_prefetch_erase_done)))) {
                                vlSelfRef.f_unit__DOT__write_delete = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.f_unit__DOT__w_prefetch_wr_cam_edge__DOT__signal_in 
        = vlSelfRef.f_unit__DOT__w_prefetch_wr_cam;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_delete_next 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_delete_reg;
    if ((0U != (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
        if ((1U == (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
            vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_delete_next 
                = vlSelfRef.f_unit__DOT__write_delete;
        }
    }
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__write_delete 
        = vlSelfRef.f_unit__DOT__write_delete;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_delete 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__write_delete;
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__12(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__12\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rd_controller__DOT__cur_state) {
        if (vlSelfRef.rd_controller__DOT__cur_state) {
            vlSelfRef.rd_controller__DOT__mem_read_o_valid 
                = (1U & (~ (IData)(vlSelfRef.rd_controller__DOT__counter_done)));
            vlSelfRef.rd_controller__DOT__mem_read_o_addr 
                = (vlSelfRef.rd_controller__DOT__addr_i_reg 
                   + VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.rd_controller__DOT__counter_wire), 2U));
        }
    } else {
        vlSelfRef.rd_controller__DOT__mem_read_o_valid = 0U;
        vlSelfRef.rd_controller__DOT__mem_read_o_addr = 0U;
    }
    vlSelfRef.rd_controller__DOT__mem_read_valid = 
        ((~ (IData)(vlSelfRef.rd_controller__DOT__counter_offset_inst__DOT__done)) 
         & (IData)(vlSelfRef.rd_controller__DOT__mem_read_o_valid));
    vlSelfRef.rd_controller__DOT__mem_read_addr = ((IData)(vlSelfRef.rd_controller__DOT__counter_offset_inst__DOT__done)
                                                    ? 0U
                                                    : vlSelfRef.rd_controller__DOT__mem_read_o_addr);
    vlSelfRef.read_valid = vlSelfRef.rd_controller__DOT__mem_read_valid;
    vlSelfRef.read_addr = vlSelfRef.rd_controller__DOT__mem_read_addr;
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__13(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__13\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.f_unit__DOT__write_enable = 0U;
    vlSelfRef.f_unit__DOT__write_data = 0U;
    vlSelfRef.f_unit__DOT__write_data = 0U;
    if ((0U != (IData)(vlSelfRef.f_unit__DOT__cur_state))) {
        if ((1U == (IData)(vlSelfRef.f_unit__DOT__cur_state))) {
            if (vlSelfRef.f_unit__DOT__trans_done_keep) {
                if (vlSelfRef.f_unit__DOT__w_prefetch_rd_cam_happend) {
                    if ((1U & ((~ (IData)(vlSelfRef.f_unit__DOT__match)) 
                               | (IData)(vlSelfRef.f_unit__DOT__not_match_keep)))) {
                        if (((IData)(vlSelfRef.req_done) 
                             | (IData)(vlSelfRef.f_unit__DOT__req_done_keep))) {
                            if ((1U & (~ (IData)(vlSelfRef.f_unit__DOT__w_prefetch_wr_cam_done)))) {
                                vlSelfRef.f_unit__DOT__write_enable = 1U;
                                vlSelfRef.f_unit__DOT__write_data 
                                    = (vlSelfRef.trans_in_addr 
                                       >> 6U);
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__write_enable 
        = vlSelfRef.f_unit__DOT__write_enable;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_next = 1U;
    if ((0U == (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
        vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_next 
            = ((0U == vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__count_reg)
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
        vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_next 
            = ((IData)(vlSelfRef.f_unit__DOT__write_enable)
                ? 2U : 1U);
    } else if ((2U == (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
        vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_next = 3U;
    } else if ((3U == (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
        vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_next 
            = ((IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_delete_reg)
                ? 1U : 4U);
    } else if ((4U == (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
        vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_next = 5U;
    } else if ((5U == (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
        vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_next = 1U;
    }
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__write_data 
        = vlSelfRef.f_unit__DOT__write_data;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_data_padded 
        = vlSelfRef.f_unit__DOT__write_data;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_enable 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__write_enable;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_data 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__write_data;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_data_padded_next 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_data_padded_reg;
    if ((0U != (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
        if ((1U == (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
            vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_data_padded_next 
                = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_data_padded;
        }
    }
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__14(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__14\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ f_unit__DOT____VdfgRegularize_hd6c16759_2_0;
    f_unit__DOT____VdfgRegularize_hd6c16759_2_0 = 0;
    CData/*0:0*/ f_unit__DOT____VdfgRegularize_hd6c16759_2_1;
    f_unit__DOT____VdfgRegularize_hd6c16759_2_1 = 0;
    CData/*0:0*/ f_unit__DOT____VdfgRegularize_hd6c16759_2_2;
    f_unit__DOT____VdfgRegularize_hd6c16759_2_2 = 0;
    CData/*0:0*/ f_unit__DOT____VdfgRegularize_hd6c16759_2_3;
    f_unit__DOT____VdfgRegularize_hd6c16759_2_3 = 0;
    // Body
    f_unit__DOT____VdfgRegularize_hd6c16759_2_0 = ((IData)(vlSelfRef.f_unit__DOT__new_req) 
                                                   & (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.f_unit__DOT__lifetime) 
                                                          >> 6U))));
    f_unit__DOT____VdfgRegularize_hd6c16759_2_1 = ((IData)(vlSelfRef.f_unit__DOT__new_req) 
                                                   & (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.f_unit__DOT__lifetime) 
                                                          >> 4U))));
    f_unit__DOT____VdfgRegularize_hd6c16759_2_2 = ((IData)(vlSelfRef.f_unit__DOT__new_req) 
                                                   & (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.f_unit__DOT__lifetime) 
                                                          >> 2U))));
    f_unit__DOT____VdfgRegularize_hd6c16759_2_3 = ((IData)(vlSelfRef.f_unit__DOT__new_req) 
                                                   & (0U 
                                                      != 
                                                      (3U 
                                                       & (IData)(vlSelfRef.f_unit__DOT__lifetime))));
    vlSelfRef.f_unit__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__stream_counter__start 
        = ((IData)(f_unit__DOT____VdfgRegularize_hd6c16759_2_0) 
           & (IData)(vlSelfRef.reg_file__DOT__D_FF_pf__DOT__data));
    vlSelfRef.f_unit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__stream_counter__start 
        = ((IData)(f_unit__DOT____VdfgRegularize_hd6c16759_2_1) 
           & (IData)(vlSelfRef.reg_file__DOT__D_FF_pf__DOT__data));
    vlSelfRef.f_unit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__stream_counter__start 
        = ((IData)(f_unit__DOT____VdfgRegularize_hd6c16759_2_2) 
           & (IData)(vlSelfRef.reg_file__DOT__D_FF_pf__DOT__data));
    vlSelfRef.f_unit__DOT__start = ((((IData)(f_unit__DOT____VdfgRegularize_hd6c16759_2_0) 
                                      << 3U) | ((IData)(f_unit__DOT____VdfgRegularize_hd6c16759_2_1) 
                                                << 2U)) 
                                    | (((IData)(f_unit__DOT____VdfgRegularize_hd6c16759_2_2) 
                                        << 1U) | (IData)(f_unit__DOT____VdfgRegularize_hd6c16759_2_3)));
    vlSelfRef.f_unit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__stream_counter__start 
        = ((IData)(f_unit__DOT____VdfgRegularize_hd6c16759_2_3) 
           & (IData)(vlSelfRef.reg_file__DOT__D_FF_pf__DOT__data));
    vlSelfRef.f_unit__DOT__genblk1__BRA__0__KET____DOT__stream_counter__DOT__start 
        = vlSelfRef.f_unit__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__stream_counter__start;
    vlSelfRef.f_unit__DOT__genblk1__BRA__0__KET____DOT__stream_counter__DOT__done_w 
        = ((3U == (IData)(vlSelfRef.f_unit__DOT__genblk1__BRA__0__KET____DOT__stream_counter__DOT__counter)) 
           & (IData)(vlSelfRef.f_unit__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__stream_counter__start));
    vlSelfRef.f_unit__DOT__genblk1__BRA__1__KET____DOT__stream_counter__DOT__start 
        = vlSelfRef.f_unit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__stream_counter__start;
    vlSelfRef.f_unit__DOT__genblk1__BRA__1__KET____DOT__stream_counter__DOT__done_w 
        = ((3U == (IData)(vlSelfRef.f_unit__DOT__genblk1__BRA__1__KET____DOT__stream_counter__DOT__counter)) 
           & (IData)(vlSelfRef.f_unit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__stream_counter__start));
    vlSelfRef.f_unit__DOT__genblk1__BRA__2__KET____DOT__stream_counter__DOT__start 
        = vlSelfRef.f_unit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__stream_counter__start;
    vlSelfRef.f_unit__DOT__genblk1__BRA__2__KET____DOT__stream_counter__DOT__done_w 
        = ((3U == (IData)(vlSelfRef.f_unit__DOT__genblk1__BRA__2__KET____DOT__stream_counter__DOT__counter)) 
           & (IData)(vlSelfRef.f_unit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__stream_counter__start));
    vlSelfRef.f_unit__DOT__genblk1__BRA__3__KET____DOT__stream_counter__DOT__start 
        = vlSelfRef.f_unit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__stream_counter__start;
    vlSelfRef.f_unit__DOT__genblk1__BRA__3__KET____DOT__stream_counter__DOT__done_w 
        = ((3U == (IData)(vlSelfRef.f_unit__DOT__genblk1__BRA__3__KET____DOT__stream_counter__DOT__counter)) 
           & (IData)(vlSelfRef.f_unit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__stream_counter__start));
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__15(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__15\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.f_unit__DOT__write_addr = 0U;
    if ((0U != (IData)(vlSelfRef.f_unit__DOT__cur_state))) {
        if ((1U == (IData)(vlSelfRef.f_unit__DOT__cur_state))) {
            if (vlSelfRef.f_unit__DOT__trans_done_keep) {
                if (vlSelfRef.f_unit__DOT__w_prefetch_rd_cam_happend) {
                    if ((1U & ((~ (IData)(vlSelfRef.f_unit__DOT__match)) 
                               | (IData)(vlSelfRef.f_unit__DOT__not_match_keep)))) {
                        if (((IData)(vlSelfRef.req_done) 
                             | (IData)(vlSelfRef.f_unit__DOT__req_done_keep))) {
                            if ((1U & (~ (IData)(vlSelfRef.f_unit__DOT__w_prefetch_wr_cam_done)))) {
                                vlSelfRef.f_unit__DOT__write_addr 
                                    = vlSelfRef.f_unit__DOT__empty_idx;
                            }
                        } else if ((1U & (~ (IData)(vlSelfRef.f_unit__DOT__w_prefetch_erase_done)))) {
                            vlSelfRef.f_unit__DOT__write_addr 
                                = vlSelfRef.f_unit__DOT__empty_idx;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_addr_next 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_addr_reg;
    if ((0U != (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
        if ((1U == (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
            vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_addr_next 
                = vlSelfRef.f_unit__DOT__write_addr;
        }
    }
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__write_addr 
        = vlSelfRef.f_unit__DOT__write_addr;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__clear_bit = 0U;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__set_bit = 0U;
    if ((0U == (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
        vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__clear_bit = 0xfU;
        vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__set_bit = 0U;
    } else if ((1U != (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
        if ((2U != (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
            if ((3U == (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
                vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__clear_bit 
                    = (0xfU & ((IData)(1U) << (IData)(vlSelfRef.f_unit__DOT__write_addr)));
            }
            if ((3U != (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
                if ((4U != (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
                    if ((5U == (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
                        vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__set_bit 
                            = (0xfU & ((IData)(1U) 
                                       << (IData)(vlSelfRef.f_unit__DOT__write_addr)));
                    }
                }
            }
        }
    }
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_addr 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__write_addr;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__b_din 
        = (((~ (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__clear_bit)) 
            & (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__b_dout_reg)) 
           | (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__set_bit));
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__39(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__39\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wr_controller__DOT__cur_state = ((IData)(vlSelfRef.rst_n)
                                                ? (1U 
                                                   & (IData)(vlSelfRef.wr_controller__DOT__next_state))
                                                : 0U);
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__16(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__16\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wr_controller__DOT__counter_step = ((IData)(vlSelfRef.wr_controller__DOT__write_all)
                                                   ? (IData)(vlSelfRef.wr_controller__DOT__busy_clk_l)
                                                   : (IData)(vlSelfRef.write_ready));
    vlSelfRef.wr_controller__DOT__counter_offset_inst__DOT__start 
        = vlSelfRef.wr_controller__DOT__counter_step;
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__17(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__17\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U != (IData)(vlSelfRef.f_unit__DOT__cur_state))) {
        if ((1U != (IData)(vlSelfRef.f_unit__DOT__cur_state))) {
            if ((2U == (IData)(vlSelfRef.f_unit__DOT__cur_state))) {
                if (((IData)(vlSelfRef.f_unit__DOT__w_compare_rd_cam_done) 
                     & ((IData)(vlSelfRef.fsm_accessed) 
                        | (IData)(vlSelfRef.f_unit__DOT__cache_access_keep)))) {
                    if (((IData)(vlSelfRef.f_unit__DOT__write_keep) 
                         & (IData)(vlSelfRef.f_unit__DOT__match))) {
                        if (vlSelfRef.f_unit__DOT__w_compare_rd_mem_done) {
                            vlSelfRef.f_unit__DOT__unnamedblk1__DOT__j = 1U;
                            vlSelfRef.f_unit__DOT__unnamedblk1__DOT__j = 2U;
                            vlSelfRef.f_unit__DOT__unnamedblk1__DOT__j = 3U;
                            vlSelfRef.f_unit__DOT__unnamedblk1__DOT__j = 4U;
                            vlSelfRef.f_unit__DOT__unnamedblk1__DOT__j = 5U;
                            vlSelfRef.f_unit__DOT__unnamedblk1__DOT__j = 6U;
                            vlSelfRef.f_unit__DOT__unnamedblk1__DOT__j = 7U;
                            vlSelfRef.f_unit__DOT__unnamedblk1__DOT__j = 8U;
                            vlSelfRef.f_unit__DOT__unnamedblk1__DOT__j = 9U;
                            vlSelfRef.f_unit__DOT__unnamedblk1__DOT__j = 0xaU;
                            vlSelfRef.f_unit__DOT__unnamedblk1__DOT__j = 0xbU;
                            vlSelfRef.f_unit__DOT__unnamedblk1__DOT__j = 0xcU;
                            vlSelfRef.f_unit__DOT__unnamedblk1__DOT__j = 0xdU;
                            vlSelfRef.f_unit__DOT__unnamedblk1__DOT__j = 0xeU;
                            vlSelfRef.f_unit__DOT__unnamedblk1__DOT__j = 0xfU;
                            vlSelfRef.f_unit__DOT__unnamedblk1__DOT__j = 0x10U;
                        }
                    }
                }
            }
        }
    }
}

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h93e1b771_0;

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__18(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__18\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.f_unit__DOT__wren = 0U;
    vlSelfRef.f_unit__DOT__mem_in_data[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.f_unit__DOT__mem_in_data[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.f_unit__DOT__mem_in_data[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.f_unit__DOT__mem_in_data[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.f_unit__DOT__mem_in_data[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.f_unit__DOT__mem_in_data[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.f_unit__DOT__mem_in_data[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.f_unit__DOT__mem_in_data[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.f_unit__DOT__mem_in_data[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.f_unit__DOT__mem_in_data[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.f_unit__DOT__mem_in_data[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
    vlSelfRef.f_unit__DOT__mem_in_data[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
    vlSelfRef.f_unit__DOT__mem_in_data[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
    vlSelfRef.f_unit__DOT__mem_in_data[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
    vlSelfRef.f_unit__DOT__mem_in_data[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
    vlSelfRef.f_unit__DOT__mem_in_data[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
    if ((0U != (IData)(vlSelfRef.f_unit__DOT__cur_state))) {
        if ((1U == (IData)(vlSelfRef.f_unit__DOT__cur_state))) {
            if (vlSelfRef.f_unit__DOT__trans_done_keep) {
                if (vlSelfRef.f_unit__DOT__w_prefetch_rd_cam_happend) {
                    if ((1U & ((~ (IData)(vlSelfRef.f_unit__DOT__match)) 
                               | (IData)(vlSelfRef.f_unit__DOT__not_match_keep)))) {
                        if (((IData)(vlSelfRef.req_done) 
                             | (IData)(vlSelfRef.f_unit__DOT__req_done_keep))) {
                            if (vlSelfRef.f_unit__DOT__w_prefetch_wr_cam_done) {
                                vlSelfRef.f_unit__DOT__wren = 1U;
                                vlSelfRef.f_unit__DOT__mem_in_data[0U] 
                                    = vlSelfRef.f_unit__DOT__buffer_data[0U];
                                vlSelfRef.f_unit__DOT__mem_in_data[1U] 
                                    = vlSelfRef.f_unit__DOT__buffer_data[1U];
                                vlSelfRef.f_unit__DOT__mem_in_data[2U] 
                                    = vlSelfRef.f_unit__DOT__buffer_data[2U];
                                vlSelfRef.f_unit__DOT__mem_in_data[3U] 
                                    = vlSelfRef.f_unit__DOT__buffer_data[3U];
                                vlSelfRef.f_unit__DOT__mem_in_data[4U] 
                                    = vlSelfRef.f_unit__DOT__buffer_data[4U];
                                vlSelfRef.f_unit__DOT__mem_in_data[5U] 
                                    = vlSelfRef.f_unit__DOT__buffer_data[5U];
                                vlSelfRef.f_unit__DOT__mem_in_data[6U] 
                                    = vlSelfRef.f_unit__DOT__buffer_data[6U];
                                vlSelfRef.f_unit__DOT__mem_in_data[7U] 
                                    = vlSelfRef.f_unit__DOT__buffer_data[7U];
                                vlSelfRef.f_unit__DOT__mem_in_data[8U] 
                                    = vlSelfRef.f_unit__DOT__buffer_data[8U];
                                vlSelfRef.f_unit__DOT__mem_in_data[9U] 
                                    = vlSelfRef.f_unit__DOT__buffer_data[9U];
                                vlSelfRef.f_unit__DOT__mem_in_data[0xaU] 
                                    = vlSelfRef.f_unit__DOT__buffer_data[0xaU];
                                vlSelfRef.f_unit__DOT__mem_in_data[0xbU] 
                                    = vlSelfRef.f_unit__DOT__buffer_data[0xbU];
                                vlSelfRef.f_unit__DOT__mem_in_data[0xcU] 
                                    = vlSelfRef.f_unit__DOT__buffer_data[0xcU];
                                vlSelfRef.f_unit__DOT__mem_in_data[0xdU] 
                                    = vlSelfRef.f_unit__DOT__buffer_data[0xdU];
                                vlSelfRef.f_unit__DOT__mem_in_data[0xeU] 
                                    = vlSelfRef.f_unit__DOT__buffer_data[0xeU];
                                vlSelfRef.f_unit__DOT__mem_in_data[0xfU] 
                                    = vlSelfRef.f_unit__DOT__buffer_data[0xfU];
                            }
                        }
                    }
                }
            }
        } else if ((2U == (IData)(vlSelfRef.f_unit__DOT__cur_state))) {
            if (((IData)(vlSelfRef.f_unit__DOT__w_compare_rd_cam_done) 
                 & ((IData)(vlSelfRef.fsm_accessed) 
                    | (IData)(vlSelfRef.f_unit__DOT__cache_access_keep)))) {
                if (((IData)(vlSelfRef.f_unit__DOT__write_keep) 
                     & (IData)(vlSelfRef.f_unit__DOT__match))) {
                    if (vlSelfRef.f_unit__DOT__w_compare_rd_mem_done) {
                        vlSelfRef.f_unit__DOT__wren = 1U;
                        vlSelfRef.f_unit__DOT__mem_in_data[0U] 
                            = ((0U == (0xfU & (vlSelfRef.f_unit__DOT__prev_addr 
                                               >> 2U)))
                                ? vlSelfRef.f_unit__DOT__in_data_keep
                                : vlSelfRef.f_unit__DOT__mem_out_data[0U]);
                        vlSelfRef.f_unit__DOT__mem_in_data[1U] 
                            = ((1U == (0xfU & (vlSelfRef.f_unit__DOT__prev_addr 
                                               >> 2U)))
                                ? vlSelfRef.f_unit__DOT__in_data_keep
                                : vlSelfRef.f_unit__DOT__mem_out_data[1U]);
                        vlSelfRef.f_unit__DOT__mem_in_data[2U] 
                            = ((2U == (0xfU & (vlSelfRef.f_unit__DOT__prev_addr 
                                               >> 2U)))
                                ? vlSelfRef.f_unit__DOT__in_data_keep
                                : vlSelfRef.f_unit__DOT__mem_out_data[2U]);
                        vlSelfRef.f_unit__DOT__mem_in_data[3U] 
                            = ((3U == (0xfU & (vlSelfRef.f_unit__DOT__prev_addr 
                                               >> 2U)))
                                ? vlSelfRef.f_unit__DOT__in_data_keep
                                : vlSelfRef.f_unit__DOT__mem_out_data[3U]);
                        vlSelfRef.f_unit__DOT__mem_in_data[4U] 
                            = ((4U == (0xfU & (vlSelfRef.f_unit__DOT__prev_addr 
                                               >> 2U)))
                                ? vlSelfRef.f_unit__DOT__in_data_keep
                                : vlSelfRef.f_unit__DOT__mem_out_data[4U]);
                        vlSelfRef.f_unit__DOT__mem_in_data[5U] 
                            = ((5U == (0xfU & (vlSelfRef.f_unit__DOT__prev_addr 
                                               >> 2U)))
                                ? vlSelfRef.f_unit__DOT__in_data_keep
                                : vlSelfRef.f_unit__DOT__mem_out_data[5U]);
                        vlSelfRef.f_unit__DOT__mem_in_data[6U] 
                            = ((6U == (0xfU & (vlSelfRef.f_unit__DOT__prev_addr 
                                               >> 2U)))
                                ? vlSelfRef.f_unit__DOT__in_data_keep
                                : vlSelfRef.f_unit__DOT__mem_out_data[6U]);
                        vlSelfRef.f_unit__DOT__mem_in_data[7U] 
                            = ((7U == (0xfU & (vlSelfRef.f_unit__DOT__prev_addr 
                                               >> 2U)))
                                ? vlSelfRef.f_unit__DOT__in_data_keep
                                : vlSelfRef.f_unit__DOT__mem_out_data[7U]);
                        vlSelfRef.f_unit__DOT__mem_in_data[8U] 
                            = ((8U == (0xfU & (vlSelfRef.f_unit__DOT__prev_addr 
                                               >> 2U)))
                                ? vlSelfRef.f_unit__DOT__in_data_keep
                                : vlSelfRef.f_unit__DOT__mem_out_data[8U]);
                        vlSelfRef.f_unit__DOT__mem_in_data[9U] 
                            = ((9U == (0xfU & (vlSelfRef.f_unit__DOT__prev_addr 
                                               >> 2U)))
                                ? vlSelfRef.f_unit__DOT__in_data_keep
                                : vlSelfRef.f_unit__DOT__mem_out_data[9U]);
                        vlSelfRef.f_unit__DOT__mem_in_data[0xaU] 
                            = ((0xaU == (0xfU & (vlSelfRef.f_unit__DOT__prev_addr 
                                                 >> 2U)))
                                ? vlSelfRef.f_unit__DOT__in_data_keep
                                : vlSelfRef.f_unit__DOT__mem_out_data[0xaU]);
                        vlSelfRef.f_unit__DOT__mem_in_data[0xbU] 
                            = ((0xbU == (0xfU & (vlSelfRef.f_unit__DOT__prev_addr 
                                                 >> 2U)))
                                ? vlSelfRef.f_unit__DOT__in_data_keep
                                : vlSelfRef.f_unit__DOT__mem_out_data[0xbU]);
                        vlSelfRef.f_unit__DOT__mem_in_data[0xcU] 
                            = ((0xcU == (0xfU & (vlSelfRef.f_unit__DOT__prev_addr 
                                                 >> 2U)))
                                ? vlSelfRef.f_unit__DOT__in_data_keep
                                : vlSelfRef.f_unit__DOT__mem_out_data[0xcU]);
                        vlSelfRef.f_unit__DOT__mem_in_data[0xdU] 
                            = ((0xdU == (0xfU & (vlSelfRef.f_unit__DOT__prev_addr 
                                                 >> 2U)))
                                ? vlSelfRef.f_unit__DOT__in_data_keep
                                : vlSelfRef.f_unit__DOT__mem_out_data[0xdU]);
                        vlSelfRef.f_unit__DOT__mem_in_data[0xeU] 
                            = ((0xeU == (0xfU & (vlSelfRef.f_unit__DOT__prev_addr 
                                                 >> 2U)))
                                ? vlSelfRef.f_unit__DOT__in_data_keep
                                : vlSelfRef.f_unit__DOT__mem_out_data[0xeU]);
                        vlSelfRef.f_unit__DOT__mem_in_data[0xfU] 
                            = ((0xfU == (0xfU & (vlSelfRef.f_unit__DOT__prev_addr 
                                                 >> 2U)))
                                ? vlSelfRef.f_unit__DOT__in_data_keep
                                : vlSelfRef.f_unit__DOT__mem_out_data[0xfU]);
                    }
                }
            }
        }
    }
    vlSelfRef.f_unit__DOT__data_buffer__DOT__wren = (QData)((IData)(vlSelfRef.f_unit__DOT__wren));
    vlSelfRef.f_unit__DOT__data_buffer__DOT__in_data[0U] 
        = vlSelfRef.f_unit__DOT__mem_in_data[0U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__in_data[1U] 
        = vlSelfRef.f_unit__DOT__mem_in_data[1U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__in_data[2U] 
        = vlSelfRef.f_unit__DOT__mem_in_data[2U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__in_data[3U] 
        = vlSelfRef.f_unit__DOT__mem_in_data[3U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__in_data[4U] 
        = vlSelfRef.f_unit__DOT__mem_in_data[4U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__in_data[5U] 
        = vlSelfRef.f_unit__DOT__mem_in_data[5U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__in_data[6U] 
        = vlSelfRef.f_unit__DOT__mem_in_data[6U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__in_data[7U] 
        = vlSelfRef.f_unit__DOT__mem_in_data[7U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__in_data[8U] 
        = vlSelfRef.f_unit__DOT__mem_in_data[8U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__in_data[9U] 
        = vlSelfRef.f_unit__DOT__mem_in_data[9U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__in_data[0xaU] 
        = vlSelfRef.f_unit__DOT__mem_in_data[0xaU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__in_data[0xbU] 
        = vlSelfRef.f_unit__DOT__mem_in_data[0xbU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__in_data[0xcU] 
        = vlSelfRef.f_unit__DOT__mem_in_data[0xcU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__in_data[0xdU] 
        = vlSelfRef.f_unit__DOT__mem_in_data[0xdU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__in_data[0xeU] 
        = vlSelfRef.f_unit__DOT__mem_in_data[0xeU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__in_data[0xfU] 
        = vlSelfRef.f_unit__DOT__mem_in_data[0xfU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__wea 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__wren;
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina[0U] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__in_data[0U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina[1U] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__in_data[1U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina[2U] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__in_data[2U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina[3U] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__in_data[3U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina[4U] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__in_data[4U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina[5U] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__in_data[5U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina[6U] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__in_data[6U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina[7U] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__in_data[7U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina[8U] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__in_data[8U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina[9U] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__in_data[9U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina[0xaU] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__in_data[0xaU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina[0xbU] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__in_data[0xbU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina[0xcU] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__in_data[0xcU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina[0xdU] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__in_data[0xdU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina[0xeU] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__in_data[0xeU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina[0xfU] 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__in_data[0xfU];
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__20(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__20\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.f_unit__DOT__en = 0U;
    if ((0U != (IData)(vlSelfRef.f_unit__DOT__cur_state))) {
        if ((1U == (IData)(vlSelfRef.f_unit__DOT__cur_state))) {
            if (vlSelfRef.f_unit__DOT__trans_done_keep) {
                if (vlSelfRef.f_unit__DOT__w_prefetch_rd_cam_happend) {
                    if ((1U & ((~ (IData)(vlSelfRef.f_unit__DOT__match)) 
                               | (IData)(vlSelfRef.f_unit__DOT__not_match_keep)))) {
                        if (((IData)(vlSelfRef.req_done) 
                             | (IData)(vlSelfRef.f_unit__DOT__req_done_keep))) {
                            if (vlSelfRef.f_unit__DOT__w_prefetch_wr_cam_done) {
                                vlSelfRef.f_unit__DOT__en = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((2U == (IData)(vlSelfRef.f_unit__DOT__cur_state))) {
            if (((IData)(vlSelfRef.f_unit__DOT__w_compare_rd_cam_done) 
                 & ((IData)(vlSelfRef.fsm_accessed) 
                    | (IData)(vlSelfRef.f_unit__DOT__cache_access_keep)))) {
                if (((IData)(vlSelfRef.f_unit__DOT__write_keep) 
                     & (IData)(vlSelfRef.f_unit__DOT__match))) {
                    vlSelfRef.f_unit__DOT__en = 1U;
                } else if ((1U & (~ (IData)(vlSelfRef.fsm_hit)))) {
                    if (vlSelfRef.f_unit__DOT__match) {
                        vlSelfRef.f_unit__DOT__en = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.f_unit__DOT__data_buffer__DOT__en = vlSelfRef.f_unit__DOT__en;
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ena 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__en;
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__21(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__21\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.f_unit__DOT__mem_addr = 0U;
    if ((0U != (IData)(vlSelfRef.f_unit__DOT__cur_state))) {
        if ((1U == (IData)(vlSelfRef.f_unit__DOT__cur_state))) {
            if (vlSelfRef.f_unit__DOT__trans_done_keep) {
                if (vlSelfRef.f_unit__DOT__w_prefetch_rd_cam_happend) {
                    if ((1U & ((~ (IData)(vlSelfRef.f_unit__DOT__match)) 
                               | (IData)(vlSelfRef.f_unit__DOT__not_match_keep)))) {
                        if (((IData)(vlSelfRef.req_done) 
                             | (IData)(vlSelfRef.f_unit__DOT__req_done_keep))) {
                            if (vlSelfRef.f_unit__DOT__w_prefetch_wr_cam_done) {
                                vlSelfRef.f_unit__DOT__mem_addr 
                                    = vlSelfRef.f_unit__DOT__empty_idx;
                            }
                        }
                    }
                }
            }
        } else if ((2U == (IData)(vlSelfRef.f_unit__DOT__cur_state))) {
            if (((IData)(vlSelfRef.f_unit__DOT__w_compare_rd_cam_done) 
                 & ((IData)(vlSelfRef.fsm_accessed) 
                    | (IData)(vlSelfRef.f_unit__DOT__cache_access_keep)))) {
                if (((IData)(vlSelfRef.f_unit__DOT__write_keep) 
                     & (IData)(vlSelfRef.f_unit__DOT__match))) {
                    vlSelfRef.f_unit__DOT__mem_addr 
                        = vlSelfRef.f_unit__DOT__match_addr;
                } else if ((1U & (~ (IData)(vlSelfRef.fsm_hit)))) {
                    if (vlSelfRef.f_unit__DOT__match) {
                        vlSelfRef.f_unit__DOT__mem_addr 
                            = vlSelfRef.f_unit__DOT__match_addr;
                    }
                }
            }
        }
    }
    vlSelfRef.f_unit__DOT__data_buffer__DOT__in_addr 
        = vlSelfRef.f_unit__DOT__mem_addr;
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__addra 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__in_addr;
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__24(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__24\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.f_unit__DOT__out_data[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.f_unit__DOT__out_data[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.f_unit__DOT__out_data[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.f_unit__DOT__out_data[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.f_unit__DOT__out_data[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.f_unit__DOT__out_data[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.f_unit__DOT__out_data[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.f_unit__DOT__out_data[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.f_unit__DOT__out_data[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.f_unit__DOT__out_data[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.f_unit__DOT__out_data[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
    vlSelfRef.f_unit__DOT__out_data[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
    vlSelfRef.f_unit__DOT__out_data[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
    vlSelfRef.f_unit__DOT__out_data[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
    vlSelfRef.f_unit__DOT__out_data[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
    vlSelfRef.f_unit__DOT__out_data[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
    if ((0U != (IData)(vlSelfRef.f_unit__DOT__cur_state))) {
        if ((1U != (IData)(vlSelfRef.f_unit__DOT__cur_state))) {
            if ((2U == (IData)(vlSelfRef.f_unit__DOT__cur_state))) {
                if (((IData)(vlSelfRef.f_unit__DOT__w_compare_rd_cam_done) 
                     & ((IData)(vlSelfRef.fsm_accessed) 
                        | (IData)(vlSelfRef.f_unit__DOT__cache_access_keep)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.f_unit__DOT__write_keep) 
                                  & (IData)(vlSelfRef.f_unit__DOT__match))))) {
                        if ((1U & (~ (IData)(vlSelfRef.fsm_hit)))) {
                            if (vlSelfRef.f_unit__DOT__match) {
                                if (vlSelfRef.f_unit__DOT__w_compare_rd_mem_done) {
                                    vlSelfRef.f_unit__DOT__out_data[0U] 
                                        = vlSelfRef.f_unit__DOT__mem_out_data[0U];
                                    vlSelfRef.f_unit__DOT__out_data[1U] 
                                        = vlSelfRef.f_unit__DOT__mem_out_data[1U];
                                    vlSelfRef.f_unit__DOT__out_data[2U] 
                                        = vlSelfRef.f_unit__DOT__mem_out_data[2U];
                                    vlSelfRef.f_unit__DOT__out_data[3U] 
                                        = vlSelfRef.f_unit__DOT__mem_out_data[3U];
                                    vlSelfRef.f_unit__DOT__out_data[4U] 
                                        = vlSelfRef.f_unit__DOT__mem_out_data[4U];
                                    vlSelfRef.f_unit__DOT__out_data[5U] 
                                        = vlSelfRef.f_unit__DOT__mem_out_data[5U];
                                    vlSelfRef.f_unit__DOT__out_data[6U] 
                                        = vlSelfRef.f_unit__DOT__mem_out_data[6U];
                                    vlSelfRef.f_unit__DOT__out_data[7U] 
                                        = vlSelfRef.f_unit__DOT__mem_out_data[7U];
                                    vlSelfRef.f_unit__DOT__out_data[8U] 
                                        = vlSelfRef.f_unit__DOT__mem_out_data[8U];
                                    vlSelfRef.f_unit__DOT__out_data[9U] 
                                        = vlSelfRef.f_unit__DOT__mem_out_data[9U];
                                    vlSelfRef.f_unit__DOT__out_data[0xaU] 
                                        = vlSelfRef.f_unit__DOT__mem_out_data[0xaU];
                                    vlSelfRef.f_unit__DOT__out_data[0xbU] 
                                        = vlSelfRef.f_unit__DOT__mem_out_data[0xbU];
                                    vlSelfRef.f_unit__DOT__out_data[0xcU] 
                                        = vlSelfRef.f_unit__DOT__mem_out_data[0xcU];
                                    vlSelfRef.f_unit__DOT__out_data[0xdU] 
                                        = vlSelfRef.f_unit__DOT__mem_out_data[0xdU];
                                    vlSelfRef.f_unit__DOT__out_data[0xeU] 
                                        = vlSelfRef.f_unit__DOT__mem_out_data[0xeU];
                                    vlSelfRef.f_unit__DOT__out_data[0xfU] 
                                        = vlSelfRef.f_unit__DOT__mem_out_data[0xfU];
                                }
                            }
                        }
                    }
                }
            } else if ((3U == (IData)(vlSelfRef.f_unit__DOT__cur_state))) {
                if (((IData)(vlSelfRef.req_done) | (IData)(vlSelfRef.f_unit__DOT__req_done_keep))) {
                    vlSelfRef.f_unit__DOT__out_data[0U] 
                        = vlSelfRef.req_data[0U];
                    vlSelfRef.f_unit__DOT__out_data[1U] 
                        = vlSelfRef.req_data[1U];
                    vlSelfRef.f_unit__DOT__out_data[2U] 
                        = vlSelfRef.req_data[2U];
                    vlSelfRef.f_unit__DOT__out_data[3U] 
                        = vlSelfRef.req_data[3U];
                    vlSelfRef.f_unit__DOT__out_data[4U] 
                        = vlSelfRef.req_data[4U];
                    vlSelfRef.f_unit__DOT__out_data[5U] 
                        = vlSelfRef.req_data[5U];
                    vlSelfRef.f_unit__DOT__out_data[6U] 
                        = vlSelfRef.req_data[6U];
                    vlSelfRef.f_unit__DOT__out_data[7U] 
                        = vlSelfRef.req_data[7U];
                    vlSelfRef.f_unit__DOT__out_data[8U] 
                        = vlSelfRef.req_data[8U];
                    vlSelfRef.f_unit__DOT__out_data[9U] 
                        = vlSelfRef.req_data[9U];
                    vlSelfRef.f_unit__DOT__out_data[0xaU] 
                        = vlSelfRef.req_data[0xaU];
                    vlSelfRef.f_unit__DOT__out_data[0xbU] 
                        = vlSelfRef.req_data[0xbU];
                    vlSelfRef.f_unit__DOT__out_data[0xcU] 
                        = vlSelfRef.req_data[0xcU];
                    vlSelfRef.f_unit__DOT__out_data[0xdU] 
                        = vlSelfRef.req_data[0xdU];
                    vlSelfRef.f_unit__DOT__out_data[0xeU] 
                        = vlSelfRef.req_data[0xeU];
                    vlSelfRef.f_unit__DOT__out_data[0xfU] 
                        = vlSelfRef.req_data[0xfU];
                }
            }
        }
    }
    vlSelfRef.return_data[0U] = vlSelfRef.f_unit__DOT__out_data[0U];
    vlSelfRef.return_data[1U] = vlSelfRef.f_unit__DOT__out_data[1U];
    vlSelfRef.return_data[2U] = vlSelfRef.f_unit__DOT__out_data[2U];
    vlSelfRef.return_data[3U] = vlSelfRef.f_unit__DOT__out_data[3U];
    vlSelfRef.return_data[4U] = vlSelfRef.f_unit__DOT__out_data[4U];
    vlSelfRef.return_data[5U] = vlSelfRef.f_unit__DOT__out_data[5U];
    vlSelfRef.return_data[6U] = vlSelfRef.f_unit__DOT__out_data[6U];
    vlSelfRef.return_data[7U] = vlSelfRef.f_unit__DOT__out_data[7U];
    vlSelfRef.return_data[8U] = vlSelfRef.f_unit__DOT__out_data[8U];
    vlSelfRef.return_data[9U] = vlSelfRef.f_unit__DOT__out_data[9U];
    vlSelfRef.return_data[0xaU] = vlSelfRef.f_unit__DOT__out_data[0xaU];
    vlSelfRef.return_data[0xbU] = vlSelfRef.f_unit__DOT__out_data[0xbU];
    vlSelfRef.return_data[0xcU] = vlSelfRef.f_unit__DOT__out_data[0xcU];
    vlSelfRef.return_data[0xdU] = vlSelfRef.f_unit__DOT__out_data[0xdU];
    vlSelfRef.return_data[0xeU] = vlSelfRef.f_unit__DOT__out_data[0xeU];
    vlSelfRef.return_data[0xfU] = vlSelfRef.f_unit__DOT__out_data[0xfU];
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_0 = (0xffU 
                                                & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                    & (IData)(vlSelfRef.g_word_transfer__BRA__15__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en))
                                                    ? 
                                                   (vlSelfRef.c_fsm__DOT__fw_data 
                                                    >> 0x18U)
                                                    : 
                                                   ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                     ? 
                                                    ((vlSelfRef.f_unit__DOT__out_data[0xfU] 
                                                      << 8U) 
                                                     | (vlSelfRef.f_unit__DOT__out_data[0xfU] 
                                                        >> 0x18U))
                                                     : 
                                                    ((IData)(vlSelfRef.g_word_transfer__BRA__15__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en)
                                                      ? 
                                                     (vlSelfRef.c_fsm__DOT__fw_data 
                                                      >> 0x18U)
                                                      : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_1 = (0xffU 
                                                & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                    & (IData)(vlSelfRef.g_word_transfer__BRA__15__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en))
                                                    ? 
                                                   (vlSelfRef.c_fsm__DOT__fw_data 
                                                    >> 0x10U)
                                                    : 
                                                   ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                     ? 
                                                    ((vlSelfRef.f_unit__DOT__out_data[0xfU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.f_unit__DOT__out_data[0xfU] 
                                                        >> 0x10U))
                                                     : 
                                                    ((IData)(vlSelfRef.g_word_transfer__BRA__15__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en)
                                                      ? 
                                                     (vlSelfRef.c_fsm__DOT__fw_data 
                                                      >> 0x10U)
                                                      : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_2 = (0xffU 
                                                & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                    & (IData)(vlSelfRef.g_word_transfer__BRA__15__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en))
                                                    ? 
                                                   (vlSelfRef.c_fsm__DOT__fw_data 
                                                    >> 8U)
                                                    : 
                                                   ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                     ? 
                                                    ((vlSelfRef.f_unit__DOT__out_data[0xfU] 
                                                      << 0x18U) 
                                                     | (vlSelfRef.f_unit__DOT__out_data[0xfU] 
                                                        >> 8U))
                                                     : 
                                                    ((IData)(vlSelfRef.g_word_transfer__BRA__15__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en)
                                                      ? 
                                                     (vlSelfRef.c_fsm__DOT__fw_data 
                                                      >> 8U)
                                                      : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_3 = (0xffU 
                                                & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                    & (IData)(vlSelfRef.g_word_transfer__BRA__15__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en))
                                                    ? vlSelfRef.c_fsm__DOT__fw_data
                                                    : 
                                                   ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                     ? 
                                                    vlSelfRef.f_unit__DOT__out_data[0xfU]
                                                     : 
                                                    ((IData)(vlSelfRef.g_word_transfer__BRA__15__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en)
                                                      ? vlSelfRef.c_fsm__DOT__fw_data
                                                      : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_4 = (0xffU 
                                                & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                    & (IData)(vlSelfRef.g_word_transfer__BRA__14__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en))
                                                    ? 
                                                   (vlSelfRef.c_fsm__DOT__fw_data 
                                                    >> 0x18U)
                                                    : 
                                                   ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                     ? 
                                                    ((vlSelfRef.f_unit__DOT__out_data[0xeU] 
                                                      << 8U) 
                                                     | (vlSelfRef.f_unit__DOT__out_data[0xeU] 
                                                        >> 0x18U))
                                                     : 
                                                    ((IData)(vlSelfRef.g_word_transfer__BRA__14__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en)
                                                      ? 
                                                     (vlSelfRef.c_fsm__DOT__fw_data 
                                                      >> 0x18U)
                                                      : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_5 = (0xffU 
                                                & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                    & (IData)(vlSelfRef.g_word_transfer__BRA__14__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en))
                                                    ? 
                                                   (vlSelfRef.c_fsm__DOT__fw_data 
                                                    >> 0x10U)
                                                    : 
                                                   ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                     ? 
                                                    ((vlSelfRef.f_unit__DOT__out_data[0xeU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.f_unit__DOT__out_data[0xeU] 
                                                        >> 0x10U))
                                                     : 
                                                    ((IData)(vlSelfRef.g_word_transfer__BRA__14__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en)
                                                      ? 
                                                     (vlSelfRef.c_fsm__DOT__fw_data 
                                                      >> 0x10U)
                                                      : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_6 = (0xffU 
                                                & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                    & (IData)(vlSelfRef.g_word_transfer__BRA__14__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en))
                                                    ? 
                                                   (vlSelfRef.c_fsm__DOT__fw_data 
                                                    >> 8U)
                                                    : 
                                                   ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                     ? 
                                                    ((vlSelfRef.f_unit__DOT__out_data[0xeU] 
                                                      << 0x18U) 
                                                     | (vlSelfRef.f_unit__DOT__out_data[0xeU] 
                                                        >> 8U))
                                                     : 
                                                    ((IData)(vlSelfRef.g_word_transfer__BRA__14__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en)
                                                      ? 
                                                     (vlSelfRef.c_fsm__DOT__fw_data 
                                                      >> 8U)
                                                      : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_7 = (0xffU 
                                                & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                    & (IData)(vlSelfRef.g_word_transfer__BRA__14__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en))
                                                    ? vlSelfRef.c_fsm__DOT__fw_data
                                                    : 
                                                   ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                     ? 
                                                    vlSelfRef.f_unit__DOT__out_data[0xeU]
                                                     : 
                                                    ((IData)(vlSelfRef.g_word_transfer__BRA__14__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en)
                                                      ? vlSelfRef.c_fsm__DOT__fw_data
                                                      : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_8 = (0xffU 
                                                & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                    & (IData)(vlSelfRef.g_word_transfer__BRA__13__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en))
                                                    ? 
                                                   (vlSelfRef.c_fsm__DOT__fw_data 
                                                    >> 0x18U)
                                                    : 
                                                   ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                     ? 
                                                    ((vlSelfRef.f_unit__DOT__out_data[0xdU] 
                                                      << 8U) 
                                                     | (vlSelfRef.f_unit__DOT__out_data[0xdU] 
                                                        >> 0x18U))
                                                     : 
                                                    ((IData)(vlSelfRef.g_word_transfer__BRA__13__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en)
                                                      ? 
                                                     (vlSelfRef.c_fsm__DOT__fw_data 
                                                      >> 0x18U)
                                                      : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_9 = (0xffU 
                                                & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                    & (IData)(vlSelfRef.g_word_transfer__BRA__13__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en))
                                                    ? 
                                                   (vlSelfRef.c_fsm__DOT__fw_data 
                                                    >> 0x10U)
                                                    : 
                                                   ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                     ? 
                                                    ((vlSelfRef.f_unit__DOT__out_data[0xdU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.f_unit__DOT__out_data[0xdU] 
                                                        >> 0x10U))
                                                     : 
                                                    ((IData)(vlSelfRef.g_word_transfer__BRA__13__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en)
                                                      ? 
                                                     (vlSelfRef.c_fsm__DOT__fw_data 
                                                      >> 0x10U)
                                                      : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_10 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__13__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.c_fsm__DOT__fw_data 
                                                     >> 8U)
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.f_unit__DOT__out_data[0xdU] 
                                                       << 0x18U) 
                                                      | (vlSelfRef.f_unit__DOT__out_data[0xdU] 
                                                         >> 8U))
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__13__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.c_fsm__DOT__fw_data 
                                                       >> 8U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_11 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__13__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en))
                                                     ? vlSelfRef.c_fsm__DOT__fw_data
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     vlSelfRef.f_unit__DOT__out_data[0xdU]
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__13__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en)
                                                       ? vlSelfRef.c_fsm__DOT__fw_data
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_12 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__12__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.c_fsm__DOT__fw_data 
                                                     >> 0x18U)
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.f_unit__DOT__out_data[0xcU] 
                                                       << 8U) 
                                                      | (vlSelfRef.f_unit__DOT__out_data[0xcU] 
                                                         >> 0x18U))
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__12__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.c_fsm__DOT__fw_data 
                                                       >> 0x18U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_13 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__12__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.c_fsm__DOT__fw_data 
                                                     >> 0x10U)
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.f_unit__DOT__out_data[0xcU] 
                                                       << 0x10U) 
                                                      | (vlSelfRef.f_unit__DOT__out_data[0xcU] 
                                                         >> 0x10U))
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__12__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.c_fsm__DOT__fw_data 
                                                       >> 0x10U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_14 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__12__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.c_fsm__DOT__fw_data 
                                                     >> 8U)
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.f_unit__DOT__out_data[0xcU] 
                                                       << 0x18U) 
                                                      | (vlSelfRef.f_unit__DOT__out_data[0xcU] 
                                                         >> 8U))
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__12__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.c_fsm__DOT__fw_data 
                                                       >> 8U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_15 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__12__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en))
                                                     ? vlSelfRef.c_fsm__DOT__fw_data
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     vlSelfRef.f_unit__DOT__out_data[0xcU]
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__12__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en)
                                                       ? vlSelfRef.c_fsm__DOT__fw_data
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_16 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__11__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.c_fsm__DOT__fw_data 
                                                     >> 0x18U)
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.f_unit__DOT__out_data[0xbU] 
                                                       << 8U) 
                                                      | (vlSelfRef.f_unit__DOT__out_data[0xbU] 
                                                         >> 0x18U))
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__11__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.c_fsm__DOT__fw_data 
                                                       >> 0x18U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_17 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__11__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.c_fsm__DOT__fw_data 
                                                     >> 0x10U)
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.f_unit__DOT__out_data[0xbU] 
                                                       << 0x10U) 
                                                      | (vlSelfRef.f_unit__DOT__out_data[0xbU] 
                                                         >> 0x10U))
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__11__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.c_fsm__DOT__fw_data 
                                                       >> 0x10U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_18 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__11__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.c_fsm__DOT__fw_data 
                                                     >> 8U)
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.f_unit__DOT__out_data[0xbU] 
                                                       << 0x18U) 
                                                      | (vlSelfRef.f_unit__DOT__out_data[0xbU] 
                                                         >> 8U))
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__11__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.c_fsm__DOT__fw_data 
                                                       >> 8U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_19 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__11__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en))
                                                     ? vlSelfRef.c_fsm__DOT__fw_data
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     vlSelfRef.f_unit__DOT__out_data[0xbU]
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__11__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en)
                                                       ? vlSelfRef.c_fsm__DOT__fw_data
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_20 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__10__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.c_fsm__DOT__fw_data 
                                                     >> 0x18U)
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.f_unit__DOT__out_data[0xaU] 
                                                       << 8U) 
                                                      | (vlSelfRef.f_unit__DOT__out_data[0xaU] 
                                                         >> 0x18U))
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__10__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.c_fsm__DOT__fw_data 
                                                       >> 0x18U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_21 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__10__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.c_fsm__DOT__fw_data 
                                                     >> 0x10U)
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.f_unit__DOT__out_data[0xaU] 
                                                       << 0x10U) 
                                                      | (vlSelfRef.f_unit__DOT__out_data[0xaU] 
                                                         >> 0x10U))
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__10__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.c_fsm__DOT__fw_data 
                                                       >> 0x10U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_22 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__10__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.c_fsm__DOT__fw_data 
                                                     >> 8U)
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.f_unit__DOT__out_data[0xaU] 
                                                       << 0x18U) 
                                                      | (vlSelfRef.f_unit__DOT__out_data[0xaU] 
                                                         >> 8U))
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__10__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.c_fsm__DOT__fw_data 
                                                       >> 8U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_23 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__10__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en))
                                                     ? vlSelfRef.c_fsm__DOT__fw_data
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     vlSelfRef.f_unit__DOT__out_data[0xaU]
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__10__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en)
                                                       ? vlSelfRef.c_fsm__DOT__fw_data
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_24 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__9__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.c_fsm__DOT__fw_data 
                                                     >> 0x18U)
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.f_unit__DOT__out_data[9U] 
                                                       << 8U) 
                                                      | (vlSelfRef.f_unit__DOT__out_data[9U] 
                                                         >> 0x18U))
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__9__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.c_fsm__DOT__fw_data 
                                                       >> 0x18U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_25 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__9__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.c_fsm__DOT__fw_data 
                                                     >> 0x10U)
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.f_unit__DOT__out_data[9U] 
                                                       << 0x10U) 
                                                      | (vlSelfRef.f_unit__DOT__out_data[9U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__9__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.c_fsm__DOT__fw_data 
                                                       >> 0x10U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_26 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__9__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.c_fsm__DOT__fw_data 
                                                     >> 8U)
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.f_unit__DOT__out_data[9U] 
                                                       << 0x18U) 
                                                      | (vlSelfRef.f_unit__DOT__out_data[9U] 
                                                         >> 8U))
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__9__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.c_fsm__DOT__fw_data 
                                                       >> 8U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_27 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__9__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en))
                                                     ? vlSelfRef.c_fsm__DOT__fw_data
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     vlSelfRef.f_unit__DOT__out_data[9U]
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__9__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en)
                                                       ? vlSelfRef.c_fsm__DOT__fw_data
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_28 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__8__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.c_fsm__DOT__fw_data 
                                                     >> 0x18U)
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.f_unit__DOT__out_data[8U] 
                                                       << 8U) 
                                                      | (vlSelfRef.f_unit__DOT__out_data[8U] 
                                                         >> 0x18U))
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__8__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.c_fsm__DOT__fw_data 
                                                       >> 0x18U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_29 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__8__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.c_fsm__DOT__fw_data 
                                                     >> 0x10U)
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.f_unit__DOT__out_data[8U] 
                                                       << 0x10U) 
                                                      | (vlSelfRef.f_unit__DOT__out_data[8U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__8__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.c_fsm__DOT__fw_data 
                                                       >> 0x10U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_30 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__8__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.c_fsm__DOT__fw_data 
                                                     >> 8U)
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.f_unit__DOT__out_data[8U] 
                                                       << 0x18U) 
                                                      | (vlSelfRef.f_unit__DOT__out_data[8U] 
                                                         >> 8U))
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__8__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.c_fsm__DOT__fw_data 
                                                       >> 8U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_31 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__8__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en))
                                                     ? vlSelfRef.c_fsm__DOT__fw_data
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     vlSelfRef.f_unit__DOT__out_data[8U]
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__8__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en)
                                                       ? vlSelfRef.c_fsm__DOT__fw_data
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_32 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__7__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.c_fsm__DOT__fw_data 
                                                     >> 0x18U)
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.f_unit__DOT__out_data[7U] 
                                                       << 8U) 
                                                      | (vlSelfRef.f_unit__DOT__out_data[7U] 
                                                         >> 0x18U))
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__7__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.c_fsm__DOT__fw_data 
                                                       >> 0x18U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_33 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__7__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.c_fsm__DOT__fw_data 
                                                     >> 0x10U)
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.f_unit__DOT__out_data[7U] 
                                                       << 0x10U) 
                                                      | (vlSelfRef.f_unit__DOT__out_data[7U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__7__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.c_fsm__DOT__fw_data 
                                                       >> 0x10U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_34 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__7__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.c_fsm__DOT__fw_data 
                                                     >> 8U)
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.f_unit__DOT__out_data[7U] 
                                                       << 0x18U) 
                                                      | (vlSelfRef.f_unit__DOT__out_data[7U] 
                                                         >> 8U))
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__7__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.c_fsm__DOT__fw_data 
                                                       >> 8U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_35 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__7__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en))
                                                     ? vlSelfRef.c_fsm__DOT__fw_data
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     vlSelfRef.f_unit__DOT__out_data[7U]
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__7__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en)
                                                       ? vlSelfRef.c_fsm__DOT__fw_data
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_36 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__6__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.c_fsm__DOT__fw_data 
                                                     >> 0x18U)
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.f_unit__DOT__out_data[6U] 
                                                       << 8U) 
                                                      | (vlSelfRef.f_unit__DOT__out_data[6U] 
                                                         >> 0x18U))
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__6__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.c_fsm__DOT__fw_data 
                                                       >> 0x18U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_37 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__6__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.c_fsm__DOT__fw_data 
                                                     >> 0x10U)
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.f_unit__DOT__out_data[6U] 
                                                       << 0x10U) 
                                                      | (vlSelfRef.f_unit__DOT__out_data[6U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__6__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.c_fsm__DOT__fw_data 
                                                       >> 0x10U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_38 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__6__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.c_fsm__DOT__fw_data 
                                                     >> 8U)
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.f_unit__DOT__out_data[6U] 
                                                       << 0x18U) 
                                                      | (vlSelfRef.f_unit__DOT__out_data[6U] 
                                                         >> 8U))
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__6__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.c_fsm__DOT__fw_data 
                                                       >> 8U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_39 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__6__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en))
                                                     ? vlSelfRef.c_fsm__DOT__fw_data
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     vlSelfRef.f_unit__DOT__out_data[6U]
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__6__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en)
                                                       ? vlSelfRef.c_fsm__DOT__fw_data
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_40 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__5__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.c_fsm__DOT__fw_data 
                                                     >> 0x18U)
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.f_unit__DOT__out_data[5U] 
                                                       << 8U) 
                                                      | (vlSelfRef.f_unit__DOT__out_data[5U] 
                                                         >> 0x18U))
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__5__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.c_fsm__DOT__fw_data 
                                                       >> 0x18U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_41 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__5__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.c_fsm__DOT__fw_data 
                                                     >> 0x10U)
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.f_unit__DOT__out_data[5U] 
                                                       << 0x10U) 
                                                      | (vlSelfRef.f_unit__DOT__out_data[5U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__5__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.c_fsm__DOT__fw_data 
                                                       >> 0x10U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_42 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__5__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.c_fsm__DOT__fw_data 
                                                     >> 8U)
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.f_unit__DOT__out_data[5U] 
                                                       << 0x18U) 
                                                      | (vlSelfRef.f_unit__DOT__out_data[5U] 
                                                         >> 8U))
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__5__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.c_fsm__DOT__fw_data 
                                                       >> 8U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_43 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__5__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en))
                                                     ? vlSelfRef.c_fsm__DOT__fw_data
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     vlSelfRef.f_unit__DOT__out_data[5U]
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__5__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en)
                                                       ? vlSelfRef.c_fsm__DOT__fw_data
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_44 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__4__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.c_fsm__DOT__fw_data 
                                                     >> 0x18U)
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.f_unit__DOT__out_data[4U] 
                                                       << 8U) 
                                                      | (vlSelfRef.f_unit__DOT__out_data[4U] 
                                                         >> 0x18U))
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__4__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.c_fsm__DOT__fw_data 
                                                       >> 0x18U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_45 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__4__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.c_fsm__DOT__fw_data 
                                                     >> 0x10U)
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.f_unit__DOT__out_data[4U] 
                                                       << 0x10U) 
                                                      | (vlSelfRef.f_unit__DOT__out_data[4U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__4__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.c_fsm__DOT__fw_data 
                                                       >> 0x10U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_46 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__4__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.c_fsm__DOT__fw_data 
                                                     >> 8U)
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.f_unit__DOT__out_data[4U] 
                                                       << 0x18U) 
                                                      | (vlSelfRef.f_unit__DOT__out_data[4U] 
                                                         >> 8U))
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__4__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.c_fsm__DOT__fw_data 
                                                       >> 8U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_47 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__4__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en))
                                                     ? vlSelfRef.c_fsm__DOT__fw_data
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     vlSelfRef.f_unit__DOT__out_data[4U]
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__4__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en)
                                                       ? vlSelfRef.c_fsm__DOT__fw_data
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_48 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__3__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.c_fsm__DOT__fw_data 
                                                     >> 0x18U)
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.f_unit__DOT__out_data[3U] 
                                                       << 8U) 
                                                      | (vlSelfRef.f_unit__DOT__out_data[3U] 
                                                         >> 0x18U))
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__3__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.c_fsm__DOT__fw_data 
                                                       >> 0x18U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_49 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__3__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.c_fsm__DOT__fw_data 
                                                     >> 0x10U)
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.f_unit__DOT__out_data[3U] 
                                                       << 0x10U) 
                                                      | (vlSelfRef.f_unit__DOT__out_data[3U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__3__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.c_fsm__DOT__fw_data 
                                                       >> 0x10U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_50 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__3__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.c_fsm__DOT__fw_data 
                                                     >> 8U)
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.f_unit__DOT__out_data[3U] 
                                                       << 0x18U) 
                                                      | (vlSelfRef.f_unit__DOT__out_data[3U] 
                                                         >> 8U))
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__3__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.c_fsm__DOT__fw_data 
                                                       >> 8U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_51 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__3__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en))
                                                     ? vlSelfRef.c_fsm__DOT__fw_data
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     vlSelfRef.f_unit__DOT__out_data[3U]
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__3__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en)
                                                       ? vlSelfRef.c_fsm__DOT__fw_data
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_52 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__2__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.c_fsm__DOT__fw_data 
                                                     >> 0x18U)
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.f_unit__DOT__out_data[2U] 
                                                       << 8U) 
                                                      | (vlSelfRef.f_unit__DOT__out_data[2U] 
                                                         >> 0x18U))
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__2__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.c_fsm__DOT__fw_data 
                                                       >> 0x18U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_53 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__2__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.c_fsm__DOT__fw_data 
                                                     >> 0x10U)
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.f_unit__DOT__out_data[2U] 
                                                       << 0x10U) 
                                                      | (vlSelfRef.f_unit__DOT__out_data[2U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__2__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.c_fsm__DOT__fw_data 
                                                       >> 0x10U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_54 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__2__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.c_fsm__DOT__fw_data 
                                                     >> 8U)
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.f_unit__DOT__out_data[2U] 
                                                       << 0x18U) 
                                                      | (vlSelfRef.f_unit__DOT__out_data[2U] 
                                                         >> 8U))
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__2__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.c_fsm__DOT__fw_data 
                                                       >> 8U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_55 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__2__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en))
                                                     ? vlSelfRef.c_fsm__DOT__fw_data
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     vlSelfRef.f_unit__DOT__out_data[2U]
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__2__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en)
                                                       ? vlSelfRef.c_fsm__DOT__fw_data
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_56 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__1__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.c_fsm__DOT__fw_data 
                                                     >> 0x18U)
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.f_unit__DOT__out_data[1U] 
                                                       << 8U) 
                                                      | (vlSelfRef.f_unit__DOT__out_data[1U] 
                                                         >> 0x18U))
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__1__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.c_fsm__DOT__fw_data 
                                                       >> 0x18U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_57 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__1__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.c_fsm__DOT__fw_data 
                                                     >> 0x10U)
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.f_unit__DOT__out_data[1U] 
                                                       << 0x10U) 
                                                      | (vlSelfRef.f_unit__DOT__out_data[1U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__1__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.c_fsm__DOT__fw_data 
                                                       >> 0x10U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_58 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__1__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.c_fsm__DOT__fw_data 
                                                     >> 8U)
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.f_unit__DOT__out_data[1U] 
                                                       << 0x18U) 
                                                      | (vlSelfRef.f_unit__DOT__out_data[1U] 
                                                         >> 8U))
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__1__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.c_fsm__DOT__fw_data 
                                                       >> 8U)
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_59 = (0xffU 
                                                 & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__1__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en))
                                                     ? vlSelfRef.c_fsm__DOT__fw_data
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     vlSelfRef.f_unit__DOT__out_data[1U]
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__1__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en)
                                                       ? vlSelfRef.c_fsm__DOT__fw_data
                                                       : 0U))));
    vlSelfRef.__VdfgRegularize_h953fb8a2_0_60 = (((
                                                   (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                     & (IData)(vlSelfRef.g_word_transfer__BRA__0__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en))
                                                     ? 
                                                    (vlSelfRef.c_fsm__DOT__fw_data 
                                                     >> 0x18U)
                                                     : 
                                                    ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                      ? 
                                                     ((vlSelfRef.f_unit__DOT__out_data[0U] 
                                                       << 8U) 
                                                      | (vlSelfRef.f_unit__DOT__out_data[0U] 
                                                         >> 0x18U))
                                                      : 
                                                     ((IData)(vlSelfRef.g_word_transfer__BRA__0__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en)
                                                       ? 
                                                      (vlSelfRef.c_fsm__DOT__fw_data 
                                                       >> 0x18U)
                                                       : 0U))) 
                                                   << 0x18U) 
                                                  | (0xff0000U 
                                                     & ((((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                          & (IData)(vlSelfRef.g_word_transfer__BRA__0__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en))
                                                          ? 
                                                         (vlSelfRef.c_fsm__DOT__fw_data 
                                                          >> 0x10U)
                                                          : 
                                                         ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                           ? 
                                                          ((vlSelfRef.f_unit__DOT__out_data[0U] 
                                                            << 0x10U) 
                                                           | (vlSelfRef.f_unit__DOT__out_data[0U] 
                                                              >> 0x10U))
                                                           : 
                                                          ((IData)(vlSelfRef.g_word_transfer__BRA__0__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en)
                                                            ? 
                                                           (vlSelfRef.c_fsm__DOT__fw_data 
                                                            >> 0x10U)
                                                            : 0U))) 
                                                        << 0x10U))) 
                                                 | ((0xff00U 
                                                     & ((((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                          & (IData)(vlSelfRef.g_word_transfer__BRA__0__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en))
                                                          ? 
                                                         (vlSelfRef.c_fsm__DOT__fw_data 
                                                          >> 8U)
                                                          : 
                                                         ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                           ? 
                                                          ((vlSelfRef.f_unit__DOT__out_data[0U] 
                                                            << 0x18U) 
                                                           | (vlSelfRef.f_unit__DOT__out_data[0U] 
                                                              >> 8U))
                                                           : 
                                                          ((IData)(vlSelfRef.g_word_transfer__BRA__0__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en)
                                                            ? 
                                                           (vlSelfRef.c_fsm__DOT__fw_data 
                                                            >> 8U)
                                                            : 0U))) 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                                           & (IData)(vlSelfRef.g_word_transfer__BRA__0__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en))
                                                           ? vlSelfRef.c_fsm__DOT__fw_data
                                                           : 
                                                          ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                            ? 
                                                           vlSelfRef.f_unit__DOT__out_data[0U]
                                                            : 
                                                           ((IData)(vlSelfRef.g_word_transfer__BRA__0__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en)
                                                             ? vlSelfRef.c_fsm__DOT__fw_data
                                                             : 0U))))));
    vlSelfRef.data[0U] = (IData)((((QData)((IData)(
                                                   ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_56) 
                                                      << 0x18U) 
                                                     | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_57) 
                                                        << 0x10U)) 
                                                    | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_58) 
                                                        << 8U) 
                                                       | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_59))))) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_60))));
    vlSelfRef.data[1U] = (IData)(((((QData)((IData)(
                                                    ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_56) 
                                                       << 0x18U) 
                                                      | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_57) 
                                                         << 0x10U)) 
                                                     | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_58) 
                                                         << 8U) 
                                                        | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_59))))) 
                                    << 0x20U) | (QData)((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_60))) 
                                  >> 0x20U));
    vlSelfRef.data[2U] = (IData)((((QData)((IData)(
                                                   ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_48) 
                                                      << 0x18U) 
                                                     | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_49) 
                                                        << 0x10U)) 
                                                    | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_50) 
                                                        << 8U) 
                                                       | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_51))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_52) 
                                                                  << 0x18U) 
                                                                 | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_53) 
                                                                    << 0x10U)) 
                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_54) 
                                                                    << 8U) 
                                                                   | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_55)))))));
    vlSelfRef.data[3U] = (IData)(((((QData)((IData)(
                                                    ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_48) 
                                                       << 0x18U) 
                                                      | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_49) 
                                                         << 0x10U)) 
                                                     | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_50) 
                                                         << 8U) 
                                                        | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_51))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_52) 
                                                                   << 0x18U) 
                                                                  | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_53) 
                                                                     << 0x10U)) 
                                                                 | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_54) 
                                                                     << 8U) 
                                                                    | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_55)))))) 
                                  >> 0x20U));
    vlSelfRef.data[4U] = (IData)((((QData)((IData)(
                                                   ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_40) 
                                                      << 0x18U) 
                                                     | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_41) 
                                                        << 0x10U)) 
                                                    | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_42) 
                                                        << 8U) 
                                                       | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_43))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_44) 
                                                                  << 0x18U) 
                                                                 | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_45) 
                                                                    << 0x10U)) 
                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_46) 
                                                                    << 8U) 
                                                                   | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_47)))))));
    vlSelfRef.data[5U] = (IData)(((((QData)((IData)(
                                                    ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_40) 
                                                       << 0x18U) 
                                                      | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_41) 
                                                         << 0x10U)) 
                                                     | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_42) 
                                                         << 8U) 
                                                        | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_43))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_44) 
                                                                   << 0x18U) 
                                                                  | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_45) 
                                                                     << 0x10U)) 
                                                                 | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_46) 
                                                                     << 8U) 
                                                                    | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_47)))))) 
                                  >> 0x20U));
    vlSelfRef.data[6U] = (IData)((((QData)((IData)(
                                                   ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_32) 
                                                      << 0x18U) 
                                                     | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_33) 
                                                        << 0x10U)) 
                                                    | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_34) 
                                                        << 8U) 
                                                       | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_35))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_36) 
                                                                  << 0x18U) 
                                                                 | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_37) 
                                                                    << 0x10U)) 
                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_38) 
                                                                    << 8U) 
                                                                   | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_39)))))));
    vlSelfRef.data[7U] = (IData)(((((QData)((IData)(
                                                    ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_32) 
                                                       << 0x18U) 
                                                      | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_33) 
                                                         << 0x10U)) 
                                                     | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_34) 
                                                         << 8U) 
                                                        | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_35))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_36) 
                                                                   << 0x18U) 
                                                                  | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_37) 
                                                                     << 0x10U)) 
                                                                 | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_38) 
                                                                     << 8U) 
                                                                    | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_39)))))) 
                                  >> 0x20U));
    vlSelfRef.data[8U] = (IData)((((QData)((IData)(
                                                   ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_24) 
                                                      << 0x18U) 
                                                     | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_25) 
                                                        << 0x10U)) 
                                                    | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_26) 
                                                        << 8U) 
                                                       | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_27))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_28) 
                                                                  << 0x18U) 
                                                                 | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_29) 
                                                                    << 0x10U)) 
                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_30) 
                                                                    << 8U) 
                                                                   | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_31)))))));
    vlSelfRef.data[9U] = (IData)(((((QData)((IData)(
                                                    ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_24) 
                                                       << 0x18U) 
                                                      | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_25) 
                                                         << 0x10U)) 
                                                     | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_26) 
                                                         << 8U) 
                                                        | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_27))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_28) 
                                                                   << 0x18U) 
                                                                  | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_29) 
                                                                     << 0x10U)) 
                                                                 | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_30) 
                                                                     << 8U) 
                                                                    | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_31)))))) 
                                  >> 0x20U));
    vlSelfRef.data[0xaU] = (IData)((((QData)((IData)(
                                                     ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_16) 
                                                        << 0x18U) 
                                                       | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_17) 
                                                          << 0x10U)) 
                                                      | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_18) 
                                                          << 8U) 
                                                         | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_19))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_20) 
                                                                    << 0x18U) 
                                                                   | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_21) 
                                                                      << 0x10U)) 
                                                                  | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_22) 
                                                                      << 8U) 
                                                                     | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_23)))))));
    vlSelfRef.data[0xbU] = (IData)(((((QData)((IData)(
                                                      ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_16) 
                                                         << 0x18U) 
                                                        | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_17) 
                                                           << 0x10U)) 
                                                       | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_18) 
                                                           << 8U) 
                                                          | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_19))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_20) 
                                                                     << 0x18U) 
                                                                    | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_21) 
                                                                       << 0x10U)) 
                                                                   | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_22) 
                                                                       << 8U) 
                                                                      | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_23)))))) 
                                    >> 0x20U));
    vlSelfRef.data[0xcU] = (IData)((((QData)((IData)(
                                                     ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_8) 
                                                        << 0x18U) 
                                                       | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_9) 
                                                          << 0x10U)) 
                                                      | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_10) 
                                                          << 8U) 
                                                         | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_11))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_12) 
                                                                    << 0x18U) 
                                                                   | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_13) 
                                                                      << 0x10U)) 
                                                                  | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_14) 
                                                                      << 8U) 
                                                                     | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_15)))))));
    vlSelfRef.data[0xdU] = (IData)(((((QData)((IData)(
                                                      ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_8) 
                                                         << 0x18U) 
                                                        | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_9) 
                                                           << 0x10U)) 
                                                       | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_10) 
                                                           << 8U) 
                                                          | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_11))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_12) 
                                                                     << 0x18U) 
                                                                    | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_13) 
                                                                       << 0x10U)) 
                                                                   | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_14) 
                                                                       << 8U) 
                                                                      | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_15)))))) 
                                    >> 0x20U));
    vlSelfRef.data[0xeU] = (IData)((((QData)((IData)(
                                                     ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_0) 
                                                        << 0x18U) 
                                                       | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_1) 
                                                          << 0x10U)) 
                                                      | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_2) 
                                                          << 8U) 
                                                         | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_3))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_4) 
                                                                    << 0x18U) 
                                                                   | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_5) 
                                                                      << 0x10U)) 
                                                                  | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_6) 
                                                                      << 8U) 
                                                                     | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_7)))))));
    vlSelfRef.data[0xfU] = (IData)(((((QData)((IData)(
                                                      ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_0) 
                                                         << 0x18U) 
                                                        | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_1) 
                                                           << 0x10U)) 
                                                       | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_2) 
                                                           << 8U) 
                                                          | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_3))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_4) 
                                                                     << 0x18U) 
                                                                    | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_5) 
                                                                       << 0x10U)) 
                                                                   | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_6) 
                                                                       << 8U) 
                                                                      | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_7)))))) 
                                    >> 0x20U));
    vlSelfRef.d_array__DOT__data[0U] = vlSelfRef.data[0U];
    vlSelfRef.d_array__DOT__data[1U] = vlSelfRef.data[1U];
    vlSelfRef.d_array__DOT__data[2U] = vlSelfRef.data[2U];
    vlSelfRef.d_array__DOT__data[3U] = vlSelfRef.data[3U];
    vlSelfRef.d_array__DOT__data[4U] = vlSelfRef.data[4U];
    vlSelfRef.d_array__DOT__data[5U] = vlSelfRef.data[5U];
    vlSelfRef.d_array__DOT__data[6U] = vlSelfRef.data[6U];
    vlSelfRef.d_array__DOT__data[7U] = vlSelfRef.data[7U];
    vlSelfRef.d_array__DOT__data[8U] = vlSelfRef.data[8U];
    vlSelfRef.d_array__DOT__data[9U] = vlSelfRef.data[9U];
    vlSelfRef.d_array__DOT__data[0xaU] = vlSelfRef.data[0xaU];
    vlSelfRef.d_array__DOT__data[0xbU] = vlSelfRef.data[0xbU];
    vlSelfRef.d_array__DOT__data[0xcU] = vlSelfRef.data[0xcU];
    vlSelfRef.d_array__DOT__data[0xdU] = vlSelfRef.data[0xdU];
    vlSelfRef.d_array__DOT__data[0xeU] = vlSelfRef.data[0xeU];
    vlSelfRef.d_array__DOT__data[0xfU] = vlSelfRef.data[0xfU];
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__25(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__25\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.f_unit__DOT__trans_valid = 0U;
    vlSelfRef.f_unit__DOT__trans_out_addr = 0U;
    if ((0U == (IData)(vlSelfRef.f_unit__DOT__cur_state))) {
        if ((1U & (~ (IData)(vlSelfRef.fsm_valid)))) {
            if (vlSelfRef.f_unit__DOT__empty) {
                vlSelfRef.f_unit__DOT__trans_valid = 1U;
                vlSelfRef.f_unit__DOT__trans_out_addr 
                    = ((IData)(0x40U) + vlSelfRef.f_unit__DOT__prev_addr);
            }
        }
    }
    vlSelfRef.trans_valid = vlSelfRef.f_unit__DOT__trans_valid;
    vlSelfRef.trans_out_addr = vlSelfRef.f_unit__DOT__trans_out_addr;
    vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__add_addr 
        = (vlSelfRef.f_unit__DOT__trans_out_addr + 
           ((IData)(vlSelfRef.sec_address_translator__DOT__rng_val) 
            & (IData)(vlSelfRef.reg_file__DOT__D_FF_h_b__DOT__data)));
    vlSelfRef.sec_address_translator__DOT__in_valid 
        = vlSelfRef.trans_valid;
    vlSelfRef.sec_address_translator__DOT__in_raw_addr 
        = vlSelfRef.trans_out_addr;
    vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__cal_addr 
        = (vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__add_addr 
           + VL_EXTENDS_II(32,4, (IData)(vlSelfRef.reg_file__DOT__D_FF_l_b__DOT__data)));
    vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__valid 
        = vlSelfRef.sec_address_translator__DOT__in_valid;
    vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__addr 
        = vlSelfRef.sec_address_translator__DOT__in_raw_addr;
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__26(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__26\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.f_unit__DOT__next_state = vlSelfRef.f_unit__DOT__cur_state;
    if ((0U == (IData)(vlSelfRef.f_unit__DOT__cur_state))) {
        if (vlSelfRef.fsm_valid) {
            vlSelfRef.f_unit__DOT__next_state = 2U;
        } else if (vlSelfRef.f_unit__DOT__empty) {
            vlSelfRef.f_unit__DOT__next_state = 1U;
        }
        vlSelfRef.f_unit__DOT__w_compare_rd_cam = (2U 
                                                   == (IData)(vlSelfRef.f_unit__DOT__next_state));
    } else {
        if ((1U == (IData)(vlSelfRef.f_unit__DOT__cur_state))) {
            if (vlSelfRef.f_unit__DOT__trans_done_keep) {
                if (vlSelfRef.f_unit__DOT__w_prefetch_rd_cam_happend) {
                    if ((1U & ((~ (IData)(vlSelfRef.f_unit__DOT__match)) 
                               | (IData)(vlSelfRef.f_unit__DOT__not_match_keep)))) {
                        if (((IData)(vlSelfRef.req_done) 
                             | (IData)(vlSelfRef.f_unit__DOT__req_done_keep))) {
                            if (vlSelfRef.f_unit__DOT__w_prefetch_wr_cam_done) {
                                vlSelfRef.f_unit__DOT__next_state = 0U;
                            }
                        }
                    } else {
                        vlSelfRef.f_unit__DOT__next_state = 0U;
                    }
                }
            }
        } else if ((2U == (IData)(vlSelfRef.f_unit__DOT__cur_state))) {
            if (((IData)(vlSelfRef.f_unit__DOT__w_compare_rd_cam_done) 
                 & ((IData)(vlSelfRef.fsm_accessed) 
                    | (IData)(vlSelfRef.f_unit__DOT__cache_access_keep)))) {
                if (((IData)(vlSelfRef.f_unit__DOT__write_keep) 
                     & (IData)(vlSelfRef.f_unit__DOT__match))) {
                    if (vlSelfRef.f_unit__DOT__w_compare_rd_mem_done) {
                        vlSelfRef.f_unit__DOT__next_state = 0U;
                    }
                } else if (vlSelfRef.fsm_hit) {
                    vlSelfRef.f_unit__DOT__next_state = 0U;
                } else if (vlSelfRef.f_unit__DOT__match) {
                    if (vlSelfRef.f_unit__DOT__w_compare_rd_mem_done) {
                        if (vlSelfRef.return_ready) {
                            vlSelfRef.f_unit__DOT__next_state = 0U;
                        }
                    }
                } else if (vlSelfRef.req_ready) {
                    vlSelfRef.f_unit__DOT__next_state = 3U;
                }
            }
        } else if ((3U == (IData)(vlSelfRef.f_unit__DOT__cur_state))) {
            if (((IData)(vlSelfRef.req_done) | (IData)(vlSelfRef.f_unit__DOT__req_done_keep))) {
                if (vlSelfRef.return_ready) {
                    vlSelfRef.f_unit__DOT__next_state = 0U;
                }
            }
        }
        vlSelfRef.f_unit__DOT__w_compare_rd_cam = 0U;
    }
    vlSelfRef.f_unit__DOT__w_compare_rd_cam_edge__DOT__signal_in 
        = vlSelfRef.f_unit__DOT__w_compare_rd_cam;
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__27(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__27\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wr_controller__DOT__mem_write_valid = 
        ((~ (IData)(vlSelfRef.wr_controller__DOT____VdfgRegularize_h5cc42551_0_0)) 
         & (IData)(vlSelfRef.wr_controller__DOT__cur_state));
    if (vlSelfRef.wr_controller__DOT____VdfgRegularize_h5cc42551_0_0) {
        vlSelfRef.wr_controller__DOT__mem_write_data = 0U;
        vlSelfRef.wr_controller__DOT__mem_write_addr = 0U;
        vlSelfRef.wr_controller__DOT__mem_write_byteen = 0U;
    } else if (vlSelfRef.wr_controller__DOT__cur_state) {
        if (vlSelfRef.wr_controller__DOT__write_all) {
            vlSelfRef.wr_controller__DOT__mem_write_data 
                = (((0U == (0x1fU & ((VL_SHIFTL_III(9,9,32, 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelfRef.wr_controller__DOT__counter_wire)), 5U) 
                                      - (IData)(1U)) 
                                     - (IData)(0x1fU))))
                     ? 0U : (vlSelfRef.wr_controller__DOT__data_in_i_reg[
                             (((IData)(0x1fU) + (0x1ffU 
                                                 & ((VL_SHIFTL_III(9,9,32, 
                                                                   ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.wr_controller__DOT__counter_wire)), 5U) 
                                                     - (IData)(1U)) 
                                                    - (IData)(0x1fU)))) 
                              >> 5U)] << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((VL_SHIFTL_III(9,9,32, 
                                                               ((IData)(1U) 
                                                                + (IData)(vlSelfRef.wr_controller__DOT__counter_wire)), 5U) 
                                                 - (IData)(1U)) 
                                                - (IData)(0x1fU)))))) 
                   | (vlSelfRef.wr_controller__DOT__data_in_i_reg[
                      (0xfU & (((VL_SHIFTL_III(9,9,32, 
                                               ((IData)(1U) 
                                                + (IData)(vlSelfRef.wr_controller__DOT__counter_wire)), 5U) 
                                 - (IData)(1U)) - (IData)(0x1fU)) 
                               >> 5U))] >> (0x1fU & 
                                            ((VL_SHIFTL_III(9,9,32, 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelfRef.wr_controller__DOT__counter_wire)), 5U) 
                                              - (IData)(1U)) 
                                             - (IData)(0x1fU)))));
            vlSelfRef.wr_controller__DOT__mem_write_byteen = 0xfU;
        } else {
            vlSelfRef.wr_controller__DOT__mem_write_data 
                = (((0U == (0x1fU & ((VL_SHIFTL_III(9,9,32, 
                                                    ((IData)(1U) 
                                                     + 
                                                     (0xfU 
                                                      & (vlSelfRef.wr_controller__DOT__addr_i_reg 
                                                         >> 2U))), 5U) 
                                      - (IData)(1U)) 
                                     - (IData)(0x1fU))))
                     ? 0U : (vlSelfRef.wr_controller__DOT__data_in_i_reg[
                             (((IData)(0x1fU) + (0x1ffU 
                                                 & ((VL_SHIFTL_III(9,9,32, 
                                                                   ((IData)(1U) 
                                                                    + 
                                                                    (0xfU 
                                                                     & (vlSelfRef.wr_controller__DOT__addr_i_reg 
                                                                        >> 2U))), 5U) 
                                                     - (IData)(1U)) 
                                                    - (IData)(0x1fU)))) 
                              >> 5U)] << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((VL_SHIFTL_III(9,9,32, 
                                                               ((IData)(1U) 
                                                                + 
                                                                (0xfU 
                                                                 & (vlSelfRef.wr_controller__DOT__addr_i_reg 
                                                                    >> 2U))), 5U) 
                                                 - (IData)(1U)) 
                                                - (IData)(0x1fU)))))) 
                   | (vlSelfRef.wr_controller__DOT__data_in_i_reg[
                      (0xfU & (((VL_SHIFTL_III(9,9,32, 
                                               ((IData)(1U) 
                                                + (0xfU 
                                                   & (vlSelfRef.wr_controller__DOT__addr_i_reg 
                                                      >> 2U))), 5U) 
                                 - (IData)(1U)) - (IData)(0x1fU)) 
                               >> 5U))] >> (0x1fU & 
                                            ((VL_SHIFTL_III(9,9,32, 
                                                            ((IData)(1U) 
                                                             + 
                                                             (0xfU 
                                                              & (vlSelfRef.wr_controller__DOT__addr_i_reg 
                                                                 >> 2U))), 5U) 
                                              - (IData)(1U)) 
                                             - (IData)(0x1fU)))));
            vlSelfRef.wr_controller__DOT__mem_write_byteen 
                = vlSelfRef.wr_controller__DOT__byteen_i_reg;
        }
        vlSelfRef.wr_controller__DOT__mem_write_addr 
            = (vlSelfRef.wr_controller__DOT__addr_i_reg 
               + VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.wr_controller__DOT__counter_wire), 2U));
    } else {
        vlSelfRef.wr_controller__DOT__mem_write_data = 0U;
        vlSelfRef.wr_controller__DOT__mem_write_addr = 0U;
        vlSelfRef.wr_controller__DOT__mem_write_byteen = 0U;
    }
    vlSelfRef.write_valid = vlSelfRef.wr_controller__DOT__mem_write_valid;
    vlSelfRef.write_data = vlSelfRef.wr_controller__DOT__mem_write_data;
    vlSelfRef.write_addr = vlSelfRef.wr_controller__DOT__mem_write_addr;
    vlSelfRef.write_byteen = vlSelfRef.wr_controller__DOT__mem_write_byteen;
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__28(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__28\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wr_controller__DOT__counter_offset_inst__DOT__done_w 
        = ((0xfU == (IData)(vlSelfRef.wr_controller__DOT__counter_offset_inst__DOT__counter)) 
           & (IData)(vlSelfRef.wr_controller__DOT__counter_step));
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__29(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__29\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rd_controller__DOT__cur_state) {
        if (vlSelfRef.rd_controller__DOT__cur_state) {
            vlSelfRef.rd_controller__DOT__next_state 
                = ((IData)(vlSelfRef.rd_controller__DOT__all_beats_received)
                    ? 0U : 1U);
        }
    } else {
        vlSelfRef.rd_controller__DOT__next_state = 
            ((IData)(vlSelfRef.req_valid) ? 1U : 0U);
    }
}

extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_h9a855263_0;

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__30(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_comb__TOP__cache_system_tl_top__cache_inst__30\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    __Vtableidx2 = ((((IData)(vlSelfRef.cache_write_valid) 
                      << 4U) | (((IData)(vlSelfRef.wr_controller__DOT__done_keep) 
                                 << 3U) | ((IData)(vlSelfRef.wr_controller__DOT__counter_done) 
                                           << 2U))) 
                    | (((IData)(vlSelfRef.wr_controller__DOT__write_all) 
                        << 1U) | (IData)(vlSelfRef.wr_controller__DOT__cur_state)));
    vlSelfRef.wr_controller__DOT__next_state = Vtop__ConstPool__TABLE_h9a855263_0
        [__Vtableidx2];
}
