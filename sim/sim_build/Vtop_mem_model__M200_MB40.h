// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_MEM_MODEL__M200_MB40_H_
#define VERILATED_VTOP_MEM_MODEL__M200_MB40_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_mem_model__M200_MB40 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(en,0,0);
    VL_IN8(in_addr,5,0);
    CData/*5:0*/ genblk1__DOT__xilinx_single_port_ram_no_change__DOT__addra;
    CData/*0:0*/ genblk1__DOT__xilinx_single_port_ram_no_change__DOT__clka;
    CData/*0:0*/ genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ena;
    CData/*0:0*/ genblk1__DOT__xilinx_single_port_ram_no_change__DOT__rsta;
    CData/*0:0*/ genblk1__DOT__xilinx_single_port_ram_no_change__DOT__regcea;
    VL_INW(in_data,511,0,16);
    VL_OUTW(out_data,511,0,16);
    VlWide<16>/*511:0*/ genblk1__DOT__xilinx_single_port_ram_no_change__DOT__dina;
    VlWide<16>/*511:0*/ genblk1__DOT__xilinx_single_port_ram_no_change__DOT__douta;
    VlWide<16>/*511:0*/ genblk1__DOT__xilinx_single_port_ram_no_change__DOT__ram_data;
    IData/*31:0*/ genblk1__DOT__xilinx_single_port_ram_no_change__DOT__init_bram_to_zero__DOT__ram_index;
    VL_IN64(wren,63,0);
    QData/*63:0*/ genblk1__DOT__xilinx_single_port_ram_no_change__DOT__wea;
    VlUnpacked<VlWide<16>/*511:0*/, 64> genblk1__DOT__xilinx_single_port_ram_no_change__DOT__BRAM;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr CData/*7:0*/ genblk1__DOT__xilinx_single_port_ram_no_change__DOT__INIT_FILE = 0U;
    static constexpr IData/*31:0*/ MEM_WIDTH = 0x00000200U;
    static constexpr IData/*31:0*/ MEM_DEPTH = 0x00000040U;
    static constexpr VlWide<3>/*79:0*/ MEM_TYPE = {{
        0x5f4c4f57, 0x4c494e58, 0x00005849
    }};
    static constexpr IData/*31:0*/ genblk1__DOT__xilinx_single_port_ram_no_change__DOT__RAM_WIDTH = 0x00000200U;
    static constexpr IData/*31:0*/ genblk1__DOT__xilinx_single_port_ram_no_change__DOT__RAM_DEPTH = 0x00000040U;
    static constexpr VlWide<3>/*87:0*/ genblk1__DOT__xilinx_single_port_ram_no_change__DOT__RAM_PERFORMANCE = {{
        0x454e4359, 0x5f4c4154, 0x004c4f57
    }};

    // CONSTRUCTORS
    Vtop_mem_model__M200_MB40(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_mem_model__M200_MB40();
    VL_UNCOPYABLE(Vtop_mem_model__M200_MB40);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
