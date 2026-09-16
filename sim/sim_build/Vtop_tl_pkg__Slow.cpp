// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_tl_pkg.h"

// Parameter definitions for Vtop_tl_pkg
constexpr CData/*2:0*/ Vtop_tl_pkg::TL_A_PUT_FULL_DATA;
constexpr CData/*2:0*/ Vtop_tl_pkg::TL_A_PUT_PARTIAL_DATA;
constexpr CData/*2:0*/ Vtop_tl_pkg::TL_A_ARITHMETIC_DATA;
constexpr CData/*2:0*/ Vtop_tl_pkg::TL_A_LOGICAL_DATA;
constexpr CData/*2:0*/ Vtop_tl_pkg::TL_A_GET;
constexpr CData/*2:0*/ Vtop_tl_pkg::TL_A_INTENT;
constexpr CData/*2:0*/ Vtop_tl_pkg::TL_A_ACQUIRE_BLOCK;
constexpr CData/*2:0*/ Vtop_tl_pkg::TL_A_ACQUIRE_PERM;
constexpr CData/*2:0*/ Vtop_tl_pkg::TL_B_PROBE_BLOCK;
constexpr CData/*2:0*/ Vtop_tl_pkg::TL_B_PROBE_PERM;
constexpr CData/*2:0*/ Vtop_tl_pkg::TL_C_PROBE_ACK;
constexpr CData/*2:0*/ Vtop_tl_pkg::TL_C_PROBE_ACK_DATA;
constexpr CData/*2:0*/ Vtop_tl_pkg::TL_C_RELEASE;
constexpr CData/*2:0*/ Vtop_tl_pkg::TL_C_RELEASE_DATA;
constexpr CData/*2:0*/ Vtop_tl_pkg::TL_D_ACCESS_ACK;
constexpr CData/*2:0*/ Vtop_tl_pkg::TL_D_ACCESS_ACK_DATA;
constexpr CData/*2:0*/ Vtop_tl_pkg::TL_D_HINT_ACK;
constexpr CData/*2:0*/ Vtop_tl_pkg::TL_D_GRANT;
constexpr CData/*2:0*/ Vtop_tl_pkg::TL_D_GRANT_DATA;
constexpr CData/*2:0*/ Vtop_tl_pkg::TL_D_RELEASE_ACK;
constexpr CData/*2:0*/ Vtop_tl_pkg::TL_GROW_NtoB;
constexpr CData/*2:0*/ Vtop_tl_pkg::TL_GROW_NtoT;
constexpr CData/*2:0*/ Vtop_tl_pkg::TL_GROW_BtoT;
constexpr CData/*2:0*/ Vtop_tl_pkg::TL_CAP_toT;
constexpr CData/*2:0*/ Vtop_tl_pkg::TL_CAP_toB;
constexpr CData/*2:0*/ Vtop_tl_pkg::TL_CAP_toN;
constexpr CData/*2:0*/ Vtop_tl_pkg::TL_SHRINK_TtoB;
constexpr CData/*2:0*/ Vtop_tl_pkg::TL_SHRINK_TtoN;
constexpr CData/*2:0*/ Vtop_tl_pkg::TL_SHRINK_BtoN;
constexpr IData/*31:0*/ Vtop_tl_pkg::TL_ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop_tl_pkg::TL_DATA_WIDTH;
constexpr IData/*31:0*/ Vtop_tl_pkg::TL_MASK_WIDTH;
constexpr IData/*31:0*/ Vtop_tl_pkg::TL_SIZE_WIDTH;
constexpr IData/*31:0*/ Vtop_tl_pkg::TL_SOURCE_WIDTH;
constexpr IData/*31:0*/ Vtop_tl_pkg::TL_SINK_WIDTH;


void Vtop_tl_pkg___ctor_var_reset(Vtop_tl_pkg* vlSelf);

Vtop_tl_pkg::Vtop_tl_pkg(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_tl_pkg___ctor_var_reset(this);
}

void Vtop_tl_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_tl_pkg::~Vtop_tl_pkg() {
}
