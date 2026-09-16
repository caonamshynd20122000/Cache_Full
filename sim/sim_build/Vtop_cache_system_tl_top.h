// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_CACHE_SYSTEM_TL_TOP_H_
#define VERILATED_VTOP_CACHE_SYSTEM_TL_TOP_H_  // guard

#include "verilated.h"
class Vtop_cache_controller_nb;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_cache_system_tl_top final : public VerilatedModule {
  public:
    // CELLS
    Vtop_cache_controller_nb* cache_inst;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_l,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(clk_h,0,0);
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
        CData/*0:0*/ is_write_req;
        CData/*3:0*/ core_out_source;
        CData/*2:0*/ core_out_opcode;
        CData/*0:0*/ core_out_valid;
        CData/*0:0*/ read_valid;
        CData/*0:0*/ read_ready;
        CData/*3:0*/ write_byteen;
        CData/*0:0*/ write_valid;
        CData/*0:0*/ write_ready;
        CData/*0:0*/ dram_inst__DOT__clk;
        CData/*0:0*/ dram_inst__DOT__rst_n;
        CData/*0:0*/ dram_inst__DOT__read_valid;
        CData/*0:0*/ dram_inst__DOT__read_ready;
        CData/*3:0*/ dram_inst__DOT__write_byteen;
        CData/*0:0*/ dram_inst__DOT__write_valid;
        CData/*0:0*/ dram_inst__DOT__write_ready;
        CData/*3:0*/ dram_inst__DOT____Vcellinp__main_mem_dp__b_we;
        CData/*0:0*/ dram_inst__DOT__main_mem_dp__DOT__a_clk;
        CData/*0:0*/ dram_inst__DOT__main_mem_dp__DOT__a_we;
        CData/*0:0*/ dram_inst__DOT__main_mem_dp__DOT__b_clk;
        CData/*3:0*/ dram_inst__DOT__main_mem_dp__DOT__b_we;
        SData/*15:0*/ dram_inst__DOT__r_addr;
        SData/*15:0*/ dram_inst__DOT__w_addr;
        SData/*15:0*/ dram_inst__DOT__main_mem_dp__DOT__a_addr;
        SData/*15:0*/ dram_inst__DOT__main_mem_dp__DOT__b_addr;
        VL_IN(cfg_data_in,31,0);
        VL_OUT(cfg_data_out,31,0);
        VL_IN(a_address,31,0);
        VL_IN(a_data,31,0);
        VL_OUT(d_data,31,0);
        IData/*31:0*/ core_out_addr;
        IData/*31:0*/ core_out_data;
        IData/*31:0*/ read_addr;
        IData/*31:0*/ read_data;
        IData/*31:0*/ write_addr;
        IData/*31:0*/ write_data;
        IData/*31:0*/ dram_inst__DOT__read_addr;
        IData/*31:0*/ dram_inst__DOT__read_data;
        IData/*31:0*/ dram_inst__DOT__write_addr;
        IData/*31:0*/ dram_inst__DOT__write_data;
        IData/*31:0*/ dram_inst__DOT__main_mem_dp__DOT__a_din;
        IData/*31:0*/ dram_inst__DOT__main_mem_dp__DOT__a_dout;
    };
    struct {
        IData/*31:0*/ dram_inst__DOT__main_mem_dp__DOT__b_din;
        IData/*31:0*/ dram_inst__DOT__main_mem_dp__DOT__b_dout;
        IData/*31:0*/ dram_inst__DOT__main_mem_dp__DOT__a_dout_reg;
        IData/*31:0*/ dram_inst__DOT__main_mem_dp__DOT__b_dout_reg;
        IData/*31:0*/ dram_inst__DOT__main_mem_dp__DOT__i;
        IData/*31:0*/ dram_inst__DOT__main_mem_dp__DOT__j;
        VlUnpacked<IData/*31:0*/, 65536> dram_inst__DOT__main_mem_dp__DOT__mem;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ TOTAL_SIZE = 0x00080000U;
    static constexpr IData/*31:0*/ ADDR_SIZE = 0x00000020U;
    static constexpr IData/*31:0*/ DATA_SIZE = 0x00000020U;
    static constexpr IData/*31:0*/ DATA_ELEMENTS = 0x00000040U;
    static constexpr IData/*31:0*/ LATENCY = 2U;
    static constexpr IData/*31:0*/ BOUND_SIZE = 4U;
    static constexpr IData/*31:0*/ NUM_WAYS = 0x00000010U;
    static constexpr IData/*31:0*/ MEM_DEPTH = 0x00010000U;
    static constexpr IData/*31:0*/ dram_inst__DOT__ADDR_SIZE = 0x00000020U;
    static constexpr IData/*31:0*/ dram_inst__DOT__DATA_SIZE = 0x00000020U;
    static constexpr IData/*31:0*/ dram_inst__DOT__MEM_DEPTH = 0x00010000U;
    static constexpr IData/*31:0*/ dram_inst__DOT__main_mem_dp__DOT__DATA_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ dram_inst__DOT__main_mem_dp__DOT__ADDR_WIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ dram_inst__DOT__main_mem_dp__DOT__RAM_DEPTH_SAFE = 0x00010000U;

    // CONSTRUCTORS
    Vtop_cache_system_tl_top(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_cache_system_tl_top();
    VL_UNCOPYABLE(Vtop_cache_system_tl_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
