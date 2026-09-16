// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_mem_model__M200_MB40.h"

// Parameter definitions for Vtop_mem_model__M200_MB40
constexpr CData/*7:0*/ Vtop_mem_model__M200_MB40::genblk1__DOT__xilinx_single_port_ram_no_change__DOT__INIT_FILE;
constexpr IData/*31:0*/ Vtop_mem_model__M200_MB40::MEM_WIDTH;
constexpr IData/*31:0*/ Vtop_mem_model__M200_MB40::MEM_DEPTH;
constexpr VlWide<3>/*79:0*/ Vtop_mem_model__M200_MB40::MEM_TYPE;
constexpr IData/*31:0*/ Vtop_mem_model__M200_MB40::genblk1__DOT__xilinx_single_port_ram_no_change__DOT__RAM_WIDTH;
constexpr IData/*31:0*/ Vtop_mem_model__M200_MB40::genblk1__DOT__xilinx_single_port_ram_no_change__DOT__RAM_DEPTH;
constexpr VlWide<3>/*87:0*/ Vtop_mem_model__M200_MB40::genblk1__DOT__xilinx_single_port_ram_no_change__DOT__RAM_PERFORMANCE;


void Vtop_mem_model__M200_MB40___ctor_var_reset(Vtop_mem_model__M200_MB40* vlSelf);

Vtop_mem_model__M200_MB40::Vtop_mem_model__M200_MB40(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_mem_model__M200_MB40___ctor_var_reset(this);
}

void Vtop_mem_model__M200_MB40::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_mem_model__M200_MB40::~Vtop_mem_model__M200_MB40() {
}
