// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_cache_controller_nb.h"

VL_INLINE_OPT void Vtop_cache_controller_nb___ico_sequent__TOP__cache_system_tl_top__cache_inst__0(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___ico_sequent__TOP__cache_system_tl_top__cache_inst__0\n"); );
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
    CData/*0:0*/ f_unit__DOT____VdfgRegularize_hd6c16759_2_0;
    f_unit__DOT____VdfgRegularize_hd6c16759_2_0 = 0;
    CData/*0:0*/ f_unit__DOT____VdfgRegularize_hd6c16759_2_1;
    f_unit__DOT____VdfgRegularize_hd6c16759_2_1 = 0;
    CData/*0:0*/ f_unit__DOT____VdfgRegularize_hd6c16759_2_2;
    f_unit__DOT____VdfgRegularize_hd6c16759_2_2 = 0;
    CData/*0:0*/ f_unit__DOT____VdfgRegularize_hd6c16759_2_3;
    f_unit__DOT____VdfgRegularize_hd6c16759_2_3 = 0;
    // Body
    vlSelfRef.rd_controller__DOT__counter_offset_inst__DOT__rst_n 
        = vlSelfRef.rd_controller__DOT__cur_state;
    vlSelfRef.wr_controller__DOT__counter_offset_inst__DOT__rst_n 
        = vlSelfRef.wr_controller__DOT__busy_clk_l;
    vlSelfRef.f_unit__DOT__out_ready = vlSelfRef.return_ready;
    vlSelfRef.f_unit__DOT__in_ready = 0U;
    if ((0U == (IData)(vlSelfRef.f_unit__DOT__cur_state))) {
        vlSelfRef.f_unit__DOT__in_ready = 1U;
    }
    vlSelfRef.mshr_inst__DOT__fill_id = vlSelfRef.miss_mshr_id;
    vlSelfRef.f_unit__DOT__w_prefetch_erase = vlSelfRef.f_unit__DOT__w_prefetch_rd_cam_happend;
    vlSelfRef.f_unit__DOT__w_compare_rd_mem_click = vlSelfRef.f_unit__DOT__w_compare_rd_mem_edge__DOT__signal_out;
    vlSelfRef.f_unit__DOT__rd_mem_click = vlSelfRef.f_unit__DOT__w_compare_rd_mem_edge__DOT__signal_out;
    vlSelfRef.f_unit__DOT__erase_cam_click = vlSelfRef.f_unit__DOT__w_prefetch_erase_click;
    vlSelfRef.f_unit__DOT__w_compare_rd_cam_click = vlSelfRef.f_unit__DOT__w_compare_rd_cam_edge__DOT__signal_out;
    vlSelfRef.f_unit__DOT__w_prefetch_rd_cam_click 
        = vlSelfRef.f_unit__DOT__w_prefetch_rd_cam_edge__DOT__signal_out;
    vlSelfRef.f_unit__DOT__w_prefetch_wr_cam_click 
        = vlSelfRef.f_unit__DOT__w_prefetch_wr_cam_edge__DOT__signal_out;
    vlSelfRef.f_unit__DOT__wr_cam_click = vlSelfRef.f_unit__DOT__w_prefetch_wr_cam_edge__DOT__signal_out;
    vlSelfRef.d_array__DOT__valid_prev = vlSelfRef.d_array__DOT__D_FF_valid__DOT__data;
    vlSelfRef.d_array__DOT__D_FF_valid__DOT__dout = vlSelfRef.d_array__DOT__D_FF_valid__DOT__data;
    vlSelfRef.reg_file__DOT__write_through = vlSelfRef.reg_file__DOT__D_FF_write__DOT__data;
    vlSelfRef.reg_file__DOT__prefetch = vlSelfRef.reg_file__DOT__D_FF_pf__DOT__data;
    vlSelfRef.reg_file__DOT__secure_request = vlSelfRef.reg_file__DOT__D_FF_secure__DOT__data;
    vlSelfRef.reg_file__DOT__low_bound = vlSelfRef.reg_file__DOT__D_FF_l_b__DOT__data;
    vlSelfRef.reg_file__DOT__high_bound = vlSelfRef.reg_file__DOT__D_FF_h_b__DOT__data;
    vlSelfRef.reg_file__DOT__set_load_val_prev = vlSelfRef.reg_file__DOT__load_val_edge__DOT__signal_out;
    vlSelfRef.reg_file__DOT__addr = vlSelfRef.reg_file__DOT__D_FF_addr__DOT__data;
    vlSelfRef.reg_file__DOT__D_FF_write__DOT__dout 
        = vlSelfRef.reg_file__DOT__D_FF_write__DOT__data;
    vlSelfRef.reg_file__DOT__D_FF_secure__DOT__dout 
        = vlSelfRef.reg_file__DOT__D_FF_secure__DOT__data;
    vlSelfRef.reg_file__DOT__D_FF_l_b__DOT__dout = vlSelfRef.reg_file__DOT__D_FF_l_b__DOT__data;
    vlSelfRef.reg_file__DOT__D_FF_h_b__DOT__dout = vlSelfRef.reg_file__DOT__D_FF_h_b__DOT__data;
    vlSelfRef.reg_file__DOT__D_FF_pf__DOT__dout = vlSelfRef.reg_file__DOT__D_FF_pf__DOT__data;
    vlSelfRef.reg_file__DOT__D_FF_l_va_0__DOT__dout 
        = vlSelfRef.reg_file__DOT__D_FF_l_va_0__DOT__data;
    vlSelfRef.reg_file__DOT__D_FF_l_va_1__DOT__dout 
        = vlSelfRef.reg_file__DOT__D_FF_l_va_1__DOT__data;
    vlSelfRef.reg_file__DOT__D_FF_l_va_2__DOT__dout 
        = vlSelfRef.reg_file__DOT__D_FF_l_va_2__DOT__data;
    vlSelfRef.reg_file__DOT__D_FF_l_va_3__DOT__dout 
        = vlSelfRef.reg_file__DOT__D_FF_l_va_3__DOT__data;
    vlSelfRef.reg_file__DOT__D_FF_l_va_4__DOT__dout 
        = vlSelfRef.reg_file__DOT__D_FF_l_va_4__DOT__data;
    vlSelfRef.reg_file__DOT__D_FF_l_va_5__DOT__dout 
        = vlSelfRef.reg_file__DOT__D_FF_l_va_5__DOT__data;
    vlSelfRef.reg_file__DOT__D_FF_addr__DOT__dout = vlSelfRef.reg_file__DOT__D_FF_addr__DOT__data;
    vlSelfRef.mshr_inst__DOT__empty = (1U & (~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelfRef.mshr_inst__DOT__valid_table)))));
    vlSelfRef.mshr_inst__DOT__full = (0xfU == (IData)(vlSelfRef.mshr_inst__DOT__valid_table));
    vlSelfRef.f_unit__DOT__erase_cam_done = vlSelfRef.f_unit__DOT__erase_cam_counter__DOT__done;
    vlSelfRef.sec_address_translator__DOT__in_trans_addr 
        = vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__out_ff;
    vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__out 
        = vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__out_ff;
    vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__done 
        = vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__done_ff;
    vlSelfRef.f_unit__DOT__wr_cam_done = vlSelfRef.f_unit__DOT__wr_mem_counter__DOT__done;
    vlSelfRef.f_unit__DOT__rd_mem_done = vlSelfRef.f_unit__DOT__rd_mem_counter__DOT__done;
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
    vlSelfRef.f_unit__DOT__rd_mem = vlSelfRef.f_unit__DOT__rd_mem_counter__DOT__counter;
    vlSelfRef.f_unit__DOT__rd_mem_counter__DOT__done_w 
        = vlSelfRef.f_unit__DOT__rd_mem_counter__DOT__counter;
    vlSelfRef.f_unit__DOT__wr_cam = (1U & (IData)(vlSelfRef.f_unit__DOT__wr_mem_counter__DOT__counter));
    vlSelfRef.f_unit__DOT__wr_mem_counter__DOT__done_w 
        = (2U == (IData)(vlSelfRef.f_unit__DOT__wr_mem_counter__DOT__counter));
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__write_busy 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_busy_reg;
    vlSelfRef.f_unit__DOT__write_busy = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_busy_reg;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_busy 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_busy_reg;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__a_dout 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__a_dout_reg;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_data 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__b_dout_reg;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__b_dout 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__b_dout_reg;
    vlSelfRef.f_unit__DOT__rd_cam = vlSelfRef.f_unit__DOT__rd_cam_counter__DOT__counter;
    vlSelfRef.f_unit__DOT__rd_cam_counter__DOT__done_w 
        = (1U & (~ (IData)(vlSelfRef.f_unit__DOT__rd_cam_counter__DOT__counter)));
    vlSelfRef.f_unit__DOT__erase_cam = vlSelfRef.f_unit__DOT__erase_cam_counter__DOT__counter;
    vlSelfRef.f_unit__DOT__erase_cam_counter__DOT__done_w 
        = (2U == (IData)(vlSelfRef.f_unit__DOT__erase_cam_counter__DOT__counter));
    vlSelfRef.d_array__DOT__counter_done = vlSelfRef.d_array__DOT__latency_counter__DOT__done;
    vlSelfRef.d_array__DOT__busy = (1U & (~ (IData)(vlSelfRef.d_array__DOT__latency_counter__DOT__done)));
    vlSelfRef.d_array__DOT__latency_counter__DOT__done_w 
        = (2U == (IData)(vlSelfRef.d_array__DOT__latency_counter__DOT__counter));
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__erase_ram_wr_en = 0U;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__count_next 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__count_reg;
    vlSelfRef.mshr_inst__DOT__deq_byteen = vlSelfRef.mshr_inst__DOT__byteen_table
        [vlSelfRef.mshr_inst__DOT__deq_ptr_q];
    vlSelfRef.f_unit__DOT__w_prefetch_rd_cam_done = 
        ((IData)(vlSelfRef.f_unit__DOT__rd_cam_done) 
         & (IData)(vlSelfRef.f_unit__DOT__w_prefetch_rd_cam_happend));
    vlSelfRef.mshr_inst__DOT__fill_addr = (vlSelfRef.mshr_inst__DOT__addr_table
                                           [vlSelfRef.miss_mshr_id] 
                                           << 6U);
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__wr_en = 0U;
    vlSelfRef.mshr_inst__DOT__deq_id = vlSelfRef.mshr_inst__DOT__deq_ptr_q;
    vlSelfRef.prefetch = vlSelfRef.reg_file__DOT__D_FF_pf__DOT__data;
    vlSelfRef.trans_done = vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__done_ff;
    vlSelfRef.sec_address_translator__DOT__in_done 
        = vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__done_ff;
    vlSelfRef.mshr_inst__DOT__deq_data = vlSelfRef.mshr_inst__DOT__data_table
        [vlSelfRef.mshr_inst__DOT__deq_ptr_q];
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__ram_addr 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__erase_data;
    vlSelfRef.secure_request = vlSelfRef.reg_file__DOT__D_FF_secure__DOT__data;
    vlSelfRef.low_bound = vlSelfRef.reg_file__DOT__D_FF_l_b__DOT__data;
    vlSelfRef.high_bound = vlSelfRef.reg_file__DOT__D_FF_h_b__DOT__data;
    vlSelfRef.cfg_ready = vlSelfRef.reg_file__DOT__in_ready;
    vlSelfRef.f_unit__DOT__w_prefetch_rd_cam = vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__done_ff;
    vlSelfRef.f_unit__DOT__rd_cam_click = ((IData)(vlSelfRef.f_unit__DOT__w_compare_rd_cam_edge__DOT__signal_out) 
                                           | (IData)(vlSelfRef.f_unit__DOT__w_prefetch_rd_cam_edge__DOT__signal_out));
    vlSelfRef.wr_controller__DOT__counter_done = vlSelfRef.wr_controller__DOT__counter_offset_inst__DOT__done;
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
    vlSelfRef.load_val[0U] = ((vlSelfRef.reg_file__DOT__D_FF_l_va_4__DOT__data 
                               << 8U) | (IData)(vlSelfRef.reg_file__DOT__D_FF_l_va_5__DOT__data));
    vlSelfRef.load_val[1U] = ((vlSelfRef.reg_file__DOT__D_FF_l_va_4__DOT__data 
                               >> 0x18U) | ((IData)(
                                                    (((QData)((IData)(vlSelfRef.reg_file__DOT__D_FF_l_va_2__DOT__data)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelfRef.reg_file__DOT__D_FF_l_va_3__DOT__data)))) 
                                            << 8U));
    vlSelfRef.load_val[2U] = (((IData)((((QData)((IData)(vlSelfRef.reg_file__DOT__D_FF_l_va_2__DOT__data)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelfRef.reg_file__DOT__D_FF_l_va_3__DOT__data)))) 
                               >> 0x18U) | ((IData)(
                                                    ((((QData)((IData)(vlSelfRef.reg_file__DOT__D_FF_l_va_2__DOT__data)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelfRef.reg_file__DOT__D_FF_l_va_3__DOT__data))) 
                                                     >> 0x20U)) 
                                            << 8U));
    vlSelfRef.load_val[3U] = ((0xffffff00U & vlSelfRef.load_val[3U]) 
                              | ((IData)(((((QData)((IData)(vlSelfRef.reg_file__DOT__D_FF_l_va_2__DOT__data)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelfRef.reg_file__DOT__D_FF_l_va_3__DOT__data))) 
                                          >> 0x20U)) 
                                 >> 0x18U));
    vlSelfRef.load_val[3U] = ((0xffU & vlSelfRef.load_val[3U]) 
                              | ((IData)((((QData)((IData)(vlSelfRef.reg_file__DOT__D_FF_l_va_0__DOT__data)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelfRef.reg_file__DOT__D_FF_l_va_1__DOT__data)))) 
                                 << 8U));
    vlSelfRef.load_val[4U] = (((IData)((((QData)((IData)(vlSelfRef.reg_file__DOT__D_FF_l_va_0__DOT__data)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelfRef.reg_file__DOT__D_FF_l_va_1__DOT__data)))) 
                               >> 0x18U) | ((IData)(
                                                    ((((QData)((IData)(vlSelfRef.reg_file__DOT__D_FF_l_va_0__DOT__data)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelfRef.reg_file__DOT__D_FF_l_va_1__DOT__data))) 
                                                     >> 0x20U)) 
                                            << 8U));
    vlSelfRef.load_val[5U] = ((IData)(((((QData)((IData)(vlSelfRef.reg_file__DOT__D_FF_l_va_0__DOT__data)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelfRef.reg_file__DOT__D_FF_l_va_1__DOT__data))) 
                                       >> 0x20U)) >> 0x18U);
    vlSelfRef.rd_controller__DOT__counter_done = vlSelfRef.rd_controller__DOT__counter_offset_inst__DOT__done;
    vlSelfRef.mshr_inst__DOT__deq_opcode = vlSelfRef.mshr_inst__DOT__opcode_table
        [vlSelfRef.mshr_inst__DOT__deq_ptr_q];
    vlSelfRef.mshr_inst__DOT__deq_source = vlSelfRef.mshr_inst__DOT__source_table
        [vlSelfRef.mshr_inst__DOT__deq_ptr_q];
    vlSelfRef.sec_address_translator__DOT__num_gen__DOT__out_w 
        = (~ ((((((VL_REDXOR_32(((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[5U] 
                                  << 0x18U) | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                               >> 8U))) 
                   << 0x1fU) | (0x40000000U & (VL_REDXOR_32(
                                                            ((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[5U] 
                                                              << 0x19U) 
                                                             | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                                >> 7U))) 
                                               << 0x1eU))) 
                 | ((0x20000000U & (VL_REDXOR_32(((
                                                   vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[5U] 
                                                   << 0x1aU) 
                                                  | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                     >> 6U))) 
                                    << 0x1dU)) | (0x10000000U 
                                                  & (VL_REDXOR_32(
                                                                  ((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[5U] 
                                                                    << 0x1bU) 
                                                                   | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                                      >> 5U))) 
                                                     << 0x1cU)))) 
                | (((0x8000000U & (VL_REDXOR_32(((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[5U] 
                                                  << 0x1cU) 
                                                 | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                    >> 4U))) 
                                   << 0x1bU)) | (0x4000000U 
                                                 & (VL_REDXOR_32(
                                                                 ((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[5U] 
                                                                   << 0x1dU) 
                                                                  | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                                     >> 3U))) 
                                                    << 0x1aU))) 
                   | ((0x2000000U & (VL_REDXOR_32((
                                                   (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[5U] 
                                                    << 0x1eU) 
                                                   | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                      >> 2U))) 
                                     << 0x19U)) | (0x1000000U 
                                                   & (VL_REDXOR_32(
                                                                   ((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[5U] 
                                                                     << 0x1fU) 
                                                                    | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                                       >> 1U))) 
                                                      << 0x18U))))) 
               | ((((0x800000U & (VL_REDXOR_32(vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U]) 
                                  << 0x17U)) | (0x400000U 
                                                & (VL_REDXOR_32(
                                                                ((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                                  << 1U) 
                                                                 | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                                    >> 0x1fU))) 
                                                   << 0x16U))) 
                   | ((0x200000U & (VL_REDXOR_32(((
                                                   vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                   << 2U) 
                                                  | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                     >> 0x1eU))) 
                                    << 0x15U)) | (0x100000U 
                                                  & (VL_REDXOR_32(
                                                                  ((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                                    << 3U) 
                                                                   | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                                      >> 0x1dU))) 
                                                     << 0x14U)))) 
                  | (((0x80000U & (VL_REDXOR_32(((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                  << 4U) 
                                                 | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                    >> 0x1cU))) 
                                   << 0x13U)) | (0x40000U 
                                                 & (VL_REDXOR_32(
                                                                 ((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                                   << 5U) 
                                                                  | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                                     >> 0x1bU))) 
                                                    << 0x12U))) 
                     | ((0x20000U & (VL_REDXOR_32((
                                                   (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                    << 6U) 
                                                   | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                      >> 0x1aU))) 
                                     << 0x11U)) | (0x10000U 
                                                   & (VL_REDXOR_32(
                                                                   ((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                                     << 7U) 
                                                                    | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                                       >> 0x19U))) 
                                                      << 0x10U)))))) 
              | (((((0x8000U & (VL_REDXOR_32(((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                               << 8U) 
                                              | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                 >> 0x18U))) 
                                << 0xfU)) | (0x4000U 
                                             & (VL_REDXOR_32(
                                                             ((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                               << 9U) 
                                                              | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                                 >> 0x17U))) 
                                                << 0xeU))) 
                   | ((0x2000U & (VL_REDXOR_32(((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                 << 0xaU) 
                                                | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                   >> 0x16U))) 
                                  << 0xdU)) | (0x1000U 
                                               & (VL_REDXOR_32(
                                                               ((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                                 << 0xbU) 
                                                                | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                                   >> 0x15U))) 
                                                  << 0xcU)))) 
                  | (((0x800U & (VL_REDXOR_32(((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                << 0xcU) 
                                               | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                  >> 0x14U))) 
                                 << 0xbU)) | (0x400U 
                                              & (VL_REDXOR_32(
                                                              ((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                                << 0xdU) 
                                                               | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                                  >> 0x13U))) 
                                                 << 0xaU))) 
                     | ((0x200U & (VL_REDXOR_32(((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                  << 0xeU) 
                                                 | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                    >> 0x12U))) 
                                   << 9U)) | (0x100U 
                                              & (VL_REDXOR_32(
                                                              ((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                                << 0xfU) 
                                                               | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                                  >> 0x11U))) 
                                                 << 8U))))) 
                 | ((((0x80U & (VL_REDXOR_32(((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                               << 0x10U) 
                                              | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                 >> 0x10U))) 
                                << 7U)) | (0x40U & 
                                           (VL_REDXOR_32(
                                                         ((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                           << 0x11U) 
                                                          | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                             >> 0xfU))) 
                                            << 6U))) 
                     | ((0x20U & (VL_REDXOR_32(((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                 << 0x12U) 
                                                | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                   >> 0xeU))) 
                                  << 5U)) | (0x10U 
                                             & (VL_REDXOR_32(
                                                             ((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                               << 0x13U) 
                                                              | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                                 >> 0xdU))) 
                                                << 4U)))) 
                    | (((8U & (VL_REDXOR_32(((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                              << 0x14U) 
                                             | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                >> 0xcU))) 
                               << 3U)) | (4U & (VL_REDXOR_32(
                                                             ((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                               << 0x15U) 
                                                              | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                                 >> 0xbU))) 
                                                << 2U))) 
                       | ((2U & (VL_REDXOR_32(((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                << 0x16U) 
                                               | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                  >> 0xaU))) 
                                 << 1U)) | (1U & VL_REDXOR_32(
                                                              ((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                                << 0x17U) 
                                                               | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                                  >> 9U))))))))));
    vlSelfRef.req_done_pulse = ((~ (IData)(vlSelfRef.req_done_sync_2)) 
                                & (IData)(vlSelfRef.req_done_sync_1));
    vlSelfRef.reg_file__DOT__out_data = ((0U == (IData)(vlSelfRef.reg_file__DOT__D_FF_addr__DOT__data))
                                          ? (IData)(vlSelfRef.reg_file__DOT__D_FF_write__DOT__data)
                                          : ((4U == (IData)(vlSelfRef.reg_file__DOT__D_FF_addr__DOT__data))
                                              ? (IData)(vlSelfRef.reg_file__DOT__D_FF_secure__DOT__data)
                                              : ((8U 
                                                  == (IData)(vlSelfRef.reg_file__DOT__D_FF_addr__DOT__data))
                                                  ? (IData)(vlSelfRef.reg_file__DOT__D_FF_l_b__DOT__data)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelfRef.reg_file__DOT__D_FF_addr__DOT__data))
                                                   ? (IData)(vlSelfRef.reg_file__DOT__D_FF_h_b__DOT__data)
                                                   : 
                                                  ((0x10U 
                                                    == (IData)(vlSelfRef.reg_file__DOT__D_FF_addr__DOT__data))
                                                    ? (IData)(vlSelfRef.reg_file__DOT__D_FF_pf__DOT__data)
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlSelfRef.reg_file__DOT__D_FF_addr__DOT__data))
                                                     ? vlSelfRef.reg_file__DOT__D_FF_l_va_0__DOT__data
                                                     : 
                                                    ((0x18U 
                                                      == (IData)(vlSelfRef.reg_file__DOT__D_FF_addr__DOT__data))
                                                      ? vlSelfRef.reg_file__DOT__D_FF_l_va_1__DOT__data
                                                      : 
                                                     ((0x1cU 
                                                       == (IData)(vlSelfRef.reg_file__DOT__D_FF_addr__DOT__data))
                                                       ? vlSelfRef.reg_file__DOT__D_FF_l_va_2__DOT__data
                                                       : 
                                                      ((0x20U 
                                                        == (IData)(vlSelfRef.reg_file__DOT__D_FF_addr__DOT__data))
                                                        ? vlSelfRef.reg_file__DOT__D_FF_l_va_3__DOT__data
                                                        : 
                                                       ((0x24U 
                                                         == (IData)(vlSelfRef.reg_file__DOT__D_FF_addr__DOT__data))
                                                         ? vlSelfRef.reg_file__DOT__D_FF_l_va_4__DOT__data
                                                         : 
                                                        ((0x28U 
                                                          == (IData)(vlSelfRef.reg_file__DOT__D_FF_addr__DOT__data))
                                                          ? (IData)(vlSelfRef.reg_file__DOT__D_FF_l_va_5__DOT__data)
                                                          : 
                                                         ((0x2cU 
                                                           == (IData)(vlSelfRef.reg_file__DOT__D_FF_addr__DOT__data))
                                                           ? 1U
                                                           : 0U))))))))))));
    vlSelfRef.rd_controller__DOT__counter_wire = (0xfU 
                                                  & (IData)(vlSelfRef.rd_controller__DOT__counter_offset_inst__DOT__counter));
    vlSelfRef.c_fsm__DOT__word_idx = (0xfU & (vlSelfRef.c_fsm__DOT__addr_keep 
                                              >> 2U));
    vlSelfRef.req_ready = vlSelfRef.rd_controller__DOT__cache_read_ready;
    vlSelfRef.mshr_inst__DOT__deq_addr = (vlSelfRef.mshr_inst__DOT__addr_table
                                          [vlSelfRef.mshr_inst__DOT__deq_ptr_q] 
                                          << 6U);
    vlSelfRef.mshr_inst__DOT__deq_valid = vlSelfRef.mshr_inst__DOT__deq_active_q;
    vlSelfRef.trans_in_addr = vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__out_ff;
    vlSelfRef.f_unit__DOT__w_prefetch_erase_done = 
        ((IData)(vlSelfRef.f_unit__DOT__erase_cam_counter__DOT__done) 
         & (IData)(vlSelfRef.f_unit__DOT__w_prefetch_erase_happend));
    vlSelfRef.f_unit__DOT__new_req = ((~ (IData)(vlSelfRef.f_unit__DOT__busy_p)) 
                                      & (IData)(vlSelfRef.f_unit__DOT__busy));
    vlSelfRef.wr_controller__DOT__counter_wire = (0xfU 
                                                  & (IData)(vlSelfRef.wr_controller__DOT__counter_offset_inst__DOT__counter));
    vlSelfRef.cache_write_ready = vlSelfRef.wr_controller__DOT__cache_write_ready;
    vlSelfRef.f_unit__DOT__w_prefetch_wr_cam_done = 
        ((IData)(vlSelfRef.f_unit__DOT__w_prefetch_wr_cam_happend) 
         & (IData)(vlSelfRef.f_unit__DOT__wr_mem_counter__DOT__done));
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
    vlSelfRef.write_through = vlSelfRef.reg_file__DOT__D_FF_write__DOT__data;
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
    vlSelfRef.f_unit__DOT__w_compare_rd_mem_done = 
        ((IData)(vlSelfRef.f_unit__DOT__rd_mem_counter__DOT__done) 
         & (IData)(vlSelfRef.f_unit__DOT__w_compare_rd_mem_happend));
    vlSelfRef.f_unit__DOT__w_compare_rd_cam_done = 
        ((IData)(vlSelfRef.f_unit__DOT__rd_cam_done) 
         & (IData)(vlSelfRef.f_unit__DOT__w_compare_rd_cam_happend));
    vlSelfRef.req_done = vlSelfRef.rd_controller__DOT__cache_read_done;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__match_data 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__a_dout_reg;
    vlSelfRef.mshr_inst__DOT__free_slots = (0xfU & 
                                            (~ (IData)(vlSelfRef.mshr_inst__DOT__valid_table)));
    vlSelfRef.c_fsm__DOT__in_source = vlSelfRef.in_source;
    vlSelfRef.mshr_inst__DOT__alloc_source = vlSelfRef.in_source;
    vlSelfRef.rd_controller__DOT__clk_l = vlSelfRef.clk_l;
    vlSelfRef.wr_controller__DOT__clk_l = vlSelfRef.clk_l;
    vlSelfRef.reg_file__DOT__D_FF_write__DOT__din = 
        (1U & (vlSelfRef.cfg_data_in >> 0U));
    vlSelfRef.reg_file__DOT__D_FF_secure__DOT__din 
        = (1U & (vlSelfRef.cfg_data_in >> 0U));
    vlSelfRef.reg_file__DOT__D_FF_l_b__DOT__din = (0xfU 
                                                   & (vlSelfRef.cfg_data_in 
                                                      >> 0U));
    vlSelfRef.reg_file__DOT__D_FF_h_b__DOT__din = (0xfU 
                                                   & (vlSelfRef.cfg_data_in 
                                                      >> 0U));
    vlSelfRef.reg_file__DOT__D_FF_pf__DOT__din = (1U 
                                                  & (vlSelfRef.cfg_data_in 
                                                     >> 0U));
    vlSelfRef.reg_file__DOT__D_FF_l_va_5__DOT__din 
        = (0xffU & (vlSelfRef.cfg_data_in >> 0U));
    vlSelfRef.reg_file__DOT__in_data = vlSelfRef.cfg_data_in;
    vlSelfRef.reg_file__DOT__in_valid = vlSelfRef.cfg_valid;
    vlSelfRef.reg_file__DOT__in_addr = (0x3fU & ((IData)(vlSelfRef.cfg_addr) 
                                                 >> 0U));
    vlSelfRef.reg_file__DOT__set_write = ((0U == (0x3fU 
                                                  & (IData)(vlSelfRef.cfg_addr))) 
                                          & (IData)(vlSelfRef.cfg_valid));
    vlSelfRef.reg_file__DOT__set_secure = ((4U == (0x3fU 
                                                   & (IData)(vlSelfRef.cfg_addr))) 
                                           & (IData)(vlSelfRef.cfg_valid));
    vlSelfRef.reg_file__DOT__set_low_bound = ((8U == 
                                               (0x3fU 
                                                & (IData)(vlSelfRef.cfg_addr))) 
                                              & (IData)(vlSelfRef.cfg_valid));
    vlSelfRef.reg_file__DOT__set_high_bound = ((0xcU 
                                                == 
                                                (0x3fU 
                                                 & (IData)(vlSelfRef.cfg_addr))) 
                                               & (IData)(vlSelfRef.cfg_valid));
    vlSelfRef.reg_file__DOT__set_prefetch = ((0x10U 
                                              == (0x3fU 
                                                  & (IData)(vlSelfRef.cfg_addr))) 
                                             & (IData)(vlSelfRef.cfg_valid));
    vlSelfRef.reg_file__DOT__set_load_val_0 = ((0x14U 
                                                == 
                                                (0x3fU 
                                                 & (IData)(vlSelfRef.cfg_addr))) 
                                               & (IData)(vlSelfRef.cfg_valid));
    vlSelfRef.reg_file__DOT__set_load_val_1 = ((0x18U 
                                                == 
                                                (0x3fU 
                                                 & (IData)(vlSelfRef.cfg_addr))) 
                                               & (IData)(vlSelfRef.cfg_valid));
    vlSelfRef.reg_file__DOT__set_load_val_2 = ((0x1cU 
                                                == 
                                                (0x3fU 
                                                 & (IData)(vlSelfRef.cfg_addr))) 
                                               & (IData)(vlSelfRef.cfg_valid));
    vlSelfRef.reg_file__DOT__set_load_val_3 = ((0x20U 
                                                == 
                                                (0x3fU 
                                                 & (IData)(vlSelfRef.cfg_addr))) 
                                               & (IData)(vlSelfRef.cfg_valid));
    vlSelfRef.reg_file__DOT__set_load_val_4 = ((0x24U 
                                                == 
                                                (0x3fU 
                                                 & (IData)(vlSelfRef.cfg_addr))) 
                                               & (IData)(vlSelfRef.cfg_valid));
    vlSelfRef.reg_file__DOT__set_load_val_5 = ((0x28U 
                                                == 
                                                (0x3fU 
                                                 & (IData)(vlSelfRef.cfg_addr))) 
                                               & (IData)(vlSelfRef.cfg_valid));
    vlSelfRef.reg_file__DOT__set_load_val = ((0x2cU 
                                              == (0x3fU 
                                                  & (IData)(vlSelfRef.cfg_addr))) 
                                             & (IData)(vlSelfRef.cfg_valid));
    vlSelfRef.rd_controller__DOT__clk_h = vlSelfRef.clk_h;
    vlSelfRef.wr_controller__DOT__clk_h = vlSelfRef.clk_h;
    vlSelfRef.c_fsm__DOT__clk = vlSelfRef.clk_h;
    vlSelfRef.mshr_inst__DOT__clk = vlSelfRef.clk_h;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array.clk 
        = vlSelfRef.clk_h;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array.clk 
        = vlSelfRef.clk_h;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array.clk 
        = vlSelfRef.clk_h;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array.clk 
        = vlSelfRef.clk_h;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array.clk 
        = vlSelfRef.clk_h;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array.clk 
        = vlSelfRef.clk_h;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array.clk 
        = vlSelfRef.clk_h;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array.clk 
        = vlSelfRef.clk_h;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array.clk 
        = vlSelfRef.clk_h;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array.clk 
        = vlSelfRef.clk_h;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array.clk 
        = vlSelfRef.clk_h;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array.clk 
        = vlSelfRef.clk_h;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array.clk 
        = vlSelfRef.clk_h;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array.clk 
        = vlSelfRef.clk_h;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array.clk 
        = vlSelfRef.clk_h;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array.clk 
        = vlSelfRef.clk_h;
    vlSelfRef.d_array__DOT__clk = vlSelfRef.clk_h;
    vlSelfRef.sec_address_translator__DOT__clk = vlSelfRef.clk_h;
    vlSelfRef.reg_file__DOT__clk = vlSelfRef.clk_h;
    vlSelfRef.f_unit__DOT__clk = vlSelfRef.clk_h;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.clk 
        = vlSelfRef.clk_h;
    vlSelfRef.reg_file__DOT__load_val_edge__DOT__rst 
        = (1U & (~ (IData)(vlSelfRef.rst_n)));
    vlSelfRef.rd_controller__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.wr_controller__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.f_unit__DOT__w_prefetch_rd_cam_edge__DOT__rst 
        = (1U & (~ (IData)(vlSelfRef.rst_n)));
    vlSelfRef.f_unit__DOT__w_prefetch_erase_edge__DOT__rst 
        = (1U & (~ (IData)(vlSelfRef.rst_n)));
    vlSelfRef.f_unit__DOT__w_prefetch_wr_cam_edge__DOT__rst 
        = (1U & (~ (IData)(vlSelfRef.rst_n)));
    vlSelfRef.f_unit__DOT__w_compare_rd_cam_edge__DOT__rst 
        = (1U & (~ (IData)(vlSelfRef.rst_n)));
    vlSelfRef.f_unit__DOT__w_compare_rd_mem_edge__DOT__rst 
        = (1U & (~ (IData)(vlSelfRef.rst_n)));
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__rsta 
        = (1U & (~ (IData)(vlSelfRef.rst_n)));
    vlSelfRef.c_fsm__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.mshr_inst__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.f_unit__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__rst = (1U 
                                                   & (~ (IData)(vlSelfRef.rst_n)));
    vlSelfRef.d_array__DOT__rst_n = vlSelfRef.rst_n;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array.rst_n 
        = vlSelfRef.rst_n;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array.rst_n 
        = vlSelfRef.rst_n;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array.rst_n 
        = vlSelfRef.rst_n;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array.rst_n 
        = vlSelfRef.rst_n;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array.rst_n 
        = vlSelfRef.rst_n;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array.rst_n 
        = vlSelfRef.rst_n;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array.rst_n 
        = vlSelfRef.rst_n;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array.rst_n 
        = vlSelfRef.rst_n;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array.rst_n 
        = vlSelfRef.rst_n;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array.rst_n 
        = vlSelfRef.rst_n;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array.rst_n 
        = vlSelfRef.rst_n;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array.rst_n 
        = vlSelfRef.rst_n;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array.rst_n 
        = vlSelfRef.rst_n;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array.rst_n 
        = vlSelfRef.rst_n;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array.rst_n 
        = vlSelfRef.rst_n;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array.rst_n 
        = vlSelfRef.rst_n;
    vlSelfRef.f_unit__DOT____Vcellinp__rd_mem_counter__rst_n 
        = ((~ (IData)(vlSelfRef.f_unit__DOT__w_compare_rd_mem_edge__DOT__signal_out)) 
           & (IData)(vlSelfRef.rst_n));
    vlSelfRef.f_unit__DOT____Vcellinp__erase_cam_counter__rst_n 
        = ((~ (IData)(vlSelfRef.f_unit__DOT__w_prefetch_erase_click)) 
           & (IData)(vlSelfRef.rst_n));
    vlSelfRef.f_unit__DOT____Vcellinp__wr_mem_counter__rst_n 
        = ((~ (IData)(vlSelfRef.f_unit__DOT__w_prefetch_wr_cam_edge__DOT__signal_out)) 
           & (IData)(vlSelfRef.rst_n));
    vlSelfRef.sec_address_translator__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.reg_file__DOT__rst_n = vlSelfRef.rst_n;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.rst_n 
        = vlSelfRef.rst_n;
    vlSelfRef.wr_controller__DOT__cache_write_byteen 
        = vlSelfRef.in_byteen;
    vlSelfRef.mshr_inst__DOT__alloc_byteen = vlSelfRef.in_byteen;
    vlSelfRef.d_array__DOT__in_byteen = vlSelfRef.in_byteen;
    vlSelfRef.c_fsm__DOT__in_data = vlSelfRef.in_data;
    vlSelfRef.mshr_inst__DOT__alloc_data = vlSelfRef.in_data;
    vlSelfRef.c_fsm__DOT__in_addr = vlSelfRef.in_addr;
    vlSelfRef.mshr_inst__DOT__alloc_addr = vlSelfRef.in_addr;
    vlSelfRef.mshr_inst__DOT__incoming_line_addr = 
        (vlSelfRef.in_addr >> 6U);
    vlSelfRef.c_fsm__DOT__in_opcode = vlSelfRef.in_opcode;
    vlSelfRef.mshr_inst__DOT__alloc_opcode = vlSelfRef.in_opcode;
    vlSelfRef.rd_controller__DOT__mem_read_data = vlSelfRef.read_data;
    vlSelfRef.rd_controller__DOT__counter_offset_inst__DOT__done_w 
        = ((0xfU == (IData)(vlSelfRef.rd_controller__DOT__counter_offset_inst__DOT__counter)) 
           & (IData)(vlSelfRef.read_ready));
    vlSelfRef.rd_controller__DOT__mem_read_done = vlSelfRef.read_ready;
    vlSelfRef.wr_controller__DOT__mem_write_done = vlSelfRef.write_ready;
    vlSelfRef.wr_controller__DOT__counter_step = ((IData)(vlSelfRef.wr_controller__DOT__write_all)
                                                   ? (IData)(vlSelfRef.wr_controller__DOT__busy_clk_l)
                                                   : (IData)(vlSelfRef.write_ready));
    vlSelfRef.c_fsm__DOT__in_rw = vlSelfRef.in_write;
    if ((0U == (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
        if ((0U != vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__count_reg)) {
            vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__count_next 
                = (0x3ffffffU & (vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__count_reg 
                                 - (IData)(1U)));
        }
        vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__wr_en = 1U;
        vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__b_we 
            = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__wr_en;
        vlSelfRef.mshr_deq_id = vlSelfRef.mshr_inst__DOT__deq_id;
        vlSelfRef.f_unit__DOT__prefetch = vlSelfRef.prefetch;
        vlSelfRef.f_unit__DOT__trans_done = vlSelfRef.trans_done;
        vlSelfRef.sec_address_translator__DOT__num_gen__DOT__request 
            = vlSelfRef.sec_address_translator__DOT__in_done;
        vlSelfRef.mshr_deq_data = vlSelfRef.mshr_inst__DOT__deq_data;
        vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__ram_addr 
            = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__count_reg;
    } else {
        if ((1U != (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
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
        vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__b_we 
            = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__wr_en;
        vlSelfRef.mshr_deq_id = vlSelfRef.mshr_inst__DOT__deq_id;
        vlSelfRef.f_unit__DOT__prefetch = vlSelfRef.prefetch;
        vlSelfRef.f_unit__DOT__trans_done = vlSelfRef.trans_done;
        vlSelfRef.sec_address_translator__DOT__num_gen__DOT__request 
            = vlSelfRef.sec_address_translator__DOT__in_done;
        vlSelfRef.mshr_deq_data = vlSelfRef.mshr_inst__DOT__deq_data;
    }
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__b_addr 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__ram_addr;
    vlSelfRef.sec_address_translator__DOT__cfg_en = vlSelfRef.secure_request;
    vlSelfRef.sec_address_translator__DOT__cfg_low_bound 
        = vlSelfRef.low_bound;
    vlSelfRef.sec_address_translator__DOT__cfg_high_bound 
        = vlSelfRef.high_bound;
    vlSelfRef.f_unit__DOT__w_prefetch_rd_cam_edge__DOT__signal_in 
        = vlSelfRef.f_unit__DOT__w_prefetch_rd_cam;
    vlSelfRef.f_unit__DOT__w_prefetch_erase_edge__DOT__signal_in 
        = vlSelfRef.f_unit__DOT__w_prefetch_rd_cam;
    vlSelfRef.f_unit__DOT____Vcellinp__rd_cam_counter__rst_n 
        = ((~ (IData)(vlSelfRef.f_unit__DOT__rd_cam_click)) 
           & (IData)(vlSelfRef.rst_n));
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
    vlSelfRef.reg_file__DOT__load_val[0U] = vlSelfRef.load_val[0U];
    vlSelfRef.reg_file__DOT__load_val[1U] = vlSelfRef.load_val[1U];
    vlSelfRef.reg_file__DOT__load_val[2U] = vlSelfRef.load_val[2U];
    vlSelfRef.reg_file__DOT__load_val[3U] = vlSelfRef.load_val[3U];
    vlSelfRef.reg_file__DOT__load_val[4U] = vlSelfRef.load_val[4U];
    vlSelfRef.reg_file__DOT__load_val[5U] = vlSelfRef.load_val[5U];
    vlSelfRef.sec_address_translator__DOT__cfg_load_val[0U] 
        = vlSelfRef.load_val[0U];
    vlSelfRef.sec_address_translator__DOT__cfg_load_val[1U] 
        = vlSelfRef.load_val[1U];
    vlSelfRef.sec_address_translator__DOT__cfg_load_val[2U] 
        = vlSelfRef.load_val[2U];
    vlSelfRef.sec_address_translator__DOT__cfg_load_val[3U] 
        = vlSelfRef.load_val[3U];
    vlSelfRef.sec_address_translator__DOT__cfg_load_val[4U] 
        = vlSelfRef.load_val[4U];
    vlSelfRef.sec_address_translator__DOT__cfg_load_val[5U] 
        = vlSelfRef.load_val[5U];
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
    vlSelfRef.mshr_deq_opcode = vlSelfRef.mshr_inst__DOT__deq_opcode;
    vlSelfRef.mshr_deq_source = vlSelfRef.mshr_inst__DOT__deq_source;
    vlSelfRef.sec_address_translator__DOT__rng_val 
        = (0xfU & vlSelfRef.sec_address_translator__DOT__num_gen__DOT__out_w);
    vlSelfRef.mshr_inst__DOT__fill_valid = vlSelfRef.req_done_pulse;
    vlSelfRef.cfg_data_out = vlSelfRef.reg_file__DOT__out_data;
    vlSelfRef.f_unit__DOT__req_ready = vlSelfRef.req_ready;
    vlSelfRef.mshr_deq_addr = vlSelfRef.mshr_inst__DOT__deq_addr;
    vlSelfRef.refill_word_idx = (0xfU & (vlSelfRef.mshr_inst__DOT__deq_addr 
                                         >> 2U));
    vlSelfRef.mshr_deq_valid = vlSelfRef.mshr_inst__DOT__deq_valid;
    vlSelfRef.refill_out_valid = vlSelfRef.mshr_inst__DOT__deq_valid;
    vlSelfRef.f_unit__DOT__trans_in_addr = vlSelfRef.trans_in_addr;
    vlSelfRef.f_unit__DOT__w_prefetch_wr_cam = (((IData)(vlSelfRef.f_unit__DOT__req_done_keep) 
                                                 | (IData)(vlSelfRef.rd_controller__DOT__cache_read_done)) 
                                                & (IData)(vlSelfRef.f_unit__DOT__w_prefetch_erase_done));
    vlSelfRef.wr_controller__DOT____VdfgRegularize_h5cc42551_0_0 
        = ((IData)(vlSelfRef.wr_controller__DOT__counter_offset_inst__DOT__done) 
           | ((~ (IData)(vlSelfRef.wr_controller__DOT__write_all)) 
              & (1U == (IData)(vlSelfRef.wr_controller__DOT__counter_wire))));
    vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.write_ready 
        = vlSelfRef.cache_write_ready;
    vlSelfRef.f_unit__DOT__lifetime = (0xffU & (~ (IData)(vlSelfRef.f_unit__DOT__lifetime_p)));
    vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.write_through 
        = vlSelfRef.write_through;
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
    vlSelfRef.f_unit__DOT__req_done = vlSelfRef.req_done;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_raw_out[0U] 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__match_data;
    vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__input_unencoded 
        = vlSelfRef.mshr_inst__DOT__free_slots;
    vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__input_unencoded 
        = (3U & ((IData)(vlSelfRef.mshr_inst__DOT__free_slots) 
                 >> 0U));
    vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__input_unencoded 
        = (3U & ((IData)(vlSelfRef.mshr_inst__DOT__free_slots) 
                 >> 2U));
    vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded 
        = (1U & (~ (IData)(vlSelfRef.mshr_inst__DOT__free_slots)));
    vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded 
        = (1U & (~ ((IData)(vlSelfRef.mshr_inst__DOT__free_slots) 
                    >> 2U)));
    vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid 
        = (0U != (3U & ((IData)(vlSelfRef.mshr_inst__DOT__free_slots) 
                        >> 2U)));
    vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid 
        = (0U != (3U & (IData)(vlSelfRef.mshr_inst__DOT__free_slots)));
    vlSelfRef.rd_controller__DOT__counter_offset_inst__DOT__clk 
        = vlSelfRef.rd_controller__DOT__clk_l;
    vlSelfRef.wr_controller__DOT__counter_offset_inst__DOT__clk 
        = vlSelfRef.wr_controller__DOT__clk_l;
    vlSelfRef.reg_file__DOT__D_FF_l_va_0__DOT__din 
        = vlSelfRef.reg_file__DOT__in_data;
    vlSelfRef.reg_file__DOT__D_FF_l_va_1__DOT__din 
        = vlSelfRef.reg_file__DOT__in_data;
    vlSelfRef.reg_file__DOT__D_FF_l_va_2__DOT__din 
        = vlSelfRef.reg_file__DOT__in_data;
    vlSelfRef.reg_file__DOT__D_FF_l_va_3__DOT__din 
        = vlSelfRef.reg_file__DOT__in_data;
    vlSelfRef.reg_file__DOT__D_FF_l_va_4__DOT__din 
        = vlSelfRef.reg_file__DOT__in_data;
    vlSelfRef.reg_file__DOT__D_FF_addr__DOT__set = vlSelfRef.reg_file__DOT__in_valid;
    vlSelfRef.reg_file__DOT__D_FF_addr__DOT__din = vlSelfRef.reg_file__DOT__in_addr;
    vlSelfRef.reg_file__DOT__D_FF_write__DOT__set = vlSelfRef.reg_file__DOT__set_write;
    vlSelfRef.reg_file__DOT__D_FF_secure__DOT__set 
        = vlSelfRef.reg_file__DOT__set_secure;
    vlSelfRef.reg_file__DOT__D_FF_l_b__DOT__set = vlSelfRef.reg_file__DOT__set_low_bound;
    vlSelfRef.reg_file__DOT__D_FF_h_b__DOT__set = vlSelfRef.reg_file__DOT__set_high_bound;
    vlSelfRef.reg_file__DOT__D_FF_pf__DOT__set = vlSelfRef.reg_file__DOT__set_prefetch;
    vlSelfRef.reg_file__DOT__D_FF_l_va_0__DOT__set 
        = vlSelfRef.reg_file__DOT__set_load_val_0;
    vlSelfRef.reg_file__DOT__D_FF_l_va_1__DOT__set 
        = vlSelfRef.reg_file__DOT__set_load_val_1;
    vlSelfRef.reg_file__DOT__D_FF_l_va_2__DOT__set 
        = vlSelfRef.reg_file__DOT__set_load_val_2;
    vlSelfRef.reg_file__DOT__D_FF_l_va_3__DOT__set 
        = vlSelfRef.reg_file__DOT__set_load_val_3;
    vlSelfRef.reg_file__DOT__D_FF_l_va_4__DOT__set 
        = vlSelfRef.reg_file__DOT__set_load_val_4;
    vlSelfRef.reg_file__DOT__D_FF_l_va_5__DOT__set 
        = vlSelfRef.reg_file__DOT__set_load_val_5;
    vlSelfRef.reg_file__DOT__load_val_edge__DOT__signal_in 
        = vlSelfRef.reg_file__DOT__set_load_val;
    vlSelfRef.load = ((~ (IData)(vlSelfRef.reg_file__DOT__load_val_edge__DOT__signal_out)) 
                      & (IData)(vlSelfRef.reg_file__DOT__set_load_val));
    vlSelfRef.d_array__DOT__D_FF_valid__DOT__clk = vlSelfRef.d_array__DOT__clk;
    vlSelfRef.d_array__DOT__latency_counter__DOT__clk 
        = vlSelfRef.d_array__DOT__clk;
    vlSelfRef.sec_address_translator__DOT__num_gen__DOT__clk 
        = vlSelfRef.sec_address_translator__DOT__clk;
    vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__clk 
        = vlSelfRef.sec_address_translator__DOT__clk;
    vlSelfRef.reg_file__DOT__load_val_edge__DOT__clk 
        = vlSelfRef.reg_file__DOT__clk;
    vlSelfRef.reg_file__DOT__D_FF_write__DOT__clk = vlSelfRef.reg_file__DOT__clk;
    vlSelfRef.reg_file__DOT__D_FF_secure__DOT__clk 
        = vlSelfRef.reg_file__DOT__clk;
    vlSelfRef.reg_file__DOT__D_FF_l_b__DOT__clk = vlSelfRef.reg_file__DOT__clk;
    vlSelfRef.reg_file__DOT__D_FF_h_b__DOT__clk = vlSelfRef.reg_file__DOT__clk;
    vlSelfRef.reg_file__DOT__D_FF_pf__DOT__clk = vlSelfRef.reg_file__DOT__clk;
    vlSelfRef.reg_file__DOT__D_FF_l_va_0__DOT__clk 
        = vlSelfRef.reg_file__DOT__clk;
    vlSelfRef.reg_file__DOT__D_FF_l_va_1__DOT__clk 
        = vlSelfRef.reg_file__DOT__clk;
    vlSelfRef.reg_file__DOT__D_FF_l_va_2__DOT__clk 
        = vlSelfRef.reg_file__DOT__clk;
    vlSelfRef.reg_file__DOT__D_FF_l_va_3__DOT__clk 
        = vlSelfRef.reg_file__DOT__clk;
    vlSelfRef.reg_file__DOT__D_FF_l_va_4__DOT__clk 
        = vlSelfRef.reg_file__DOT__clk;
    vlSelfRef.reg_file__DOT__D_FF_l_va_5__DOT__clk 
        = vlSelfRef.reg_file__DOT__clk;
    vlSelfRef.reg_file__DOT__D_FF_addr__DOT__clk = vlSelfRef.reg_file__DOT__clk;
    vlSelfRef.f_unit__DOT__empty_tracker__DOT__clk 
        = vlSelfRef.f_unit__DOT__clk;
    vlSelfRef.f_unit__DOT__w_prefetch_rd_cam_edge__DOT__clk 
        = vlSelfRef.f_unit__DOT__clk;
    vlSelfRef.f_unit__DOT__w_prefetch_erase_edge__DOT__clk 
        = vlSelfRef.f_unit__DOT__clk;
    vlSelfRef.f_unit__DOT__w_prefetch_wr_cam_edge__DOT__clk 
        = vlSelfRef.f_unit__DOT__clk;
    vlSelfRef.f_unit__DOT__w_compare_rd_cam_edge__DOT__clk 
        = vlSelfRef.f_unit__DOT__clk;
    vlSelfRef.f_unit__DOT__w_compare_rd_mem_edge__DOT__clk 
        = vlSelfRef.f_unit__DOT__clk;
    vlSelfRef.f_unit__DOT__rd_mem_counter__DOT__clk 
        = vlSelfRef.f_unit__DOT__clk;
    vlSelfRef.f_unit__DOT__rd_cam_counter__DOT__clk 
        = vlSelfRef.f_unit__DOT__clk;
    vlSelfRef.f_unit__DOT__erase_cam_counter__DOT__clk 
        = vlSelfRef.f_unit__DOT__clk;
    vlSelfRef.f_unit__DOT__wr_mem_counter__DOT__clk 
        = vlSelfRef.f_unit__DOT__clk;
    vlSelfRef.f_unit__DOT__genblk1__BRA__0__KET____DOT__stream_counter__DOT__clk 
        = vlSelfRef.f_unit__DOT__clk;
    vlSelfRef.f_unit__DOT__genblk1__BRA__1__KET____DOT__stream_counter__DOT__clk 
        = vlSelfRef.f_unit__DOT__clk;
    vlSelfRef.f_unit__DOT__genblk1__BRA__2__KET____DOT__stream_counter__DOT__clk 
        = vlSelfRef.f_unit__DOT__clk;
    vlSelfRef.f_unit__DOT__genblk1__BRA__3__KET____DOT__stream_counter__DOT__clk 
        = vlSelfRef.f_unit__DOT__clk;
    vlSelfRef.f_unit__DOT__data_buffer__DOT__clk = vlSelfRef.f_unit__DOT__clk;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__clk = vlSelfRef.f_unit__DOT__clk;
    vlSelfRef.f_unit__DOT__data_buffer__DOT__rst_n 
        = vlSelfRef.f_unit__DOT__rst_n;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__rst 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__rst;
    vlSelfRef.d_array__DOT__D_FF_valid__DOT__rst_n 
        = vlSelfRef.d_array__DOT__rst_n;
    vlSelfRef.f_unit__DOT__rd_mem_counter__DOT__rst_n 
        = vlSelfRef.f_unit__DOT____Vcellinp__rd_mem_counter__rst_n;
    vlSelfRef.f_unit__DOT__erase_cam_counter__DOT__rst_n 
        = vlSelfRef.f_unit__DOT____Vcellinp__erase_cam_counter__rst_n;
    vlSelfRef.f_unit__DOT__wr_mem_counter__DOT__rst_n 
        = vlSelfRef.f_unit__DOT____Vcellinp__wr_mem_counter__rst_n;
    vlSelfRef.sec_address_translator__DOT__num_gen__DOT__rst_n 
        = vlSelfRef.sec_address_translator__DOT__rst_n;
    vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__rst_n 
        = vlSelfRef.sec_address_translator__DOT__rst_n;
    vlSelfRef.reg_file__DOT__D_FF_write__DOT__rst_n 
        = vlSelfRef.reg_file__DOT__rst_n;
    vlSelfRef.reg_file__DOT__D_FF_secure__DOT__rst_n 
        = vlSelfRef.reg_file__DOT__rst_n;
    vlSelfRef.reg_file__DOT__D_FF_l_b__DOT__rst_n = vlSelfRef.reg_file__DOT__rst_n;
    vlSelfRef.reg_file__DOT__D_FF_h_b__DOT__rst_n = vlSelfRef.reg_file__DOT__rst_n;
    vlSelfRef.reg_file__DOT__D_FF_pf__DOT__rst_n = vlSelfRef.reg_file__DOT__rst_n;
    vlSelfRef.reg_file__DOT__D_FF_l_va_0__DOT__rst_n 
        = vlSelfRef.reg_file__DOT__rst_n;
    vlSelfRef.reg_file__DOT__D_FF_l_va_1__DOT__rst_n 
        = vlSelfRef.reg_file__DOT__rst_n;
    vlSelfRef.reg_file__DOT__D_FF_l_va_2__DOT__rst_n 
        = vlSelfRef.reg_file__DOT__rst_n;
    vlSelfRef.reg_file__DOT__D_FF_l_va_3__DOT__rst_n 
        = vlSelfRef.reg_file__DOT__rst_n;
    vlSelfRef.reg_file__DOT__D_FF_l_va_4__DOT__rst_n 
        = vlSelfRef.reg_file__DOT__rst_n;
    vlSelfRef.reg_file__DOT__D_FF_l_va_5__DOT__rst_n 
        = vlSelfRef.reg_file__DOT__rst_n;
    vlSelfRef.reg_file__DOT__D_FF_addr__DOT__rst_n 
        = vlSelfRef.reg_file__DOT__rst_n;
    vlSelfRef.mshr_inst__DOT__addr_matches = (((0xfffffff8U 
                                                & ((IData)(vlSelfRef.mshr_inst__DOT__valid_table) 
                                                   & ((vlSelfRef.mshr_inst__DOT__addr_table
                                                       [3U] 
                                                       == vlSelfRef.mshr_inst__DOT__incoming_line_addr) 
                                                      << 3U))) 
                                               | (0xfffffffcU 
                                                  & ((IData)(vlSelfRef.mshr_inst__DOT__valid_table) 
                                                     & ((vlSelfRef.mshr_inst__DOT__addr_table
                                                         [2U] 
                                                         == vlSelfRef.mshr_inst__DOT__incoming_line_addr) 
                                                        << 2U)))) 
                                              | ((0xfffffffeU 
                                                  & ((IData)(vlSelfRef.mshr_inst__DOT__valid_table) 
                                                     & ((vlSelfRef.mshr_inst__DOT__addr_table
                                                         [1U] 
                                                         == vlSelfRef.mshr_inst__DOT__incoming_line_addr) 
                                                        << 1U))) 
                                                 | ((IData)(vlSelfRef.mshr_inst__DOT__valid_table) 
                                                    & (vlSelfRef.mshr_inst__DOT__addr_table
                                                       [0U] 
                                                       == vlSelfRef.mshr_inst__DOT__incoming_line_addr))));
    vlSelfRef.rd_controller__DOT__counter_offset_inst__DOT__start 
        = vlSelfRef.rd_controller__DOT__mem_read_done;
    vlSelfRef.wr_controller__DOT__counter_offset_inst__DOT__start 
        = vlSelfRef.wr_controller__DOT__counter_step;
    vlSelfRef.wr_controller__DOT__counter_offset_inst__DOT__done_w 
        = ((0xfU == (IData)(vlSelfRef.wr_controller__DOT__counter_offset_inst__DOT__counter)) 
           & (IData)(vlSelfRef.wr_controller__DOT__counter_step));
    vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__en 
        = vlSelfRef.sec_address_translator__DOT__cfg_en;
    vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__low_bound 
        = vlSelfRef.sec_address_translator__DOT__cfg_low_bound;
    vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__high_bound 
        = vlSelfRef.sec_address_translator__DOT__cfg_high_bound;
    vlSelfRef.f_unit__DOT__rd_cam_counter__DOT__rst_n 
        = vlSelfRef.f_unit__DOT____Vcellinp__rd_cam_counter__rst_n;
    vlSelfRef.f_unit__DOT__genblk1__BRA__0__KET____DOT__stream_counter__DOT__rst_n 
        = vlSelfRef.f_unit__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__stream_counter__rst_n;
    vlSelfRef.f_unit__DOT__genblk1__BRA__1__KET____DOT__stream_counter__DOT__rst_n 
        = vlSelfRef.f_unit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__stream_counter__rst_n;
    vlSelfRef.f_unit__DOT__genblk1__BRA__2__KET____DOT__stream_counter__DOT__rst_n 
        = vlSelfRef.f_unit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__stream_counter__rst_n;
    vlSelfRef.f_unit__DOT__genblk1__BRA__3__KET____DOT__stream_counter__DOT__rst_n 
        = vlSelfRef.f_unit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__stream_counter__rst_n;
    vlSelfRef.sec_address_translator__DOT__num_gen__DOT__in[0U] 
        = vlSelfRef.sec_address_translator__DOT__cfg_load_val[0U];
    vlSelfRef.sec_address_translator__DOT__num_gen__DOT__in[1U] 
        = vlSelfRef.sec_address_translator__DOT__cfg_load_val[1U];
    vlSelfRef.sec_address_translator__DOT__num_gen__DOT__in[2U] 
        = vlSelfRef.sec_address_translator__DOT__cfg_load_val[2U];
    vlSelfRef.sec_address_translator__DOT__num_gen__DOT__in[3U] 
        = vlSelfRef.sec_address_translator__DOT__cfg_load_val[3U];
    vlSelfRef.sec_address_translator__DOT__num_gen__DOT__in[4U] 
        = vlSelfRef.sec_address_translator__DOT__cfg_load_val[4U];
    vlSelfRef.sec_address_translator__DOT__num_gen__DOT__in[5U] 
        = vlSelfRef.sec_address_translator__DOT__cfg_load_val[5U];
    vlSelfRef.rd_controller__DOT__mem_read_valid = 
        ((~ (IData)(vlSelfRef.rd_controller__DOT__counter_offset_inst__DOT__done)) 
         & (IData)(vlSelfRef.rd_controller__DOT__mem_read_o_valid));
    vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__rng_val 
        = vlSelfRef.sec_address_translator__DOT__rng_val;
    vlSelfRef.sec_address_translator__DOT__num_gen__DOT__out 
        = vlSelfRef.sec_address_translator__DOT__rng_val;
    vlSelfRef.rd_controller__DOT__mem_read_addr = ((IData)(vlSelfRef.rd_controller__DOT__counter_offset_inst__DOT__done)
                                                    ? 0U
                                                    : vlSelfRef.rd_controller__DOT__mem_read_o_addr);
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
    vlSelfRef.f_unit__DOT__w_prefetch_wr_cam_edge__DOT__signal_in 
        = vlSelfRef.f_unit__DOT__w_prefetch_wr_cam;
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
    vlSelfRef.f_unit__DOT__empty_tracker__DOT__sig_in 
        = vlSelfRef.f_unit__DOT__lifetime;
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
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_many_raw = 0xfU;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_many_raw 
        = ((IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_many_raw) 
           & vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_raw_out
           [0U]);
    vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__out1 
        = vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded;
    vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_unencoded 
        = (3U & ((IData)(1U) << (IData)(vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded)));
    vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__out2 
        = vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded;
    vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_unencoded 
        = (3U & ((IData)(1U) << (IData)(vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded)));
    vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__valid2 
        = vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid;
    if (vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid) {
        vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__valid1 = 1U;
        vlSelfRef.mshr_inst__DOT__alloc_id = vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded;
    } else {
        vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__valid1 = 0U;
        vlSelfRef.mshr_inst__DOT__alloc_id = (2U | (IData)(vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded));
    }
    vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__output_valid 
        = ((IData)(vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid) 
           | (IData)(vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid));
    vlSelfRef.sec_address_translator__DOT__cfg_load 
        = vlSelfRef.load;
    vlSelfRef.reg_file__DOT__load = vlSelfRef.load;
    vlSelfRef.sec_address_translator__DOT____Vcellinp__num_gen__valid 
        = ((IData)(vlSelfRef.reg_file__DOT__D_FF_secure__DOT__data) 
           & (IData)(vlSelfRef.load));
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__clka 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__clk;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__clk 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__clk;
    vlSelfRef.mshr_inst__DOT__alloc_match = (0U != (IData)(vlSelfRef.mshr_inst__DOT__addr_matches));
    vlSelfRef.mshr_inst__DOT__tail_candidates = ((~ (IData)(vlSelfRef.mshr_inst__DOT__next_table)) 
                                                 & (IData)(vlSelfRef.mshr_inst__DOT__addr_matches));
    vlSelfRef.read_valid = vlSelfRef.rd_controller__DOT__mem_read_valid;
    vlSelfRef.read_addr = vlSelfRef.rd_controller__DOT__mem_read_addr;
    vlSelfRef.write_valid = vlSelfRef.wr_controller__DOT__mem_write_valid;
    vlSelfRef.write_data = vlSelfRef.wr_controller__DOT__mem_write_data;
    vlSelfRef.write_addr = vlSelfRef.wr_controller__DOT__mem_write_addr;
    vlSelfRef.write_byteen = vlSelfRef.wr_controller__DOT__mem_write_byteen;
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
    vlSelfRef.mshr_inst__DOT__next_free_id = vlSelfRef.mshr_inst__DOT__alloc_id;
    vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__output_encoded 
        = vlSelfRef.mshr_inst__DOT__alloc_id;
    vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__output_unencoded 
        = (0xfU & ((IData)(1U) << (IData)(vlSelfRef.mshr_inst__DOT__alloc_id)));
    vlSelfRef.mshr_alloc_id = vlSelfRef.mshr_inst__DOT__alloc_id;
    vlSelfRef.mshr_alloc_ready = vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__output_valid;
    vlSelfRef.mshr_inst__DOT__alloc_ready = vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__output_valid;
    vlSelfRef.mshr_inst__DOT__free_slot_exists = vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__output_valid;
    vlSelfRef.sec_address_translator__DOT__num_gen__DOT__valid 
        = vlSelfRef.sec_address_translator__DOT____Vcellinp__num_gen__valid;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__a_clk 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__clk;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__b_clk 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__clk;
    vlSelfRef.mshr_alloc_match = vlSelfRef.mshr_inst__DOT__alloc_match;
    vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__input_unencoded 
        = vlSelfRef.mshr_inst__DOT__tail_candidates;
    vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__input_unencoded 
        = (3U & ((IData)(vlSelfRef.mshr_inst__DOT__tail_candidates) 
                 >> 0U));
    vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__input_unencoded 
        = (3U & ((IData)(vlSelfRef.mshr_inst__DOT__tail_candidates) 
                 >> 2U));
    vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid 
        = (0U != (3U & ((IData)(vlSelfRef.mshr_inst__DOT__tail_candidates) 
                        >> 2U)));
    vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded 
        = (1U & (~ (IData)(vlSelfRef.mshr_inst__DOT__tail_candidates)));
    vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded 
        = (1U & (~ ((IData)(vlSelfRef.mshr_inst__DOT__tail_candidates) 
                    >> 2U)));
    vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid 
        = (0U != (3U & (IData)(vlSelfRef.mshr_inst__DOT__tail_candidates)));
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
    if (vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid) {
        vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__valid1 = 1U;
        vlSelfRef.f_unit__DOT__match_addr = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded;
    } else {
        vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__valid1 = 0U;
        vlSelfRef.f_unit__DOT__match_addr = (2U | (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded));
    }
    vlSelfRef.f_unit__DOT__match = ((IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid) 
                                    | (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid));
    vlSelfRef.c_fsm__DOT__in_mshr_id = vlSelfRef.mshr_alloc_id;
    vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__valid2 
        = vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid;
    vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__out1 
        = vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded;
    vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_unencoded 
        = (3U & ((IData)(1U) << (IData)(vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded)));
    vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__out2 
        = vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded;
    vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_unencoded 
        = (3U & ((IData)(1U) << (IData)(vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded)));
    vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__valid1 
        = vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid;
    vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__output_valid 
        = ((IData)(vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid) 
           | (IData)(vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid));
    vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__output_encoded 
        = ((IData)(vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid)
            ? (IData)(vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded)
            : (2U | (IData)(vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded)));
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
    vlSelfRef.f_unit__DOT__write_enable = 0U;
    vlSelfRef.f_unit__DOT__write_data = 0U;
    vlSelfRef.f_unit__DOT__write_data = 0U;
    vlSelfRef.f_unit__DOT__write_addr = 0U;
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
                        if (((IData)(vlSelfRef.req_done) 
                             | (IData)(vlSelfRef.f_unit__DOT__req_done_keep))) {
                            if ((1U & (~ (IData)(vlSelfRef.f_unit__DOT__w_prefetch_wr_cam_done)))) {
                                vlSelfRef.f_unit__DOT__write_enable = 1U;
                                vlSelfRef.f_unit__DOT__write_data 
                                    = (vlSelfRef.trans_in_addr 
                                       >> 6U);
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
    vlSelfRef.mshr_inst__DOT__alloc_match_id = vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__output_encoded;
    vlSelfRef.mshr_alloc_match_id = vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__output_encoded;
    vlSelfRef.mshr_inst__DOT__tail_idx = vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__output_encoded;
    vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__output_unencoded 
        = (0xfU & ((IData)(1U) << (IData)(vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__output_encoded)));
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__match_single 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__output_unencoded;
    vlSelfRef.f_unit__DOT__match_single = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__output_unencoded;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__match_single 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__priority_encoder_inst__DOT__output_unencoded;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_delete_next 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_delete_reg;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__write_delete 
        = vlSelfRef.f_unit__DOT__write_delete;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__write_enable 
        = vlSelfRef.f_unit__DOT__write_enable;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_next = 1U;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__write_data 
        = vlSelfRef.f_unit__DOT__write_data;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_data_padded 
        = vlSelfRef.f_unit__DOT__write_data;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_addr_next 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_addr_reg;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__write_addr 
        = vlSelfRef.f_unit__DOT__write_addr;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__clear_bit = 0U;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__set_bit = 0U;
    if ((0U == (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
        vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_next 
            = ((0U == vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__count_reg)
                ? 1U : 0U);
        vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__clear_bit = 0xfU;
        vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__set_bit = 0U;
    } else {
        if ((1U == (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
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
        if ((1U != (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
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
    }
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_delete 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__write_delete;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_enable 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__write_enable;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_data 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__write_data;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_data_padded_next 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_data_padded_reg;
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
        if ((1U == (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__state_reg))) {
            vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_delete_next 
                = vlSelfRef.f_unit__DOT__write_delete;
            vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_addr_next 
                = vlSelfRef.f_unit__DOT__write_addr;
            vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_data_padded_next 
                = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_data_padded;
        }
    }
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__write_addr 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__write_addr;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__b_din 
        = (((~ (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__clear_bit)) 
            & (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__b_dout_reg)) 
           | (IData)(vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__set_bit));
}

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h93e1b771_0;

VL_INLINE_OPT void Vtop_cache_controller_nb___ico_sequent__TOP__cache_system_tl_top__cache_inst__1(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___ico_sequent__TOP__cache_system_tl_top__cache_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdfgRegularize_haae396c2_4_0;
    __VdfgRegularize_haae396c2_4_0 = 0;
    CData/*0:0*/ __VdfgRegularize_haae396c2_4_9;
    __VdfgRegularize_haae396c2_4_9 = 0;
    CData/*0:0*/ __VdfgRegularize_haae396c2_4_10;
    __VdfgRegularize_haae396c2_4_10 = 0;
    CData/*0:0*/ __VdfgRegularize_haae396c2_4_11;
    __VdfgRegularize_haae396c2_4_11 = 0;
    CData/*0:0*/ __VdfgRegularize_haae396c2_4_12;
    __VdfgRegularize_haae396c2_4_12 = 0;
    CData/*0:0*/ __VdfgRegularize_haae396c2_4_13;
    __VdfgRegularize_haae396c2_4_13 = 0;
    CData/*0:0*/ __VdfgRegularize_haae396c2_4_14;
    __VdfgRegularize_haae396c2_4_14 = 0;
    CData/*0:0*/ __VdfgRegularize_haae396c2_4_15;
    __VdfgRegularize_haae396c2_4_15 = 0;
    CData/*0:0*/ __VdfgRegularize_haae396c2_4_16;
    __VdfgRegularize_haae396c2_4_16 = 0;
    CData/*0:0*/ __VdfgRegularize_haae396c2_4_17;
    __VdfgRegularize_haae396c2_4_17 = 0;
    CData/*0:0*/ __VdfgRegularize_haae396c2_4_18;
    __VdfgRegularize_haae396c2_4_18 = 0;
    CData/*0:0*/ __VdfgRegularize_haae396c2_4_19;
    __VdfgRegularize_haae396c2_4_19 = 0;
    CData/*0:0*/ __VdfgRegularize_haae396c2_4_20;
    __VdfgRegularize_haae396c2_4_20 = 0;
    CData/*0:0*/ __VdfgRegularize_haae396c2_4_21;
    __VdfgRegularize_haae396c2_4_21 = 0;
    CData/*0:0*/ __VdfgRegularize_haae396c2_4_22;
    __VdfgRegularize_haae396c2_4_22 = 0;
    CData/*0:0*/ __VdfgRegularize_haae396c2_4_23;
    __VdfgRegularize_haae396c2_4_23 = 0;
    // Body
    vlSelfRef.fsm_accessed = vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.fsm_accessed;
    vlSelfRef.tag_ready = vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.fsm_ready;
    vlSelfRef.cache_write_strb = vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.write_strb;
    vlSelfRef.cache_write_addr = vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.write_addr;
    vlSelfRef.fsm_hit = vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.fsm_hit;
    vlSelfRef.d_array__DOT__out_data_array[0U][0U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array.out_data[0U];
    vlSelfRef.d_array__DOT__out_data_array[0U][1U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array.out_data[1U];
    vlSelfRef.d_array__DOT__out_data_array[0U][2U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array.out_data[2U];
    vlSelfRef.d_array__DOT__out_data_array[0U][3U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array.out_data[3U];
    vlSelfRef.d_array__DOT__out_data_array[0U][4U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array.out_data[4U];
    vlSelfRef.d_array__DOT__out_data_array[0U][5U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array.out_data[5U];
    vlSelfRef.d_array__DOT__out_data_array[0U][6U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array.out_data[6U];
    vlSelfRef.d_array__DOT__out_data_array[0U][7U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array.out_data[7U];
    vlSelfRef.d_array__DOT__out_data_array[0U][8U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array.out_data[8U];
    vlSelfRef.d_array__DOT__out_data_array[0U][9U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array.out_data[9U];
    vlSelfRef.d_array__DOT__out_data_array[0U][0xaU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array.out_data[0xaU];
    vlSelfRef.d_array__DOT__out_data_array[0U][0xbU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array.out_data[0xbU];
    vlSelfRef.d_array__DOT__out_data_array[0U][0xcU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array.out_data[0xcU];
    vlSelfRef.d_array__DOT__out_data_array[0U][0xdU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array.out_data[0xdU];
    vlSelfRef.d_array__DOT__out_data_array[0U][0xeU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array.out_data[0xeU];
    vlSelfRef.d_array__DOT__out_data_array[0U][0xfU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array.out_data[0xfU];
    vlSelfRef.d_array__DOT__out_data_array[1U][0U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array.out_data[0U];
    vlSelfRef.d_array__DOT__out_data_array[1U][1U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array.out_data[1U];
    vlSelfRef.d_array__DOT__out_data_array[1U][2U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array.out_data[2U];
    vlSelfRef.d_array__DOT__out_data_array[1U][3U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array.out_data[3U];
    vlSelfRef.d_array__DOT__out_data_array[1U][4U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array.out_data[4U];
    vlSelfRef.d_array__DOT__out_data_array[1U][5U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array.out_data[5U];
    vlSelfRef.d_array__DOT__out_data_array[1U][6U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array.out_data[6U];
    vlSelfRef.d_array__DOT__out_data_array[1U][7U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array.out_data[7U];
    vlSelfRef.d_array__DOT__out_data_array[1U][8U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array.out_data[8U];
    vlSelfRef.d_array__DOT__out_data_array[1U][9U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array.out_data[9U];
    vlSelfRef.d_array__DOT__out_data_array[1U][0xaU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array.out_data[0xaU];
    vlSelfRef.d_array__DOT__out_data_array[1U][0xbU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array.out_data[0xbU];
    vlSelfRef.d_array__DOT__out_data_array[1U][0xcU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array.out_data[0xcU];
    vlSelfRef.d_array__DOT__out_data_array[1U][0xdU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array.out_data[0xdU];
    vlSelfRef.d_array__DOT__out_data_array[1U][0xeU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array.out_data[0xeU];
    vlSelfRef.d_array__DOT__out_data_array[1U][0xfU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array.out_data[0xfU];
    vlSelfRef.d_array__DOT__out_data_array[2U][0U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array.out_data[0U];
    vlSelfRef.d_array__DOT__out_data_array[2U][1U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array.out_data[1U];
    vlSelfRef.d_array__DOT__out_data_array[2U][2U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array.out_data[2U];
    vlSelfRef.d_array__DOT__out_data_array[2U][3U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array.out_data[3U];
    vlSelfRef.d_array__DOT__out_data_array[2U][4U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array.out_data[4U];
    vlSelfRef.d_array__DOT__out_data_array[2U][5U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array.out_data[5U];
    vlSelfRef.d_array__DOT__out_data_array[2U][6U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array.out_data[6U];
    vlSelfRef.d_array__DOT__out_data_array[2U][7U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array.out_data[7U];
    vlSelfRef.d_array__DOT__out_data_array[2U][8U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array.out_data[8U];
    vlSelfRef.d_array__DOT__out_data_array[2U][9U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array.out_data[9U];
    vlSelfRef.d_array__DOT__out_data_array[2U][0xaU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array.out_data[0xaU];
    vlSelfRef.d_array__DOT__out_data_array[2U][0xbU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array.out_data[0xbU];
    vlSelfRef.d_array__DOT__out_data_array[2U][0xcU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array.out_data[0xcU];
    vlSelfRef.d_array__DOT__out_data_array[2U][0xdU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array.out_data[0xdU];
    vlSelfRef.d_array__DOT__out_data_array[2U][0xeU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array.out_data[0xeU];
    vlSelfRef.d_array__DOT__out_data_array[2U][0xfU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array.out_data[0xfU];
    vlSelfRef.d_array__DOT__out_data_array[3U][0U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array.out_data[0U];
    vlSelfRef.d_array__DOT__out_data_array[3U][1U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array.out_data[1U];
    vlSelfRef.d_array__DOT__out_data_array[3U][2U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array.out_data[2U];
    vlSelfRef.d_array__DOT__out_data_array[3U][3U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array.out_data[3U];
    vlSelfRef.d_array__DOT__out_data_array[3U][4U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array.out_data[4U];
    vlSelfRef.d_array__DOT__out_data_array[3U][5U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array.out_data[5U];
    vlSelfRef.d_array__DOT__out_data_array[3U][6U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array.out_data[6U];
    vlSelfRef.d_array__DOT__out_data_array[3U][7U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array.out_data[7U];
    vlSelfRef.d_array__DOT__out_data_array[3U][8U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array.out_data[8U];
    vlSelfRef.d_array__DOT__out_data_array[3U][9U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array.out_data[9U];
    vlSelfRef.d_array__DOT__out_data_array[3U][0xaU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array.out_data[0xaU];
    vlSelfRef.d_array__DOT__out_data_array[3U][0xbU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array.out_data[0xbU];
    vlSelfRef.d_array__DOT__out_data_array[3U][0xcU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array.out_data[0xcU];
    vlSelfRef.d_array__DOT__out_data_array[3U][0xdU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array.out_data[0xdU];
    vlSelfRef.d_array__DOT__out_data_array[3U][0xeU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array.out_data[0xeU];
    vlSelfRef.d_array__DOT__out_data_array[3U][0xfU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array.out_data[0xfU];
    vlSelfRef.d_array__DOT__out_data_array[4U][0U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array.out_data[0U];
    vlSelfRef.d_array__DOT__out_data_array[4U][1U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array.out_data[1U];
    vlSelfRef.d_array__DOT__out_data_array[4U][2U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array.out_data[2U];
    vlSelfRef.d_array__DOT__out_data_array[4U][3U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array.out_data[3U];
    vlSelfRef.d_array__DOT__out_data_array[4U][4U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array.out_data[4U];
    vlSelfRef.d_array__DOT__out_data_array[4U][5U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array.out_data[5U];
    vlSelfRef.d_array__DOT__out_data_array[4U][6U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array.out_data[6U];
    vlSelfRef.d_array__DOT__out_data_array[4U][7U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array.out_data[7U];
    vlSelfRef.d_array__DOT__out_data_array[4U][8U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array.out_data[8U];
    vlSelfRef.d_array__DOT__out_data_array[4U][9U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array.out_data[9U];
    vlSelfRef.d_array__DOT__out_data_array[4U][0xaU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array.out_data[0xaU];
    vlSelfRef.d_array__DOT__out_data_array[4U][0xbU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array.out_data[0xbU];
    vlSelfRef.d_array__DOT__out_data_array[4U][0xcU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array.out_data[0xcU];
    vlSelfRef.d_array__DOT__out_data_array[4U][0xdU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array.out_data[0xdU];
    vlSelfRef.d_array__DOT__out_data_array[4U][0xeU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array.out_data[0xeU];
    vlSelfRef.d_array__DOT__out_data_array[4U][0xfU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array.out_data[0xfU];
    vlSelfRef.d_array__DOT__out_data_array[5U][0U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array.out_data[0U];
    vlSelfRef.d_array__DOT__out_data_array[5U][1U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array.out_data[1U];
    vlSelfRef.d_array__DOT__out_data_array[5U][2U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array.out_data[2U];
    vlSelfRef.d_array__DOT__out_data_array[5U][3U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array.out_data[3U];
    vlSelfRef.d_array__DOT__out_data_array[5U][4U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array.out_data[4U];
    vlSelfRef.d_array__DOT__out_data_array[5U][5U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array.out_data[5U];
    vlSelfRef.d_array__DOT__out_data_array[5U][6U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array.out_data[6U];
    vlSelfRef.d_array__DOT__out_data_array[5U][7U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array.out_data[7U];
    vlSelfRef.d_array__DOT__out_data_array[5U][8U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array.out_data[8U];
    vlSelfRef.d_array__DOT__out_data_array[5U][9U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array.out_data[9U];
    vlSelfRef.d_array__DOT__out_data_array[5U][0xaU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array.out_data[0xaU];
    vlSelfRef.d_array__DOT__out_data_array[5U][0xbU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array.out_data[0xbU];
    vlSelfRef.d_array__DOT__out_data_array[5U][0xcU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array.out_data[0xcU];
    vlSelfRef.d_array__DOT__out_data_array[5U][0xdU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array.out_data[0xdU];
    vlSelfRef.d_array__DOT__out_data_array[5U][0xeU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array.out_data[0xeU];
    vlSelfRef.d_array__DOT__out_data_array[5U][0xfU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array.out_data[0xfU];
    vlSelfRef.d_array__DOT__out_data_array[6U][0U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array.out_data[0U];
    vlSelfRef.d_array__DOT__out_data_array[6U][1U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array.out_data[1U];
    vlSelfRef.d_array__DOT__out_data_array[6U][2U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array.out_data[2U];
    vlSelfRef.d_array__DOT__out_data_array[6U][3U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array.out_data[3U];
    vlSelfRef.d_array__DOT__out_data_array[6U][4U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array.out_data[4U];
    vlSelfRef.d_array__DOT__out_data_array[6U][5U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array.out_data[5U];
    vlSelfRef.d_array__DOT__out_data_array[6U][6U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array.out_data[6U];
    vlSelfRef.d_array__DOT__out_data_array[6U][7U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array.out_data[7U];
    vlSelfRef.d_array__DOT__out_data_array[6U][8U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array.out_data[8U];
    vlSelfRef.d_array__DOT__out_data_array[6U][9U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array.out_data[9U];
    vlSelfRef.d_array__DOT__out_data_array[6U][0xaU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array.out_data[0xaU];
    vlSelfRef.d_array__DOT__out_data_array[6U][0xbU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array.out_data[0xbU];
    vlSelfRef.d_array__DOT__out_data_array[6U][0xcU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array.out_data[0xcU];
    vlSelfRef.d_array__DOT__out_data_array[6U][0xdU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array.out_data[0xdU];
    vlSelfRef.d_array__DOT__out_data_array[6U][0xeU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array.out_data[0xeU];
    vlSelfRef.d_array__DOT__out_data_array[6U][0xfU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array.out_data[0xfU];
    vlSelfRef.d_array__DOT__out_data_array[7U][0U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array.out_data[0U];
    vlSelfRef.d_array__DOT__out_data_array[7U][1U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array.out_data[1U];
    vlSelfRef.d_array__DOT__out_data_array[7U][2U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array.out_data[2U];
    vlSelfRef.d_array__DOT__out_data_array[7U][3U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array.out_data[3U];
    vlSelfRef.d_array__DOT__out_data_array[7U][4U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array.out_data[4U];
    vlSelfRef.d_array__DOT__out_data_array[7U][5U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array.out_data[5U];
    vlSelfRef.d_array__DOT__out_data_array[7U][6U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array.out_data[6U];
    vlSelfRef.d_array__DOT__out_data_array[7U][7U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array.out_data[7U];
    vlSelfRef.d_array__DOT__out_data_array[7U][8U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array.out_data[8U];
    vlSelfRef.d_array__DOT__out_data_array[7U][9U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array.out_data[9U];
    vlSelfRef.d_array__DOT__out_data_array[7U][0xaU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array.out_data[0xaU];
    vlSelfRef.d_array__DOT__out_data_array[7U][0xbU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array.out_data[0xbU];
    vlSelfRef.d_array__DOT__out_data_array[7U][0xcU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array.out_data[0xcU];
    vlSelfRef.d_array__DOT__out_data_array[7U][0xdU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array.out_data[0xdU];
    vlSelfRef.d_array__DOT__out_data_array[7U][0xeU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array.out_data[0xeU];
    vlSelfRef.d_array__DOT__out_data_array[7U][0xfU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array.out_data[0xfU];
    vlSelfRef.d_array__DOT__out_data_array[8U][0U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array.out_data[0U];
    vlSelfRef.d_array__DOT__out_data_array[8U][1U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array.out_data[1U];
    vlSelfRef.d_array__DOT__out_data_array[8U][2U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array.out_data[2U];
    vlSelfRef.d_array__DOT__out_data_array[8U][3U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array.out_data[3U];
    vlSelfRef.d_array__DOT__out_data_array[8U][4U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array.out_data[4U];
    vlSelfRef.d_array__DOT__out_data_array[8U][5U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array.out_data[5U];
    vlSelfRef.d_array__DOT__out_data_array[8U][6U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array.out_data[6U];
    vlSelfRef.d_array__DOT__out_data_array[8U][7U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array.out_data[7U];
    vlSelfRef.d_array__DOT__out_data_array[8U][8U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array.out_data[8U];
    vlSelfRef.d_array__DOT__out_data_array[8U][9U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array.out_data[9U];
    vlSelfRef.d_array__DOT__out_data_array[8U][0xaU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array.out_data[0xaU];
    vlSelfRef.d_array__DOT__out_data_array[8U][0xbU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array.out_data[0xbU];
    vlSelfRef.d_array__DOT__out_data_array[8U][0xcU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array.out_data[0xcU];
    vlSelfRef.d_array__DOT__out_data_array[8U][0xdU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array.out_data[0xdU];
    vlSelfRef.d_array__DOT__out_data_array[8U][0xeU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array.out_data[0xeU];
    vlSelfRef.d_array__DOT__out_data_array[8U][0xfU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array.out_data[0xfU];
    vlSelfRef.d_array__DOT__out_data_array[9U][0U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array.out_data[0U];
    vlSelfRef.d_array__DOT__out_data_array[9U][1U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array.out_data[1U];
    vlSelfRef.d_array__DOT__out_data_array[9U][2U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array.out_data[2U];
    vlSelfRef.d_array__DOT__out_data_array[9U][3U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array.out_data[3U];
    vlSelfRef.d_array__DOT__out_data_array[9U][4U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array.out_data[4U];
    vlSelfRef.d_array__DOT__out_data_array[9U][5U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array.out_data[5U];
    vlSelfRef.d_array__DOT__out_data_array[9U][6U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array.out_data[6U];
    vlSelfRef.d_array__DOT__out_data_array[9U][7U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array.out_data[7U];
    vlSelfRef.d_array__DOT__out_data_array[9U][8U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array.out_data[8U];
    vlSelfRef.d_array__DOT__out_data_array[9U][9U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array.out_data[9U];
    vlSelfRef.d_array__DOT__out_data_array[9U][0xaU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array.out_data[0xaU];
    vlSelfRef.d_array__DOT__out_data_array[9U][0xbU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array.out_data[0xbU];
    vlSelfRef.d_array__DOT__out_data_array[9U][0xcU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array.out_data[0xcU];
    vlSelfRef.d_array__DOT__out_data_array[9U][0xdU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array.out_data[0xdU];
    vlSelfRef.d_array__DOT__out_data_array[9U][0xeU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array.out_data[0xeU];
    vlSelfRef.d_array__DOT__out_data_array[9U][0xfU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array.out_data[0xfU];
    vlSelfRef.d_array__DOT__out_data_array[0xaU][0U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array.out_data[0U];
    vlSelfRef.d_array__DOT__out_data_array[0xaU][1U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array.out_data[1U];
    vlSelfRef.d_array__DOT__out_data_array[0xaU][2U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array.out_data[2U];
    vlSelfRef.d_array__DOT__out_data_array[0xaU][3U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array.out_data[3U];
    vlSelfRef.d_array__DOT__out_data_array[0xaU][4U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array.out_data[4U];
    vlSelfRef.d_array__DOT__out_data_array[0xaU][5U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array.out_data[5U];
    vlSelfRef.d_array__DOT__out_data_array[0xaU][6U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array.out_data[6U];
    vlSelfRef.d_array__DOT__out_data_array[0xaU][7U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array.out_data[7U];
    vlSelfRef.d_array__DOT__out_data_array[0xaU][8U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array.out_data[8U];
    vlSelfRef.d_array__DOT__out_data_array[0xaU][9U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array.out_data[9U];
    vlSelfRef.d_array__DOT__out_data_array[0xaU][0xaU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array.out_data[0xaU];
    vlSelfRef.d_array__DOT__out_data_array[0xaU][0xbU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array.out_data[0xbU];
    vlSelfRef.d_array__DOT__out_data_array[0xaU][0xcU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array.out_data[0xcU];
    vlSelfRef.d_array__DOT__out_data_array[0xaU][0xdU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array.out_data[0xdU];
    vlSelfRef.d_array__DOT__out_data_array[0xaU][0xeU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array.out_data[0xeU];
    vlSelfRef.d_array__DOT__out_data_array[0xaU][0xfU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array.out_data[0xfU];
    vlSelfRef.d_array__DOT__out_data_array[0xbU][0U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array.out_data[0U];
    vlSelfRef.d_array__DOT__out_data_array[0xbU][1U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array.out_data[1U];
    vlSelfRef.d_array__DOT__out_data_array[0xbU][2U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array.out_data[2U];
    vlSelfRef.d_array__DOT__out_data_array[0xbU][3U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array.out_data[3U];
    vlSelfRef.d_array__DOT__out_data_array[0xbU][4U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array.out_data[4U];
    vlSelfRef.d_array__DOT__out_data_array[0xbU][5U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array.out_data[5U];
    vlSelfRef.d_array__DOT__out_data_array[0xbU][6U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array.out_data[6U];
    vlSelfRef.d_array__DOT__out_data_array[0xbU][7U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array.out_data[7U];
    vlSelfRef.d_array__DOT__out_data_array[0xbU][8U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array.out_data[8U];
    vlSelfRef.d_array__DOT__out_data_array[0xbU][9U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array.out_data[9U];
    vlSelfRef.d_array__DOT__out_data_array[0xbU][0xaU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array.out_data[0xaU];
    vlSelfRef.d_array__DOT__out_data_array[0xbU][0xbU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array.out_data[0xbU];
    vlSelfRef.d_array__DOT__out_data_array[0xbU][0xcU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array.out_data[0xcU];
    vlSelfRef.d_array__DOT__out_data_array[0xbU][0xdU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array.out_data[0xdU];
    vlSelfRef.d_array__DOT__out_data_array[0xbU][0xeU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array.out_data[0xeU];
    vlSelfRef.d_array__DOT__out_data_array[0xbU][0xfU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array.out_data[0xfU];
    vlSelfRef.d_array__DOT__out_data_array[0xcU][0U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array.out_data[0U];
    vlSelfRef.d_array__DOT__out_data_array[0xcU][1U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array.out_data[1U];
    vlSelfRef.d_array__DOT__out_data_array[0xcU][2U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array.out_data[2U];
    vlSelfRef.d_array__DOT__out_data_array[0xcU][3U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array.out_data[3U];
    vlSelfRef.d_array__DOT__out_data_array[0xcU][4U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array.out_data[4U];
    vlSelfRef.d_array__DOT__out_data_array[0xcU][5U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array.out_data[5U];
    vlSelfRef.d_array__DOT__out_data_array[0xcU][6U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array.out_data[6U];
    vlSelfRef.d_array__DOT__out_data_array[0xcU][7U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array.out_data[7U];
    vlSelfRef.d_array__DOT__out_data_array[0xcU][8U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array.out_data[8U];
    vlSelfRef.d_array__DOT__out_data_array[0xcU][9U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array.out_data[9U];
    vlSelfRef.d_array__DOT__out_data_array[0xcU][0xaU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array.out_data[0xaU];
    vlSelfRef.d_array__DOT__out_data_array[0xcU][0xbU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array.out_data[0xbU];
    vlSelfRef.d_array__DOT__out_data_array[0xcU][0xcU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array.out_data[0xcU];
    vlSelfRef.d_array__DOT__out_data_array[0xcU][0xdU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array.out_data[0xdU];
    vlSelfRef.d_array__DOT__out_data_array[0xcU][0xeU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array.out_data[0xeU];
    vlSelfRef.d_array__DOT__out_data_array[0xcU][0xfU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array.out_data[0xfU];
    vlSelfRef.d_array__DOT__out_data_array[0xdU][0U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array.out_data[0U];
    vlSelfRef.d_array__DOT__out_data_array[0xdU][1U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array.out_data[1U];
    vlSelfRef.d_array__DOT__out_data_array[0xdU][2U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array.out_data[2U];
    vlSelfRef.d_array__DOT__out_data_array[0xdU][3U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array.out_data[3U];
    vlSelfRef.d_array__DOT__out_data_array[0xdU][4U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array.out_data[4U];
    vlSelfRef.d_array__DOT__out_data_array[0xdU][5U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array.out_data[5U];
    vlSelfRef.d_array__DOT__out_data_array[0xdU][6U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array.out_data[6U];
    vlSelfRef.d_array__DOT__out_data_array[0xdU][7U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array.out_data[7U];
    vlSelfRef.d_array__DOT__out_data_array[0xdU][8U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array.out_data[8U];
    vlSelfRef.d_array__DOT__out_data_array[0xdU][9U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array.out_data[9U];
    vlSelfRef.d_array__DOT__out_data_array[0xdU][0xaU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array.out_data[0xaU];
    vlSelfRef.d_array__DOT__out_data_array[0xdU][0xbU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array.out_data[0xbU];
    vlSelfRef.d_array__DOT__out_data_array[0xdU][0xcU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array.out_data[0xcU];
    vlSelfRef.d_array__DOT__out_data_array[0xdU][0xdU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array.out_data[0xdU];
    vlSelfRef.d_array__DOT__out_data_array[0xdU][0xeU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array.out_data[0xeU];
    vlSelfRef.d_array__DOT__out_data_array[0xdU][0xfU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array.out_data[0xfU];
    vlSelfRef.d_array__DOT__out_data_array[0xeU][0U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array.out_data[0U];
    vlSelfRef.d_array__DOT__out_data_array[0xeU][1U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array.out_data[1U];
    vlSelfRef.d_array__DOT__out_data_array[0xeU][2U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array.out_data[2U];
    vlSelfRef.d_array__DOT__out_data_array[0xeU][3U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array.out_data[3U];
    vlSelfRef.d_array__DOT__out_data_array[0xeU][4U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array.out_data[4U];
    vlSelfRef.d_array__DOT__out_data_array[0xeU][5U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array.out_data[5U];
    vlSelfRef.d_array__DOT__out_data_array[0xeU][6U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array.out_data[6U];
    vlSelfRef.d_array__DOT__out_data_array[0xeU][7U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array.out_data[7U];
    vlSelfRef.d_array__DOT__out_data_array[0xeU][8U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array.out_data[8U];
    vlSelfRef.d_array__DOT__out_data_array[0xeU][9U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array.out_data[9U];
    vlSelfRef.d_array__DOT__out_data_array[0xeU][0xaU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array.out_data[0xaU];
    vlSelfRef.d_array__DOT__out_data_array[0xeU][0xbU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array.out_data[0xbU];
    vlSelfRef.d_array__DOT__out_data_array[0xeU][0xcU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array.out_data[0xcU];
    vlSelfRef.d_array__DOT__out_data_array[0xeU][0xdU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array.out_data[0xdU];
    vlSelfRef.d_array__DOT__out_data_array[0xeU][0xeU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array.out_data[0xeU];
    vlSelfRef.d_array__DOT__out_data_array[0xeU][0xfU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array.out_data[0xfU];
    vlSelfRef.d_array__DOT__out_data_array[0xfU][0U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array.out_data[0U];
    vlSelfRef.d_array__DOT__out_data_array[0xfU][1U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array.out_data[1U];
    vlSelfRef.d_array__DOT__out_data_array[0xfU][2U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array.out_data[2U];
    vlSelfRef.d_array__DOT__out_data_array[0xfU][3U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array.out_data[3U];
    vlSelfRef.d_array__DOT__out_data_array[0xfU][4U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array.out_data[4U];
    vlSelfRef.d_array__DOT__out_data_array[0xfU][5U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array.out_data[5U];
    vlSelfRef.d_array__DOT__out_data_array[0xfU][6U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array.out_data[6U];
    vlSelfRef.d_array__DOT__out_data_array[0xfU][7U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array.out_data[7U];
    vlSelfRef.d_array__DOT__out_data_array[0xfU][8U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array.out_data[8U];
    vlSelfRef.d_array__DOT__out_data_array[0xfU][9U] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array.out_data[9U];
    vlSelfRef.d_array__DOT__out_data_array[0xfU][0xaU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array.out_data[0xaU];
    vlSelfRef.d_array__DOT__out_data_array[0xfU][0xbU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array.out_data[0xbU];
    vlSelfRef.d_array__DOT__out_data_array[0xfU][0xcU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array.out_data[0xcU];
    vlSelfRef.d_array__DOT__out_data_array[0xfU][0xdU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array.out_data[0xdU];
    vlSelfRef.d_array__DOT__out_data_array[0xfU][0xeU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array.out_data[0xeU];
    vlSelfRef.d_array__DOT__out_data_array[0xfU][0xfU] 
        = vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array.out_data[0xfU];
    vlSelfRef.f_unit__DOT__cache_access_done = vlSelfRef.fsm_accessed;
    vlSelfRef.c_fsm__DOT__fsm_accessed = vlSelfRef.fsm_accessed;
    vlSelfRef.c_fsm__DOT__mshr_fin_valid = 0U;
    vlSelfRef.c_fsm__DOT__mshr_fin_id = vlSelfRef.c_fsm__DOT__mshr_id_keep;
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
    vlSelfRef.c_fsm__DOT__fw_ready = vlSelfRef.tag_ready;
    vlSelfRef.c_fsm__DOT__in_ready = ((~ (IData)(vlSelfRef.c_fsm__DOT__cur_state)) 
                                      & (IData)(vlSelfRef.tag_ready));
    vlSelfRef.wr_controller__DOT__cache_write_strb 
        = vlSelfRef.cache_write_strb;
    vlSelfRef.wr_controller__DOT__cache_write_addr 
        = vlSelfRef.cache_write_addr;
    vlSelfRef.f_unit__DOT__cache_hit = vlSelfRef.fsm_hit;
    vlSelfRef.c_fsm__DOT__ib_valid = vlSelfRef.fsm_hit;
    vlSelfRef.c_fsm__DOT__fsm_hit = vlSelfRef.fsm_hit;
    vlSelfRef.c_fsm__DOT__miss_trigger = 0U;
    vlSelfRef.c_fsm__DOT__mshr_fin_is_hit = 0U;
    vlSelfRef.c_fsm__DOT__out_addr = 0U;
    vlSelfRef.f_unit__DOT__req_addr = 0U;
    vlSelfRef.f_unit__DOT__en = 0U;
    vlSelfRef.f_unit__DOT__mem_addr = 0U;
    vlSelfRef.c_fsm__DOT__out_opcode = 0U;
    vlSelfRef.c_fsm__DOT__out_source = 0U;
    vlSelfRef.f_unit__DOT__req_valid = 0U;
    vlSelfRef.c_fsm__DOT__out_valid = 0U;
    vlSelfRef.f_unit__DOT__out_addr = 0U;
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
    vlSelfRef.f_unit__DOT__out_valid = 0U;
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
                    if ((1U & (~ ((IData)(vlSelfRef.f_unit__DOT__write_keep) 
                                  & (IData)(vlSelfRef.f_unit__DOT__match))))) {
                        if ((1U & (~ (IData)(vlSelfRef.fsm_hit)))) {
                            if (vlSelfRef.f_unit__DOT__match) {
                                if (vlSelfRef.f_unit__DOT__w_compare_rd_mem_done) {
                                    vlSelfRef.f_unit__DOT__out_addr 
                                        = vlSelfRef.f_unit__DOT__prev_addr;
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
                                    vlSelfRef.f_unit__DOT__out_valid = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((3U == (IData)(vlSelfRef.f_unit__DOT__cur_state))) {
                if (((IData)(vlSelfRef.req_done) | (IData)(vlSelfRef.f_unit__DOT__req_done_keep))) {
                    vlSelfRef.f_unit__DOT__out_addr 
                        = vlSelfRef.f_unit__DOT__prev_addr;
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
                    vlSelfRef.f_unit__DOT__out_valid = 1U;
                }
            }
        }
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
                                vlSelfRef.f_unit__DOT__en = 1U;
                                vlSelfRef.f_unit__DOT__mem_addr 
                                    = vlSelfRef.f_unit__DOT__empty_idx;
                            }
                        }
                        vlSelfRef.f_unit__DOT__req_addr 
                            = vlSelfRef.trans_in_addr;
                        vlSelfRef.f_unit__DOT__req_valid 
                            = (1U & (~ (IData)(vlSelfRef.f_unit__DOT__read)));
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
                    vlSelfRef.f_unit__DOT__en = 1U;
                    vlSelfRef.f_unit__DOT__mem_addr 
                        = vlSelfRef.f_unit__DOT__match_addr;
                } else if ((1U & (~ (IData)(vlSelfRef.fsm_hit)))) {
                    if (vlSelfRef.f_unit__DOT__match) {
                        vlSelfRef.f_unit__DOT__en = 1U;
                        vlSelfRef.f_unit__DOT__mem_addr 
                            = vlSelfRef.f_unit__DOT__match_addr;
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.f_unit__DOT__write_keep) 
                              & (IData)(vlSelfRef.f_unit__DOT__match))))) {
                    if ((1U & (~ (IData)(vlSelfRef.fsm_hit)))) {
                        if ((1U & (~ (IData)(vlSelfRef.f_unit__DOT__match)))) {
                            vlSelfRef.f_unit__DOT__req_addr 
                                = vlSelfRef.f_unit__DOT__prev_addr;
                            vlSelfRef.f_unit__DOT__req_valid = 1U;
                        }
                    }
                }
            }
        }
    }
    if (vlSelfRef.c_fsm__DOT__cur_state) {
        if (vlSelfRef.c_fsm__DOT__cur_state) {
            if (vlSelfRef.fsm_accessed) {
                vlSelfRef.c_fsm__DOT__mshr_fin_valid = 1U;
                vlSelfRef.c_fsm__DOT__mshr_fin_id = vlSelfRef.c_fsm__DOT__mshr_id_keep;
            }
        }
        vlSelfRef.mshr_fin_valid = vlSelfRef.c_fsm__DOT__mshr_fin_valid;
    } else {
        vlSelfRef.mshr_fin_valid = vlSelfRef.c_fsm__DOT__mshr_fin_valid;
    }
    vlSelfRef.mshr_fin_id = vlSelfRef.c_fsm__DOT__mshr_fin_id;
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
    vlSelfRef.fsm_in_ready = vlSelfRef.c_fsm__DOT__in_ready;
    vlSelfRef.in_ready = ((IData)(vlSelfRef.c_fsm__DOT__in_ready) 
                          & ((IData)(vlSelfRef.in_write) 
                             | (IData)(vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__output_valid)));
    if (vlSelfRef.c_fsm__DOT__cur_state) {
        if (vlSelfRef.c_fsm__DOT__cur_state) {
            if (vlSelfRef.fsm_accessed) {
                if ((1U & (~ (IData)(vlSelfRef.fsm_hit)))) {
                    vlSelfRef.c_fsm__DOT__miss_trigger = 1U;
                }
                if (vlSelfRef.fsm_hit) {
                    vlSelfRef.c_fsm__DOT__mshr_fin_is_hit = 1U;
                    vlSelfRef.c_fsm__DOT__out_addr 
                        = vlSelfRef.c_fsm__DOT__addr_keep;
                    vlSelfRef.c_fsm__DOT__out_opcode 
                        = vlSelfRef.c_fsm__DOT__opcode_keep;
                    vlSelfRef.c_fsm__DOT__out_source 
                        = vlSelfRef.c_fsm__DOT__source_keep;
                    vlSelfRef.c_fsm__DOT__out_valid = 1U;
                } else {
                    vlSelfRef.c_fsm__DOT__mshr_fin_is_hit = 0U;
                }
            }
        }
        vlSelfRef.miss_trigger = vlSelfRef.c_fsm__DOT__miss_trigger;
        vlSelfRef.mshr_fin_is_hit = vlSelfRef.c_fsm__DOT__mshr_fin_is_hit;
        vlSelfRef.fsm_out_addr = vlSelfRef.c_fsm__DOT__out_addr;
        vlSelfRef.req_addr = vlSelfRef.f_unit__DOT__req_addr;
        vlSelfRef.f_unit__DOT__data_buffer__DOT__en 
            = vlSelfRef.f_unit__DOT__en;
        vlSelfRef.f_unit__DOT__data_buffer__DOT__in_addr 
            = vlSelfRef.f_unit__DOT__mem_addr;
        vlSelfRef.fsm_out_opcode = vlSelfRef.c_fsm__DOT__out_opcode;
        vlSelfRef.fsm_out_source = vlSelfRef.c_fsm__DOT__out_source;
        vlSelfRef.req_valid = vlSelfRef.f_unit__DOT__req_valid;
    } else {
        vlSelfRef.miss_trigger = vlSelfRef.c_fsm__DOT__miss_trigger;
        vlSelfRef.mshr_fin_is_hit = vlSelfRef.c_fsm__DOT__mshr_fin_is_hit;
        vlSelfRef.fsm_out_addr = vlSelfRef.c_fsm__DOT__out_addr;
        vlSelfRef.req_addr = vlSelfRef.f_unit__DOT__req_addr;
        vlSelfRef.f_unit__DOT__data_buffer__DOT__en 
            = vlSelfRef.f_unit__DOT__en;
        vlSelfRef.f_unit__DOT__data_buffer__DOT__in_addr 
            = vlSelfRef.f_unit__DOT__mem_addr;
        vlSelfRef.fsm_out_opcode = vlSelfRef.c_fsm__DOT__out_opcode;
        vlSelfRef.fsm_out_source = vlSelfRef.c_fsm__DOT__out_source;
        vlSelfRef.req_valid = vlSelfRef.f_unit__DOT__req_valid;
    }
    if (vlSelfRef.c_fsm__DOT__out_valid) {
        vlSelfRef.fsm_out_valid = 1U;
        vlSelfRef.hit_out_valid = 1U;
        vlSelfRef.out_addr = vlSelfRef.c_fsm__DOT__out_addr;
        vlSelfRef.out_source = vlSelfRef.c_fsm__DOT__out_source;
        vlSelfRef.out_opcode = vlSelfRef.c_fsm__DOT__out_opcode;
    } else {
        vlSelfRef.fsm_out_valid = 0U;
        vlSelfRef.hit_out_valid = 0U;
        vlSelfRef.out_addr = vlSelfRef.mshr_inst__DOT__deq_addr;
        vlSelfRef.out_source = vlSelfRef.mshr_inst__DOT__deq_source;
        vlSelfRef.out_opcode = vlSelfRef.mshr_inst__DOT__deq_opcode;
    }
    vlSelfRef.out_valid = ((IData)(vlSelfRef.c_fsm__DOT__out_valid) 
                           | (IData)(vlSelfRef.mshr_inst__DOT__deq_valid));
    vlSelfRef.fsm_out_ready = ((IData)(vlSelfRef.c_fsm__DOT__out_valid) 
                               & (IData)(vlSelfRef.out_ready));
    vlSelfRef.mshr_deq_ready = ((~ (IData)(vlSelfRef.c_fsm__DOT__out_valid)) 
                                & ((IData)(vlSelfRef.mshr_inst__DOT__deq_valid) 
                                   & (IData)(vlSelfRef.out_ready)));
    vlSelfRef.return_addr = vlSelfRef.f_unit__DOT__out_addr;
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
    vlSelfRef.write_all = vlSelfRef.f_unit__DOT__out_valid;
    vlSelfRef.return_valid = vlSelfRef.f_unit__DOT__out_valid;
    vlSelfRef.mshr_inst__DOT__fin_valid = vlSelfRef.mshr_fin_valid;
    vlSelfRef.mshr_inst__DOT__fin_id = vlSelfRef.mshr_fin_id;
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
    vlSelfRef.__Vcellinp__c_fsm__in_valid = ((IData)(vlSelfRef.in_valid) 
                                             & (IData)(vlSelfRef.in_ready));
    vlSelfRef.mshr_inst__DOT__fin_is_hit = vlSelfRef.mshr_fin_is_hit;
    vlSelfRef.rd_controller__DOT__cache_read_addr = vlSelfRef.req_addr;
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ena 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__en;
    vlSelfRef.f_unit__DOT__data_buffer__DOT__genblk1__DOT__xilinx_single_port_ram_no_change__DOT__addra 
        = vlSelfRef.f_unit__DOT__data_buffer__DOT__in_addr;
    vlSelfRef.rd_controller__DOT__cache_read_valid 
        = vlSelfRef.req_valid;
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
    vlSelfRef.c_fsm__DOT__out_ready = vlSelfRef.fsm_out_ready;
    vlSelfRef.c_fsm__DOT__ib_ready = 0U;
    vlSelfRef.mshr_inst__DOT__deq_ready = vlSelfRef.mshr_deq_ready;
    vlSelfRef.mshr_inst__DOT__deq_fire = ((IData)(vlSelfRef.mshr_deq_ready) 
                                          & (IData)(vlSelfRef.mshr_inst__DOT__deq_valid));
    vlSelfRef.c_fsm__DOT__ib_addr = vlSelfRef.return_addr;
    vlSelfRef.d_array__DOT__write_all = vlSelfRef.write_all;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.fetch_done 
        = vlSelfRef.return_valid;
    vlSelfRef.c_fsm__DOT__in_valid = vlSelfRef.__Vcellinp__c_fsm__in_valid;
    vlSelfRef.mshr_do_alloc = ((~ (IData)(vlSelfRef.in_write)) 
                               & (IData)(vlSelfRef.__Vcellinp__c_fsm__in_valid));
    vlSelfRef.c_fsm__DOT__fw_valid = 0U;
    vlSelfRef.c_fsm__DOT__fw_data = 0U;
    vlSelfRef.c_fsm__DOT__fw_addr = 0U;
    vlSelfRef.c_fsm__DOT__fw_rw = 0U;
    if (vlSelfRef.c_fsm__DOT__cur_state) {
        vlSelfRef.c_fsm__DOT__next_state = 1U;
        if (vlSelfRef.c_fsm__DOT__cur_state) {
            if (vlSelfRef.fsm_accessed) {
                if (vlSelfRef.fsm_hit) {
                    if (vlSelfRef.fsm_out_ready) {
                        vlSelfRef.c_fsm__DOT__ib_ready = 1U;
                        vlSelfRef.c_fsm__DOT__next_state = 0U;
                    } else {
                        vlSelfRef.c_fsm__DOT__ib_ready = 0U;
                    }
                } else {
                    vlSelfRef.c_fsm__DOT__next_state = 0U;
                }
            }
            vlSelfRef.c_fsm__DOT__fw_valid = 1U;
            vlSelfRef.c_fsm__DOT__fw_data = vlSelfRef.c_fsm__DOT__data_keep;
            vlSelfRef.c_fsm__DOT__fw_addr = vlSelfRef.c_fsm__DOT__addr_keep;
            vlSelfRef.c_fsm__DOT__fw_rw = vlSelfRef.c_fsm__DOT__write_keep;
        } else {
            vlSelfRef.c_fsm__DOT__next_state = 0U;
        }
    } else {
        vlSelfRef.c_fsm__DOT__next_state = 0U;
        if (((IData)(vlSelfRef.__Vcellinp__c_fsm__in_valid) 
             & (IData)(vlSelfRef.tag_ready))) {
            vlSelfRef.c_fsm__DOT__fw_valid = 1U;
            vlSelfRef.c_fsm__DOT__fw_data = vlSelfRef.in_data;
            vlSelfRef.c_fsm__DOT__fw_addr = vlSelfRef.in_addr;
            vlSelfRef.c_fsm__DOT__fw_rw = vlSelfRef.in_write;
            vlSelfRef.c_fsm__DOT__next_state = 1U;
        }
    }
    vlSelfRef.mshr_inst__DOT__deq_active_d = vlSelfRef.mshr_inst__DOT__deq_active_q;
    vlSelfRef.mshr_inst__DOT__deq_ptr_d = vlSelfRef.mshr_inst__DOT__deq_ptr_q;
    if (vlSelfRef.req_done_pulse) {
        vlSelfRef.mshr_inst__DOT__deq_active_d = 1U;
        vlSelfRef.mshr_inst__DOT__deq_ptr_d = vlSelfRef.miss_mshr_id;
    } else if (vlSelfRef.mshr_inst__DOT__deq_fire) {
        if ((1U & ((IData)(vlSelfRef.mshr_inst__DOT__next_table) 
                   >> (IData)(vlSelfRef.mshr_inst__DOT__deq_ptr_q)))) {
            vlSelfRef.mshr_inst__DOT__deq_active_d = 1U;
            vlSelfRef.mshr_inst__DOT__deq_ptr_d = vlSelfRef.mshr_inst__DOT__next_index
                [vlSelfRef.mshr_inst__DOT__deq_ptr_q];
        } else {
            vlSelfRef.mshr_inst__DOT__deq_active_d = 0U;
        }
    }
    vlSelfRef.mshr_inst__DOT__alloc_valid = vlSelfRef.mshr_do_alloc;
    vlSelfRef.mshr_inst__DOT__alloc_fire = ((IData)(vlSelfRef.mshr_do_alloc) 
                                            & (IData)(vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__output_valid));
    vlSelfRef.fsm_valid = vlSelfRef.c_fsm__DOT__fw_valid;
    vlSelfRef.fsm_data = vlSelfRef.c_fsm__DOT__fw_data;
    vlSelfRef.fsm_addr = vlSelfRef.c_fsm__DOT__fw_addr;
    vlSelfRef.fsm_word_idx = (0xfU & (vlSelfRef.c_fsm__DOT__fw_addr 
                                      >> 2U));
    vlSelfRef.addr = ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                       ? vlSelfRef.f_unit__DOT__out_addr
                       : vlSelfRef.c_fsm__DOT__fw_addr);
    vlSelfRef.fsm_rw = vlSelfRef.c_fsm__DOT__fw_rw;
    vlSelfRef.f_unit__DOT__w_compare_rd_mem = ((IData)(vlSelfRef.f_unit__DOT__w_compare_rd_cam_done) 
                                               & (((~ (IData)(vlSelfRef.fsm_hit)) 
                                                   | (IData)(vlSelfRef.c_fsm__DOT__fw_rw)) 
                                                  & (IData)(vlSelfRef.f_unit__DOT__match)));
    vlSelfRef.write = ((IData)(vlSelfRef.c_fsm__DOT__fw_rw) 
                       & (IData)(vlSelfRef.fsm_hit));
    vlSelfRef.f_unit__DOT__in_valid = vlSelfRef.fsm_valid;
    vlSelfRef.f_unit__DOT__trans_valid = 0U;
    vlSelfRef.f_unit__DOT__trans_out_addr = 0U;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.fsm_valid 
        = vlSelfRef.fsm_valid;
    vlSelfRef.f_unit__DOT__next_state = vlSelfRef.f_unit__DOT__cur_state;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.fsm_data 
        = vlSelfRef.fsm_data;
    vlSelfRef.f_unit__DOT__in_data = vlSelfRef.fsm_data;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.fsm_addr 
        = vlSelfRef.fsm_addr;
    vlSelfRef.f_unit__DOT__in_addr = vlSelfRef.fsm_addr;
    vlSelfRef.f_unit__DOT__compare_data = 0U;
    if ((0U == (IData)(vlSelfRef.f_unit__DOT__cur_state))) {
        if ((1U & (~ (IData)(vlSelfRef.fsm_valid)))) {
            if (vlSelfRef.f_unit__DOT__empty) {
                vlSelfRef.f_unit__DOT__trans_valid = 1U;
                vlSelfRef.f_unit__DOT__trans_out_addr 
                    = ((IData)(0x40U) + vlSelfRef.f_unit__DOT__prev_addr);
            }
        }
        if (vlSelfRef.fsm_valid) {
            vlSelfRef.f_unit__DOT__next_state = 2U;
            vlSelfRef.f_unit__DOT__compare_data = (vlSelfRef.fsm_addr 
                                                   >> 6U);
        } else if (vlSelfRef.f_unit__DOT__empty) {
            vlSelfRef.f_unit__DOT__next_state = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.f_unit__DOT__cur_state))) {
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
        if ((1U & (~ (IData)(vlSelfRef.f_unit__DOT__trans_done_keep)))) {
            vlSelfRef.f_unit__DOT__compare_data = (vlSelfRef.trans_in_addr 
                                                   >> 6U);
        }
    } else if ((2U == (IData)(vlSelfRef.f_unit__DOT__cur_state))) {
        if (((IData)(vlSelfRef.f_unit__DOT__w_compare_rd_cam_done) 
             & ((IData)(vlSelfRef.fsm_accessed) | (IData)(vlSelfRef.f_unit__DOT__cache_access_keep)))) {
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
        vlSelfRef.f_unit__DOT__compare_data = (vlSelfRef.f_unit__DOT__prev_addr 
                                               >> 6U);
    } else if ((3U == (IData)(vlSelfRef.f_unit__DOT__cur_state))) {
        if (((IData)(vlSelfRef.req_done) | (IData)(vlSelfRef.f_unit__DOT__req_done_keep))) {
            if (vlSelfRef.return_ready) {
                vlSelfRef.f_unit__DOT__next_state = 0U;
            }
        }
    }
    __VdfgRegularize_haae396c2_4_9 = ((IData)(vlSelfRef.c_fsm__DOT__fw_rw) 
                                      & (1U == (IData)(vlSelfRef.fsm_word_idx)));
    __VdfgRegularize_haae396c2_4_10 = ((IData)(vlSelfRef.c_fsm__DOT__fw_rw) 
                                       & (2U == (IData)(vlSelfRef.fsm_word_idx)));
    __VdfgRegularize_haae396c2_4_11 = ((IData)(vlSelfRef.c_fsm__DOT__fw_rw) 
                                       & (3U == (IData)(vlSelfRef.fsm_word_idx)));
    __VdfgRegularize_haae396c2_4_12 = ((IData)(vlSelfRef.c_fsm__DOT__fw_rw) 
                                       & (4U == (IData)(vlSelfRef.fsm_word_idx)));
    __VdfgRegularize_haae396c2_4_13 = ((IData)(vlSelfRef.c_fsm__DOT__fw_rw) 
                                       & (5U == (IData)(vlSelfRef.fsm_word_idx)));
    __VdfgRegularize_haae396c2_4_14 = ((IData)(vlSelfRef.c_fsm__DOT__fw_rw) 
                                       & (6U == (IData)(vlSelfRef.fsm_word_idx)));
    __VdfgRegularize_haae396c2_4_15 = ((IData)(vlSelfRef.c_fsm__DOT__fw_rw) 
                                       & (7U == (IData)(vlSelfRef.fsm_word_idx)));
    __VdfgRegularize_haae396c2_4_16 = ((IData)(vlSelfRef.c_fsm__DOT__fw_rw) 
                                       & (8U == (IData)(vlSelfRef.fsm_word_idx)));
    __VdfgRegularize_haae396c2_4_17 = ((IData)(vlSelfRef.c_fsm__DOT__fw_rw) 
                                       & (9U == (IData)(vlSelfRef.fsm_word_idx)));
    __VdfgRegularize_haae396c2_4_18 = ((IData)(vlSelfRef.c_fsm__DOT__fw_rw) 
                                       & (0xaU == (IData)(vlSelfRef.fsm_word_idx)));
    __VdfgRegularize_haae396c2_4_19 = ((IData)(vlSelfRef.c_fsm__DOT__fw_rw) 
                                       & (0xbU == (IData)(vlSelfRef.fsm_word_idx)));
    __VdfgRegularize_haae396c2_4_20 = ((IData)(vlSelfRef.c_fsm__DOT__fw_rw) 
                                       & (0xcU == (IData)(vlSelfRef.fsm_word_idx)));
    __VdfgRegularize_haae396c2_4_21 = ((IData)(vlSelfRef.c_fsm__DOT__fw_rw) 
                                       & (0xdU == (IData)(vlSelfRef.fsm_word_idx)));
    __VdfgRegularize_haae396c2_4_22 = ((IData)(vlSelfRef.c_fsm__DOT__fw_rw) 
                                       & (0xeU == (IData)(vlSelfRef.fsm_word_idx)));
    __VdfgRegularize_haae396c2_4_23 = ((IData)(vlSelfRef.c_fsm__DOT__fw_rw) 
                                       & (0xfU == (IData)(vlSelfRef.fsm_word_idx)));
    __VdfgRegularize_haae396c2_4_0 = ((IData)(vlSelfRef.c_fsm__DOT__fw_rw) 
                                      & (0U == (IData)(vlSelfRef.fsm_word_idx)));
    vlSelfRef.d_array__DOT__addr = vlSelfRef.addr;
    vlSelfRef.d_array__DOT__in_addr = vlSelfRef.addr;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array.in_addr 
        = (0x3fU & (vlSelfRef.addr >> 6U));
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array.in_addr 
        = (0x3fU & (vlSelfRef.addr >> 6U));
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array.in_addr 
        = (0x3fU & (vlSelfRef.addr >> 6U));
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array.in_addr 
        = (0x3fU & (vlSelfRef.addr >> 6U));
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array.in_addr 
        = (0x3fU & (vlSelfRef.addr >> 6U));
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array.in_addr 
        = (0x3fU & (vlSelfRef.addr >> 6U));
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array.in_addr 
        = (0x3fU & (vlSelfRef.addr >> 6U));
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array.in_addr 
        = (0x3fU & (vlSelfRef.addr >> 6U));
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array.in_addr 
        = (0x3fU & (vlSelfRef.addr >> 6U));
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array.in_addr 
        = (0x3fU & (vlSelfRef.addr >> 6U));
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array.in_addr 
        = (0x3fU & (vlSelfRef.addr >> 6U));
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array.in_addr 
        = (0x3fU & (vlSelfRef.addr >> 6U));
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array.in_addr 
        = (0x3fU & (vlSelfRef.addr >> 6U));
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array.in_addr 
        = (0x3fU & (vlSelfRef.addr >> 6U));
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array.in_addr 
        = (0x3fU & (vlSelfRef.addr >> 6U));
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array.in_addr 
        = (0x3fU & (vlSelfRef.addr >> 6U));
    vlSelfRef.d_array__DOT__word_idx = (0xfU & (vlSelfRef.addr 
                                                >> 2U));
    vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.fsm_write 
        = vlSelfRef.fsm_rw;
    vlSelfRef.f_unit__DOT__write = vlSelfRef.fsm_rw;
    vlSelfRef.f_unit__DOT__w_compare_rd_mem_edge__DOT__signal_in 
        = vlSelfRef.f_unit__DOT__w_compare_rd_mem;
    vlSelfRef.d_array__DOT__write = vlSelfRef.write;
    vlSelfRef.valid = ((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                       | ((IData)(vlSelfRef.write) 
                          | (IData)(vlSelfRef.c_fsm__DOT__fw_valid)));
    vlSelfRef.d_array__DOT__write_click = ((~ (IData)(vlSelfRef.d_array__DOT__write_prev)) 
                                           & ((IData)(vlSelfRef.write) 
                                              | (IData)(vlSelfRef.f_unit__DOT__out_valid)));
    vlSelfRef.trans_valid = vlSelfRef.f_unit__DOT__trans_valid;
    vlSelfRef.trans_out_addr = vlSelfRef.f_unit__DOT__trans_out_addr;
    vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__add_addr 
        = (vlSelfRef.f_unit__DOT__trans_out_addr + 
           ((IData)(vlSelfRef.sec_address_translator__DOT__rng_val) 
            & (IData)(vlSelfRef.reg_file__DOT__D_FF_h_b__DOT__data)));
    vlSelfRef.f_unit__DOT__w_compare_rd_cam = ((0U 
                                                == (IData)(vlSelfRef.f_unit__DOT__cur_state)) 
                                               & (2U 
                                                  == (IData)(vlSelfRef.f_unit__DOT__next_state)));
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__compare_data_padded 
        = vlSelfRef.f_unit__DOT__compare_data;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__compare_data 
        = vlSelfRef.f_unit__DOT__compare_data;
    vlSelfRef.g_word_transfer__BRA__1__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_9) 
           & ((IData)(vlSelfRef.byteen_keep) >> 3U));
    vlSelfRef.g_word_transfer__BRA__1__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_9) 
           & ((IData)(vlSelfRef.byteen_keep) >> 2U));
    vlSelfRef.g_word_transfer__BRA__1__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_9) 
           & ((IData)(vlSelfRef.byteen_keep) >> 1U));
    vlSelfRef.g_word_transfer__BRA__1__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_9) 
           & (IData)(vlSelfRef.byteen_keep));
    vlSelfRef.g_word_transfer__BRA__2__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_10) 
           & ((IData)(vlSelfRef.byteen_keep) >> 3U));
    vlSelfRef.g_word_transfer__BRA__2__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_10) 
           & ((IData)(vlSelfRef.byteen_keep) >> 2U));
    vlSelfRef.g_word_transfer__BRA__2__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_10) 
           & ((IData)(vlSelfRef.byteen_keep) >> 1U));
    vlSelfRef.g_word_transfer__BRA__2__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_10) 
           & (IData)(vlSelfRef.byteen_keep));
    vlSelfRef.g_word_transfer__BRA__3__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_11) 
           & ((IData)(vlSelfRef.byteen_keep) >> 3U));
    vlSelfRef.g_word_transfer__BRA__3__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_11) 
           & ((IData)(vlSelfRef.byteen_keep) >> 2U));
    vlSelfRef.g_word_transfer__BRA__3__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_11) 
           & ((IData)(vlSelfRef.byteen_keep) >> 1U));
    vlSelfRef.g_word_transfer__BRA__3__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_11) 
           & (IData)(vlSelfRef.byteen_keep));
    vlSelfRef.g_word_transfer__BRA__4__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_12) 
           & ((IData)(vlSelfRef.byteen_keep) >> 3U));
    vlSelfRef.g_word_transfer__BRA__4__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_12) 
           & ((IData)(vlSelfRef.byteen_keep) >> 2U));
    vlSelfRef.g_word_transfer__BRA__4__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_12) 
           & ((IData)(vlSelfRef.byteen_keep) >> 1U));
    vlSelfRef.g_word_transfer__BRA__4__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_12) 
           & (IData)(vlSelfRef.byteen_keep));
    vlSelfRef.g_word_transfer__BRA__5__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_13) 
           & ((IData)(vlSelfRef.byteen_keep) >> 3U));
    vlSelfRef.g_word_transfer__BRA__5__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_13) 
           & ((IData)(vlSelfRef.byteen_keep) >> 2U));
    vlSelfRef.g_word_transfer__BRA__5__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_13) 
           & ((IData)(vlSelfRef.byteen_keep) >> 1U));
    vlSelfRef.g_word_transfer__BRA__5__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_13) 
           & (IData)(vlSelfRef.byteen_keep));
    vlSelfRef.g_word_transfer__BRA__6__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_14) 
           & ((IData)(vlSelfRef.byteen_keep) >> 3U));
    vlSelfRef.g_word_transfer__BRA__6__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_14) 
           & ((IData)(vlSelfRef.byteen_keep) >> 2U));
    vlSelfRef.g_word_transfer__BRA__6__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_14) 
           & ((IData)(vlSelfRef.byteen_keep) >> 1U));
    vlSelfRef.g_word_transfer__BRA__6__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_14) 
           & (IData)(vlSelfRef.byteen_keep));
    vlSelfRef.g_word_transfer__BRA__7__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_15) 
           & ((IData)(vlSelfRef.byteen_keep) >> 3U));
    vlSelfRef.g_word_transfer__BRA__7__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_15) 
           & ((IData)(vlSelfRef.byteen_keep) >> 2U));
    vlSelfRef.g_word_transfer__BRA__7__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_15) 
           & ((IData)(vlSelfRef.byteen_keep) >> 1U));
    vlSelfRef.g_word_transfer__BRA__7__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_15) 
           & (IData)(vlSelfRef.byteen_keep));
    vlSelfRef.g_word_transfer__BRA__8__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_16) 
           & ((IData)(vlSelfRef.byteen_keep) >> 3U));
    vlSelfRef.g_word_transfer__BRA__8__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_16) 
           & ((IData)(vlSelfRef.byteen_keep) >> 2U));
    vlSelfRef.g_word_transfer__BRA__8__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_16) 
           & ((IData)(vlSelfRef.byteen_keep) >> 1U));
    vlSelfRef.g_word_transfer__BRA__8__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_16) 
           & (IData)(vlSelfRef.byteen_keep));
    vlSelfRef.g_word_transfer__BRA__9__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_17) 
           & ((IData)(vlSelfRef.byteen_keep) >> 3U));
    vlSelfRef.g_word_transfer__BRA__9__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_17) 
           & ((IData)(vlSelfRef.byteen_keep) >> 2U));
    vlSelfRef.g_word_transfer__BRA__9__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_17) 
           & ((IData)(vlSelfRef.byteen_keep) >> 1U));
    vlSelfRef.g_word_transfer__BRA__9__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_17) 
           & (IData)(vlSelfRef.byteen_keep));
    vlSelfRef.g_word_transfer__BRA__10__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_18) 
           & ((IData)(vlSelfRef.byteen_keep) >> 3U));
    vlSelfRef.g_word_transfer__BRA__10__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_18) 
           & ((IData)(vlSelfRef.byteen_keep) >> 2U));
    vlSelfRef.g_word_transfer__BRA__10__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_18) 
           & ((IData)(vlSelfRef.byteen_keep) >> 1U));
    vlSelfRef.g_word_transfer__BRA__10__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_18) 
           & (IData)(vlSelfRef.byteen_keep));
    vlSelfRef.g_word_transfer__BRA__11__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_19) 
           & ((IData)(vlSelfRef.byteen_keep) >> 3U));
    vlSelfRef.g_word_transfer__BRA__11__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_19) 
           & ((IData)(vlSelfRef.byteen_keep) >> 2U));
    vlSelfRef.g_word_transfer__BRA__11__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_19) 
           & ((IData)(vlSelfRef.byteen_keep) >> 1U));
    vlSelfRef.g_word_transfer__BRA__11__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_19) 
           & (IData)(vlSelfRef.byteen_keep));
    vlSelfRef.g_word_transfer__BRA__12__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_20) 
           & ((IData)(vlSelfRef.byteen_keep) >> 3U));
    vlSelfRef.g_word_transfer__BRA__12__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_20) 
           & ((IData)(vlSelfRef.byteen_keep) >> 2U));
    vlSelfRef.g_word_transfer__BRA__12__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_20) 
           & ((IData)(vlSelfRef.byteen_keep) >> 1U));
    vlSelfRef.g_word_transfer__BRA__12__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_20) 
           & (IData)(vlSelfRef.byteen_keep));
    vlSelfRef.g_word_transfer__BRA__13__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_21) 
           & ((IData)(vlSelfRef.byteen_keep) >> 3U));
    vlSelfRef.g_word_transfer__BRA__13__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_21) 
           & ((IData)(vlSelfRef.byteen_keep) >> 2U));
    vlSelfRef.g_word_transfer__BRA__13__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_21) 
           & ((IData)(vlSelfRef.byteen_keep) >> 1U));
    vlSelfRef.g_word_transfer__BRA__13__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_21) 
           & (IData)(vlSelfRef.byteen_keep));
    vlSelfRef.g_word_transfer__BRA__14__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_22) 
           & ((IData)(vlSelfRef.byteen_keep) >> 3U));
    vlSelfRef.g_word_transfer__BRA__14__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_22) 
           & ((IData)(vlSelfRef.byteen_keep) >> 2U));
    vlSelfRef.g_word_transfer__BRA__14__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_22) 
           & ((IData)(vlSelfRef.byteen_keep) >> 1U));
    vlSelfRef.g_word_transfer__BRA__14__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_22) 
           & (IData)(vlSelfRef.byteen_keep));
    vlSelfRef.g_word_transfer__BRA__15__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_23) 
           & ((IData)(vlSelfRef.byteen_keep) >> 3U));
    vlSelfRef.g_word_transfer__BRA__15__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_23) 
           & ((IData)(vlSelfRef.byteen_keep) >> 2U));
    vlSelfRef.g_word_transfer__BRA__15__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_23) 
           & ((IData)(vlSelfRef.byteen_keep) >> 1U));
    vlSelfRef.g_word_transfer__BRA__15__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_23) 
           & (IData)(vlSelfRef.byteen_keep));
    vlSelfRef.g_word_transfer__BRA__0__KET____DOT__g_byte_merge__BRA__0__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_0) 
           & (IData)(vlSelfRef.byteen_keep));
    vlSelfRef.g_word_transfer__BRA__0__KET____DOT__g_byte_merge__BRA__3__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_0) 
           & ((IData)(vlSelfRef.byteen_keep) >> 3U));
    vlSelfRef.g_word_transfer__BRA__0__KET____DOT__g_byte_merge__BRA__2__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_0) 
           & ((IData)(vlSelfRef.byteen_keep) >> 2U));
    vlSelfRef.g_word_transfer__BRA__0__KET____DOT__g_byte_merge__BRA__1__KET____DOT__byte_wr_en 
        = ((IData)(__VdfgRegularize_haae396c2_4_0) 
           & ((IData)(vlSelfRef.byteen_keep) >> 1U));
    vlSelfRef.d_array__DOT__en = (0xffffU & (- (IData)((IData)(vlSelfRef.valid))));
    vlSelfRef.d_array__DOT__valid = vlSelfRef.valid;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array.en 
        = vlSelfRef.valid;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array.en 
        = vlSelfRef.valid;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array.en 
        = vlSelfRef.valid;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array.en 
        = vlSelfRef.valid;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array.en 
        = vlSelfRef.valid;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array.en 
        = vlSelfRef.valid;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array.en 
        = vlSelfRef.valid;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array.en 
        = vlSelfRef.valid;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array.en 
        = vlSelfRef.valid;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array.en 
        = vlSelfRef.valid;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array.en 
        = vlSelfRef.valid;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array.en 
        = vlSelfRef.valid;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array.en 
        = vlSelfRef.valid;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array.en 
        = vlSelfRef.valid;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array.en 
        = vlSelfRef.valid;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array.en 
        = vlSelfRef.valid;
    vlSelfRef.d_array__DOT____Vcellinp__latency_counter__rst_n 
        = ((~ ((~ (IData)(vlSelfRef.d_array__DOT__D_FF_valid__DOT__data)) 
               & (IData)(vlSelfRef.valid))) & (IData)(vlSelfRef.rst_n));
    vlSelfRef.d_array__DOT__byte_mask = (((QData)((IData)(
                                                          ((((((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                                ? 0xfU
                                                                : 
                                                               (((IData)(vlSelfRef.d_array__DOT__write_click) 
                                                                 & (0xfU 
                                                                    == (IData)(vlSelfRef.d_array__DOT__word_idx)))
                                                                 ? (IData)(vlSelfRef.in_byteen)
                                                                 : 0U)) 
                                                              << 0x1cU) 
                                                             | (((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                                  ? 0xfU
                                                                  : 
                                                                 (((IData)(vlSelfRef.d_array__DOT__write_click) 
                                                                   & (0xeU 
                                                                      == (IData)(vlSelfRef.d_array__DOT__word_idx)))
                                                                   ? (IData)(vlSelfRef.in_byteen)
                                                                   : 0U)) 
                                                                << 0x18U)) 
                                                            | ((((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                                  ? 0xfU
                                                                  : 
                                                                 (((IData)(vlSelfRef.d_array__DOT__write_click) 
                                                                   & (0xdU 
                                                                      == (IData)(vlSelfRef.d_array__DOT__word_idx)))
                                                                   ? (IData)(vlSelfRef.in_byteen)
                                                                   : 0U)) 
                                                                << 0x14U) 
                                                               | (((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                                    ? 0xfU
                                                                    : 
                                                                   (((IData)(vlSelfRef.d_array__DOT__write_click) 
                                                                     & (0xcU 
                                                                        == (IData)(vlSelfRef.d_array__DOT__word_idx)))
                                                                     ? (IData)(vlSelfRef.in_byteen)
                                                                     : 0U)) 
                                                                  << 0x10U))) 
                                                           | (((((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                                  ? 0xfU
                                                                  : 
                                                                 (((IData)(vlSelfRef.d_array__DOT__write_click) 
                                                                   & (0xbU 
                                                                      == (IData)(vlSelfRef.d_array__DOT__word_idx)))
                                                                   ? (IData)(vlSelfRef.in_byteen)
                                                                   : 0U)) 
                                                                << 0xcU) 
                                                               | (((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                                    ? 0xfU
                                                                    : 
                                                                   (((IData)(vlSelfRef.d_array__DOT__write_click) 
                                                                     & (0xaU 
                                                                        == (IData)(vlSelfRef.d_array__DOT__word_idx)))
                                                                     ? (IData)(vlSelfRef.in_byteen)
                                                                     : 0U)) 
                                                                  << 8U)) 
                                                              | ((((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                                    ? 0xfU
                                                                    : 
                                                                   (((IData)(vlSelfRef.d_array__DOT__write_click) 
                                                                     & (9U 
                                                                        == (IData)(vlSelfRef.d_array__DOT__word_idx)))
                                                                     ? (IData)(vlSelfRef.in_byteen)
                                                                     : 0U)) 
                                                                  << 4U) 
                                                                 | ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                                     ? 0xfU
                                                                     : 
                                                                    (((IData)(vlSelfRef.d_array__DOT__write_click) 
                                                                      & (8U 
                                                                         == (IData)(vlSelfRef.d_array__DOT__word_idx)))
                                                                      ? (IData)(vlSelfRef.in_byteen)
                                                                      : 0U))))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((((((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                                 ? 0xfU
                                                                 : 
                                                                (((IData)(vlSelfRef.d_array__DOT__write_click) 
                                                                  & (7U 
                                                                     == (IData)(vlSelfRef.d_array__DOT__word_idx)))
                                                                  ? (IData)(vlSelfRef.in_byteen)
                                                                  : 0U)) 
                                                               << 0x1cU) 
                                                              | (((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                                   ? 0xfU
                                                                   : 
                                                                  (((IData)(vlSelfRef.d_array__DOT__write_click) 
                                                                    & (6U 
                                                                       == (IData)(vlSelfRef.d_array__DOT__word_idx)))
                                                                    ? (IData)(vlSelfRef.in_byteen)
                                                                    : 0U)) 
                                                                 << 0x18U)) 
                                                             | ((((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                                   ? 0xfU
                                                                   : 
                                                                  (((IData)(vlSelfRef.d_array__DOT__write_click) 
                                                                    & (5U 
                                                                       == (IData)(vlSelfRef.d_array__DOT__word_idx)))
                                                                    ? (IData)(vlSelfRef.in_byteen)
                                                                    : 0U)) 
                                                                 << 0x14U) 
                                                                | (((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                                     ? 0xfU
                                                                     : 
                                                                    (((IData)(vlSelfRef.d_array__DOT__write_click) 
                                                                      & (4U 
                                                                         == (IData)(vlSelfRef.d_array__DOT__word_idx)))
                                                                      ? (IData)(vlSelfRef.in_byteen)
                                                                      : 0U)) 
                                                                   << 0x10U))) 
                                                            | (((((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                                   ? 0xfU
                                                                   : 
                                                                  (((IData)(vlSelfRef.d_array__DOT__write_click) 
                                                                    & (3U 
                                                                       == (IData)(vlSelfRef.d_array__DOT__word_idx)))
                                                                    ? (IData)(vlSelfRef.in_byteen)
                                                                    : 0U)) 
                                                                 << 0xcU) 
                                                                | (((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                                     ? 0xfU
                                                                     : 
                                                                    (((IData)(vlSelfRef.d_array__DOT__write_click) 
                                                                      & (2U 
                                                                         == (IData)(vlSelfRef.d_array__DOT__word_idx)))
                                                                      ? (IData)(vlSelfRef.in_byteen)
                                                                      : 0U)) 
                                                                   << 8U)) 
                                                               | ((((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                                     ? 0xfU
                                                                     : 
                                                                    (((IData)(vlSelfRef.d_array__DOT__write_click) 
                                                                      & (1U 
                                                                         == (IData)(vlSelfRef.d_array__DOT__word_idx)))
                                                                      ? (IData)(vlSelfRef.in_byteen)
                                                                      : 0U)) 
                                                                   << 4U) 
                                                                  | ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                                                      ? 0xfU
                                                                      : 
                                                                     (((IData)(vlSelfRef.d_array__DOT__write_click) 
                                                                       & (0U 
                                                                          == (IData)(vlSelfRef.d_array__DOT__word_idx)))
                                                                       ? (IData)(vlSelfRef.in_byteen)
                                                                       : 0U))))))));
    vlSelfRef.sec_address_translator__DOT__in_valid 
        = vlSelfRef.trans_valid;
    vlSelfRef.sec_address_translator__DOT__in_raw_addr 
        = vlSelfRef.trans_out_addr;
    vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__cal_addr 
        = (vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__add_addr 
           + VL_EXTENDS_II(32,4, (IData)(vlSelfRef.reg_file__DOT__D_FF_l_b__DOT__data)));
    vlSelfRef.f_unit__DOT__w_compare_rd_cam_edge__DOT__signal_in 
        = vlSelfRef.f_unit__DOT__w_compare_rd_cam;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__compare_data 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__compare_data;
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
    vlSelfRef.d_array__DOT__D_FF_valid__DOT__din = vlSelfRef.d_array__DOT__valid;
    vlSelfRef.d_array__DOT__latency_counter__DOT__rst_n 
        = vlSelfRef.d_array__DOT____Vcellinp__latency_counter__rst_n;
    vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__valid 
        = vlSelfRef.sec_address_translator__DOT__in_valid;
    vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__addr 
        = vlSelfRef.sec_address_translator__DOT__in_raw_addr;
    vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__slice__BRA__0__KET____DOT__ram_inst__DOT__a_addr 
        = vlSelfRef.f_unit__DOT__tag_buffer__DOT__genblk1__DOT__cam_inst__DOT__compare_data;
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

extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_h9a855263_0;

VL_INLINE_OPT void Vtop_cache_controller_nb___ico_sequent__TOP__cache_system_tl_top__cache_inst__2(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___ico_sequent__TOP__cache_system_tl_top__cache_inst__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ d_array__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__data_array__wren;
    d_array__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__data_array__wren = 0;
    QData/*63:0*/ d_array__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__data_array__wren;
    d_array__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__data_array__wren = 0;
    QData/*63:0*/ d_array__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__data_array__wren;
    d_array__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__data_array__wren = 0;
    QData/*63:0*/ d_array__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__data_array__wren;
    d_array__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__data_array__wren = 0;
    QData/*63:0*/ d_array__DOT____Vcellinp__genblk4__BRA__4__KET____DOT__data_array__wren;
    d_array__DOT____Vcellinp__genblk4__BRA__4__KET____DOT__data_array__wren = 0;
    QData/*63:0*/ d_array__DOT____Vcellinp__genblk4__BRA__5__KET____DOT__data_array__wren;
    d_array__DOT____Vcellinp__genblk4__BRA__5__KET____DOT__data_array__wren = 0;
    QData/*63:0*/ d_array__DOT____Vcellinp__genblk4__BRA__6__KET____DOT__data_array__wren;
    d_array__DOT____Vcellinp__genblk4__BRA__6__KET____DOT__data_array__wren = 0;
    QData/*63:0*/ d_array__DOT____Vcellinp__genblk4__BRA__7__KET____DOT__data_array__wren;
    d_array__DOT____Vcellinp__genblk4__BRA__7__KET____DOT__data_array__wren = 0;
    QData/*63:0*/ d_array__DOT____Vcellinp__genblk4__BRA__8__KET____DOT__data_array__wren;
    d_array__DOT____Vcellinp__genblk4__BRA__8__KET____DOT__data_array__wren = 0;
    QData/*63:0*/ d_array__DOT____Vcellinp__genblk4__BRA__9__KET____DOT__data_array__wren;
    d_array__DOT____Vcellinp__genblk4__BRA__9__KET____DOT__data_array__wren = 0;
    QData/*63:0*/ d_array__DOT____Vcellinp__genblk4__BRA__10__KET____DOT__data_array__wren;
    d_array__DOT____Vcellinp__genblk4__BRA__10__KET____DOT__data_array__wren = 0;
    QData/*63:0*/ d_array__DOT____Vcellinp__genblk4__BRA__11__KET____DOT__data_array__wren;
    d_array__DOT____Vcellinp__genblk4__BRA__11__KET____DOT__data_array__wren = 0;
    QData/*63:0*/ d_array__DOT____Vcellinp__genblk4__BRA__12__KET____DOT__data_array__wren;
    d_array__DOT____Vcellinp__genblk4__BRA__12__KET____DOT__data_array__wren = 0;
    QData/*63:0*/ d_array__DOT____Vcellinp__genblk4__BRA__13__KET____DOT__data_array__wren;
    d_array__DOT____Vcellinp__genblk4__BRA__13__KET____DOT__data_array__wren = 0;
    QData/*63:0*/ d_array__DOT____Vcellinp__genblk4__BRA__14__KET____DOT__data_array__wren;
    d_array__DOT____Vcellinp__genblk4__BRA__14__KET____DOT__data_array__wren = 0;
    QData/*63:0*/ d_array__DOT____Vcellinp__genblk4__BRA__15__KET____DOT__data_array__wren;
    d_array__DOT____Vcellinp__genblk4__BRA__15__KET____DOT__data_array__wren = 0;
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.cache_write_valid = vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.write_valid;
    vlSelfRef.fsm_way = vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.fsm_way;
    vlSelfRef.wr_controller__DOT__cache_write_valid 
        = vlSelfRef.cache_write_valid;
    __Vtableidx2 = ((((IData)(vlSelfRef.cache_write_valid) 
                      << 4U) | (((IData)(vlSelfRef.wr_controller__DOT__done_keep) 
                                 << 3U) | ((IData)(vlSelfRef.wr_controller__DOT__counter_done) 
                                           << 2U))) 
                    | (((IData)(vlSelfRef.wr_controller__DOT__write_all) 
                        << 1U) | (IData)(vlSelfRef.wr_controller__DOT__cur_state)));
    vlSelfRef.wr_controller__DOT__next_state = Vtop__ConstPool__TABLE_h9a855263_0
        [__Vtableidx2];
    vlSelfRef.d_array__DOT__way = vlSelfRef.fsm_way;
    vlSelfRef.d_array__DOT__out_data[0U] = vlSelfRef.d_array__DOT__out_data_array
        [vlSelfRef.fsm_way][0U];
    vlSelfRef.d_array__DOT__out_data[1U] = vlSelfRef.d_array__DOT__out_data_array
        [vlSelfRef.fsm_way][1U];
    vlSelfRef.d_array__DOT__out_data[2U] = vlSelfRef.d_array__DOT__out_data_array
        [vlSelfRef.fsm_way][2U];
    vlSelfRef.d_array__DOT__out_data[3U] = vlSelfRef.d_array__DOT__out_data_array
        [vlSelfRef.fsm_way][3U];
    vlSelfRef.d_array__DOT__out_data[4U] = vlSelfRef.d_array__DOT__out_data_array
        [vlSelfRef.fsm_way][4U];
    vlSelfRef.d_array__DOT__out_data[5U] = vlSelfRef.d_array__DOT__out_data_array
        [vlSelfRef.fsm_way][5U];
    vlSelfRef.d_array__DOT__out_data[6U] = vlSelfRef.d_array__DOT__out_data_array
        [vlSelfRef.fsm_way][6U];
    vlSelfRef.d_array__DOT__out_data[7U] = vlSelfRef.d_array__DOT__out_data_array
        [vlSelfRef.fsm_way][7U];
    vlSelfRef.d_array__DOT__out_data[8U] = vlSelfRef.d_array__DOT__out_data_array
        [vlSelfRef.fsm_way][8U];
    vlSelfRef.d_array__DOT__out_data[9U] = vlSelfRef.d_array__DOT__out_data_array
        [vlSelfRef.fsm_way][9U];
    vlSelfRef.d_array__DOT__out_data[0xaU] = vlSelfRef.d_array__DOT__out_data_array
        [vlSelfRef.fsm_way][0xaU];
    vlSelfRef.d_array__DOT__out_data[0xbU] = vlSelfRef.d_array__DOT__out_data_array
        [vlSelfRef.fsm_way][0xbU];
    vlSelfRef.d_array__DOT__out_data[0xcU] = vlSelfRef.d_array__DOT__out_data_array
        [vlSelfRef.fsm_way][0xcU];
    vlSelfRef.d_array__DOT__out_data[0xdU] = vlSelfRef.d_array__DOT__out_data_array
        [vlSelfRef.fsm_way][0xdU];
    vlSelfRef.d_array__DOT__out_data[0xeU] = vlSelfRef.d_array__DOT__out_data_array
        [vlSelfRef.fsm_way][0xeU];
    vlSelfRef.d_array__DOT__out_data[0xfU] = vlSelfRef.d_array__DOT__out_data_array
        [vlSelfRef.fsm_way][0xfU];
    d_array__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__data_array__wren 
        = (((IData)(vlSelfRef.d_array__DOT__write_click) 
            & (0U == (IData)(vlSelfRef.fsm_way))) ? vlSelfRef.d_array__DOT__byte_mask
            : 0ULL);
    d_array__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__data_array__wren 
        = (((IData)(vlSelfRef.d_array__DOT__write_click) 
            & (1U == (IData)(vlSelfRef.fsm_way))) ? vlSelfRef.d_array__DOT__byte_mask
            : 0ULL);
    d_array__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__data_array__wren 
        = (((IData)(vlSelfRef.d_array__DOT__write_click) 
            & (2U == (IData)(vlSelfRef.fsm_way))) ? vlSelfRef.d_array__DOT__byte_mask
            : 0ULL);
    d_array__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__data_array__wren 
        = (((IData)(vlSelfRef.d_array__DOT__write_click) 
            & (3U == (IData)(vlSelfRef.fsm_way))) ? vlSelfRef.d_array__DOT__byte_mask
            : 0ULL);
    d_array__DOT____Vcellinp__genblk4__BRA__4__KET____DOT__data_array__wren 
        = (((IData)(vlSelfRef.d_array__DOT__write_click) 
            & (4U == (IData)(vlSelfRef.fsm_way))) ? vlSelfRef.d_array__DOT__byte_mask
            : 0ULL);
    d_array__DOT____Vcellinp__genblk4__BRA__5__KET____DOT__data_array__wren 
        = (((IData)(vlSelfRef.d_array__DOT__write_click) 
            & (5U == (IData)(vlSelfRef.fsm_way))) ? vlSelfRef.d_array__DOT__byte_mask
            : 0ULL);
    d_array__DOT____Vcellinp__genblk4__BRA__6__KET____DOT__data_array__wren 
        = (((IData)(vlSelfRef.d_array__DOT__write_click) 
            & (6U == (IData)(vlSelfRef.fsm_way))) ? vlSelfRef.d_array__DOT__byte_mask
            : 0ULL);
    d_array__DOT____Vcellinp__genblk4__BRA__7__KET____DOT__data_array__wren 
        = (((IData)(vlSelfRef.d_array__DOT__write_click) 
            & (7U == (IData)(vlSelfRef.fsm_way))) ? vlSelfRef.d_array__DOT__byte_mask
            : 0ULL);
    d_array__DOT____Vcellinp__genblk4__BRA__8__KET____DOT__data_array__wren 
        = (((IData)(vlSelfRef.d_array__DOT__write_click) 
            & (8U == (IData)(vlSelfRef.fsm_way))) ? vlSelfRef.d_array__DOT__byte_mask
            : 0ULL);
    d_array__DOT____Vcellinp__genblk4__BRA__9__KET____DOT__data_array__wren 
        = (((IData)(vlSelfRef.d_array__DOT__write_click) 
            & (9U == (IData)(vlSelfRef.fsm_way))) ? vlSelfRef.d_array__DOT__byte_mask
            : 0ULL);
    d_array__DOT____Vcellinp__genblk4__BRA__10__KET____DOT__data_array__wren 
        = (((IData)(vlSelfRef.d_array__DOT__write_click) 
            & (0xaU == (IData)(vlSelfRef.fsm_way)))
            ? vlSelfRef.d_array__DOT__byte_mask : 0ULL);
    d_array__DOT____Vcellinp__genblk4__BRA__11__KET____DOT__data_array__wren 
        = (((IData)(vlSelfRef.d_array__DOT__write_click) 
            & (0xbU == (IData)(vlSelfRef.fsm_way)))
            ? vlSelfRef.d_array__DOT__byte_mask : 0ULL);
    d_array__DOT____Vcellinp__genblk4__BRA__12__KET____DOT__data_array__wren 
        = (((IData)(vlSelfRef.d_array__DOT__write_click) 
            & (0xcU == (IData)(vlSelfRef.fsm_way)))
            ? vlSelfRef.d_array__DOT__byte_mask : 0ULL);
    d_array__DOT____Vcellinp__genblk4__BRA__13__KET____DOT__data_array__wren 
        = (((IData)(vlSelfRef.d_array__DOT__write_click) 
            & (0xdU == (IData)(vlSelfRef.fsm_way)))
            ? vlSelfRef.d_array__DOT__byte_mask : 0ULL);
    d_array__DOT____Vcellinp__genblk4__BRA__14__KET____DOT__data_array__wren 
        = (((IData)(vlSelfRef.d_array__DOT__write_click) 
            & (0xeU == (IData)(vlSelfRef.fsm_way)))
            ? vlSelfRef.d_array__DOT__byte_mask : 0ULL);
    d_array__DOT____Vcellinp__genblk4__BRA__15__KET____DOT__data_array__wren 
        = (((IData)(vlSelfRef.d_array__DOT__write_click) 
            & (0xfU == (IData)(vlSelfRef.fsm_way)))
            ? vlSelfRef.d_array__DOT__byte_mask : 0ULL);
    vlSelfRef.arr_data[0U] = vlSelfRef.d_array__DOT__out_data_array
        [vlSelfRef.fsm_way][0U];
    vlSelfRef.arr_data[1U] = vlSelfRef.d_array__DOT__out_data_array
        [vlSelfRef.fsm_way][1U];
    vlSelfRef.arr_data[2U] = vlSelfRef.d_array__DOT__out_data_array
        [vlSelfRef.fsm_way][2U];
    vlSelfRef.arr_data[3U] = vlSelfRef.d_array__DOT__out_data_array
        [vlSelfRef.fsm_way][3U];
    vlSelfRef.arr_data[4U] = vlSelfRef.d_array__DOT__out_data_array
        [vlSelfRef.fsm_way][4U];
    vlSelfRef.arr_data[5U] = vlSelfRef.d_array__DOT__out_data_array
        [vlSelfRef.fsm_way][5U];
    vlSelfRef.arr_data[6U] = vlSelfRef.d_array__DOT__out_data_array
        [vlSelfRef.fsm_way][6U];
    vlSelfRef.arr_data[7U] = vlSelfRef.d_array__DOT__out_data_array
        [vlSelfRef.fsm_way][7U];
    vlSelfRef.arr_data[8U] = vlSelfRef.d_array__DOT__out_data_array
        [vlSelfRef.fsm_way][8U];
    vlSelfRef.arr_data[9U] = vlSelfRef.d_array__DOT__out_data_array
        [vlSelfRef.fsm_way][9U];
    vlSelfRef.arr_data[0xaU] = vlSelfRef.d_array__DOT__out_data_array
        [vlSelfRef.fsm_way][0xaU];
    vlSelfRef.arr_data[0xbU] = vlSelfRef.d_array__DOT__out_data_array
        [vlSelfRef.fsm_way][0xbU];
    vlSelfRef.arr_data[0xcU] = vlSelfRef.d_array__DOT__out_data_array
        [vlSelfRef.fsm_way][0xcU];
    vlSelfRef.arr_data[0xdU] = vlSelfRef.d_array__DOT__out_data_array
        [vlSelfRef.fsm_way][0xdU];
    vlSelfRef.arr_data[0xeU] = vlSelfRef.d_array__DOT__out_data_array
        [vlSelfRef.fsm_way][0xeU];
    vlSelfRef.arr_data[0xfU] = vlSelfRef.d_array__DOT__out_data_array
        [vlSelfRef.fsm_way][0xfU];
    vlSelfRef.d_array__DOT__in_data[0U] = (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                            | ((IData)(vlSelfRef.write) 
                                               & (0U 
                                                  == (IData)(vlSelfRef.d_array__DOT__word_idx))))
                                            ? vlSelfRef.__VdfgRegularize_h953fb8a2_0_60
                                            : vlSelfRef.d_array__DOT__out_data_array
                                           [vlSelfRef.fsm_way][0U]);
    vlSelfRef.d_array__DOT__in_data[1U] = (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                            | ((IData)(vlSelfRef.write) 
                                               & (1U 
                                                  == (IData)(vlSelfRef.d_array__DOT__word_idx))))
                                            ? ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_56) 
                                                 << 0x18U) 
                                                | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_57) 
                                                   << 0x10U)) 
                                               | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_58) 
                                                   << 8U) 
                                                  | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_59)))
                                            : vlSelfRef.d_array__DOT__out_data_array
                                           [vlSelfRef.fsm_way][1U]);
    vlSelfRef.d_array__DOT__in_data[2U] = (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                            | ((IData)(vlSelfRef.write) 
                                               & (2U 
                                                  == (IData)(vlSelfRef.d_array__DOT__word_idx))))
                                            ? ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_52) 
                                                 << 0x18U) 
                                                | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_53) 
                                                   << 0x10U)) 
                                               | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_54) 
                                                   << 8U) 
                                                  | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_55)))
                                            : vlSelfRef.d_array__DOT__out_data_array
                                           [vlSelfRef.fsm_way][2U]);
    vlSelfRef.d_array__DOT__in_data[3U] = (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                            | ((IData)(vlSelfRef.write) 
                                               & (3U 
                                                  == (IData)(vlSelfRef.d_array__DOT__word_idx))))
                                            ? ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_48) 
                                                 << 0x18U) 
                                                | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_49) 
                                                   << 0x10U)) 
                                               | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_50) 
                                                   << 8U) 
                                                  | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_51)))
                                            : vlSelfRef.d_array__DOT__out_data_array
                                           [vlSelfRef.fsm_way][3U]);
    vlSelfRef.d_array__DOT__in_data[4U] = (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                            | ((IData)(vlSelfRef.write) 
                                               & (4U 
                                                  == (IData)(vlSelfRef.d_array__DOT__word_idx))))
                                            ? ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_44) 
                                                 << 0x18U) 
                                                | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_45) 
                                                   << 0x10U)) 
                                               | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_46) 
                                                   << 8U) 
                                                  | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_47)))
                                            : vlSelfRef.d_array__DOT__out_data_array
                                           [vlSelfRef.fsm_way][4U]);
    vlSelfRef.d_array__DOT__in_data[5U] = (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                            | ((IData)(vlSelfRef.write) 
                                               & (5U 
                                                  == (IData)(vlSelfRef.d_array__DOT__word_idx))))
                                            ? ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_40) 
                                                 << 0x18U) 
                                                | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_41) 
                                                   << 0x10U)) 
                                               | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_42) 
                                                   << 8U) 
                                                  | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_43)))
                                            : vlSelfRef.d_array__DOT__out_data_array
                                           [vlSelfRef.fsm_way][5U]);
    vlSelfRef.d_array__DOT__in_data[6U] = (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                            | ((IData)(vlSelfRef.write) 
                                               & (6U 
                                                  == (IData)(vlSelfRef.d_array__DOT__word_idx))))
                                            ? ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_36) 
                                                 << 0x18U) 
                                                | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_37) 
                                                   << 0x10U)) 
                                               | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_38) 
                                                   << 8U) 
                                                  | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_39)))
                                            : vlSelfRef.d_array__DOT__out_data_array
                                           [vlSelfRef.fsm_way][6U]);
    vlSelfRef.d_array__DOT__in_data[7U] = (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                            | ((IData)(vlSelfRef.write) 
                                               & (7U 
                                                  == (IData)(vlSelfRef.d_array__DOT__word_idx))))
                                            ? ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_32) 
                                                 << 0x18U) 
                                                | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_33) 
                                                   << 0x10U)) 
                                               | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_34) 
                                                   << 8U) 
                                                  | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_35)))
                                            : vlSelfRef.d_array__DOT__out_data_array
                                           [vlSelfRef.fsm_way][7U]);
    vlSelfRef.d_array__DOT__in_data[8U] = (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                            | ((IData)(vlSelfRef.write) 
                                               & (8U 
                                                  == (IData)(vlSelfRef.d_array__DOT__word_idx))))
                                            ? ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_28) 
                                                 << 0x18U) 
                                                | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_29) 
                                                   << 0x10U)) 
                                               | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_30) 
                                                   << 8U) 
                                                  | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_31)))
                                            : vlSelfRef.d_array__DOT__out_data_array
                                           [vlSelfRef.fsm_way][8U]);
    vlSelfRef.d_array__DOT__in_data[9U] = (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                            | ((IData)(vlSelfRef.write) 
                                               & (9U 
                                                  == (IData)(vlSelfRef.d_array__DOT__word_idx))))
                                            ? ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_24) 
                                                 << 0x18U) 
                                                | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_25) 
                                                   << 0x10U)) 
                                               | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_26) 
                                                   << 8U) 
                                                  | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_27)))
                                            : vlSelfRef.d_array__DOT__out_data_array
                                           [vlSelfRef.fsm_way][9U]);
    vlSelfRef.d_array__DOT__in_data[0xaU] = (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                              | ((IData)(vlSelfRef.write) 
                                                 & (0xaU 
                                                    == (IData)(vlSelfRef.d_array__DOT__word_idx))))
                                              ? ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_20) 
                                                   << 0x18U) 
                                                  | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_21) 
                                                     << 0x10U)) 
                                                 | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_22) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_23)))
                                              : vlSelfRef.d_array__DOT__out_data_array
                                             [vlSelfRef.fsm_way][0xaU]);
    vlSelfRef.d_array__DOT__in_data[0xbU] = (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                              | ((IData)(vlSelfRef.write) 
                                                 & (0xbU 
                                                    == (IData)(vlSelfRef.d_array__DOT__word_idx))))
                                              ? ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_16) 
                                                   << 0x18U) 
                                                  | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_17) 
                                                     << 0x10U)) 
                                                 | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_18) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_19)))
                                              : vlSelfRef.d_array__DOT__out_data_array
                                             [vlSelfRef.fsm_way][0xbU]);
    vlSelfRef.d_array__DOT__in_data[0xcU] = (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                              | ((IData)(vlSelfRef.write) 
                                                 & (0xcU 
                                                    == (IData)(vlSelfRef.d_array__DOT__word_idx))))
                                              ? ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_12) 
                                                   << 0x18U) 
                                                  | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_13) 
                                                     << 0x10U)) 
                                                 | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_14) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_15)))
                                              : vlSelfRef.d_array__DOT__out_data_array
                                             [vlSelfRef.fsm_way][0xcU]);
    vlSelfRef.d_array__DOT__in_data[0xdU] = (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                              | ((IData)(vlSelfRef.write) 
                                                 & (0xdU 
                                                    == (IData)(vlSelfRef.d_array__DOT__word_idx))))
                                              ? ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_8) 
                                                   << 0x18U) 
                                                  | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_9) 
                                                     << 0x10U)) 
                                                 | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_10) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_11)))
                                              : vlSelfRef.d_array__DOT__out_data_array
                                             [vlSelfRef.fsm_way][0xdU]);
    vlSelfRef.d_array__DOT__in_data[0xeU] = (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                              | ((IData)(vlSelfRef.write) 
                                                 & (0xeU 
                                                    == (IData)(vlSelfRef.d_array__DOT__word_idx))))
                                              ? ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_4) 
                                                   << 0x18U) 
                                                  | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_5) 
                                                     << 0x10U)) 
                                                 | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_6) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_7)))
                                              : vlSelfRef.d_array__DOT__out_data_array
                                             [vlSelfRef.fsm_way][0xeU]);
    vlSelfRef.d_array__DOT__in_data[0xfU] = (((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                              | ((IData)(vlSelfRef.write) 
                                                 & (0xfU 
                                                    == (IData)(vlSelfRef.d_array__DOT__word_idx))))
                                              ? ((((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_0) 
                                                   << 0x18U) 
                                                  | ((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_1) 
                                                     << 0x10U)) 
                                                 | (((IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_2) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h953fb8a2_0_3)))
                                              : vlSelfRef.d_array__DOT__out_data_array
                                             [vlSelfRef.fsm_way][0xfU]);
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array.wren 
        = d_array__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__data_array__wren;
    vlSelfRef.d_array__DOT__wren[0U] = d_array__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__data_array__wren;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array.wren 
        = d_array__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__data_array__wren;
    vlSelfRef.d_array__DOT__wren[1U] = d_array__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__data_array__wren;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array.wren 
        = d_array__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__data_array__wren;
    vlSelfRef.d_array__DOT__wren[2U] = d_array__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__data_array__wren;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array.wren 
        = d_array__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__data_array__wren;
    vlSelfRef.d_array__DOT__wren[3U] = d_array__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__data_array__wren;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array.wren 
        = d_array__DOT____Vcellinp__genblk4__BRA__4__KET____DOT__data_array__wren;
    vlSelfRef.d_array__DOT__wren[4U] = d_array__DOT____Vcellinp__genblk4__BRA__4__KET____DOT__data_array__wren;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array.wren 
        = d_array__DOT____Vcellinp__genblk4__BRA__5__KET____DOT__data_array__wren;
    vlSelfRef.d_array__DOT__wren[5U] = d_array__DOT____Vcellinp__genblk4__BRA__5__KET____DOT__data_array__wren;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array.wren 
        = d_array__DOT____Vcellinp__genblk4__BRA__6__KET____DOT__data_array__wren;
    vlSelfRef.d_array__DOT__wren[6U] = d_array__DOT____Vcellinp__genblk4__BRA__6__KET____DOT__data_array__wren;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array.wren 
        = d_array__DOT____Vcellinp__genblk4__BRA__7__KET____DOT__data_array__wren;
    vlSelfRef.d_array__DOT__wren[7U] = d_array__DOT____Vcellinp__genblk4__BRA__7__KET____DOT__data_array__wren;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array.wren 
        = d_array__DOT____Vcellinp__genblk4__BRA__8__KET____DOT__data_array__wren;
    vlSelfRef.d_array__DOT__wren[8U] = d_array__DOT____Vcellinp__genblk4__BRA__8__KET____DOT__data_array__wren;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array.wren 
        = d_array__DOT____Vcellinp__genblk4__BRA__9__KET____DOT__data_array__wren;
    vlSelfRef.d_array__DOT__wren[9U] = d_array__DOT____Vcellinp__genblk4__BRA__9__KET____DOT__data_array__wren;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array.wren 
        = d_array__DOT____Vcellinp__genblk4__BRA__10__KET____DOT__data_array__wren;
    vlSelfRef.d_array__DOT__wren[0xaU] = d_array__DOT____Vcellinp__genblk4__BRA__10__KET____DOT__data_array__wren;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array.wren 
        = d_array__DOT____Vcellinp__genblk4__BRA__11__KET____DOT__data_array__wren;
    vlSelfRef.d_array__DOT__wren[0xbU] = d_array__DOT____Vcellinp__genblk4__BRA__11__KET____DOT__data_array__wren;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array.wren 
        = d_array__DOT____Vcellinp__genblk4__BRA__12__KET____DOT__data_array__wren;
    vlSelfRef.d_array__DOT__wren[0xcU] = d_array__DOT____Vcellinp__genblk4__BRA__12__KET____DOT__data_array__wren;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array.wren 
        = d_array__DOT____Vcellinp__genblk4__BRA__13__KET____DOT__data_array__wren;
    vlSelfRef.d_array__DOT__wren[0xdU] = d_array__DOT____Vcellinp__genblk4__BRA__13__KET____DOT__data_array__wren;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array.wren 
        = d_array__DOT____Vcellinp__genblk4__BRA__14__KET____DOT__data_array__wren;
    vlSelfRef.d_array__DOT__wren[0xeU] = d_array__DOT____Vcellinp__genblk4__BRA__14__KET____DOT__data_array__wren;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array.wren 
        = d_array__DOT____Vcellinp__genblk4__BRA__15__KET____DOT__data_array__wren;
    vlSelfRef.d_array__DOT__wren[0xfU] = d_array__DOT____Vcellinp__genblk4__BRA__15__KET____DOT__data_array__wren;
    vlSelfRef.wr_controller__DOT__cache_write_data[0U] 
        = vlSelfRef.arr_data[0U];
    vlSelfRef.wr_controller__DOT__cache_write_data[1U] 
        = vlSelfRef.arr_data[1U];
    vlSelfRef.wr_controller__DOT__cache_write_data[2U] 
        = vlSelfRef.arr_data[2U];
    vlSelfRef.wr_controller__DOT__cache_write_data[3U] 
        = vlSelfRef.arr_data[3U];
    vlSelfRef.wr_controller__DOT__cache_write_data[4U] 
        = vlSelfRef.arr_data[4U];
    vlSelfRef.wr_controller__DOT__cache_write_data[5U] 
        = vlSelfRef.arr_data[5U];
    vlSelfRef.wr_controller__DOT__cache_write_data[6U] 
        = vlSelfRef.arr_data[6U];
    vlSelfRef.wr_controller__DOT__cache_write_data[7U] 
        = vlSelfRef.arr_data[7U];
    vlSelfRef.wr_controller__DOT__cache_write_data[8U] 
        = vlSelfRef.arr_data[8U];
    vlSelfRef.wr_controller__DOT__cache_write_data[9U] 
        = vlSelfRef.arr_data[9U];
    vlSelfRef.wr_controller__DOT__cache_write_data[0xaU] 
        = vlSelfRef.arr_data[0xaU];
    vlSelfRef.wr_controller__DOT__cache_write_data[0xbU] 
        = vlSelfRef.arr_data[0xbU];
    vlSelfRef.wr_controller__DOT__cache_write_data[0xcU] 
        = vlSelfRef.arr_data[0xcU];
    vlSelfRef.wr_controller__DOT__cache_write_data[0xdU] 
        = vlSelfRef.arr_data[0xdU];
    vlSelfRef.wr_controller__DOT__cache_write_data[0xeU] 
        = vlSelfRef.arr_data[0xeU];
    vlSelfRef.wr_controller__DOT__cache_write_data[0xfU] 
        = vlSelfRef.arr_data[0xfU];
    vlSelfRef.c_fsm__DOT__ib_data[0U] = vlSelfRef.arr_data[0U];
    vlSelfRef.c_fsm__DOT__ib_data[1U] = vlSelfRef.arr_data[1U];
    vlSelfRef.c_fsm__DOT__ib_data[2U] = vlSelfRef.arr_data[2U];
    vlSelfRef.c_fsm__DOT__ib_data[3U] = vlSelfRef.arr_data[3U];
    vlSelfRef.c_fsm__DOT__ib_data[4U] = vlSelfRef.arr_data[4U];
    vlSelfRef.c_fsm__DOT__ib_data[5U] = vlSelfRef.arr_data[5U];
    vlSelfRef.c_fsm__DOT__ib_data[6U] = vlSelfRef.arr_data[6U];
    vlSelfRef.c_fsm__DOT__ib_data[7U] = vlSelfRef.arr_data[7U];
    vlSelfRef.c_fsm__DOT__ib_data[8U] = vlSelfRef.arr_data[8U];
    vlSelfRef.c_fsm__DOT__ib_data[9U] = vlSelfRef.arr_data[9U];
    vlSelfRef.c_fsm__DOT__ib_data[0xaU] = vlSelfRef.arr_data[0xaU];
    vlSelfRef.c_fsm__DOT__ib_data[0xbU] = vlSelfRef.arr_data[0xbU];
    vlSelfRef.c_fsm__DOT__ib_data[0xcU] = vlSelfRef.arr_data[0xcU];
    vlSelfRef.c_fsm__DOT__ib_data[0xdU] = vlSelfRef.arr_data[0xdU];
    vlSelfRef.c_fsm__DOT__ib_data[0xeU] = vlSelfRef.arr_data[0xeU];
    vlSelfRef.c_fsm__DOT__ib_data[0xfU] = vlSelfRef.arr_data[0xfU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.arr_in_data[0U] 
        = vlSelfRef.arr_data[0U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.arr_in_data[1U] 
        = vlSelfRef.arr_data[1U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.arr_in_data[2U] 
        = vlSelfRef.arr_data[2U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.arr_in_data[3U] 
        = vlSelfRef.arr_data[3U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.arr_in_data[4U] 
        = vlSelfRef.arr_data[4U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.arr_in_data[5U] 
        = vlSelfRef.arr_data[5U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.arr_in_data[6U] 
        = vlSelfRef.arr_data[6U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.arr_in_data[7U] 
        = vlSelfRef.arr_data[7U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.arr_in_data[8U] 
        = vlSelfRef.arr_data[8U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.arr_in_data[9U] 
        = vlSelfRef.arr_data[9U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.arr_in_data[0xaU] 
        = vlSelfRef.arr_data[0xaU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.arr_in_data[0xbU] 
        = vlSelfRef.arr_data[0xbU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.arr_in_data[0xcU] 
        = vlSelfRef.arr_data[0xcU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.arr_in_data[0xdU] 
        = vlSelfRef.arr_data[0xdU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.arr_in_data[0xeU] 
        = vlSelfRef.arr_data[0xeU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.arr_in_data[0xfU] 
        = vlSelfRef.arr_data[0xfU];
    vlSelfRef.c_fsm__DOT__out_data = 0U;
    if (vlSelfRef.c_fsm__DOT__cur_state) {
        if (vlSelfRef.c_fsm__DOT__cur_state) {
            if (vlSelfRef.fsm_accessed) {
                if (vlSelfRef.fsm_hit) {
                    vlSelfRef.c_fsm__DOT__out_data 
                        = (((0U == (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelfRef.c_fsm__DOT__word_idx)), 5U) 
                                              - (IData)(1U)) 
                                             - (IData)(0x1fU))))
                             ? 0U : (vlSelfRef.arr_data[
                                     (((IData)(0x1fU) 
                                       + (0x1ffU & 
                                          ((VL_SHIFTL_III(9,32,32, 
                                                          ((IData)(1U) 
                                                           + (IData)(vlSelfRef.c_fsm__DOT__word_idx)), 5U) 
                                            - (IData)(1U)) 
                                           - (IData)(0x1fU)))) 
                                      >> 5U)] << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((VL_SHIFTL_III(9,32,32, 
                                                                     ((IData)(1U) 
                                                                      + (IData)(vlSelfRef.c_fsm__DOT__word_idx)), 5U) 
                                                       - (IData)(1U)) 
                                                      - (IData)(0x1fU)))))) 
                           | (vlSelfRef.arr_data[(0xfU 
                                                  & (((VL_SHIFTL_III(9,32,32, 
                                                                     ((IData)(1U) 
                                                                      + (IData)(vlSelfRef.c_fsm__DOT__word_idx)), 5U) 
                                                       - (IData)(1U)) 
                                                      - (IData)(0x1fU)) 
                                                     >> 5U))] 
                              >> (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                          ((IData)(1U) 
                                                           + (IData)(vlSelfRef.c_fsm__DOT__word_idx)), 5U) 
                                            - (IData)(1U)) 
                                           - (IData)(0x1fU)))));
                }
            }
        }
    }
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array.in_data[0U] 
        = vlSelfRef.d_array__DOT__in_data[0U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array.in_data[1U] 
        = vlSelfRef.d_array__DOT__in_data[1U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array.in_data[2U] 
        = vlSelfRef.d_array__DOT__in_data[2U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array.in_data[3U] 
        = vlSelfRef.d_array__DOT__in_data[3U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array.in_data[4U] 
        = vlSelfRef.d_array__DOT__in_data[4U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array.in_data[5U] 
        = vlSelfRef.d_array__DOT__in_data[5U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array.in_data[6U] 
        = vlSelfRef.d_array__DOT__in_data[6U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array.in_data[7U] 
        = vlSelfRef.d_array__DOT__in_data[7U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array.in_data[8U] 
        = vlSelfRef.d_array__DOT__in_data[8U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array.in_data[9U] 
        = vlSelfRef.d_array__DOT__in_data[9U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array.in_data[0xaU] 
        = vlSelfRef.d_array__DOT__in_data[0xaU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array.in_data[0xbU] 
        = vlSelfRef.d_array__DOT__in_data[0xbU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array.in_data[0xcU] 
        = vlSelfRef.d_array__DOT__in_data[0xcU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array.in_data[0xdU] 
        = vlSelfRef.d_array__DOT__in_data[0xdU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array.in_data[0xeU] 
        = vlSelfRef.d_array__DOT__in_data[0xeU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__0__KET____DOT__data_array.in_data[0xfU] 
        = vlSelfRef.d_array__DOT__in_data[0xfU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array.in_data[0U] 
        = vlSelfRef.d_array__DOT__in_data[0U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array.in_data[1U] 
        = vlSelfRef.d_array__DOT__in_data[1U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array.in_data[2U] 
        = vlSelfRef.d_array__DOT__in_data[2U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array.in_data[3U] 
        = vlSelfRef.d_array__DOT__in_data[3U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array.in_data[4U] 
        = vlSelfRef.d_array__DOT__in_data[4U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array.in_data[5U] 
        = vlSelfRef.d_array__DOT__in_data[5U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array.in_data[6U] 
        = vlSelfRef.d_array__DOT__in_data[6U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array.in_data[7U] 
        = vlSelfRef.d_array__DOT__in_data[7U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array.in_data[8U] 
        = vlSelfRef.d_array__DOT__in_data[8U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array.in_data[9U] 
        = vlSelfRef.d_array__DOT__in_data[9U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array.in_data[0xaU] 
        = vlSelfRef.d_array__DOT__in_data[0xaU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array.in_data[0xbU] 
        = vlSelfRef.d_array__DOT__in_data[0xbU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array.in_data[0xcU] 
        = vlSelfRef.d_array__DOT__in_data[0xcU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array.in_data[0xdU] 
        = vlSelfRef.d_array__DOT__in_data[0xdU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array.in_data[0xeU] 
        = vlSelfRef.d_array__DOT__in_data[0xeU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__1__KET____DOT__data_array.in_data[0xfU] 
        = vlSelfRef.d_array__DOT__in_data[0xfU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array.in_data[0U] 
        = vlSelfRef.d_array__DOT__in_data[0U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array.in_data[1U] 
        = vlSelfRef.d_array__DOT__in_data[1U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array.in_data[2U] 
        = vlSelfRef.d_array__DOT__in_data[2U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array.in_data[3U] 
        = vlSelfRef.d_array__DOT__in_data[3U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array.in_data[4U] 
        = vlSelfRef.d_array__DOT__in_data[4U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array.in_data[5U] 
        = vlSelfRef.d_array__DOT__in_data[5U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array.in_data[6U] 
        = vlSelfRef.d_array__DOT__in_data[6U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array.in_data[7U] 
        = vlSelfRef.d_array__DOT__in_data[7U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array.in_data[8U] 
        = vlSelfRef.d_array__DOT__in_data[8U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array.in_data[9U] 
        = vlSelfRef.d_array__DOT__in_data[9U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array.in_data[0xaU] 
        = vlSelfRef.d_array__DOT__in_data[0xaU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array.in_data[0xbU] 
        = vlSelfRef.d_array__DOT__in_data[0xbU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array.in_data[0xcU] 
        = vlSelfRef.d_array__DOT__in_data[0xcU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array.in_data[0xdU] 
        = vlSelfRef.d_array__DOT__in_data[0xdU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array.in_data[0xeU] 
        = vlSelfRef.d_array__DOT__in_data[0xeU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__2__KET____DOT__data_array.in_data[0xfU] 
        = vlSelfRef.d_array__DOT__in_data[0xfU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array.in_data[0U] 
        = vlSelfRef.d_array__DOT__in_data[0U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array.in_data[1U] 
        = vlSelfRef.d_array__DOT__in_data[1U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array.in_data[2U] 
        = vlSelfRef.d_array__DOT__in_data[2U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array.in_data[3U] 
        = vlSelfRef.d_array__DOT__in_data[3U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array.in_data[4U] 
        = vlSelfRef.d_array__DOT__in_data[4U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array.in_data[5U] 
        = vlSelfRef.d_array__DOT__in_data[5U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array.in_data[6U] 
        = vlSelfRef.d_array__DOT__in_data[6U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array.in_data[7U] 
        = vlSelfRef.d_array__DOT__in_data[7U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array.in_data[8U] 
        = vlSelfRef.d_array__DOT__in_data[8U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array.in_data[9U] 
        = vlSelfRef.d_array__DOT__in_data[9U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array.in_data[0xaU] 
        = vlSelfRef.d_array__DOT__in_data[0xaU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array.in_data[0xbU] 
        = vlSelfRef.d_array__DOT__in_data[0xbU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array.in_data[0xcU] 
        = vlSelfRef.d_array__DOT__in_data[0xcU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array.in_data[0xdU] 
        = vlSelfRef.d_array__DOT__in_data[0xdU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array.in_data[0xeU] 
        = vlSelfRef.d_array__DOT__in_data[0xeU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__3__KET____DOT__data_array.in_data[0xfU] 
        = vlSelfRef.d_array__DOT__in_data[0xfU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array.in_data[0U] 
        = vlSelfRef.d_array__DOT__in_data[0U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array.in_data[1U] 
        = vlSelfRef.d_array__DOT__in_data[1U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array.in_data[2U] 
        = vlSelfRef.d_array__DOT__in_data[2U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array.in_data[3U] 
        = vlSelfRef.d_array__DOT__in_data[3U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array.in_data[4U] 
        = vlSelfRef.d_array__DOT__in_data[4U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array.in_data[5U] 
        = vlSelfRef.d_array__DOT__in_data[5U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array.in_data[6U] 
        = vlSelfRef.d_array__DOT__in_data[6U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array.in_data[7U] 
        = vlSelfRef.d_array__DOT__in_data[7U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array.in_data[8U] 
        = vlSelfRef.d_array__DOT__in_data[8U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array.in_data[9U] 
        = vlSelfRef.d_array__DOT__in_data[9U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array.in_data[0xaU] 
        = vlSelfRef.d_array__DOT__in_data[0xaU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array.in_data[0xbU] 
        = vlSelfRef.d_array__DOT__in_data[0xbU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array.in_data[0xcU] 
        = vlSelfRef.d_array__DOT__in_data[0xcU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array.in_data[0xdU] 
        = vlSelfRef.d_array__DOT__in_data[0xdU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array.in_data[0xeU] 
        = vlSelfRef.d_array__DOT__in_data[0xeU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__4__KET____DOT__data_array.in_data[0xfU] 
        = vlSelfRef.d_array__DOT__in_data[0xfU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array.in_data[0U] 
        = vlSelfRef.d_array__DOT__in_data[0U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array.in_data[1U] 
        = vlSelfRef.d_array__DOT__in_data[1U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array.in_data[2U] 
        = vlSelfRef.d_array__DOT__in_data[2U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array.in_data[3U] 
        = vlSelfRef.d_array__DOT__in_data[3U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array.in_data[4U] 
        = vlSelfRef.d_array__DOT__in_data[4U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array.in_data[5U] 
        = vlSelfRef.d_array__DOT__in_data[5U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array.in_data[6U] 
        = vlSelfRef.d_array__DOT__in_data[6U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array.in_data[7U] 
        = vlSelfRef.d_array__DOT__in_data[7U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array.in_data[8U] 
        = vlSelfRef.d_array__DOT__in_data[8U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array.in_data[9U] 
        = vlSelfRef.d_array__DOT__in_data[9U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array.in_data[0xaU] 
        = vlSelfRef.d_array__DOT__in_data[0xaU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array.in_data[0xbU] 
        = vlSelfRef.d_array__DOT__in_data[0xbU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array.in_data[0xcU] 
        = vlSelfRef.d_array__DOT__in_data[0xcU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array.in_data[0xdU] 
        = vlSelfRef.d_array__DOT__in_data[0xdU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array.in_data[0xeU] 
        = vlSelfRef.d_array__DOT__in_data[0xeU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__5__KET____DOT__data_array.in_data[0xfU] 
        = vlSelfRef.d_array__DOT__in_data[0xfU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array.in_data[0U] 
        = vlSelfRef.d_array__DOT__in_data[0U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array.in_data[1U] 
        = vlSelfRef.d_array__DOT__in_data[1U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array.in_data[2U] 
        = vlSelfRef.d_array__DOT__in_data[2U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array.in_data[3U] 
        = vlSelfRef.d_array__DOT__in_data[3U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array.in_data[4U] 
        = vlSelfRef.d_array__DOT__in_data[4U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array.in_data[5U] 
        = vlSelfRef.d_array__DOT__in_data[5U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array.in_data[6U] 
        = vlSelfRef.d_array__DOT__in_data[6U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array.in_data[7U] 
        = vlSelfRef.d_array__DOT__in_data[7U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array.in_data[8U] 
        = vlSelfRef.d_array__DOT__in_data[8U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array.in_data[9U] 
        = vlSelfRef.d_array__DOT__in_data[9U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array.in_data[0xaU] 
        = vlSelfRef.d_array__DOT__in_data[0xaU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array.in_data[0xbU] 
        = vlSelfRef.d_array__DOT__in_data[0xbU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array.in_data[0xcU] 
        = vlSelfRef.d_array__DOT__in_data[0xcU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array.in_data[0xdU] 
        = vlSelfRef.d_array__DOT__in_data[0xdU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array.in_data[0xeU] 
        = vlSelfRef.d_array__DOT__in_data[0xeU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__6__KET____DOT__data_array.in_data[0xfU] 
        = vlSelfRef.d_array__DOT__in_data[0xfU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array.in_data[0U] 
        = vlSelfRef.d_array__DOT__in_data[0U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array.in_data[1U] 
        = vlSelfRef.d_array__DOT__in_data[1U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array.in_data[2U] 
        = vlSelfRef.d_array__DOT__in_data[2U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array.in_data[3U] 
        = vlSelfRef.d_array__DOT__in_data[3U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array.in_data[4U] 
        = vlSelfRef.d_array__DOT__in_data[4U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array.in_data[5U] 
        = vlSelfRef.d_array__DOT__in_data[5U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array.in_data[6U] 
        = vlSelfRef.d_array__DOT__in_data[6U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array.in_data[7U] 
        = vlSelfRef.d_array__DOT__in_data[7U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array.in_data[8U] 
        = vlSelfRef.d_array__DOT__in_data[8U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array.in_data[9U] 
        = vlSelfRef.d_array__DOT__in_data[9U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array.in_data[0xaU] 
        = vlSelfRef.d_array__DOT__in_data[0xaU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array.in_data[0xbU] 
        = vlSelfRef.d_array__DOT__in_data[0xbU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array.in_data[0xcU] 
        = vlSelfRef.d_array__DOT__in_data[0xcU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array.in_data[0xdU] 
        = vlSelfRef.d_array__DOT__in_data[0xdU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array.in_data[0xeU] 
        = vlSelfRef.d_array__DOT__in_data[0xeU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__7__KET____DOT__data_array.in_data[0xfU] 
        = vlSelfRef.d_array__DOT__in_data[0xfU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array.in_data[0U] 
        = vlSelfRef.d_array__DOT__in_data[0U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array.in_data[1U] 
        = vlSelfRef.d_array__DOT__in_data[1U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array.in_data[2U] 
        = vlSelfRef.d_array__DOT__in_data[2U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array.in_data[3U] 
        = vlSelfRef.d_array__DOT__in_data[3U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array.in_data[4U] 
        = vlSelfRef.d_array__DOT__in_data[4U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array.in_data[5U] 
        = vlSelfRef.d_array__DOT__in_data[5U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array.in_data[6U] 
        = vlSelfRef.d_array__DOT__in_data[6U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array.in_data[7U] 
        = vlSelfRef.d_array__DOT__in_data[7U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array.in_data[8U] 
        = vlSelfRef.d_array__DOT__in_data[8U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array.in_data[9U] 
        = vlSelfRef.d_array__DOT__in_data[9U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array.in_data[0xaU] 
        = vlSelfRef.d_array__DOT__in_data[0xaU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array.in_data[0xbU] 
        = vlSelfRef.d_array__DOT__in_data[0xbU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array.in_data[0xcU] 
        = vlSelfRef.d_array__DOT__in_data[0xcU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array.in_data[0xdU] 
        = vlSelfRef.d_array__DOT__in_data[0xdU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array.in_data[0xeU] 
        = vlSelfRef.d_array__DOT__in_data[0xeU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__8__KET____DOT__data_array.in_data[0xfU] 
        = vlSelfRef.d_array__DOT__in_data[0xfU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array.in_data[0U] 
        = vlSelfRef.d_array__DOT__in_data[0U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array.in_data[1U] 
        = vlSelfRef.d_array__DOT__in_data[1U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array.in_data[2U] 
        = vlSelfRef.d_array__DOT__in_data[2U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array.in_data[3U] 
        = vlSelfRef.d_array__DOT__in_data[3U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array.in_data[4U] 
        = vlSelfRef.d_array__DOT__in_data[4U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array.in_data[5U] 
        = vlSelfRef.d_array__DOT__in_data[5U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array.in_data[6U] 
        = vlSelfRef.d_array__DOT__in_data[6U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array.in_data[7U] 
        = vlSelfRef.d_array__DOT__in_data[7U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array.in_data[8U] 
        = vlSelfRef.d_array__DOT__in_data[8U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array.in_data[9U] 
        = vlSelfRef.d_array__DOT__in_data[9U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array.in_data[0xaU] 
        = vlSelfRef.d_array__DOT__in_data[0xaU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array.in_data[0xbU] 
        = vlSelfRef.d_array__DOT__in_data[0xbU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array.in_data[0xcU] 
        = vlSelfRef.d_array__DOT__in_data[0xcU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array.in_data[0xdU] 
        = vlSelfRef.d_array__DOT__in_data[0xdU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array.in_data[0xeU] 
        = vlSelfRef.d_array__DOT__in_data[0xeU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__9__KET____DOT__data_array.in_data[0xfU] 
        = vlSelfRef.d_array__DOT__in_data[0xfU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array.in_data[0U] 
        = vlSelfRef.d_array__DOT__in_data[0U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array.in_data[1U] 
        = vlSelfRef.d_array__DOT__in_data[1U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array.in_data[2U] 
        = vlSelfRef.d_array__DOT__in_data[2U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array.in_data[3U] 
        = vlSelfRef.d_array__DOT__in_data[3U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array.in_data[4U] 
        = vlSelfRef.d_array__DOT__in_data[4U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array.in_data[5U] 
        = vlSelfRef.d_array__DOT__in_data[5U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array.in_data[6U] 
        = vlSelfRef.d_array__DOT__in_data[6U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array.in_data[7U] 
        = vlSelfRef.d_array__DOT__in_data[7U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array.in_data[8U] 
        = vlSelfRef.d_array__DOT__in_data[8U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array.in_data[9U] 
        = vlSelfRef.d_array__DOT__in_data[9U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array.in_data[0xaU] 
        = vlSelfRef.d_array__DOT__in_data[0xaU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array.in_data[0xbU] 
        = vlSelfRef.d_array__DOT__in_data[0xbU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array.in_data[0xcU] 
        = vlSelfRef.d_array__DOT__in_data[0xcU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array.in_data[0xdU] 
        = vlSelfRef.d_array__DOT__in_data[0xdU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array.in_data[0xeU] 
        = vlSelfRef.d_array__DOT__in_data[0xeU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__10__KET____DOT__data_array.in_data[0xfU] 
        = vlSelfRef.d_array__DOT__in_data[0xfU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array.in_data[0U] 
        = vlSelfRef.d_array__DOT__in_data[0U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array.in_data[1U] 
        = vlSelfRef.d_array__DOT__in_data[1U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array.in_data[2U] 
        = vlSelfRef.d_array__DOT__in_data[2U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array.in_data[3U] 
        = vlSelfRef.d_array__DOT__in_data[3U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array.in_data[4U] 
        = vlSelfRef.d_array__DOT__in_data[4U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array.in_data[5U] 
        = vlSelfRef.d_array__DOT__in_data[5U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array.in_data[6U] 
        = vlSelfRef.d_array__DOT__in_data[6U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array.in_data[7U] 
        = vlSelfRef.d_array__DOT__in_data[7U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array.in_data[8U] 
        = vlSelfRef.d_array__DOT__in_data[8U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array.in_data[9U] 
        = vlSelfRef.d_array__DOT__in_data[9U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array.in_data[0xaU] 
        = vlSelfRef.d_array__DOT__in_data[0xaU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array.in_data[0xbU] 
        = vlSelfRef.d_array__DOT__in_data[0xbU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array.in_data[0xcU] 
        = vlSelfRef.d_array__DOT__in_data[0xcU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array.in_data[0xdU] 
        = vlSelfRef.d_array__DOT__in_data[0xdU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array.in_data[0xeU] 
        = vlSelfRef.d_array__DOT__in_data[0xeU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__11__KET____DOT__data_array.in_data[0xfU] 
        = vlSelfRef.d_array__DOT__in_data[0xfU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array.in_data[0U] 
        = vlSelfRef.d_array__DOT__in_data[0U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array.in_data[1U] 
        = vlSelfRef.d_array__DOT__in_data[1U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array.in_data[2U] 
        = vlSelfRef.d_array__DOT__in_data[2U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array.in_data[3U] 
        = vlSelfRef.d_array__DOT__in_data[3U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array.in_data[4U] 
        = vlSelfRef.d_array__DOT__in_data[4U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array.in_data[5U] 
        = vlSelfRef.d_array__DOT__in_data[5U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array.in_data[6U] 
        = vlSelfRef.d_array__DOT__in_data[6U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array.in_data[7U] 
        = vlSelfRef.d_array__DOT__in_data[7U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array.in_data[8U] 
        = vlSelfRef.d_array__DOT__in_data[8U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array.in_data[9U] 
        = vlSelfRef.d_array__DOT__in_data[9U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array.in_data[0xaU] 
        = vlSelfRef.d_array__DOT__in_data[0xaU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array.in_data[0xbU] 
        = vlSelfRef.d_array__DOT__in_data[0xbU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array.in_data[0xcU] 
        = vlSelfRef.d_array__DOT__in_data[0xcU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array.in_data[0xdU] 
        = vlSelfRef.d_array__DOT__in_data[0xdU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array.in_data[0xeU] 
        = vlSelfRef.d_array__DOT__in_data[0xeU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__12__KET____DOT__data_array.in_data[0xfU] 
        = vlSelfRef.d_array__DOT__in_data[0xfU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array.in_data[0U] 
        = vlSelfRef.d_array__DOT__in_data[0U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array.in_data[1U] 
        = vlSelfRef.d_array__DOT__in_data[1U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array.in_data[2U] 
        = vlSelfRef.d_array__DOT__in_data[2U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array.in_data[3U] 
        = vlSelfRef.d_array__DOT__in_data[3U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array.in_data[4U] 
        = vlSelfRef.d_array__DOT__in_data[4U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array.in_data[5U] 
        = vlSelfRef.d_array__DOT__in_data[5U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array.in_data[6U] 
        = vlSelfRef.d_array__DOT__in_data[6U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array.in_data[7U] 
        = vlSelfRef.d_array__DOT__in_data[7U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array.in_data[8U] 
        = vlSelfRef.d_array__DOT__in_data[8U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array.in_data[9U] 
        = vlSelfRef.d_array__DOT__in_data[9U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array.in_data[0xaU] 
        = vlSelfRef.d_array__DOT__in_data[0xaU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array.in_data[0xbU] 
        = vlSelfRef.d_array__DOT__in_data[0xbU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array.in_data[0xcU] 
        = vlSelfRef.d_array__DOT__in_data[0xcU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array.in_data[0xdU] 
        = vlSelfRef.d_array__DOT__in_data[0xdU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array.in_data[0xeU] 
        = vlSelfRef.d_array__DOT__in_data[0xeU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__13__KET____DOT__data_array.in_data[0xfU] 
        = vlSelfRef.d_array__DOT__in_data[0xfU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array.in_data[0U] 
        = vlSelfRef.d_array__DOT__in_data[0U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array.in_data[1U] 
        = vlSelfRef.d_array__DOT__in_data[1U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array.in_data[2U] 
        = vlSelfRef.d_array__DOT__in_data[2U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array.in_data[3U] 
        = vlSelfRef.d_array__DOT__in_data[3U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array.in_data[4U] 
        = vlSelfRef.d_array__DOT__in_data[4U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array.in_data[5U] 
        = vlSelfRef.d_array__DOT__in_data[5U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array.in_data[6U] 
        = vlSelfRef.d_array__DOT__in_data[6U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array.in_data[7U] 
        = vlSelfRef.d_array__DOT__in_data[7U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array.in_data[8U] 
        = vlSelfRef.d_array__DOT__in_data[8U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array.in_data[9U] 
        = vlSelfRef.d_array__DOT__in_data[9U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array.in_data[0xaU] 
        = vlSelfRef.d_array__DOT__in_data[0xaU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array.in_data[0xbU] 
        = vlSelfRef.d_array__DOT__in_data[0xbU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array.in_data[0xcU] 
        = vlSelfRef.d_array__DOT__in_data[0xcU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array.in_data[0xdU] 
        = vlSelfRef.d_array__DOT__in_data[0xdU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array.in_data[0xeU] 
        = vlSelfRef.d_array__DOT__in_data[0xeU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__14__KET____DOT__data_array.in_data[0xfU] 
        = vlSelfRef.d_array__DOT__in_data[0xfU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array.in_data[0U] 
        = vlSelfRef.d_array__DOT__in_data[0U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array.in_data[1U] 
        = vlSelfRef.d_array__DOT__in_data[1U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array.in_data[2U] 
        = vlSelfRef.d_array__DOT__in_data[2U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array.in_data[3U] 
        = vlSelfRef.d_array__DOT__in_data[3U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array.in_data[4U] 
        = vlSelfRef.d_array__DOT__in_data[4U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array.in_data[5U] 
        = vlSelfRef.d_array__DOT__in_data[5U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array.in_data[6U] 
        = vlSelfRef.d_array__DOT__in_data[6U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array.in_data[7U] 
        = vlSelfRef.d_array__DOT__in_data[7U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array.in_data[8U] 
        = vlSelfRef.d_array__DOT__in_data[8U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array.in_data[9U] 
        = vlSelfRef.d_array__DOT__in_data[9U];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array.in_data[0xaU] 
        = vlSelfRef.d_array__DOT__in_data[0xaU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array.in_data[0xbU] 
        = vlSelfRef.d_array__DOT__in_data[0xbU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array.in_data[0xcU] 
        = vlSelfRef.d_array__DOT__in_data[0xcU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array.in_data[0xdU] 
        = vlSelfRef.d_array__DOT__in_data[0xdU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array.in_data[0xeU] 
        = vlSelfRef.d_array__DOT__in_data[0xeU];
    vlSymsp->TOP__cache_system_tl_top__cache_inst__d_array__DOT__genblk4__BRA__15__KET____DOT__data_array.in_data[0xfU] 
        = vlSelfRef.d_array__DOT__in_data[0xfU];
    vlSelfRef.fsm_out_data = vlSelfRef.c_fsm__DOT__out_data;
    vlSelfRef.out_data = ((IData)(vlSelfRef.c_fsm__DOT__out_valid)
                           ? vlSelfRef.c_fsm__DOT__out_data
                           : vlSelfRef.refill_word_data);
}

VL_INLINE_OPT void Vtop_cache_controller_nb___ico_sequent__TOP__cache_system_tl_top__cache_inst__3(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___ico_sequent__TOP__cache_system_tl_top__cache_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_write_data[0U] = vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.write_data[0U];
    vlSelfRef.cache_write_data[1U] = vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.write_data[1U];
    vlSelfRef.cache_write_data[2U] = vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.write_data[2U];
    vlSelfRef.cache_write_data[3U] = vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.write_data[3U];
    vlSelfRef.cache_write_data[4U] = vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.write_data[4U];
    vlSelfRef.cache_write_data[5U] = vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.write_data[5U];
    vlSelfRef.cache_write_data[6U] = vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.write_data[6U];
    vlSelfRef.cache_write_data[7U] = vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.write_data[7U];
    vlSelfRef.cache_write_data[8U] = vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.write_data[8U];
    vlSelfRef.cache_write_data[9U] = vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.write_data[9U];
    vlSelfRef.cache_write_data[0xaU] = vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.write_data[0xaU];
    vlSelfRef.cache_write_data[0xbU] = vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.write_data[0xbU];
    vlSelfRef.cache_write_data[0xcU] = vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.write_data[0xcU];
    vlSelfRef.cache_write_data[0xdU] = vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.write_data[0xdU];
    vlSelfRef.cache_write_data[0xeU] = vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.write_data[0xeU];
    vlSelfRef.cache_write_data[0xfU] = vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.write_data[0xfU];
}

VL_INLINE_OPT void Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__4(Vtop_cache_controller_nb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cache_controller_nb___nba_sequent__TOP__cache_system_tl_top__cache_inst__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__f_unit__DOT__busy;
    __Vdly__f_unit__DOT__busy = 0;
    VlWide<6>/*167:0*/ __Vdly__sec_address_translator__DOT__num_gen__DOT__lfsr_reg;
    VL_ZERO_W(168, __Vdly__sec_address_translator__DOT__num_gen__DOT__lfsr_reg);
    IData/*31:0*/ __VdlyVal__mshr_inst__DOT__data_table__v0;
    __VdlyVal__mshr_inst__DOT__data_table__v0 = 0;
    CData/*1:0*/ __VdlyDim0__mshr_inst__DOT__data_table__v0;
    __VdlyDim0__mshr_inst__DOT__data_table__v0 = 0;
    CData/*0:0*/ __VdlySet__mshr_inst__DOT__data_table__v0;
    __VdlySet__mshr_inst__DOT__data_table__v0 = 0;
    CData/*3:0*/ __VdlyVal__mshr_inst__DOT__byteen_table__v0;
    __VdlyVal__mshr_inst__DOT__byteen_table__v0 = 0;
    CData/*1:0*/ __VdlyDim0__mshr_inst__DOT__byteen_table__v0;
    __VdlyDim0__mshr_inst__DOT__byteen_table__v0 = 0;
    CData/*0:0*/ __VdlySet__mshr_inst__DOT__byteen_table__v0;
    __VdlySet__mshr_inst__DOT__byteen_table__v0 = 0;
    CData/*2:0*/ __VdlyVal__mshr_inst__DOT__opcode_table__v0;
    __VdlyVal__mshr_inst__DOT__opcode_table__v0 = 0;
    CData/*1:0*/ __VdlyDim0__mshr_inst__DOT__opcode_table__v0;
    __VdlyDim0__mshr_inst__DOT__opcode_table__v0 = 0;
    CData/*0:0*/ __VdlySet__mshr_inst__DOT__opcode_table__v0;
    __VdlySet__mshr_inst__DOT__opcode_table__v0 = 0;
    CData/*3:0*/ __VdlyVal__mshr_inst__DOT__source_table__v0;
    __VdlyVal__mshr_inst__DOT__source_table__v0 = 0;
    CData/*1:0*/ __VdlyDim0__mshr_inst__DOT__source_table__v0;
    __VdlyDim0__mshr_inst__DOT__source_table__v0 = 0;
    CData/*0:0*/ __VdlySet__mshr_inst__DOT__source_table__v0;
    __VdlySet__mshr_inst__DOT__source_table__v0 = 0;
    IData/*25:0*/ __VdlyVal__mshr_inst__DOT__addr_table__v0;
    __VdlyVal__mshr_inst__DOT__addr_table__v0 = 0;
    CData/*1:0*/ __VdlyDim0__mshr_inst__DOT__addr_table__v0;
    __VdlyDim0__mshr_inst__DOT__addr_table__v0 = 0;
    CData/*0:0*/ __VdlySet__mshr_inst__DOT__addr_table__v0;
    __VdlySet__mshr_inst__DOT__addr_table__v0 = 0;
    VlWide<16>/*511:0*/ __Vtemp_20;
    VlWide<16>/*511:0*/ __Vtemp_35;
    // Body
    __Vdly__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[0U] 
        = vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[0U];
    __Vdly__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[1U] 
        = vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[1U];
    __Vdly__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[2U] 
        = vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[2U];
    __Vdly__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
        = vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U];
    __Vdly__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
        = vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U];
    __Vdly__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[5U] 
        = vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[5U];
    __VdlySet__mshr_inst__DOT__opcode_table__v0 = 0U;
    __VdlySet__mshr_inst__DOT__source_table__v0 = 0U;
    __VdlySet__mshr_inst__DOT__byteen_table__v0 = 0U;
    __VdlySet__mshr_inst__DOT__addr_table__v0 = 0U;
    __VdlySet__mshr_inst__DOT__data_table__v0 = 0U;
    __Vdly__f_unit__DOT__busy = vlSelfRef.f_unit__DOT__busy;
    vlSelfRef.__Vdly__f_unit__DOT__req_done_keep = vlSelfRef.f_unit__DOT__req_done_keep;
    if (vlSelfRef.rst_n) {
        if (vlSelfRef.sec_address_translator__DOT____Vcellinp__num_gen__valid) {
            __Vdly__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[0U] 
                = vlSelfRef.load_val[0U];
            __Vdly__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[1U] 
                = vlSelfRef.load_val[1U];
            __Vdly__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[2U] 
                = vlSelfRef.load_val[2U];
            __Vdly__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                = vlSelfRef.load_val[3U];
            __Vdly__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                = vlSelfRef.load_val[4U];
            __Vdly__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[5U] 
                = vlSelfRef.load_val[5U];
        } else if (vlSelfRef.sec_address_translator__DOT__in_done) {
            __Vdly__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[0U] 
                = vlSelfRef.sec_address_translator__DOT__num_gen__DOT__out_w;
            __Vdly__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[1U] 
                = vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[0U];
            __Vdly__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[2U] 
                = vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[1U];
            __Vdly__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                = vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[2U];
            __Vdly__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                = vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U];
            __Vdly__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[5U] 
                = (0xffU & vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U]);
        }
        if (vlSelfRef.mshr_inst__DOT__alloc_fire) {
            __VdlyVal__mshr_inst__DOT__opcode_table__v0 
                = vlSelfRef.in_opcode;
            __VdlyDim0__mshr_inst__DOT__opcode_table__v0 
                = vlSelfRef.mshr_inst__DOT__alloc_id;
            __VdlySet__mshr_inst__DOT__opcode_table__v0 = 1U;
            __VdlyVal__mshr_inst__DOT__source_table__v0 
                = vlSelfRef.in_source;
            __VdlyDim0__mshr_inst__DOT__source_table__v0 
                = vlSelfRef.mshr_inst__DOT__alloc_id;
            __VdlySet__mshr_inst__DOT__source_table__v0 = 1U;
            __VdlyVal__mshr_inst__DOT__byteen_table__v0 
                = vlSelfRef.in_byteen;
            __VdlyDim0__mshr_inst__DOT__byteen_table__v0 
                = vlSelfRef.mshr_inst__DOT__alloc_id;
            __VdlySet__mshr_inst__DOT__byteen_table__v0 = 1U;
            __VdlyVal__mshr_inst__DOT__addr_table__v0 
                = vlSelfRef.mshr_inst__DOT__incoming_line_addr;
            __VdlyDim0__mshr_inst__DOT__addr_table__v0 
                = vlSelfRef.mshr_inst__DOT__alloc_id;
            __VdlySet__mshr_inst__DOT__addr_table__v0 = 1U;
            __VdlyVal__mshr_inst__DOT__data_table__v0 
                = vlSelfRef.in_data;
            __VdlyDim0__mshr_inst__DOT__data_table__v0 
                = vlSelfRef.mshr_inst__DOT__alloc_id;
            __VdlySet__mshr_inst__DOT__data_table__v0 = 1U;
            vlSelfRef.mshr_inst__DOT__next_table = 
                ((~ ((IData)(1U) << (IData)(vlSelfRef.mshr_inst__DOT__alloc_id))) 
                 & (IData)(vlSelfRef.mshr_inst__DOT__next_table));
            vlSelfRef.mshr_inst__DOT__valid_table = 
                ((IData)(vlSelfRef.mshr_inst__DOT__valid_table) 
                 | (0xfU & ((IData)(1U) << (IData)(vlSelfRef.mshr_inst__DOT__alloc_id))));
        }
        vlSelfRef.reg_file__DOT__D_FF_l_b__DOT__data 
            = (0xfU & ((IData)(vlSelfRef.reg_file__DOT__set_low_bound)
                        ? (0xfU & vlSelfRef.cfg_data_in)
                        : (IData)(vlSelfRef.reg_file__DOT__D_FF_l_b__DOT__data)));
        vlSelfRef.reg_file__DOT__D_FF_l_va_0__DOT__data 
            = ((IData)(vlSelfRef.reg_file__DOT__set_load_val_0)
                ? vlSelfRef.cfg_data_in : vlSelfRef.reg_file__DOT__D_FF_l_va_0__DOT__data);
        vlSelfRef.reg_file__DOT__D_FF_l_va_1__DOT__data 
            = ((IData)(vlSelfRef.reg_file__DOT__set_load_val_1)
                ? vlSelfRef.cfg_data_in : vlSelfRef.reg_file__DOT__D_FF_l_va_1__DOT__data);
        vlSelfRef.reg_file__DOT__D_FF_l_va_2__DOT__data 
            = ((IData)(vlSelfRef.reg_file__DOT__set_load_val_2)
                ? vlSelfRef.cfg_data_in : vlSelfRef.reg_file__DOT__D_FF_l_va_2__DOT__data);
        vlSelfRef.reg_file__DOT__D_FF_l_va_3__DOT__data 
            = ((IData)(vlSelfRef.reg_file__DOT__set_load_val_3)
                ? vlSelfRef.cfg_data_in : vlSelfRef.reg_file__DOT__D_FF_l_va_3__DOT__data);
        vlSelfRef.reg_file__DOT__D_FF_l_va_4__DOT__data 
            = ((IData)(vlSelfRef.reg_file__DOT__set_load_val_4)
                ? vlSelfRef.cfg_data_in : vlSelfRef.reg_file__DOT__D_FF_l_va_4__DOT__data);
        vlSelfRef.reg_file__DOT__D_FF_l_va_5__DOT__data 
            = (0xffU & ((IData)(vlSelfRef.reg_file__DOT__set_load_val_5)
                         ? (0xffU & vlSelfRef.cfg_data_in)
                         : (IData)(vlSelfRef.reg_file__DOT__D_FF_l_va_5__DOT__data)));
        vlSelfRef.reg_file__DOT__D_FF_secure__DOT__data 
            = (1U & ((IData)(vlSelfRef.reg_file__DOT__set_secure)
                      ? (1U & vlSelfRef.cfg_data_in)
                      : (IData)(vlSelfRef.reg_file__DOT__D_FF_secure__DOT__data)));
        vlSelfRef.reg_file__DOT__D_FF_h_b__DOT__data 
            = (0xfU & ((IData)(vlSelfRef.reg_file__DOT__set_high_bound)
                        ? (0xfU & vlSelfRef.cfg_data_in)
                        : (IData)(vlSelfRef.reg_file__DOT__D_FF_h_b__DOT__data)));
        if (vlSelfRef.trans_valid) {
            vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__out_ff 
                = ((IData)(vlSelfRef.secure_request)
                    ? vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__cal_addr
                    : vlSelfRef.trans_out_addr);
            vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__done_ff = 1U;
        } else {
            vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__out_ff 
                = vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__out_ff;
            vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__done_ff = 0U;
        }
        vlSelfRef.reg_file__DOT__D_FF_pf__DOT__data 
            = (1U & ((IData)(vlSelfRef.reg_file__DOT__set_prefetch)
                      ? (1U & vlSelfRef.cfg_data_in)
                      : (IData)(vlSelfRef.reg_file__DOT__D_FF_pf__DOT__data)));
        vlSelfRef.reg_file__DOT__D_FF_addr__DOT__data 
            = (0x3fU & ((IData)(vlSelfRef.cfg_valid)
                         ? (0x3fU & (IData)(vlSelfRef.cfg_addr))
                         : (IData)(vlSelfRef.reg_file__DOT__D_FF_addr__DOT__data)));
        vlSelfRef.reg_file__DOT__D_FF_write__DOT__data 
            = (1U & ((IData)(vlSelfRef.reg_file__DOT__set_write)
                      ? (1U & vlSelfRef.cfg_data_in)
                      : (IData)(vlSelfRef.reg_file__DOT__D_FF_write__DOT__data)));
        vlSelfRef.f_unit__DOT__w_compare_rd_cam_happend 
            = ((0U == (IData)(vlSelfRef.f_unit__DOT__next_state))
                ? 0U : ((IData)(vlSelfRef.f_unit__DOT__w_compare_rd_cam)
                         ? 1U : (1U & (IData)(vlSelfRef.f_unit__DOT__w_compare_rd_cam_happend))));
        if ((1U != (IData)(vlSelfRef.f_unit__DOT__cur_state))) {
            vlSelfRef.f_unit__DOT__read = 0U;
            __Vtemp_20[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
            __Vtemp_20[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
            __Vtemp_20[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
            __Vtemp_20[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
            __Vtemp_20[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
            __Vtemp_20[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
            __Vtemp_20[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
            __Vtemp_20[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
            __Vtemp_20[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
            __Vtemp_20[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
            __Vtemp_20[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
            __Vtemp_20[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
            __Vtemp_20[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
            __Vtemp_20[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
            __Vtemp_20[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
            vlSelfRef.f_unit__DOT__buffer_data[0U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0U];
            vlSelfRef.f_unit__DOT__not_match_keep = 0U;
            vlSelfRef.f_unit__DOT__trans_done_keep = 0U;
            vlSelfRef.f_unit__DOT__w_prefetch_wr_cam_happend = 0U;
        } else {
            vlSelfRef.f_unit__DOT__read = ((((IData)(vlSelfRef.f_unit__DOT__w_prefetch_rd_cam_happend) 
                                             & (~ (IData)(vlSelfRef.f_unit__DOT__match))) 
                                            & (IData)(vlSelfRef.req_ready))
                                            ? 1U : 
                                           (1U & (IData)(vlSelfRef.f_unit__DOT__read)));
            if (vlSelfRef.req_done) {
                __Vtemp_20[1U] = vlSelfRef.req_data[1U];
                __Vtemp_20[2U] = vlSelfRef.req_data[2U];
                __Vtemp_20[3U] = vlSelfRef.req_data[3U];
                __Vtemp_20[4U] = vlSelfRef.req_data[4U];
                __Vtemp_20[5U] = vlSelfRef.req_data[5U];
                __Vtemp_20[6U] = vlSelfRef.req_data[6U];
                __Vtemp_20[7U] = vlSelfRef.req_data[7U];
                __Vtemp_20[8U] = vlSelfRef.req_data[8U];
                __Vtemp_20[9U] = vlSelfRef.req_data[9U];
                __Vtemp_20[0xaU] = vlSelfRef.req_data[0xaU];
                __Vtemp_20[0xbU] = vlSelfRef.req_data[0xbU];
                __Vtemp_20[0xcU] = vlSelfRef.req_data[0xcU];
                __Vtemp_20[0xdU] = vlSelfRef.req_data[0xdU];
                __Vtemp_20[0xeU] = vlSelfRef.req_data[0xeU];
                __Vtemp_20[0xfU] = vlSelfRef.req_data[0xfU];
                vlSelfRef.f_unit__DOT__buffer_data[0U] 
                    = vlSelfRef.req_data[0U];
            } else {
                __Vtemp_20[1U] = vlSelfRef.f_unit__DOT__buffer_data[1U];
                __Vtemp_20[2U] = vlSelfRef.f_unit__DOT__buffer_data[2U];
                __Vtemp_20[3U] = vlSelfRef.f_unit__DOT__buffer_data[3U];
                __Vtemp_20[4U] = vlSelfRef.f_unit__DOT__buffer_data[4U];
                __Vtemp_20[5U] = vlSelfRef.f_unit__DOT__buffer_data[5U];
                __Vtemp_20[6U] = vlSelfRef.f_unit__DOT__buffer_data[6U];
                __Vtemp_20[7U] = vlSelfRef.f_unit__DOT__buffer_data[7U];
                __Vtemp_20[8U] = vlSelfRef.f_unit__DOT__buffer_data[8U];
                __Vtemp_20[9U] = vlSelfRef.f_unit__DOT__buffer_data[9U];
                __Vtemp_20[0xaU] = vlSelfRef.f_unit__DOT__buffer_data[0xaU];
                __Vtemp_20[0xbU] = vlSelfRef.f_unit__DOT__buffer_data[0xbU];
                __Vtemp_20[0xcU] = vlSelfRef.f_unit__DOT__buffer_data[0xcU];
                __Vtemp_20[0xdU] = vlSelfRef.f_unit__DOT__buffer_data[0xdU];
                __Vtemp_20[0xeU] = vlSelfRef.f_unit__DOT__buffer_data[0xeU];
                __Vtemp_20[0xfU] = vlSelfRef.f_unit__DOT__buffer_data[0xfU];
                vlSelfRef.f_unit__DOT__buffer_data[0U] 
                    = vlSelfRef.f_unit__DOT__buffer_data[0U];
            }
            vlSelfRef.f_unit__DOT__not_match_keep = 
                (((IData)(vlSelfRef.f_unit__DOT__w_prefetch_rd_cam_happend) 
                  & (~ (IData)(vlSelfRef.f_unit__DOT__match)))
                  ? 1U : (1U & (IData)(vlSelfRef.f_unit__DOT__not_match_keep)));
            vlSelfRef.f_unit__DOT__trans_done_keep 
                = ((IData)(vlSelfRef.trans_done) ? 1U
                    : (1U & (IData)(vlSelfRef.f_unit__DOT__trans_done_keep)));
            vlSelfRef.f_unit__DOT__w_prefetch_wr_cam_happend 
                = ((IData)(vlSelfRef.f_unit__DOT__w_prefetch_wr_cam)
                    ? 1U : (1U & (IData)(vlSelfRef.f_unit__DOT__w_prefetch_wr_cam_happend)));
        }
        if (((0U == (IData)(vlSelfRef.f_unit__DOT__cur_state)) 
             & (IData)(vlSelfRef.fsm_valid))) {
            vlSelfRef.f_unit__DOT__prev_addr = vlSelfRef.fsm_addr;
            vlSelfRef.f_unit__DOT__in_data_keep = vlSelfRef.fsm_data;
            vlSelfRef.f_unit__DOT__write_keep = (1U 
                                                 & (IData)(vlSelfRef.fsm_rw));
        } else {
            vlSelfRef.f_unit__DOT__prev_addr = (((IData)(vlSelfRef.trans_done) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.f_unit__DOT__cur_state)))
                                                 ? 
                                                ((IData)(0x40U) 
                                                 + vlSelfRef.f_unit__DOT__prev_addr)
                                                 : vlSelfRef.f_unit__DOT__prev_addr);
            vlSelfRef.f_unit__DOT__in_data_keep = vlSelfRef.f_unit__DOT__in_data_keep;
            vlSelfRef.f_unit__DOT__write_keep = (1U 
                                                 & (IData)(vlSelfRef.f_unit__DOT__write_keep));
        }
        if ((0U == (IData)(vlSelfRef.f_unit__DOT__cur_state))) {
            vlSelfRef.f_unit__DOT__cache_access_keep = 0U;
            vlSelfRef.__Vdly__f_unit__DOT__req_done_keep = 0U;
        } else {
            vlSelfRef.f_unit__DOT__cache_access_keep 
                = ((IData)(vlSelfRef.fsm_accessed) ? 1U
                    : (1U & (IData)(vlSelfRef.f_unit__DOT__cache_access_keep)));
            vlSelfRef.__Vdly__f_unit__DOT__req_done_keep 
                = (((((IData)(vlSelfRef.f_unit__DOT__w_prefetch_rd_cam_happend) 
                      & (~ (IData)(vlSelfRef.f_unit__DOT__match))) 
                     | (3U == (IData)(vlSelfRef.f_unit__DOT__cur_state))) 
                    & (IData)(vlSelfRef.req_done)) ? 1U
                    : (1U & (IData)(vlSelfRef.f_unit__DOT__req_done_keep)));
        }
        if ((1U == (IData)(vlSelfRef.f_unit__DOT__cur_state))) {
            vlSelfRef.f_unit__DOT__w_prefetch_erase_happend = 0U;
            vlSelfRef.f_unit__DOT__w_prefetch_rd_cam_happend = 0U;
        } else {
            vlSelfRef.f_unit__DOT__w_prefetch_erase_happend 
                = ((IData)(vlSelfRef.f_unit__DOT__w_prefetch_erase)
                    ? 1U : (1U & (IData)(vlSelfRef.f_unit__DOT__w_prefetch_erase_happend)));
            vlSelfRef.f_unit__DOT__w_prefetch_rd_cam_happend 
                = ((IData)(vlSelfRef.f_unit__DOT__w_prefetch_rd_cam)
                    ? 1U : (1U & (IData)(vlSelfRef.f_unit__DOT__w_prefetch_rd_cam_happend)));
        }
        vlSelfRef.f_unit__DOT__w_compare_rd_mem_happend 
            = ((2U != (IData)(vlSelfRef.f_unit__DOT__cur_state))
                ? 0U : ((IData)(vlSelfRef.f_unit__DOT__w_compare_rd_mem)
                         ? 1U : (1U & (IData)(vlSelfRef.f_unit__DOT__w_compare_rd_mem_happend))));
        if (((IData)(vlSelfRef.mshr_fin_valid) & (~ (IData)(vlSelfRef.mshr_fin_is_hit)))) {
            vlSelfRef.miss_mshr_id = vlSelfRef.mshr_fin_id;
        }
        vlSelfRef.d_array__DOT__D_FF_valid__DOT__data 
            = (1U & (IData)(vlSelfRef.valid));
        vlSelfRef.mshr_inst__DOT__deq_ptr_q = vlSelfRef.mshr_inst__DOT__deq_ptr_d;
        vlSelfRef.rd_controller__DOT__addr_i_reg = 
            ((IData)(vlSelfRef.rd_controller__DOT__cur_state)
              ? vlSelfRef.rd_controller__DOT__addr_i_reg
              : ((IData)(vlSelfRef.req_valid) ? (0xffffffc0U 
                                                 & vlSelfRef.req_addr)
                  : 0U));
        vlSelfRef.rd_controller__DOT__cache_read_ready 
            = (1U & (~ (IData)(vlSelfRef.rd_controller__DOT__cur_state)));
        if (((~ (IData)(vlSelfRef.wr_controller__DOT__cur_state)) 
             & (IData)(vlSelfRef.cache_write_valid))) {
            vlSelfRef.wr_controller__DOT__addr_i_reg 
                = ((0xffffU == (IData)(vlSelfRef.cache_write_strb))
                    ? (0xffffffc0U & vlSelfRef.cache_write_addr)
                    : (0xfffffffcU & vlSelfRef.cache_write_addr));
            __Vtemp_35[1U] = vlSelfRef.arr_data[1U];
            __Vtemp_35[2U] = vlSelfRef.arr_data[2U];
            __Vtemp_35[3U] = vlSelfRef.arr_data[3U];
            __Vtemp_35[4U] = vlSelfRef.arr_data[4U];
            __Vtemp_35[5U] = vlSelfRef.arr_data[5U];
            __Vtemp_35[6U] = vlSelfRef.arr_data[6U];
            __Vtemp_35[7U] = vlSelfRef.arr_data[7U];
            __Vtemp_35[8U] = vlSelfRef.arr_data[8U];
            __Vtemp_35[9U] = vlSelfRef.arr_data[9U];
            __Vtemp_35[0xaU] = vlSelfRef.arr_data[0xaU];
            __Vtemp_35[0xbU] = vlSelfRef.arr_data[0xbU];
            __Vtemp_35[0xcU] = vlSelfRef.arr_data[0xcU];
            __Vtemp_35[0xdU] = vlSelfRef.arr_data[0xdU];
            __Vtemp_35[0xeU] = vlSelfRef.arr_data[0xeU];
            __Vtemp_35[0xfU] = vlSelfRef.arr_data[0xfU];
            vlSelfRef.wr_controller__DOT__data_in_i_reg[0U] 
                = vlSelfRef.arr_data[0U];
            vlSelfRef.wr_controller__DOT__byteen_i_reg 
                = (0xfU & (IData)(vlSelfRef.in_byteen));
            vlSelfRef.wr_controller__DOT__write_all 
                = (1U & (0xffffU == (IData)(vlSelfRef.cache_write_strb)));
        } else {
            vlSelfRef.wr_controller__DOT__addr_i_reg 
                = vlSelfRef.wr_controller__DOT__addr_i_reg;
            __Vtemp_35[1U] = vlSelfRef.wr_controller__DOT__data_in_i_reg[1U];
            __Vtemp_35[2U] = vlSelfRef.wr_controller__DOT__data_in_i_reg[2U];
            __Vtemp_35[3U] = vlSelfRef.wr_controller__DOT__data_in_i_reg[3U];
            __Vtemp_35[4U] = vlSelfRef.wr_controller__DOT__data_in_i_reg[4U];
            __Vtemp_35[5U] = vlSelfRef.wr_controller__DOT__data_in_i_reg[5U];
            __Vtemp_35[6U] = vlSelfRef.wr_controller__DOT__data_in_i_reg[6U];
            __Vtemp_35[7U] = vlSelfRef.wr_controller__DOT__data_in_i_reg[7U];
            __Vtemp_35[8U] = vlSelfRef.wr_controller__DOT__data_in_i_reg[8U];
            __Vtemp_35[9U] = vlSelfRef.wr_controller__DOT__data_in_i_reg[9U];
            __Vtemp_35[0xaU] = vlSelfRef.wr_controller__DOT__data_in_i_reg[0xaU];
            __Vtemp_35[0xbU] = vlSelfRef.wr_controller__DOT__data_in_i_reg[0xbU];
            __Vtemp_35[0xcU] = vlSelfRef.wr_controller__DOT__data_in_i_reg[0xcU];
            __Vtemp_35[0xdU] = vlSelfRef.wr_controller__DOT__data_in_i_reg[0xdU];
            __Vtemp_35[0xeU] = vlSelfRef.wr_controller__DOT__data_in_i_reg[0xeU];
            __Vtemp_35[0xfU] = vlSelfRef.wr_controller__DOT__data_in_i_reg[0xfU];
            vlSelfRef.wr_controller__DOT__data_in_i_reg[0U] 
                = vlSelfRef.wr_controller__DOT__data_in_i_reg[0U];
            vlSelfRef.wr_controller__DOT__byteen_i_reg 
                = (0xfU & (IData)(vlSelfRef.wr_controller__DOT__byteen_i_reg));
            vlSelfRef.wr_controller__DOT__write_all 
                = (1U & (IData)(vlSelfRef.wr_controller__DOT__write_all));
        }
        vlSelfRef.wr_controller__DOT__cache_write_ready 
            = (1U & (~ (IData)(vlSelfRef.wr_controller__DOT__cur_state)));
        vlSelfRef.d_array__DOT__write_prev = ((IData)(vlSelfRef.write) 
                                              | (IData)(vlSelfRef.write_all));
        __Vdly__f_unit__DOT__busy = ((((IData)(vlSelfRef.f_unit__DOT__out_valid) 
                                       | (IData)(vlSelfRef.fsm_hit)) 
                                      | (0U == (IData)(vlSelfRef.f_unit__DOT__next_state)))
                                      ? 0U : (((IData)(vlSelfRef.fsm_valid) 
                                               & (IData)(vlSelfRef.f_unit__DOT__in_ready))
                                               ? 1U
                                               : (1U 
                                                  & (IData)(vlSelfRef.f_unit__DOT__busy))));
        vlSelfRef.f_unit__DOT__busy_p = ((IData)(vlSelfRef.f_unit__DOT__out_valid)
                                          ? 0U : (1U 
                                                  & (IData)(vlSelfRef.f_unit__DOT__busy)));
        vlSelfRef.rd_controller__DOT__cache_read_done 
            = (1U & (IData)(vlSelfRef.rd_controller__DOT__all_beats_received));
        if (((IData)(vlSelfRef.in_valid) & (IData)(vlSelfRef.in_ready))) {
            vlSelfRef.byteen_keep = vlSelfRef.in_byteen;
        }
        if (((IData)(vlSelfRef.__Vcellinp__c_fsm__in_valid) 
             & (IData)(vlSelfRef.c_fsm__DOT__in_ready))) {
            vlSelfRef.c_fsm__DOT__mshr_id_keep = vlSelfRef.mshr_alloc_id;
            vlSelfRef.c_fsm__DOT__source_keep = vlSelfRef.in_source;
            vlSelfRef.c_fsm__DOT__opcode_keep = vlSelfRef.in_opcode;
            vlSelfRef.c_fsm__DOT__write_keep = vlSelfRef.in_write;
            vlSelfRef.c_fsm__DOT__data_keep = vlSelfRef.in_data;
            vlSelfRef.c_fsm__DOT__addr_keep = vlSelfRef.in_addr;
        }
        if (vlSelfRef.mshr_fin_valid) {
            if (vlSelfRef.mshr_fin_is_hit) {
                vlSelfRef.mshr_inst__DOT__valid_table 
                    = ((~ ((IData)(1U) << (IData)(vlSelfRef.mshr_fin_id))) 
                       & (IData)(vlSelfRef.mshr_inst__DOT__valid_table));
            }
        }
        if (vlSelfRef.mshr_inst__DOT__deq_fire) {
            vlSelfRef.mshr_inst__DOT__valid_table = 
                ((~ ((IData)(1U) << (IData)(vlSelfRef.mshr_inst__DOT__deq_id))) 
                 & (IData)(vlSelfRef.mshr_inst__DOT__valid_table));
        }
    } else {
        __Vdly__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[0U] = 0U;
        __Vdly__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[1U] = 0U;
        __Vdly__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[2U] = 0U;
        __Vdly__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] = 0U;
        __Vdly__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] = 0U;
        __Vdly__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[5U] = 0U;
        vlSelfRef.reg_file__DOT__D_FF_l_b__DOT__data = 0U;
        vlSelfRef.reg_file__DOT__D_FF_l_va_0__DOT__data = 0U;
        vlSelfRef.reg_file__DOT__D_FF_l_va_1__DOT__data = 0U;
        vlSelfRef.reg_file__DOT__D_FF_l_va_2__DOT__data = 0U;
        vlSelfRef.reg_file__DOT__D_FF_l_va_3__DOT__data = 0U;
        vlSelfRef.reg_file__DOT__D_FF_l_va_4__DOT__data = 0U;
        vlSelfRef.reg_file__DOT__D_FF_l_va_5__DOT__data = 0U;
        vlSelfRef.reg_file__DOT__D_FF_secure__DOT__data = 0U;
        vlSelfRef.reg_file__DOT__D_FF_h_b__DOT__data = 0U;
        vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__out_ff = 0U;
        vlSelfRef.reg_file__DOT__D_FF_pf__DOT__data = 0U;
        vlSelfRef.reg_file__DOT__D_FF_addr__DOT__data = 0U;
        vlSelfRef.reg_file__DOT__D_FF_write__DOT__data = 0U;
        vlSelfRef.f_unit__DOT__w_compare_rd_cam_happend = 0U;
        vlSelfRef.f_unit__DOT__read = 0U;
        vlSelfRef.f_unit__DOT__prev_addr = 0U;
        __Vtemp_20[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_20[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_20[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_20[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_20[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_20[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_20[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_20[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_20[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_20[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_20[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_20[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_20[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_20[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_20[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelfRef.f_unit__DOT__buffer_data[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelfRef.f_unit__DOT__in_data_keep = 0U;
        vlSelfRef.f_unit__DOT__write_keep = 0U;
        vlSelfRef.f_unit__DOT__not_match_keep = 0U;
        vlSelfRef.f_unit__DOT__trans_done_keep = 0U;
        vlSelfRef.f_unit__DOT__cache_access_keep = 0U;
        vlSelfRef.f_unit__DOT__w_prefetch_erase_happend = 0U;
        vlSelfRef.f_unit__DOT__w_prefetch_wr_cam_happend = 0U;
        vlSelfRef.f_unit__DOT__w_compare_rd_mem_happend = 0U;
        vlSelfRef.__Vdly__f_unit__DOT__req_done_keep = 0U;
        vlSelfRef.f_unit__DOT__w_prefetch_rd_cam_happend = 0U;
        vlSelfRef.miss_mshr_id = 0U;
        vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__done_ff = 0U;
        vlSelfRef.d_array__DOT__D_FF_valid__DOT__data = 0U;
        vlSelfRef.mshr_inst__DOT__deq_ptr_q = 0U;
        vlSelfRef.mshr_inst__DOT__next_table = 0U;
        vlSelfRef.rd_controller__DOT__addr_i_reg = 0U;
        vlSelfRef.rd_controller__DOT__cache_read_ready = 0U;
        vlSelfRef.wr_controller__DOT__addr_i_reg = 0U;
        __Vtemp_35[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_35[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_35[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_35[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_35[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_35[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_35[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_35[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_35[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_35[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_35[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_35[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_35[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_35[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_35[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelfRef.wr_controller__DOT__data_in_i_reg[0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelfRef.wr_controller__DOT__byteen_i_reg = 0U;
        vlSelfRef.wr_controller__DOT__write_all = 0U;
        vlSelfRef.wr_controller__DOT__cache_write_ready = 0U;
        vlSelfRef.d_array__DOT__write_prev = 0U;
        __Vdly__f_unit__DOT__busy = 0U;
        vlSelfRef.f_unit__DOT__busy_p = 0U;
        vlSelfRef.rd_controller__DOT__cache_read_done = 0U;
        vlSelfRef.byteen_keep = 0U;
        vlSelfRef.c_fsm__DOT__mshr_id_keep = 0U;
        vlSelfRef.c_fsm__DOT__source_keep = 0U;
        vlSelfRef.c_fsm__DOT__opcode_keep = 0U;
        vlSelfRef.c_fsm__DOT__write_keep = 0U;
        vlSelfRef.c_fsm__DOT__data_keep = 0U;
        vlSelfRef.c_fsm__DOT__addr_keep = 0U;
        vlSelfRef.mshr_inst__DOT__valid_table = 0U;
    }
    vlSelfRef.f_unit__DOT__buffer_data[1U] = __Vtemp_20[1U];
    vlSelfRef.f_unit__DOT__buffer_data[2U] = __Vtemp_20[2U];
    vlSelfRef.f_unit__DOT__buffer_data[3U] = __Vtemp_20[3U];
    vlSelfRef.f_unit__DOT__buffer_data[4U] = __Vtemp_20[4U];
    vlSelfRef.f_unit__DOT__buffer_data[5U] = __Vtemp_20[5U];
    vlSelfRef.f_unit__DOT__buffer_data[6U] = __Vtemp_20[6U];
    vlSelfRef.f_unit__DOT__buffer_data[7U] = __Vtemp_20[7U];
    vlSelfRef.f_unit__DOT__buffer_data[8U] = __Vtemp_20[8U];
    vlSelfRef.f_unit__DOT__buffer_data[9U] = __Vtemp_20[9U];
    vlSelfRef.f_unit__DOT__buffer_data[0xaU] = __Vtemp_20[0xaU];
    vlSelfRef.f_unit__DOT__buffer_data[0xbU] = __Vtemp_20[0xbU];
    vlSelfRef.f_unit__DOT__buffer_data[0xcU] = __Vtemp_20[0xcU];
    vlSelfRef.f_unit__DOT__buffer_data[0xdU] = __Vtemp_20[0xdU];
    vlSelfRef.f_unit__DOT__buffer_data[0xeU] = __Vtemp_20[0xeU];
    vlSelfRef.f_unit__DOT__buffer_data[0xfU] = __Vtemp_20[0xfU];
    vlSelfRef.mshr_inst__DOT__deq_active_q = ((IData)(vlSelfRef.rst_n) 
                                              && (IData)(vlSelfRef.mshr_inst__DOT__deq_active_d));
    vlSelfRef.wr_controller__DOT__data_in_i_reg[1U] 
        = __Vtemp_35[1U];
    vlSelfRef.wr_controller__DOT__data_in_i_reg[2U] 
        = __Vtemp_35[2U];
    vlSelfRef.wr_controller__DOT__data_in_i_reg[3U] 
        = __Vtemp_35[3U];
    vlSelfRef.wr_controller__DOT__data_in_i_reg[4U] 
        = __Vtemp_35[4U];
    vlSelfRef.wr_controller__DOT__data_in_i_reg[5U] 
        = __Vtemp_35[5U];
    vlSelfRef.wr_controller__DOT__data_in_i_reg[6U] 
        = __Vtemp_35[6U];
    vlSelfRef.wr_controller__DOT__data_in_i_reg[7U] 
        = __Vtemp_35[7U];
    vlSelfRef.wr_controller__DOT__data_in_i_reg[8U] 
        = __Vtemp_35[8U];
    vlSelfRef.wr_controller__DOT__data_in_i_reg[9U] 
        = __Vtemp_35[9U];
    vlSelfRef.wr_controller__DOT__data_in_i_reg[0xaU] 
        = __Vtemp_35[0xaU];
    vlSelfRef.wr_controller__DOT__data_in_i_reg[0xbU] 
        = __Vtemp_35[0xbU];
    vlSelfRef.wr_controller__DOT__data_in_i_reg[0xcU] 
        = __Vtemp_35[0xcU];
    vlSelfRef.wr_controller__DOT__data_in_i_reg[0xdU] 
        = __Vtemp_35[0xdU];
    vlSelfRef.wr_controller__DOT__data_in_i_reg[0xeU] 
        = __Vtemp_35[0xeU];
    vlSelfRef.wr_controller__DOT__data_in_i_reg[0xfU] 
        = __Vtemp_35[0xfU];
    vlSelfRef.req_done_sync_2 = ((IData)(vlSelfRef.rst_n) 
                                 && (IData)(vlSelfRef.req_done_sync_1));
    vlSelfRef.c_fsm__DOT__cur_state = ((IData)(vlSelfRef.rst_n) 
                                       && (IData)(vlSelfRef.c_fsm__DOT__next_state));
    vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[0U] 
        = __Vdly__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[0U];
    vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[1U] 
        = __Vdly__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[1U];
    vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[2U] 
        = __Vdly__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[2U];
    vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
        = __Vdly__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U];
    vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
        = __Vdly__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U];
    vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[5U] 
        = __Vdly__sec_address_translator__DOT__num_gen__DOT__lfsr_reg[5U];
    if (__VdlySet__mshr_inst__DOT__opcode_table__v0) {
        vlSelfRef.mshr_inst__DOT__opcode_table[__VdlyDim0__mshr_inst__DOT__opcode_table__v0] 
            = __VdlyVal__mshr_inst__DOT__opcode_table__v0;
    }
    if (__VdlySet__mshr_inst__DOT__source_table__v0) {
        vlSelfRef.mshr_inst__DOT__source_table[__VdlyDim0__mshr_inst__DOT__source_table__v0] 
            = __VdlyVal__mshr_inst__DOT__source_table__v0;
    }
    if (__VdlySet__mshr_inst__DOT__byteen_table__v0) {
        vlSelfRef.mshr_inst__DOT__byteen_table[__VdlyDim0__mshr_inst__DOT__byteen_table__v0] 
            = __VdlyVal__mshr_inst__DOT__byteen_table__v0;
    }
    if (__VdlySet__mshr_inst__DOT__addr_table__v0) {
        vlSelfRef.mshr_inst__DOT__addr_table[__VdlyDim0__mshr_inst__DOT__addr_table__v0] 
            = __VdlyVal__mshr_inst__DOT__addr_table__v0;
    }
    if (__VdlySet__mshr_inst__DOT__data_table__v0) {
        vlSelfRef.mshr_inst__DOT__data_table[__VdlyDim0__mshr_inst__DOT__data_table__v0] 
            = __VdlyVal__mshr_inst__DOT__data_table__v0;
    }
    vlSelfRef.f_unit__DOT__busy = __Vdly__f_unit__DOT__busy;
    vlSelfRef.sec_address_translator__DOT__num_gen__DOT__out_w 
        = (~ ((((((VL_REDXOR_32(((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[5U] 
                                  << 0x18U) | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                               >> 8U))) 
                   << 0x1fU) | (0x40000000U & (VL_REDXOR_32(
                                                            ((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[5U] 
                                                              << 0x19U) 
                                                             | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                                >> 7U))) 
                                               << 0x1eU))) 
                 | ((0x20000000U & (VL_REDXOR_32(((
                                                   vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[5U] 
                                                   << 0x1aU) 
                                                  | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                     >> 6U))) 
                                    << 0x1dU)) | (0x10000000U 
                                                  & (VL_REDXOR_32(
                                                                  ((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[5U] 
                                                                    << 0x1bU) 
                                                                   | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                                      >> 5U))) 
                                                     << 0x1cU)))) 
                | (((0x8000000U & (VL_REDXOR_32(((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[5U] 
                                                  << 0x1cU) 
                                                 | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                    >> 4U))) 
                                   << 0x1bU)) | (0x4000000U 
                                                 & (VL_REDXOR_32(
                                                                 ((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[5U] 
                                                                   << 0x1dU) 
                                                                  | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                                     >> 3U))) 
                                                    << 0x1aU))) 
                   | ((0x2000000U & (VL_REDXOR_32((
                                                   (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[5U] 
                                                    << 0x1eU) 
                                                   | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                      >> 2U))) 
                                     << 0x19U)) | (0x1000000U 
                                                   & (VL_REDXOR_32(
                                                                   ((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[5U] 
                                                                     << 0x1fU) 
                                                                    | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                                       >> 1U))) 
                                                      << 0x18U))))) 
               | ((((0x800000U & (VL_REDXOR_32(vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U]) 
                                  << 0x17U)) | (0x400000U 
                                                & (VL_REDXOR_32(
                                                                ((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                                  << 1U) 
                                                                 | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                                    >> 0x1fU))) 
                                                   << 0x16U))) 
                   | ((0x200000U & (VL_REDXOR_32(((
                                                   vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                   << 2U) 
                                                  | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                     >> 0x1eU))) 
                                    << 0x15U)) | (0x100000U 
                                                  & (VL_REDXOR_32(
                                                                  ((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                                    << 3U) 
                                                                   | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                                      >> 0x1dU))) 
                                                     << 0x14U)))) 
                  | (((0x80000U & (VL_REDXOR_32(((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                  << 4U) 
                                                 | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                    >> 0x1cU))) 
                                   << 0x13U)) | (0x40000U 
                                                 & (VL_REDXOR_32(
                                                                 ((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                                   << 5U) 
                                                                  | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                                     >> 0x1bU))) 
                                                    << 0x12U))) 
                     | ((0x20000U & (VL_REDXOR_32((
                                                   (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                    << 6U) 
                                                   | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                      >> 0x1aU))) 
                                     << 0x11U)) | (0x10000U 
                                                   & (VL_REDXOR_32(
                                                                   ((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                                     << 7U) 
                                                                    | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                                       >> 0x19U))) 
                                                      << 0x10U)))))) 
              | (((((0x8000U & (VL_REDXOR_32(((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                               << 8U) 
                                              | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                 >> 0x18U))) 
                                << 0xfU)) | (0x4000U 
                                             & (VL_REDXOR_32(
                                                             ((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                               << 9U) 
                                                              | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                                 >> 0x17U))) 
                                                << 0xeU))) 
                   | ((0x2000U & (VL_REDXOR_32(((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                 << 0xaU) 
                                                | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                   >> 0x16U))) 
                                  << 0xdU)) | (0x1000U 
                                               & (VL_REDXOR_32(
                                                               ((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                                 << 0xbU) 
                                                                | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                                   >> 0x15U))) 
                                                  << 0xcU)))) 
                  | (((0x800U & (VL_REDXOR_32(((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                << 0xcU) 
                                               | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                  >> 0x14U))) 
                                 << 0xbU)) | (0x400U 
                                              & (VL_REDXOR_32(
                                                              ((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                                << 0xdU) 
                                                               | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                                  >> 0x13U))) 
                                                 << 0xaU))) 
                     | ((0x200U & (VL_REDXOR_32(((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                  << 0xeU) 
                                                 | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                    >> 0x12U))) 
                                   << 9U)) | (0x100U 
                                              & (VL_REDXOR_32(
                                                              ((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                                << 0xfU) 
                                                               | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                                  >> 0x11U))) 
                                                 << 8U))))) 
                 | ((((0x80U & (VL_REDXOR_32(((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                               << 0x10U) 
                                              | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                 >> 0x10U))) 
                                << 7U)) | (0x40U & 
                                           (VL_REDXOR_32(
                                                         ((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                           << 0x11U) 
                                                          | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                             >> 0xfU))) 
                                            << 6U))) 
                     | ((0x20U & (VL_REDXOR_32(((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                 << 0x12U) 
                                                | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                   >> 0xeU))) 
                                  << 5U)) | (0x10U 
                                             & (VL_REDXOR_32(
                                                             ((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                               << 0x13U) 
                                                              | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                                 >> 0xdU))) 
                                                << 4U)))) 
                    | (((8U & (VL_REDXOR_32(((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                              << 0x14U) 
                                             | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                >> 0xcU))) 
                               << 3U)) | (4U & (VL_REDXOR_32(
                                                             ((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                               << 0x15U) 
                                                              | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                                 >> 0xbU))) 
                                                << 2U))) 
                       | ((2U & (VL_REDXOR_32(((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                << 0x16U) 
                                               | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                  >> 0xaU))) 
                                 << 1U)) | (1U & VL_REDXOR_32(
                                                              ((vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[4U] 
                                                                << 0x17U) 
                                                               | (vlSelfRef.sec_address_translator__DOT__num_gen__DOT__lfsr_reg[3U] 
                                                                  >> 9U))))))))));
    vlSelfRef.reg_file__DOT__low_bound = vlSelfRef.reg_file__DOT__D_FF_l_b__DOT__data;
    vlSelfRef.reg_file__DOT__D_FF_l_b__DOT__dout = vlSelfRef.reg_file__DOT__D_FF_l_b__DOT__data;
    vlSelfRef.low_bound = vlSelfRef.reg_file__DOT__D_FF_l_b__DOT__data;
    vlSelfRef.reg_file__DOT__D_FF_l_va_0__DOT__dout 
        = vlSelfRef.reg_file__DOT__D_FF_l_va_0__DOT__data;
    vlSelfRef.reg_file__DOT__D_FF_l_va_1__DOT__dout 
        = vlSelfRef.reg_file__DOT__D_FF_l_va_1__DOT__data;
    vlSelfRef.reg_file__DOT__D_FF_l_va_2__DOT__dout 
        = vlSelfRef.reg_file__DOT__D_FF_l_va_2__DOT__data;
    vlSelfRef.reg_file__DOT__D_FF_l_va_3__DOT__dout 
        = vlSelfRef.reg_file__DOT__D_FF_l_va_3__DOT__data;
    vlSelfRef.reg_file__DOT__D_FF_l_va_4__DOT__dout 
        = vlSelfRef.reg_file__DOT__D_FF_l_va_4__DOT__data;
    vlSelfRef.reg_file__DOT__D_FF_l_va_5__DOT__dout 
        = vlSelfRef.reg_file__DOT__D_FF_l_va_5__DOT__data;
    vlSelfRef.load_val[0U] = ((vlSelfRef.reg_file__DOT__D_FF_l_va_4__DOT__data 
                               << 8U) | (IData)(vlSelfRef.reg_file__DOT__D_FF_l_va_5__DOT__data));
    vlSelfRef.load_val[1U] = ((vlSelfRef.reg_file__DOT__D_FF_l_va_4__DOT__data 
                               >> 0x18U) | ((IData)(
                                                    (((QData)((IData)(vlSelfRef.reg_file__DOT__D_FF_l_va_2__DOT__data)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelfRef.reg_file__DOT__D_FF_l_va_3__DOT__data)))) 
                                            << 8U));
    vlSelfRef.load_val[2U] = (((IData)((((QData)((IData)(vlSelfRef.reg_file__DOT__D_FF_l_va_2__DOT__data)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelfRef.reg_file__DOT__D_FF_l_va_3__DOT__data)))) 
                               >> 0x18U) | ((IData)(
                                                    ((((QData)((IData)(vlSelfRef.reg_file__DOT__D_FF_l_va_2__DOT__data)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelfRef.reg_file__DOT__D_FF_l_va_3__DOT__data))) 
                                                     >> 0x20U)) 
                                            << 8U));
    vlSelfRef.load_val[3U] = ((0xffffff00U & vlSelfRef.load_val[3U]) 
                              | ((IData)(((((QData)((IData)(vlSelfRef.reg_file__DOT__D_FF_l_va_2__DOT__data)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelfRef.reg_file__DOT__D_FF_l_va_3__DOT__data))) 
                                          >> 0x20U)) 
                                 >> 0x18U));
    vlSelfRef.load_val[3U] = ((0xffU & vlSelfRef.load_val[3U]) 
                              | ((IData)((((QData)((IData)(vlSelfRef.reg_file__DOT__D_FF_l_va_0__DOT__data)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelfRef.reg_file__DOT__D_FF_l_va_1__DOT__data)))) 
                                 << 8U));
    vlSelfRef.load_val[4U] = (((IData)((((QData)((IData)(vlSelfRef.reg_file__DOT__D_FF_l_va_0__DOT__data)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelfRef.reg_file__DOT__D_FF_l_va_1__DOT__data)))) 
                               >> 0x18U) | ((IData)(
                                                    ((((QData)((IData)(vlSelfRef.reg_file__DOT__D_FF_l_va_0__DOT__data)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelfRef.reg_file__DOT__D_FF_l_va_1__DOT__data))) 
                                                     >> 0x20U)) 
                                            << 8U));
    vlSelfRef.load_val[5U] = ((IData)(((((QData)((IData)(vlSelfRef.reg_file__DOT__D_FF_l_va_0__DOT__data)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelfRef.reg_file__DOT__D_FF_l_va_1__DOT__data))) 
                                       >> 0x20U)) >> 0x18U);
    vlSelfRef.reg_file__DOT__secure_request = vlSelfRef.reg_file__DOT__D_FF_secure__DOT__data;
    vlSelfRef.reg_file__DOT__D_FF_secure__DOT__dout 
        = vlSelfRef.reg_file__DOT__D_FF_secure__DOT__data;
    vlSelfRef.secure_request = vlSelfRef.reg_file__DOT__D_FF_secure__DOT__data;
    vlSelfRef.reg_file__DOT__high_bound = vlSelfRef.reg_file__DOT__D_FF_h_b__DOT__data;
    vlSelfRef.reg_file__DOT__D_FF_h_b__DOT__dout = vlSelfRef.reg_file__DOT__D_FF_h_b__DOT__data;
    vlSelfRef.high_bound = vlSelfRef.reg_file__DOT__D_FF_h_b__DOT__data;
    vlSelfRef.sec_address_translator__DOT__in_trans_addr 
        = vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__out_ff;
    vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__out 
        = vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__out_ff;
    vlSelfRef.trans_in_addr = vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__out_ff;
    vlSelfRef.reg_file__DOT__prefetch = vlSelfRef.reg_file__DOT__D_FF_pf__DOT__data;
    vlSelfRef.reg_file__DOT__D_FF_pf__DOT__dout = vlSelfRef.reg_file__DOT__D_FF_pf__DOT__data;
    vlSelfRef.prefetch = vlSelfRef.reg_file__DOT__D_FF_pf__DOT__data;
    vlSelfRef.reg_file__DOT__addr = vlSelfRef.reg_file__DOT__D_FF_addr__DOT__data;
    vlSelfRef.reg_file__DOT__D_FF_addr__DOT__dout = vlSelfRef.reg_file__DOT__D_FF_addr__DOT__data;
    vlSelfRef.reg_file__DOT__write_through = vlSelfRef.reg_file__DOT__D_FF_write__DOT__data;
    vlSelfRef.reg_file__DOT__D_FF_write__DOT__dout 
        = vlSelfRef.reg_file__DOT__D_FF_write__DOT__data;
    vlSelfRef.reg_file__DOT__out_data = ((0U == (IData)(vlSelfRef.reg_file__DOT__D_FF_addr__DOT__data))
                                          ? (IData)(vlSelfRef.reg_file__DOT__D_FF_write__DOT__data)
                                          : ((4U == (IData)(vlSelfRef.reg_file__DOT__D_FF_addr__DOT__data))
                                              ? (IData)(vlSelfRef.reg_file__DOT__D_FF_secure__DOT__data)
                                              : ((8U 
                                                  == (IData)(vlSelfRef.reg_file__DOT__D_FF_addr__DOT__data))
                                                  ? (IData)(vlSelfRef.reg_file__DOT__D_FF_l_b__DOT__data)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelfRef.reg_file__DOT__D_FF_addr__DOT__data))
                                                   ? (IData)(vlSelfRef.reg_file__DOT__D_FF_h_b__DOT__data)
                                                   : 
                                                  ((0x10U 
                                                    == (IData)(vlSelfRef.reg_file__DOT__D_FF_addr__DOT__data))
                                                    ? (IData)(vlSelfRef.reg_file__DOT__D_FF_pf__DOT__data)
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlSelfRef.reg_file__DOT__D_FF_addr__DOT__data))
                                                     ? vlSelfRef.reg_file__DOT__D_FF_l_va_0__DOT__data
                                                     : 
                                                    ((0x18U 
                                                      == (IData)(vlSelfRef.reg_file__DOT__D_FF_addr__DOT__data))
                                                      ? vlSelfRef.reg_file__DOT__D_FF_l_va_1__DOT__data
                                                      : 
                                                     ((0x1cU 
                                                       == (IData)(vlSelfRef.reg_file__DOT__D_FF_addr__DOT__data))
                                                       ? vlSelfRef.reg_file__DOT__D_FF_l_va_2__DOT__data
                                                       : 
                                                      ((0x20U 
                                                        == (IData)(vlSelfRef.reg_file__DOT__D_FF_addr__DOT__data))
                                                        ? vlSelfRef.reg_file__DOT__D_FF_l_va_3__DOT__data
                                                        : 
                                                       ((0x24U 
                                                         == (IData)(vlSelfRef.reg_file__DOT__D_FF_addr__DOT__data))
                                                         ? vlSelfRef.reg_file__DOT__D_FF_l_va_4__DOT__data
                                                         : 
                                                        ((0x28U 
                                                          == (IData)(vlSelfRef.reg_file__DOT__D_FF_addr__DOT__data))
                                                          ? (IData)(vlSelfRef.reg_file__DOT__D_FF_l_va_5__DOT__data)
                                                          : 
                                                         ((0x2cU 
                                                           == (IData)(vlSelfRef.reg_file__DOT__D_FF_addr__DOT__data))
                                                           ? 1U
                                                           : 0U))))))))))));
    vlSelfRef.write_through = vlSelfRef.reg_file__DOT__D_FF_write__DOT__data;
    vlSelfRef.f_unit__DOT__w_compare_rd_cam_done = 
        ((IData)(vlSelfRef.f_unit__DOT__rd_cam_done) 
         & (IData)(vlSelfRef.f_unit__DOT__w_compare_rd_cam_happend));
    vlSelfRef.f_unit__DOT__w_prefetch_erase = vlSelfRef.f_unit__DOT__w_prefetch_rd_cam_happend;
    vlSelfRef.f_unit__DOT__w_prefetch_rd_cam_done = 
        ((IData)(vlSelfRef.f_unit__DOT__rd_cam_done) 
         & (IData)(vlSelfRef.f_unit__DOT__w_prefetch_rd_cam_happend));
    vlSelfRef.mshr_inst__DOT__fill_id = vlSelfRef.miss_mshr_id;
    vlSelfRef.mshr_inst__DOT__fill_addr = (vlSelfRef.mshr_inst__DOT__addr_table
                                           [vlSelfRef.miss_mshr_id] 
                                           << 6U);
    vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__done 
        = vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__done_ff;
    vlSelfRef.trans_done = vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__done_ff;
    vlSelfRef.sec_address_translator__DOT__in_done 
        = vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__done_ff;
    vlSelfRef.f_unit__DOT__w_prefetch_rd_cam = vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__done_ff;
    vlSelfRef.d_array__DOT__valid_prev = vlSelfRef.d_array__DOT__D_FF_valid__DOT__data;
    vlSelfRef.d_array__DOT__D_FF_valid__DOT__dout = vlSelfRef.d_array__DOT__D_FF_valid__DOT__data;
    vlSelfRef.mshr_inst__DOT__deq_valid = vlSelfRef.mshr_inst__DOT__deq_active_q;
    vlSelfRef.mshr_inst__DOT__deq_byteen = vlSelfRef.mshr_inst__DOT__byteen_table
        [vlSelfRef.mshr_inst__DOT__deq_ptr_q];
    vlSelfRef.mshr_inst__DOT__deq_id = vlSelfRef.mshr_inst__DOT__deq_ptr_q;
    vlSelfRef.mshr_inst__DOT__deq_data = vlSelfRef.mshr_inst__DOT__data_table
        [vlSelfRef.mshr_inst__DOT__deq_ptr_q];
    vlSelfRef.mshr_inst__DOT__deq_opcode = vlSelfRef.mshr_inst__DOT__opcode_table
        [vlSelfRef.mshr_inst__DOT__deq_ptr_q];
    vlSelfRef.mshr_inst__DOT__deq_source = vlSelfRef.mshr_inst__DOT__source_table
        [vlSelfRef.mshr_inst__DOT__deq_ptr_q];
    vlSelfRef.mshr_inst__DOT__deq_addr = (vlSelfRef.mshr_inst__DOT__addr_table
                                          [vlSelfRef.mshr_inst__DOT__deq_ptr_q] 
                                          << 6U);
    vlSelfRef.req_ready = vlSelfRef.rd_controller__DOT__cache_read_ready;
    vlSelfRef.cache_write_ready = vlSelfRef.wr_controller__DOT__cache_write_ready;
    vlSelfRef.req_done_sync_1 = ((IData)(vlSelfRef.rst_n) 
                                 && (IData)(vlSelfRef.req_done_sync_0));
    vlSelfRef.f_unit__DOT__new_req = ((~ (IData)(vlSelfRef.f_unit__DOT__busy_p)) 
                                      & (IData)(vlSelfRef.f_unit__DOT__busy));
    vlSelfRef.c_fsm__DOT__word_idx = (0xfU & (vlSelfRef.c_fsm__DOT__addr_keep 
                                              >> 2U));
    vlSelfRef.mshr_inst__DOT__empty = (1U & (~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelfRef.mshr_inst__DOT__valid_table)))));
    vlSelfRef.mshr_inst__DOT__full = (0xfU == (IData)(vlSelfRef.mshr_inst__DOT__valid_table));
    vlSelfRef.mshr_inst__DOT__free_slots = (0xfU & 
                                            (~ (IData)(vlSelfRef.mshr_inst__DOT__valid_table)));
    vlSelfRef.mshr_inst__DOT__addr_matches = (((0xfffffff8U 
                                                & ((IData)(vlSelfRef.mshr_inst__DOT__valid_table) 
                                                   & ((vlSelfRef.mshr_inst__DOT__addr_table
                                                       [3U] 
                                                       == vlSelfRef.mshr_inst__DOT__incoming_line_addr) 
                                                      << 3U))) 
                                               | (0xfffffffcU 
                                                  & ((IData)(vlSelfRef.mshr_inst__DOT__valid_table) 
                                                     & ((vlSelfRef.mshr_inst__DOT__addr_table
                                                         [2U] 
                                                         == vlSelfRef.mshr_inst__DOT__incoming_line_addr) 
                                                        << 2U)))) 
                                              | ((0xfffffffeU 
                                                  & ((IData)(vlSelfRef.mshr_inst__DOT__valid_table) 
                                                     & ((vlSelfRef.mshr_inst__DOT__addr_table
                                                         [1U] 
                                                         == vlSelfRef.mshr_inst__DOT__incoming_line_addr) 
                                                        << 1U))) 
                                                 | ((IData)(vlSelfRef.mshr_inst__DOT__valid_table) 
                                                    & (vlSelfRef.mshr_inst__DOT__addr_table
                                                       [0U] 
                                                       == vlSelfRef.mshr_inst__DOT__incoming_line_addr))));
    vlSelfRef.sec_address_translator__DOT__rng_val 
        = (0xfU & vlSelfRef.sec_address_translator__DOT__num_gen__DOT__out_w);
    vlSelfRef.sec_address_translator__DOT__cfg_low_bound 
        = vlSelfRef.low_bound;
    vlSelfRef.reg_file__DOT__load_val[0U] = vlSelfRef.load_val[0U];
    vlSelfRef.reg_file__DOT__load_val[1U] = vlSelfRef.load_val[1U];
    vlSelfRef.reg_file__DOT__load_val[2U] = vlSelfRef.load_val[2U];
    vlSelfRef.reg_file__DOT__load_val[3U] = vlSelfRef.load_val[3U];
    vlSelfRef.reg_file__DOT__load_val[4U] = vlSelfRef.load_val[4U];
    vlSelfRef.reg_file__DOT__load_val[5U] = vlSelfRef.load_val[5U];
    vlSelfRef.sec_address_translator__DOT__cfg_load_val[0U] 
        = vlSelfRef.load_val[0U];
    vlSelfRef.sec_address_translator__DOT__cfg_load_val[1U] 
        = vlSelfRef.load_val[1U];
    vlSelfRef.sec_address_translator__DOT__cfg_load_val[2U] 
        = vlSelfRef.load_val[2U];
    vlSelfRef.sec_address_translator__DOT__cfg_load_val[3U] 
        = vlSelfRef.load_val[3U];
    vlSelfRef.sec_address_translator__DOT__cfg_load_val[4U] 
        = vlSelfRef.load_val[4U];
    vlSelfRef.sec_address_translator__DOT__cfg_load_val[5U] 
        = vlSelfRef.load_val[5U];
    vlSelfRef.sec_address_translator__DOT__cfg_en = vlSelfRef.secure_request;
    vlSelfRef.sec_address_translator__DOT__cfg_high_bound 
        = vlSelfRef.high_bound;
    vlSelfRef.f_unit__DOT__trans_in_addr = vlSelfRef.trans_in_addr;
    vlSelfRef.f_unit__DOT__prefetch = vlSelfRef.prefetch;
    vlSelfRef.cfg_data_out = vlSelfRef.reg_file__DOT__out_data;
    vlSelfRef.f_unit__DOT__trans_done = vlSelfRef.trans_done;
    vlSelfRef.sec_address_translator__DOT__num_gen__DOT__request 
        = vlSelfRef.sec_address_translator__DOT__in_done;
    vlSelfRef.f_unit__DOT__w_prefetch_rd_cam_edge__DOT__signal_in 
        = vlSelfRef.f_unit__DOT__w_prefetch_rd_cam;
    vlSelfRef.f_unit__DOT__w_prefetch_erase_edge__DOT__signal_in 
        = vlSelfRef.f_unit__DOT__w_prefetch_rd_cam;
    vlSelfRef.mshr_deq_valid = vlSelfRef.mshr_inst__DOT__deq_valid;
    vlSelfRef.refill_out_valid = vlSelfRef.mshr_inst__DOT__deq_valid;
    vlSelfRef.mshr_deq_id = vlSelfRef.mshr_inst__DOT__deq_id;
    vlSelfRef.mshr_deq_data = vlSelfRef.mshr_inst__DOT__deq_data;
    vlSelfRef.mshr_deq_opcode = vlSelfRef.mshr_inst__DOT__deq_opcode;
    vlSelfRef.mshr_deq_source = vlSelfRef.mshr_inst__DOT__deq_source;
    vlSelfRef.mshr_deq_addr = vlSelfRef.mshr_inst__DOT__deq_addr;
    vlSelfRef.refill_word_idx = (0xfU & (vlSelfRef.mshr_inst__DOT__deq_addr 
                                         >> 2U));
    vlSelfRef.f_unit__DOT__req_ready = vlSelfRef.req_ready;
    vlSymsp->TOP__cache_system_tl_top__cache_inst__tag_array.write_ready 
        = vlSelfRef.cache_write_ready;
    vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__input_unencoded 
        = vlSelfRef.mshr_inst__DOT__free_slots;
    vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__input_unencoded 
        = (3U & ((IData)(vlSelfRef.mshr_inst__DOT__free_slots) 
                 >> 0U));
    vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__input_unencoded 
        = (3U & ((IData)(vlSelfRef.mshr_inst__DOT__free_slots) 
                 >> 2U));
    vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded 
        = (1U & (~ (IData)(vlSelfRef.mshr_inst__DOT__free_slots)));
    vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded 
        = (1U & (~ ((IData)(vlSelfRef.mshr_inst__DOT__free_slots) 
                    >> 2U)));
    vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid 
        = (0U != (3U & ((IData)(vlSelfRef.mshr_inst__DOT__free_slots) 
                        >> 2U)));
    vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid 
        = (0U != (3U & (IData)(vlSelfRef.mshr_inst__DOT__free_slots)));
    vlSelfRef.mshr_inst__DOT__alloc_match = (0U != (IData)(vlSelfRef.mshr_inst__DOT__addr_matches));
    vlSelfRef.mshr_inst__DOT__tail_candidates = ((~ (IData)(vlSelfRef.mshr_inst__DOT__next_table)) 
                                                 & (IData)(vlSelfRef.mshr_inst__DOT__addr_matches));
    vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__rng_val 
        = vlSelfRef.sec_address_translator__DOT__rng_val;
    vlSelfRef.sec_address_translator__DOT__num_gen__DOT__out 
        = vlSelfRef.sec_address_translator__DOT__rng_val;
    vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__low_bound 
        = vlSelfRef.sec_address_translator__DOT__cfg_low_bound;
    vlSelfRef.sec_address_translator__DOT__num_gen__DOT__in[0U] 
        = vlSelfRef.sec_address_translator__DOT__cfg_load_val[0U];
    vlSelfRef.sec_address_translator__DOT__num_gen__DOT__in[1U] 
        = vlSelfRef.sec_address_translator__DOT__cfg_load_val[1U];
    vlSelfRef.sec_address_translator__DOT__num_gen__DOT__in[2U] 
        = vlSelfRef.sec_address_translator__DOT__cfg_load_val[2U];
    vlSelfRef.sec_address_translator__DOT__num_gen__DOT__in[3U] 
        = vlSelfRef.sec_address_translator__DOT__cfg_load_val[3U];
    vlSelfRef.sec_address_translator__DOT__num_gen__DOT__in[4U] 
        = vlSelfRef.sec_address_translator__DOT__cfg_load_val[4U];
    vlSelfRef.sec_address_translator__DOT__num_gen__DOT__in[5U] 
        = vlSelfRef.sec_address_translator__DOT__cfg_load_val[5U];
    vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__en 
        = vlSelfRef.sec_address_translator__DOT__cfg_en;
    vlSelfRef.sec_address_translator__DOT__rand_fill_engine__DOT__high_bound 
        = vlSelfRef.sec_address_translator__DOT__cfg_high_bound;
    vlSelfRef.req_done_pulse = ((~ (IData)(vlSelfRef.req_done_sync_2)) 
                                & (IData)(vlSelfRef.req_done_sync_1));
    vlSelfRef.req_done_sync_0 = ((IData)(vlSelfRef.rst_n) 
                                 && (IData)(vlSelfRef.req_done));
    vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__out1 
        = vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded;
    vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_unencoded 
        = (3U & ((IData)(1U) << (IData)(vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded)));
    vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__out2 
        = vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded;
    vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_unencoded 
        = (3U & ((IData)(1U) << (IData)(vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded)));
    vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__valid2 
        = vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid;
    if (vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid) {
        vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__valid1 = 1U;
        vlSelfRef.mshr_inst__DOT__alloc_id = vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded;
    } else {
        vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__valid1 = 0U;
        vlSelfRef.mshr_inst__DOT__alloc_id = (2U | (IData)(vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded));
    }
    vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__output_valid 
        = ((IData)(vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid) 
           | (IData)(vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid));
    vlSelfRef.mshr_alloc_match = vlSelfRef.mshr_inst__DOT__alloc_match;
    vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__input_unencoded 
        = vlSelfRef.mshr_inst__DOT__tail_candidates;
    vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__input_unencoded 
        = (3U & ((IData)(vlSelfRef.mshr_inst__DOT__tail_candidates) 
                 >> 0U));
    vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__input_unencoded 
        = (3U & ((IData)(vlSelfRef.mshr_inst__DOT__tail_candidates) 
                 >> 2U));
    vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid 
        = (0U != (3U & ((IData)(vlSelfRef.mshr_inst__DOT__tail_candidates) 
                        >> 2U)));
    vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded 
        = (1U & (~ (IData)(vlSelfRef.mshr_inst__DOT__tail_candidates)));
    vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded 
        = (1U & (~ ((IData)(vlSelfRef.mshr_inst__DOT__tail_candidates) 
                    >> 2U)));
    vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid 
        = (0U != (3U & (IData)(vlSelfRef.mshr_inst__DOT__tail_candidates)));
    vlSelfRef.mshr_inst__DOT__fill_valid = vlSelfRef.req_done_pulse;
    vlSelfRef.req_done = vlSelfRef.rd_controller__DOT__cache_read_done;
    vlSelfRef.mshr_inst__DOT__next_free_id = vlSelfRef.mshr_inst__DOT__alloc_id;
    vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__output_encoded 
        = vlSelfRef.mshr_inst__DOT__alloc_id;
    vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__output_unencoded 
        = (0xfU & ((IData)(1U) << (IData)(vlSelfRef.mshr_inst__DOT__alloc_id)));
    vlSelfRef.mshr_alloc_id = vlSelfRef.mshr_inst__DOT__alloc_id;
    vlSelfRef.mshr_alloc_ready = vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__output_valid;
    vlSelfRef.mshr_inst__DOT__alloc_ready = vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__output_valid;
    vlSelfRef.mshr_inst__DOT__free_slot_exists = vlSelfRef.mshr_inst__DOT__free_slot_encoder__DOT__output_valid;
    vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__valid2 
        = vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid;
    vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__out1 
        = vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded;
    vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_unencoded 
        = (3U & ((IData)(1U) << (IData)(vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded)));
    vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__out2 
        = vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded;
    vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_unencoded 
        = (3U & ((IData)(1U) << (IData)(vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded)));
    vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__valid1 
        = vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid;
    vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__output_valid 
        = ((IData)(vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid) 
           | (IData)(vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_valid));
    vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__output_encoded 
        = ((IData)(vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_valid)
            ? (IData)(vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst1__DOT__output_encoded)
            : (2U | (IData)(vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__genblk1__DOT__priority_encoder_inst2__DOT__output_encoded)));
    vlSelfRef.f_unit__DOT__req_done = vlSelfRef.req_done;
    vlSelfRef.c_fsm__DOT__in_mshr_id = vlSelfRef.mshr_alloc_id;
    vlSelfRef.mshr_inst__DOT__alloc_match_id = vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__output_encoded;
    vlSelfRef.mshr_alloc_match_id = vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__output_encoded;
    vlSelfRef.mshr_inst__DOT__tail_idx = vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__output_encoded;
    vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__output_unencoded 
        = (0xfU & ((IData)(1U) << (IData)(vlSelfRef.mshr_inst__DOT__tail_encoder__DOT__output_encoded)));
}
