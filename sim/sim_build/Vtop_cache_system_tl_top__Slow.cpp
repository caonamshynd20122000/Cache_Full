// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_cache_system_tl_top.h"

// Parameter definitions for Vtop_cache_system_tl_top
constexpr IData/*31:0*/ Vtop_cache_system_tl_top::TOTAL_SIZE;
constexpr IData/*31:0*/ Vtop_cache_system_tl_top::ADDR_SIZE;
constexpr IData/*31:0*/ Vtop_cache_system_tl_top::DATA_SIZE;
constexpr IData/*31:0*/ Vtop_cache_system_tl_top::DATA_ELEMENTS;
constexpr IData/*31:0*/ Vtop_cache_system_tl_top::LATENCY;
constexpr IData/*31:0*/ Vtop_cache_system_tl_top::BOUND_SIZE;
constexpr IData/*31:0*/ Vtop_cache_system_tl_top::NUM_WAYS;
constexpr IData/*31:0*/ Vtop_cache_system_tl_top::MEM_DEPTH;
constexpr IData/*31:0*/ Vtop_cache_system_tl_top::dram_inst__DOT__ADDR_SIZE;
constexpr IData/*31:0*/ Vtop_cache_system_tl_top::dram_inst__DOT__DATA_SIZE;
constexpr IData/*31:0*/ Vtop_cache_system_tl_top::dram_inst__DOT__MEM_DEPTH;
constexpr IData/*31:0*/ Vtop_cache_system_tl_top::dram_inst__DOT__main_mem_dp__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop_cache_system_tl_top::dram_inst__DOT__main_mem_dp__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop_cache_system_tl_top::dram_inst__DOT__main_mem_dp__DOT__RAM_DEPTH_SAFE;


void Vtop_cache_system_tl_top___ctor_var_reset(Vtop_cache_system_tl_top* vlSelf);

Vtop_cache_system_tl_top::Vtop_cache_system_tl_top(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_cache_system_tl_top___ctor_var_reset(this);
}

void Vtop_cache_system_tl_top::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_cache_system_tl_top::~Vtop_cache_system_tl_top() {
}
