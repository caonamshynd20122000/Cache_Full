// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_cache_controller_nb.h"

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h93e1b771_0;

VL_ATTR_COLD void Vtop_cache_controller_nb___eval_static__TOP__cache_system_tl_top__cache_inst(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___eval_static__TOP__cache_system_tl_top__cache_inst\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.reg_file__DOT__load_val_edge__DOT__ff_m1 = 0U;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg = 0U;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__count_reg = 0x3ffffffU;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__ram_addr = 0U;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_addr_reg = 0U;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_data_padded_reg = 0U;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_delete_reg = 0U;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_busy_reg = 1U;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__erase_data = 0U;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__a_dout_reg = 0U;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__b_dout_reg = 0U;
    vlSelfRef.f_unit__DOT__w_prefetch_rd_cam_edge__DOT__ff_m1 = 0U;
    vlSelfRef.f_unit__DOT__w_prefetch_erase_edge__DOT__ff_m1 = 0U;
    vlSelfRef.f_unit__DOT__w_prefetch_wr_cam_edge__DOT__ff_m1 = 0U;
    vlSelfRef.f_unit__DOT__w_compare_rd_cam_edge__DOT__ff_m1 = 0U;
    vlSelfRef.f_unit__DOT__w_compare_rd_mem_edge__DOT__ff_m1 = 0U;
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[1U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[2U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[3U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[4U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[5U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[6U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[7U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[8U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[9U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xaU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xbU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xcU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xdU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xeU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data[0xfU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
}

VL_ATTR_COLD void Vtop_cache_controller_nb___eval_initial__TOP__cache_system_tl_top__cache_inst(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___eval_initial__TOP__cache_system_tl_top__cache_inst\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__k = 1U;
    vlSelfRef.return_ready = 1U;
    vlSelfRef.reg_file__DOT__in_ready = 1U;
    vlSelfRef.f_unit__DOT__rd_cam_done = 1U;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__erase_ram[0U] = 0U;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__i = 1U;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__erase_ram[1U] = 0U;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__i = 2U;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__erase_ram[2U] = 0U;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__i = 3U;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__erase_ram[3U] = 0U;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__i = 4U;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__i = 0U;
    while (VL_GTS_III(32, 0x4000000U, vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__i)) {
        vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__j 
            = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__i;
        while (VL_LTS_III(32, vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__j, 
                          ((IData)(0x2000U) + vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__i))) {
            vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__mem[(0x3ffffffU 
                                                                                & vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__j)] = 0U;
            vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__j 
                = ((IData)(1U) + vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__j);
        }
        vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__i 
            = ((IData)(0x2000U) + vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__i);
    }
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[0U][0U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[0U][1U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[0U][2U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[0U][3U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[0U][4U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[0U][5U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[0U][6U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[0U][7U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[0U][8U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[0U][9U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[0U][0xaU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[0U][0xbU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[0U][0xcU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[0U][0xdU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[0U][0xeU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[0U][0xfU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__init_bram_to_zero__DOT__ram_index = 1U;
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[1U][0U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[1U][1U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[1U][2U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[1U][3U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[1U][4U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[1U][5U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[1U][6U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[1U][7U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[1U][8U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[1U][9U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[1U][0xaU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[1U][0xbU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[1U][0xcU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[1U][0xdU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[1U][0xeU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[1U][0xfU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__init_bram_to_zero__DOT__ram_index = 2U;
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[2U][0U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[2U][1U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[2U][2U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[2U][3U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[2U][4U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[2U][5U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[2U][6U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[2U][7U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[2U][8U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[2U][9U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[2U][0xaU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[2U][0xbU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[2U][0xcU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[2U][0xdU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[2U][0xeU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[2U][0xfU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__init_bram_to_zero__DOT__ram_index = 3U;
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[3U][0U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[3U][1U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[3U][2U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[3U][3U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[3U][4U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[3U][5U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[3U][6U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[3U][7U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[3U][8U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[3U][9U] 
        = Vtop__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[3U][0xaU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[3U][0xbU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[3U][0xcU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[3U][0xdU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[3U][0xeU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[3U][0xfU] 
        = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__init_bram_to_zero__DOT__ram_index = 4U;
    vlSelfRef.sec_address_translator__DOT__in_ready = 1U;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__a_we = 0U;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__a_din = 0U;
    vlSelfRef.f_unit__DOT__rd_mem_counter__DOT__start = 1U;
    vlSelfRef.f_unit__DOT__rd_cam_counter__DOT__start = 1U;
    vlSelfRef.f_unit__DOT__erase_cam_counter__DOT__start = 1U;
    vlSelfRef.f_unit__DOT__wr_mem_counter__DOT__start = 1U;
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__regcea = 1U;
    vlSelfRef.mshr_inst__DOT__fin_is_coalesced = 0U;
    vlSelfRef.mshr_inst__DOT__fin_prev_id = 0U;
    vlSelfRef.d_array__DOT__D_FF_valid__DOT__set = 1U;
    vlSelfRef.d_array__DOT__latency_counter__DOT__start = 1U;
}

VL_ATTR_COLD void Vtop_cache_controller_nb___ctor_var_reset(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___ctor_var_reset\n"); );
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
    vlSelf->in_addr = VL_RAND_RESET_I(32);
    vlSelf->in_data = VL_RAND_RESET_I(32);
    vlSelf->in_byteen = VL_RAND_RESET_I(4);
    vlSelf->in_source = VL_RAND_RESET_I(4);
    vlSelf->in_opcode = VL_RAND_RESET_I(3);
    vlSelf->in_valid = VL_RAND_RESET_I(1);
    vlSelf->in_write = VL_RAND_RESET_I(1);
    vlSelf->in_ready = VL_RAND_RESET_I(1);
    vlSelf->out_addr = VL_RAND_RESET_I(32);
    vlSelf->out_data = VL_RAND_RESET_I(32);
    vlSelf->out_source = VL_RAND_RESET_I(4);
    vlSelf->out_opcode = VL_RAND_RESET_I(3);
    vlSelf->out_valid = VL_RAND_RESET_I(1);
    vlSelf->out_ready = VL_RAND_RESET_I(1);
    vlSelf->read_addr = VL_RAND_RESET_I(32);
    vlSelf->read_data = VL_RAND_RESET_I(32);
    vlSelf->read_valid = VL_RAND_RESET_I(1);
    vlSelf->read_ready = VL_RAND_RESET_I(1);
    vlSelf->write_addr = VL_RAND_RESET_I(32);
    vlSelf->write_data = VL_RAND_RESET_I(32);
    vlSelf->write_byteen = VL_RAND_RESET_I(4);
    vlSelf->write_valid = VL_RAND_RESET_I(1);
    vlSelf->write_ready = VL_RAND_RESET_I(1);
    vlSelf->fsm_way = VL_RAND_RESET_I(4);
    vlSelf->write_through = VL_RAND_RESET_I(1);
    vlSelf->prefetch = VL_RAND_RESET_I(1);
    vlSelf->secure_request = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(168, vlSelf->load_val);
    vlSelf->low_bound = VL_RAND_RESET_I(4);
    vlSelf->high_bound = VL_RAND_RESET_I(4);
    vlSelf->load = VL_RAND_RESET_I(1);
    vlSelf->req_addr = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(512, vlSelf->req_data);
    vlSelf->req_valid = VL_RAND_RESET_I(1);
    vlSelf->req_done = VL_RAND_RESET_I(1);
    vlSelf->req_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->arr_data);
    vlSelf->cache_write_addr = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(512, vlSelf->cache_write_data);
    vlSelf->cache_write_valid = VL_RAND_RESET_I(1);
    vlSelf->cache_write_strb = VL_RAND_RESET_I(16);
    vlSelf->cache_write_ready = VL_RAND_RESET_I(1);
    vlSelf->req_done_sync_0 = VL_RAND_RESET_I(1);
    vlSelf->req_done_sync_1 = VL_RAND_RESET_I(1);
    vlSelf->req_done_sync_2 = VL_RAND_RESET_I(1);
    vlSelf->req_done_pulse = VL_RAND_RESET_I(1);
    vlSelf->fsm_addr = VL_RAND_RESET_I(32);
    vlSelf->fsm_data = VL_RAND_RESET_I(32);
    vlSelf->fsm_valid = VL_RAND_RESET_I(1);
    vlSelf->fsm_rw = VL_RAND_RESET_I(1);
    vlSelf->tag_ready = VL_RAND_RESET_I(1);
    vlSelf->fsm_accessed = VL_RAND_RESET_I(1);
    vlSelf->fsm_hit = VL_RAND_RESET_I(1);
    vlSelf->return_addr = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(512, vlSelf->return_data);
    vlSelf->return_valid = VL_RAND_RESET_I(1);
    vlSelf->return_ready = VL_RAND_RESET_I(1);
    vlSelf->trans_out_addr = VL_RAND_RESET_I(32);
    vlSelf->trans_in_addr = VL_RAND_RESET_I(32);
    vlSelf->trans_valid = VL_RAND_RESET_I(1);
    vlSelf->trans_done = VL_RAND_RESET_I(1);
    vlSelf->fsm_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fsm_out_addr = VL_RAND_RESET_I(32);
    vlSelf->fsm_out_data = VL_RAND_RESET_I(32);
    vlSelf->fsm_out_source = VL_RAND_RESET_I(4);
    vlSelf->fsm_out_opcode = VL_RAND_RESET_I(3);
    vlSelf->fsm_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fsm_out_ready = VL_RAND_RESET_I(1);
    vlSelf->mshr_fin_valid = VL_RAND_RESET_I(1);
    vlSelf->mshr_fin_is_hit = VL_RAND_RESET_I(1);
    vlSelf->mshr_fin_id = VL_RAND_RESET_I(2);
    vlSelf->miss_trigger = VL_RAND_RESET_I(1);
    vlSelf->mshr_alloc_ready = VL_RAND_RESET_I(1);
    vlSelf->mshr_alloc_id = VL_RAND_RESET_I(2);
    vlSelf->mshr_alloc_match = VL_RAND_RESET_I(1);
    vlSelf->mshr_alloc_match_id = VL_RAND_RESET_I(2);
    vlSelf->mshr_deq_valid = VL_RAND_RESET_I(1);
    vlSelf->mshr_deq_source = VL_RAND_RESET_I(4);
    vlSelf->mshr_deq_opcode = VL_RAND_RESET_I(3);
    vlSelf->mshr_deq_addr = VL_RAND_RESET_I(32);
    vlSelf->mshr_deq_data = VL_RAND_RESET_I(32);
    vlSelf->mshr_deq_id = VL_RAND_RESET_I(2);
    vlSelf->mshr_deq_ready = VL_RAND_RESET_I(1);
    vlSelf->mshr_do_alloc = VL_RAND_RESET_I(1);
    vlSelf->miss_mshr_id = VL_RAND_RESET_I(2);
    vlSelf->__Vcellinp__c_fsm__in_valid = VL_RAND_RESET_I(1);
    vlSelf->hit_out_valid = VL_RAND_RESET_I(1);
    vlSelf->refill_out_valid = VL_RAND_RESET_I(1);
    vlSelf->refill_word_idx = VL_RAND_RESET_I(4);
    vlSelf->refill_word_data = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(512, vlSelf->data);
    vlSelf->valid = VL_RAND_RESET_I(1);
    vlSelf->addr = VL_RAND_RESET_I(32);
    vlSelf->write = VL_RAND_RESET_I(1);
    vlSelf->write_all = VL_RAND_RESET_I(1);
    vlSelf->byteen_keep = VL_RAND_RESET_I(4);
    vlSelf->fsm_word_idx = VL_RAND_RESET_I(4);
    vlSelf->g_word_transfer__BRA__0__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__0__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__0__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__0__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__1__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__1__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__1__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__1__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__2__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__2__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__2__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__2__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__3__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__3__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__3__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__3__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__4__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__4__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__4__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__4__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__5__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__5__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__5__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__5__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__6__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__6__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__6__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__6__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__7__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__7__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__7__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__7__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__8__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__8__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__8__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__8__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__9__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__9__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__9__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__9__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__10__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__10__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__10__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__10__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__11__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__11__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__11__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__11__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__12__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__12__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__12__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__12__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__13__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__13__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__13__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__13__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__14__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__14__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__14__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__14__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__15__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__15__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__15__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->g_word_transfer__BRA__15__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__in_valid = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__in_ready = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__in_addr = VL_RAND_RESET_I(6);
    vlSelf->reg_file__DOT__in_data = VL_RAND_RESET_I(32);
    vlSelf->reg_file__DOT__out_data = VL_RAND_RESET_I(32);
    vlSelf->reg_file__DOT__write_through = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__prefetch = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__secure_request = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(168, vlSelf->reg_file__DOT__load_val);
    vlSelf->reg_file__DOT__low_bound = VL_RAND_RESET_I(4);
    vlSelf->reg_file__DOT__high_bound = VL_RAND_RESET_I(4);
    vlSelf->reg_file__DOT__load = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__set_write = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__set_secure = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__set_low_bound = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__set_high_bound = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__set_prefetch = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__set_load_val_0 = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__set_load_val_1 = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__set_load_val_2 = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__set_load_val_3 = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__set_load_val_4 = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__set_load_val_5 = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__set_load_val = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__addr = VL_RAND_RESET_I(6);
    vlSelf->reg_file__DOT__set_load_val_prev = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__load_val_edge__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__load_val_edge__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__load_val_edge__DOT__signal_in = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__load_val_edge__DOT__signal_out = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__load_val_edge__DOT__ff_m1 = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_write__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_write__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_write__DOT__set = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_write__DOT__din = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_write__DOT__dout = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_write__DOT__data = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_secure__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_secure__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_secure__DOT__set = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_secure__DOT__din = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_secure__DOT__dout = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_secure__DOT__data = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_l_b__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_l_b__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_l_b__DOT__set = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_l_b__DOT__din = VL_RAND_RESET_I(4);
    vlSelf->reg_file__DOT__D_FF_l_b__DOT__dout = VL_RAND_RESET_I(4);
    vlSelf->reg_file__DOT__D_FF_l_b__DOT__data = VL_RAND_RESET_I(4);
    vlSelf->reg_file__DOT__D_FF_h_b__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_h_b__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_h_b__DOT__set = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_h_b__DOT__din = VL_RAND_RESET_I(4);
    vlSelf->reg_file__DOT__D_FF_h_b__DOT__dout = VL_RAND_RESET_I(4);
    vlSelf->reg_file__DOT__D_FF_h_b__DOT__data = VL_RAND_RESET_I(4);
    vlSelf->reg_file__DOT__D_FF_pf__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_pf__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_pf__DOT__set = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_pf__DOT__din = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_pf__DOT__dout = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_pf__DOT__data = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_l_va_0__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_l_va_0__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_l_va_0__DOT__set = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_l_va_0__DOT__din = VL_RAND_RESET_I(32);
    vlSelf->reg_file__DOT__D_FF_l_va_0__DOT__dout = VL_RAND_RESET_I(32);
    vlSelf->reg_file__DOT__D_FF_l_va_0__DOT__data = VL_RAND_RESET_I(32);
    vlSelf->reg_file__DOT__D_FF_l_va_1__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_l_va_1__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_l_va_1__DOT__set = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_l_va_1__DOT__din = VL_RAND_RESET_I(32);
    vlSelf->reg_file__DOT__D_FF_l_va_1__DOT__dout = VL_RAND_RESET_I(32);
    vlSelf->reg_file__DOT__D_FF_l_va_1__DOT__data = VL_RAND_RESET_I(32);
    vlSelf->reg_file__DOT__D_FF_l_va_2__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_l_va_2__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_l_va_2__DOT__set = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_l_va_2__DOT__din = VL_RAND_RESET_I(32);
    vlSelf->reg_file__DOT__D_FF_l_va_2__DOT__dout = VL_RAND_RESET_I(32);
    vlSelf->reg_file__DOT__D_FF_l_va_2__DOT__data = VL_RAND_RESET_I(32);
    vlSelf->reg_file__DOT__D_FF_l_va_3__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_l_va_3__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_l_va_3__DOT__set = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_l_va_3__DOT__din = VL_RAND_RESET_I(32);
    vlSelf->reg_file__DOT__D_FF_l_va_3__DOT__dout = VL_RAND_RESET_I(32);
    vlSelf->reg_file__DOT__D_FF_l_va_3__DOT__data = VL_RAND_RESET_I(32);
    vlSelf->reg_file__DOT__D_FF_l_va_4__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_l_va_4__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_l_va_4__DOT__set = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_l_va_4__DOT__din = VL_RAND_RESET_I(32);
    vlSelf->reg_file__DOT__D_FF_l_va_4__DOT__dout = VL_RAND_RESET_I(32);
    vlSelf->reg_file__DOT__D_FF_l_va_4__DOT__data = VL_RAND_RESET_I(32);
    vlSelf->reg_file__DOT__D_FF_l_va_5__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_l_va_5__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_l_va_5__DOT__set = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_l_va_5__DOT__din = VL_RAND_RESET_I(8);
    vlSelf->reg_file__DOT__D_FF_l_va_5__DOT__dout = VL_RAND_RESET_I(8);
    vlSelf->reg_file__DOT__D_FF_l_va_5__DOT__data = VL_RAND_RESET_I(8);
    vlSelf->reg_file__DOT__D_FF_addr__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_addr__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_addr__DOT__set = VL_RAND_RESET_I(1);
    vlSelf->reg_file__DOT__D_FF_addr__DOT__din = VL_RAND_RESET_I(6);
    vlSelf->reg_file__DOT__D_FF_addr__DOT__dout = VL_RAND_RESET_I(6);
    vlSelf->reg_file__DOT__D_FF_addr__DOT__data = VL_RAND_RESET_I(6);
    vlSelf->rd_controller__DOT__clk_l = VL_RAND_RESET_I(1);
    vlSelf->rd_controller__DOT__clk_h = VL_RAND_RESET_I(1);
    vlSelf->rd_controller__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rd_controller__DOT__cache_read_addr = VL_RAND_RESET_I(32);
    vlSelf->rd_controller__DOT__cache_read_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->rd_controller__DOT__cache_read_data);
    vlSelf->rd_controller__DOT__cache_read_done = VL_RAND_RESET_I(1);
    vlSelf->rd_controller__DOT__cache_read_ready = VL_RAND_RESET_I(1);
    vlSelf->rd_controller__DOT__mem_read_addr = VL_RAND_RESET_I(32);
    vlSelf->rd_controller__DOT__mem_read_valid = VL_RAND_RESET_I(1);
    vlSelf->rd_controller__DOT__mem_read_data = VL_RAND_RESET_I(32);
    vlSelf->rd_controller__DOT__mem_read_done = VL_RAND_RESET_I(1);
    vlSelf->rd_controller__DOT__cur_state = VL_RAND_RESET_I(1);
    vlSelf->rd_controller__DOT__next_state = VL_RAND_RESET_I(1);
    vlSelf->rd_controller__DOT__addr_i_reg = VL_RAND_RESET_I(32);
    vlSelf->rd_controller__DOT__mem_read_o_addr = VL_RAND_RESET_I(32);
    vlSelf->rd_controller__DOT__mem_read_o_valid = VL_RAND_RESET_I(1);
    vlSelf->rd_controller__DOT__counter_wire = VL_RAND_RESET_I(4);
    vlSelf->rd_controller__DOT__counter_done = VL_RAND_RESET_I(1);
    vlSelf->rd_controller__DOT__all_beats_received = VL_RAND_RESET_I(1);
    vlSelf->rd_controller__DOT__data_slot_idx = VL_RAND_RESET_I(4);
    vlSelf->rd_controller__DOT__counter_offset_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rd_controller__DOT__counter_offset_inst__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rd_controller__DOT__counter_offset_inst__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->rd_controller__DOT__counter_offset_inst__DOT__counter = VL_RAND_RESET_I(5);
    vlSelf->rd_controller__DOT__counter_offset_inst__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->rd_controller__DOT__counter_offset_inst__DOT__done_w = VL_RAND_RESET_I(1);
    vlSelf->wr_controller__DOT__clk_l = VL_RAND_RESET_I(1);
    vlSelf->wr_controller__DOT__clk_h = VL_RAND_RESET_I(1);
    vlSelf->wr_controller__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->wr_controller__DOT__cache_write_addr = VL_RAND_RESET_I(32);
    vlSelf->wr_controller__DOT__cache_write_valid = VL_RAND_RESET_I(1);
    vlSelf->wr_controller__DOT__cache_write_strb = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(512, vlSelf->wr_controller__DOT__cache_write_data);
    vlSelf->wr_controller__DOT__cache_write_byteen = VL_RAND_RESET_I(4);
    vlSelf->wr_controller__DOT__cache_write_ready = VL_RAND_RESET_I(1);
    vlSelf->wr_controller__DOT__mem_write_addr = VL_RAND_RESET_I(32);
    vlSelf->wr_controller__DOT__mem_write_valid = VL_RAND_RESET_I(1);
    vlSelf->wr_controller__DOT__mem_write_data = VL_RAND_RESET_I(32);
    vlSelf->wr_controller__DOT__mem_write_byteen = VL_RAND_RESET_I(4);
    vlSelf->wr_controller__DOT__mem_write_done = VL_RAND_RESET_I(1);
    vlSelf->wr_controller__DOT__cur_state = VL_RAND_RESET_I(1);
    vlSelf->wr_controller__DOT__next_state = VL_RAND_RESET_I(1);
    vlSelf->wr_controller__DOT__addr_i_reg = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(512, vlSelf->wr_controller__DOT__data_in_i_reg);
    vlSelf->wr_controller__DOT__byteen_i_reg = VL_RAND_RESET_I(4);
    vlSelf->wr_controller__DOT__counter_wire = VL_RAND_RESET_I(4);
    vlSelf->wr_controller__DOT__counter_done = VL_RAND_RESET_I(1);
    vlSelf->wr_controller__DOT__write_all = VL_RAND_RESET_I(1);
    vlSelf->wr_controller__DOT__done_keep = VL_RAND_RESET_I(1);
    vlSelf->wr_controller__DOT__busy_clk_l = VL_RAND_RESET_I(1);
    vlSelf->wr_controller__DOT__counter_step = VL_RAND_RESET_I(1);
    vlSelf->wr_controller__DOT____VdfgRegularize_h5cc42551_0_0 = VL_RAND_RESET_I(1);
    vlSelf->wr_controller__DOT__counter_offset_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->wr_controller__DOT__counter_offset_inst__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->wr_controller__DOT__counter_offset_inst__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->wr_controller__DOT__counter_offset_inst__DOT__counter = VL_RAND_RESET_I(5);
    vlSelf->wr_controller__DOT__counter_offset_inst__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->wr_controller__DOT__counter_offset_inst__DOT__done_w = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__in_addr = VL_RAND_RESET_I(32);
    vlSelf->f_unit__DOT__in_data = VL_RAND_RESET_I(32);
    vlSelf->f_unit__DOT__in_ready = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__in_valid = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__write = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__prefetch = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__cache_hit = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__cache_access_done = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__out_addr = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(512, vlSelf->f_unit__DOT__out_data);
    vlSelf->f_unit__DOT__out_valid = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__out_ready = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__trans_out_addr = VL_RAND_RESET_I(32);
    vlSelf->f_unit__DOT__trans_in_addr = VL_RAND_RESET_I(32);
    vlSelf->f_unit__DOT__trans_valid = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__trans_done = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__req_addr = VL_RAND_RESET_I(32);
    vlSelf->f_unit__DOT__req_valid = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__req_ready = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__req_done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->f_unit__DOT__req_data);
    vlSelf->f_unit__DOT__cur_state = VL_RAND_RESET_I(2);
    vlSelf->f_unit__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->f_unit__DOT__lifetime = VL_RAND_RESET_I(8);
    vlSelf->f_unit__DOT__lifetime_p = VL_RAND_RESET_I(8);
    vlSelf->f_unit__DOT__refresh = VL_RAND_RESET_I(4);
    vlSelf->f_unit__DOT__start = VL_RAND_RESET_I(4);
    vlSelf->f_unit__DOT__hit = VL_RAND_RESET_I(4);
    vlSelf->f_unit__DOT__allocate = VL_RAND_RESET_I(4);
    vlSelf->f_unit__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__empty_idx = VL_RAND_RESET_I(2);
    vlSelf->f_unit__DOT__write_addr = VL_RAND_RESET_I(2);
    vlSelf->f_unit__DOT__write_data = VL_RAND_RESET_I(26);
    vlSelf->f_unit__DOT__write_delete = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__write_busy = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__compare_data = VL_RAND_RESET_I(26);
    vlSelf->f_unit__DOT__match_many = VL_RAND_RESET_I(4);
    vlSelf->f_unit__DOT__match_single = VL_RAND_RESET_I(4);
    vlSelf->f_unit__DOT__match_addr = VL_RAND_RESET_I(2);
    vlSelf->f_unit__DOT__match = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__prev_addr = VL_RAND_RESET_I(32);
    vlSelf->f_unit__DOT__rd_mem = VL_RAND_RESET_I(2);
    vlSelf->f_unit__DOT__rd_cam = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__erase_cam = VL_RAND_RESET_I(2);
    vlSelf->f_unit__DOT__wr_cam = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__read = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__busy_p = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__new_req = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__write_keep = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__in_data_keep = VL_RAND_RESET_I(32);
    vlSelf->f_unit__DOT__cache_access_keep = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__not_match_keep = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__trans_done_keep = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__req_done_keep = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->f_unit__DOT__buffer_data);
    vlSelf->f_unit__DOT__rd_mem_done = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__rd_cam_done = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__erase_cam_done = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__wr_cam_done = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_prefetch_rd_cam = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_prefetch_rd_cam_click = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_prefetch_rd_cam_happend = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_prefetch_rd_cam_done = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_prefetch_erase = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_prefetch_erase_click = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_prefetch_erase_happend = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_prefetch_erase_done = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_prefetch_wr_cam = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_prefetch_wr_cam_click = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_prefetch_wr_cam_happend = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_prefetch_wr_cam_done = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_compare_rd_cam = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_compare_rd_cam_click = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_compare_rd_cam_happend = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_compare_rd_cam_done = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_compare_rd_mem = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_compare_rd_mem_click = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_compare_rd_mem_happend = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_compare_rd_mem_done = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__rd_mem_click = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__erase_cam_click = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__rd_cam_click = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__wr_cam_click = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT____Vcellinp__rd_mem_counter__rst_n = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT____Vcellinp__rd_cam_counter__rst_n = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT____Vcellinp__erase_cam_counter__rst_n = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT____Vcellinp__wr_mem_counter__rst_n = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__wren = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__mem_addr = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(512, vlSelf->f_unit__DOT__mem_in_data);
    VL_RAND_RESET_W(512, vlSelf->f_unit__DOT__mem_out_data);
    vlSelf->f_unit__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__stream_counter__start = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__stream_counter__rst_n = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__stream_counter__start = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__stream_counter__rst_n = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__stream_counter__start = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__stream_counter__rst_n = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__stream_counter__start = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__stream_counter__rst_n = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__unnamedblk1__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->f_unit__DOT__empty_tracker__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__empty_tracker__DOT__sig_in = VL_RAND_RESET_I(8);
    vlSelf->f_unit__DOT__empty_tracker__DOT__sig_out = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__empty_tracker__DOT__idx = VL_RAND_RESET_I(2);
    vlSelf->f_unit__DOT__empty_tracker__DOT__sig_processed = VL_RAND_RESET_I(4);
    vlSelf->f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__input_unencoded = VL_RAND_RESET_I(4);
    vlSelf->f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__output_valid = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__output_encoded = VL_RAND_RESET_I(2);
    vlSelf->f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__output_unencoded = VL_RAND_RESET_I(4);
    vlSelf->f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__out1 = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__out2 = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__valid1 = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__valid2 = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst1__DOT__input_unencoded = VL_RAND_RESET_I(2);
    vlSelf->f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_unencoded = VL_RAND_RESET_I(2);
    vlSelf->f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst2__DOT__input_unencoded = VL_RAND_RESET_I(2);
    vlSelf->f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__empty_tracker__DOT__idx_tracker__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_unencoded = VL_RAND_RESET_I(2);
    vlSelf->f_unit__DOT__tag_buffer__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__tag_buffer__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__tag_buffer__DOT__write_addr = VL_RAND_RESET_I(2);
    vlSelf->f_unit__DOT__tag_buffer__DOT__write_data = VL_RAND_RESET_I(26);
    vlSelf->f_unit__DOT__tag_buffer__DOT__write_delete = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__tag_buffer__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__tag_buffer__DOT__write_busy = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__tag_buffer__DOT__compare_data = VL_RAND_RESET_I(26);
    vlSelf->f_unit__DOT__tag_buffer__DOT__match_many = VL_RAND_RESET_I(4);
    vlSelf->f_unit__DOT__tag_buffer__DOT__match_single = VL_RAND_RESET_I(4);
    vlSelf->f_unit__DOT__tag_buffer__DOT__match_addr = VL_RAND_RESET_I(2);
    vlSelf->f_unit__DOT__tag_buffer__DOT__match = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_addr = VL_RAND_RESET_I(2);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_data = VL_RAND_RESET_I(26);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_delete = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_busy = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__compare_data = VL_RAND_RESET_I(26);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_many = VL_RAND_RESET_I(4);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_single = VL_RAND_RESET_I(4);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_addr = VL_RAND_RESET_I(2);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg = VL_RAND_RESET_I(3);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_next = VL_RAND_RESET_I(3);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__compare_data_padded = VL_RAND_RESET_I(26);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_data_padded = VL_RAND_RESET_I(26);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__count_reg = VL_RAND_RESET_I(26);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__count_next = VL_RAND_RESET_I(26);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__ram_addr = VL_RAND_RESET_I(26);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__set_bit = VL_RAND_RESET_I(4);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__clear_bit = VL_RAND_RESET_I(4);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_addr_reg = VL_RAND_RESET_I(2);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_addr_next = VL_RAND_RESET_I(2);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_data_padded_reg = VL_RAND_RESET_I(26);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_data_padded_next = VL_RAND_RESET_I(26);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_delete_reg = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_delete_next = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_busy_reg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_raw_out[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_many_raw = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__erase_ram[__Vi0] = VL_RAND_RESET_I(26);
    }
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__erase_data = VL_RAND_RESET_I(26);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__erase_ram_wr_en = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__k = VL_RAND_RESET_I(32);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__match_data = VL_RAND_RESET_I(4);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_data = VL_RAND_RESET_I(4);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__input_unencoded = VL_RAND_RESET_I(4);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__output_valid = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__output_encoded = VL_RAND_RESET_I(2);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__output_unencoded = VL_RAND_RESET_I(4);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__out1 = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__out2 = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__valid1 = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__valid2 = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst1__DOT__input_unencoded = VL_RAND_RESET_I(2);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_unencoded = VL_RAND_RESET_I(2);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst2__DOT__input_unencoded = VL_RAND_RESET_I(2);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_unencoded = VL_RAND_RESET_I(2);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__a_clk = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__a_we = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__a_addr = VL_RAND_RESET_I(26);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__a_din = VL_RAND_RESET_I(4);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__a_dout = VL_RAND_RESET_I(4);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__b_clk = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__b_we = VL_RAND_RESET_I(2);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__b_addr = VL_RAND_RESET_I(26);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__b_din = VL_RAND_RESET_I(4);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__b_dout = VL_RAND_RESET_I(4);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__a_dout_reg = VL_RAND_RESET_I(4);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__b_dout_reg = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 67108864; ++__Vi0) {
        vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__mem[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->f_unit__DOT__w_prefetch_rd_cam_edge__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_prefetch_rd_cam_edge__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_prefetch_rd_cam_edge__DOT__signal_in = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_prefetch_rd_cam_edge__DOT__signal_out = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_prefetch_rd_cam_edge__DOT__ff_m1 = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_prefetch_erase_edge__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_prefetch_erase_edge__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_prefetch_erase_edge__DOT__signal_in = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_prefetch_erase_edge__DOT__signal_out = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_prefetch_erase_edge__DOT__ff_m1 = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_prefetch_wr_cam_edge__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_prefetch_wr_cam_edge__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_prefetch_wr_cam_edge__DOT__signal_in = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_prefetch_wr_cam_edge__DOT__signal_out = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_prefetch_wr_cam_edge__DOT__ff_m1 = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_compare_rd_cam_edge__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_compare_rd_cam_edge__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_compare_rd_cam_edge__DOT__signal_in = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_compare_rd_cam_edge__DOT__signal_out = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_compare_rd_cam_edge__DOT__ff_m1 = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_compare_rd_mem_edge__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_compare_rd_mem_edge__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_compare_rd_mem_edge__DOT__signal_in = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_compare_rd_mem_edge__DOT__signal_out = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__w_compare_rd_mem_edge__DOT__ff_m1 = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__rd_mem_counter__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__rd_mem_counter__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__rd_mem_counter__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__rd_mem_counter__DOT__counter = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__rd_mem_counter__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__rd_mem_counter__DOT__done_w = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__rd_cam_counter__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__rd_cam_counter__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__rd_cam_counter__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__rd_cam_counter__DOT__counter = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__rd_cam_counter__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__rd_cam_counter__DOT__done_w = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__erase_cam_counter__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__erase_cam_counter__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__erase_cam_counter__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__erase_cam_counter__DOT__counter = VL_RAND_RESET_I(2);
    vlSelf->f_unit__DOT__erase_cam_counter__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__erase_cam_counter__DOT__done_w = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__wr_mem_counter__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__wr_mem_counter__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__wr_mem_counter__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__wr_mem_counter__DOT__counter = VL_RAND_RESET_I(2);
    vlSelf->f_unit__DOT__wr_mem_counter__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__wr_mem_counter__DOT__done_w = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__data_buffer__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__data_buffer__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__data_buffer__DOT__wren = VL_RAND_RESET_Q(64);
    vlSelf->f_unit__DOT__data_buffer__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__data_buffer__DOT__in_addr = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(512, vlSelf->f_unit__DOT__data_buffer__DOT__in_data);
    VL_RAND_RESET_W(512, vlSelf->f_unit__DOT__data_buffer__DOT__out_data);
    vlSelf->f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__addra = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(512, vlSelf->f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina);
    vlSelf->f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__clka = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__wea = VL_RAND_RESET_Q(64);
    vlSelf->f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ena = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__rsta = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__regcea = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM[__Vi0]);
    }
    VL_RAND_RESET_W(512, vlSelf->f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data);
    vlSelf->f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__init_bram_to_zero__DOT__ram_index = VL_RAND_RESET_I(32);
    vlSelf->f_unit__DOT__genblk1__BRA__0__KET____DOT__stream_counter__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__genblk1__BRA__0__KET____DOT__stream_counter__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__genblk1__BRA__0__KET____DOT__stream_counter__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__genblk1__BRA__0__KET____DOT__stream_counter__DOT__counter = VL_RAND_RESET_I(3);
    vlSelf->f_unit__DOT__genblk1__BRA__0__KET____DOT__stream_counter__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__genblk1__BRA__0__KET____DOT__stream_counter__DOT__done_w = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__genblk1__BRA__1__KET____DOT__stream_counter__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__genblk1__BRA__1__KET____DOT__stream_counter__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__genblk1__BRA__1__KET____DOT__stream_counter__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__genblk1__BRA__1__KET____DOT__stream_counter__DOT__counter = VL_RAND_RESET_I(3);
    vlSelf->f_unit__DOT__genblk1__BRA__1__KET____DOT__stream_counter__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__genblk1__BRA__1__KET____DOT__stream_counter__DOT__done_w = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__genblk1__BRA__2__KET____DOT__stream_counter__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__genblk1__BRA__2__KET____DOT__stream_counter__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__genblk1__BRA__2__KET____DOT__stream_counter__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__genblk1__BRA__2__KET____DOT__stream_counter__DOT__counter = VL_RAND_RESET_I(3);
    vlSelf->f_unit__DOT__genblk1__BRA__2__KET____DOT__stream_counter__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__genblk1__BRA__2__KET____DOT__stream_counter__DOT__done_w = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__genblk1__BRA__3__KET____DOT__stream_counter__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__genblk1__BRA__3__KET____DOT__stream_counter__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__genblk1__BRA__3__KET____DOT__stream_counter__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__genblk1__BRA__3__KET____DOT__stream_counter__DOT__counter = VL_RAND_RESET_I(3);
    vlSelf->f_unit__DOT__genblk1__BRA__3__KET____DOT__stream_counter__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->f_unit__DOT__genblk1__BRA__3__KET____DOT__stream_counter__DOT__done_w = VL_RAND_RESET_I(1);
    vlSelf->c_fsm__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->c_fsm__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->c_fsm__DOT__in_rw = VL_RAND_RESET_I(1);
    vlSelf->c_fsm__DOT__in_addr = VL_RAND_RESET_I(32);
    vlSelf->c_fsm__DOT__in_data = VL_RAND_RESET_I(32);
    vlSelf->c_fsm__DOT__in_source = VL_RAND_RESET_I(4);
    vlSelf->c_fsm__DOT__in_opcode = VL_RAND_RESET_I(3);
    vlSelf->c_fsm__DOT__in_mshr_id = VL_RAND_RESET_I(2);
    vlSelf->c_fsm__DOT__in_valid = VL_RAND_RESET_I(1);
    vlSelf->c_fsm__DOT__in_ready = VL_RAND_RESET_I(1);
    vlSelf->c_fsm__DOT__out_addr = VL_RAND_RESET_I(32);
    vlSelf->c_fsm__DOT__out_data = VL_RAND_RESET_I(32);
    vlSelf->c_fsm__DOT__out_source = VL_RAND_RESET_I(4);
    vlSelf->c_fsm__DOT__out_opcode = VL_RAND_RESET_I(3);
    vlSelf->c_fsm__DOT__out_valid = VL_RAND_RESET_I(1);
    vlSelf->c_fsm__DOT__out_ready = VL_RAND_RESET_I(1);
    vlSelf->c_fsm__DOT__fw_rw = VL_RAND_RESET_I(1);
    vlSelf->c_fsm__DOT__fw_addr = VL_RAND_RESET_I(32);
    vlSelf->c_fsm__DOT__fw_data = VL_RAND_RESET_I(32);
    vlSelf->c_fsm__DOT__fw_valid = VL_RAND_RESET_I(1);
    vlSelf->c_fsm__DOT__fw_ready = VL_RAND_RESET_I(1);
    vlSelf->c_fsm__DOT__ib_addr = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(512, vlSelf->c_fsm__DOT__ib_data);
    vlSelf->c_fsm__DOT__ib_valid = VL_RAND_RESET_I(1);
    vlSelf->c_fsm__DOT__ib_ready = VL_RAND_RESET_I(1);
    vlSelf->c_fsm__DOT__fsm_accessed = VL_RAND_RESET_I(1);
    vlSelf->c_fsm__DOT__fsm_hit = VL_RAND_RESET_I(1);
    vlSelf->c_fsm__DOT__mshr_fin_valid = VL_RAND_RESET_I(1);
    vlSelf->c_fsm__DOT__mshr_fin_is_hit = VL_RAND_RESET_I(1);
    vlSelf->c_fsm__DOT__mshr_fin_id = VL_RAND_RESET_I(2);
    vlSelf->c_fsm__DOT__miss_trigger = VL_RAND_RESET_I(1);
    vlSelf->c_fsm__DOT__cur_state = VL_RAND_RESET_I(1);
    vlSelf->c_fsm__DOT__next_state = VL_RAND_RESET_I(1);
    vlSelf->c_fsm__DOT__addr_keep = VL_RAND_RESET_I(32);
    vlSelf->c_fsm__DOT__data_keep = VL_RAND_RESET_I(32);
    vlSelf->c_fsm__DOT__source_keep = VL_RAND_RESET_I(4);
    vlSelf->c_fsm__DOT__opcode_keep = VL_RAND_RESET_I(3);
    vlSelf->c_fsm__DOT__mshr_id_keep = VL_RAND_RESET_I(2);
    vlSelf->c_fsm__DOT__write_keep = VL_RAND_RESET_I(1);
    vlSelf->c_fsm__DOT__word_idx = VL_RAND_RESET_I(4);
    vlSelf->mshr_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->mshr_inst__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->mshr_inst__DOT__alloc_valid = VL_RAND_RESET_I(1);
    vlSelf->mshr_inst__DOT__alloc_addr = VL_RAND_RESET_I(32);
    vlSelf->mshr_inst__DOT__alloc_source = VL_RAND_RESET_I(4);
    vlSelf->mshr_inst__DOT__alloc_opcode = VL_RAND_RESET_I(3);
    vlSelf->mshr_inst__DOT__alloc_byteen = VL_RAND_RESET_I(4);
    vlSelf->mshr_inst__DOT__alloc_data = VL_RAND_RESET_I(32);
    vlSelf->mshr_inst__DOT__alloc_ready = VL_RAND_RESET_I(1);
    vlSelf->mshr_inst__DOT__alloc_id = VL_RAND_RESET_I(2);
    vlSelf->mshr_inst__DOT__alloc_match = VL_RAND_RESET_I(1);
    vlSelf->mshr_inst__DOT__alloc_match_id = VL_RAND_RESET_I(2);
    vlSelf->mshr_inst__DOT__fin_valid = VL_RAND_RESET_I(1);
    vlSelf->mshr_inst__DOT__fin_id = VL_RAND_RESET_I(2);
    vlSelf->mshr_inst__DOT__fin_is_hit = VL_RAND_RESET_I(1);
    vlSelf->mshr_inst__DOT__fin_is_coalesced = VL_RAND_RESET_I(1);
    vlSelf->mshr_inst__DOT__fin_prev_id = VL_RAND_RESET_I(2);
    vlSelf->mshr_inst__DOT__fill_valid = VL_RAND_RESET_I(1);
    vlSelf->mshr_inst__DOT__fill_id = VL_RAND_RESET_I(2);
    vlSelf->mshr_inst__DOT__fill_addr = VL_RAND_RESET_I(32);
    vlSelf->mshr_inst__DOT__deq_valid = VL_RAND_RESET_I(1);
    vlSelf->mshr_inst__DOT__deq_ready = VL_RAND_RESET_I(1);
    vlSelf->mshr_inst__DOT__deq_source = VL_RAND_RESET_I(4);
    vlSelf->mshr_inst__DOT__deq_opcode = VL_RAND_RESET_I(3);
    vlSelf->mshr_inst__DOT__deq_addr = VL_RAND_RESET_I(32);
    vlSelf->mshr_inst__DOT__deq_byteen = VL_RAND_RESET_I(4);
    vlSelf->mshr_inst__DOT__deq_data = VL_RAND_RESET_I(32);
    vlSelf->mshr_inst__DOT__deq_id = VL_RAND_RESET_I(2);
    vlSelf->mshr_inst__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->mshr_inst__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->mshr_inst__DOT__valid_table = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mshr_inst__DOT__addr_table[__Vi0] = VL_RAND_RESET_I(26);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mshr_inst__DOT__source_table[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mshr_inst__DOT__opcode_table[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mshr_inst__DOT__byteen_table[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mshr_inst__DOT__data_table[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mshr_inst__DOT__next_table = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mshr_inst__DOT__next_index[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->mshr_inst__DOT__incoming_line_addr = VL_RAND_RESET_I(26);
    vlSelf->mshr_inst__DOT__addr_matches = VL_RAND_RESET_I(4);
    vlSelf->mshr_inst__DOT__tail_candidates = VL_RAND_RESET_I(4);
    vlSelf->mshr_inst__DOT__tail_idx = VL_RAND_RESET_I(2);
    vlSelf->mshr_inst__DOT__free_slots = VL_RAND_RESET_I(4);
    vlSelf->mshr_inst__DOT__next_free_id = VL_RAND_RESET_I(2);
    vlSelf->mshr_inst__DOT__free_slot_exists = VL_RAND_RESET_I(1);
    vlSelf->mshr_inst__DOT__deq_ptr_q = VL_RAND_RESET_I(2);
    vlSelf->mshr_inst__DOT__deq_ptr_d = VL_RAND_RESET_I(2);
    vlSelf->mshr_inst__DOT__deq_active_q = VL_RAND_RESET_I(1);
    vlSelf->mshr_inst__DOT__deq_active_d = VL_RAND_RESET_I(1);
    vlSelf->mshr_inst__DOT__alloc_fire = VL_RAND_RESET_I(1);
    vlSelf->mshr_inst__DOT__deq_fire = VL_RAND_RESET_I(1);
    vlSelf->mshr_inst__DOT__tail_encoder__DOT__input_unencoded = VL_RAND_RESET_I(4);
    vlSelf->mshr_inst__DOT__tail_encoder__DOT__output_valid = VL_RAND_RESET_I(1);
    vlSelf->mshr_inst__DOT__tail_encoder__DOT__output_encoded = VL_RAND_RESET_I(2);
    vlSelf->mshr_inst__DOT__tail_encoder__DOT__output_unencoded = VL_RAND_RESET_I(4);
    vlSelf->mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__out1 = VL_RAND_RESET_I(1);
    vlSelf->mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__out2 = VL_RAND_RESET_I(1);
    vlSelf->mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__valid1 = VL_RAND_RESET_I(1);
    vlSelf->mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__valid2 = VL_RAND_RESET_I(1);
    vlSelf->mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__input_unencoded = VL_RAND_RESET_I(2);
    vlSelf->mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid = VL_RAND_RESET_I(1);
    vlSelf->mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded = VL_RAND_RESET_I(1);
    vlSelf->mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_unencoded = VL_RAND_RESET_I(2);
    vlSelf->mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__input_unencoded = VL_RAND_RESET_I(2);
    vlSelf->mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid = VL_RAND_RESET_I(1);
    vlSelf->mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded = VL_RAND_RESET_I(1);
    vlSelf->mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_unencoded = VL_RAND_RESET_I(2);
    vlSelf->mshr_inst__DOT__free_slot_encoder__DOT__input_unencoded = VL_RAND_RESET_I(4);
    vlSelf->mshr_inst__DOT__free_slot_encoder__DOT__output_valid = VL_RAND_RESET_I(1);
    vlSelf->mshr_inst__DOT__free_slot_encoder__DOT__output_encoded = VL_RAND_RESET_I(2);
    vlSelf->mshr_inst__DOT__free_slot_encoder__DOT__output_unencoded = VL_RAND_RESET_I(4);
    vlSelf->mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__out1 = VL_RAND_RESET_I(1);
    vlSelf->mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__out2 = VL_RAND_RESET_I(1);
    vlSelf->mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__valid1 = VL_RAND_RESET_I(1);
    vlSelf->mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__valid2 = VL_RAND_RESET_I(1);
    vlSelf->mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__input_unencoded = VL_RAND_RESET_I(2);
    vlSelf->mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid = VL_RAND_RESET_I(1);
    vlSelf->mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded = VL_RAND_RESET_I(1);
    vlSelf->mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_unencoded = VL_RAND_RESET_I(2);
    vlSelf->mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__input_unencoded = VL_RAND_RESET_I(2);
    vlSelf->mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid = VL_RAND_RESET_I(1);
    vlSelf->mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded = VL_RAND_RESET_I(1);
    vlSelf->mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_unencoded = VL_RAND_RESET_I(2);
    vlSelf->d_array__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->d_array__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->d_array__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->d_array__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->d_array__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->d_array__DOT__write = VL_RAND_RESET_I(1);
    vlSelf->d_array__DOT__in_byteen = VL_RAND_RESET_I(4);
    vlSelf->d_array__DOT__way = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(512, vlSelf->d_array__DOT__data);
    vlSelf->d_array__DOT__write_all = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->d_array__DOT__out_data);
    vlSelf->d_array__DOT__in_addr = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(512, vlSelf->d_array__DOT__in_data);
    vlSelf->d_array__DOT__word_idx = VL_RAND_RESET_I(4);
    vlSelf->d_array__DOT__en = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->d_array__DOT__wren[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->d_array__DOT__out_data_array[__Vi0]);
    }
    vlSelf->d_array__DOT__valid_prev = VL_RAND_RESET_I(1);
    vlSelf->d_array__DOT__counter_done = VL_RAND_RESET_I(1);
    vlSelf->d_array__DOT__write_prev = VL_RAND_RESET_I(1);
    vlSelf->d_array__DOT__write_click = VL_RAND_RESET_I(1);
    vlSelf->d_array__DOT____Vcellinp__latency_counter__rst_n = VL_RAND_RESET_I(1);
    vlSelf->d_array__DOT__byte_mask = VL_RAND_RESET_Q(64);
    vlSelf->d_array__DOT__D_FF_valid__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->d_array__DOT__D_FF_valid__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->d_array__DOT__D_FF_valid__DOT__set = VL_RAND_RESET_I(1);
    vlSelf->d_array__DOT__D_FF_valid__DOT__din = VL_RAND_RESET_I(1);
    vlSelf->d_array__DOT__D_FF_valid__DOT__dout = VL_RAND_RESET_I(1);
    vlSelf->d_array__DOT__D_FF_valid__DOT__data = VL_RAND_RESET_I(1);
    vlSelf->d_array__DOT__latency_counter__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->d_array__DOT__latency_counter__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->d_array__DOT__latency_counter__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->d_array__DOT__latency_counter__DOT__counter = VL_RAND_RESET_I(2);
    vlSelf->d_array__DOT__latency_counter__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->d_array__DOT__latency_counter__DOT__done_w = VL_RAND_RESET_I(1);
    vlSelf->sec_address_translator__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->sec_address_translator__DOT__rst_n = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(168, vlSelf->sec_address_translator__DOT__cfg_load_val);
    vlSelf->sec_address_translator__DOT__cfg_load = VL_RAND_RESET_I(1);
    vlSelf->sec_address_translator__DOT__cfg_low_bound = VL_RAND_RESET_I(4);
    vlSelf->sec_address_translator__DOT__cfg_high_bound = VL_RAND_RESET_I(4);
    vlSelf->sec_address_translator__DOT__cfg_en = VL_RAND_RESET_I(1);
    vlSelf->sec_address_translator__DOT__in_raw_addr = VL_RAND_RESET_I(32);
    vlSelf->sec_address_translator__DOT__in_valid = VL_RAND_RESET_I(1);
    vlSelf->sec_address_translator__DOT__in_trans_addr = VL_RAND_RESET_I(32);
    vlSelf->sec_address_translator__DOT__in_ready = VL_RAND_RESET_I(1);
    vlSelf->sec_address_translator__DOT__in_done = VL_RAND_RESET_I(1);
    vlSelf->sec_address_translator__DOT__rng_val = VL_RAND_RESET_I(4);
    vlSelf->sec_address_translator__DOT____Vcellinp__num_gen__valid = VL_RAND_RESET_I(1);
    vlSelf->sec_address_translator__DOT__num_gen__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->sec_address_translator__DOT__num_gen__DOT__rst_n = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(168, vlSelf->sec_address_translator__DOT__num_gen__DOT__in);
    vlSelf->sec_address_translator__DOT__num_gen__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->sec_address_translator__DOT__num_gen__DOT__request = VL_RAND_RESET_I(1);
    vlSelf->sec_address_translator__DOT__num_gen__DOT__out = VL_RAND_RESET_I(4);
    vlSelf->sec_address_translator__DOT__num_gen__DOT__out_w = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(168, vlSelf->sec_address_translator__DOT__num_gen__DOT__lfsr_reg);
    vlSelf->sec_address_translator__DOT__rand_fill_engine__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->sec_address_translator__DOT__rand_fill_engine__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->sec_address_translator__DOT__rand_fill_engine__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->sec_address_translator__DOT__rand_fill_engine__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->sec_address_translator__DOT__rand_fill_engine__DOT__low_bound = VL_RAND_RESET_I(4);
    vlSelf->sec_address_translator__DOT__rand_fill_engine__DOT__high_bound = VL_RAND_RESET_I(4);
    vlSelf->sec_address_translator__DOT__rand_fill_engine__DOT__rng_val = VL_RAND_RESET_I(4);
    vlSelf->sec_address_translator__DOT__rand_fill_engine__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->sec_address_translator__DOT__rand_fill_engine__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->sec_address_translator__DOT__rand_fill_engine__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->sec_address_translator__DOT__rand_fill_engine__DOT__add_addr = VL_RAND_RESET_I(32);
    vlSelf->sec_address_translator__DOT__rand_fill_engine__DOT__cal_addr = VL_RAND_RESET_I(32);
    vlSelf->sec_address_translator__DOT__rand_fill_engine__DOT__out_ff = VL_RAND_RESET_I(32);
    vlSelf->sec_address_translator__DOT__rand_fill_engine__DOT__done_ff = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_h953fb8a2_0_0 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_1 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_2 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_3 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_4 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_5 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_6 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_7 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_8 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_9 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_10 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_11 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_12 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_13 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_14 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_15 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_16 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_17 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_18 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_19 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_20 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_21 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_22 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_23 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_24 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_25 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_26 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_27 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_28 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_29 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_30 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_31 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_32 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_33 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_34 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_35 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_36 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_37 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_38 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_39 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_40 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_41 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_42 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_43 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_44 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_45 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_46 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_47 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_48 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_49 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_50 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_51 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_52 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_53 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_54 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_55 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_56 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_57 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_58 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_59 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_h953fb8a2_0_60 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__f_unit__DOT__req_done_keep = VL_RAND_RESET_I(1);
}
