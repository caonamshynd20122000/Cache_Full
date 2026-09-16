// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_TL_PKG_H_
#define VERILATED_VTOP_TL_PKG_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_tl_pkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr CData/*2:0*/ TL_A_PUT_FULL_DATA = 0U;
    static constexpr CData/*2:0*/ TL_A_PUT_PARTIAL_DATA = 1U;
    static constexpr CData/*2:0*/ TL_A_ARITHMETIC_DATA = 2U;
    static constexpr CData/*2:0*/ TL_A_LOGICAL_DATA = 3U;
    static constexpr CData/*2:0*/ TL_A_GET = 4U;
    static constexpr CData/*2:0*/ TL_A_INTENT = 5U;
    static constexpr CData/*2:0*/ TL_A_ACQUIRE_BLOCK = 6U;
    static constexpr CData/*2:0*/ TL_A_ACQUIRE_PERM = 7U;
    static constexpr CData/*2:0*/ TL_B_PROBE_BLOCK = 6U;
    static constexpr CData/*2:0*/ TL_B_PROBE_PERM = 7U;
    static constexpr CData/*2:0*/ TL_C_PROBE_ACK = 4U;
    static constexpr CData/*2:0*/ TL_C_PROBE_ACK_DATA = 5U;
    static constexpr CData/*2:0*/ TL_C_RELEASE = 6U;
    static constexpr CData/*2:0*/ TL_C_RELEASE_DATA = 7U;
    static constexpr CData/*2:0*/ TL_D_ACCESS_ACK = 0U;
    static constexpr CData/*2:0*/ TL_D_ACCESS_ACK_DATA = 1U;
    static constexpr CData/*2:0*/ TL_D_HINT_ACK = 2U;
    static constexpr CData/*2:0*/ TL_D_GRANT = 4U;
    static constexpr CData/*2:0*/ TL_D_GRANT_DATA = 5U;
    static constexpr CData/*2:0*/ TL_D_RELEASE_ACK = 6U;
    static constexpr CData/*2:0*/ TL_GROW_NtoB = 0U;
    static constexpr CData/*2:0*/ TL_GROW_NtoT = 1U;
    static constexpr CData/*2:0*/ TL_GROW_BtoT = 2U;
    static constexpr CData/*2:0*/ TL_CAP_toT = 0U;
    static constexpr CData/*2:0*/ TL_CAP_toB = 1U;
    static constexpr CData/*2:0*/ TL_CAP_toN = 2U;
    static constexpr CData/*2:0*/ TL_SHRINK_TtoB = 0U;
    static constexpr CData/*2:0*/ TL_SHRINK_TtoN = 1U;
    static constexpr CData/*2:0*/ TL_SHRINK_BtoN = 2U;
    static constexpr IData/*31:0*/ TL_ADDR_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ TL_DATA_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ TL_MASK_WIDTH = 4U;
    static constexpr IData/*31:0*/ TL_SIZE_WIDTH = 3U;
    static constexpr IData/*31:0*/ TL_SOURCE_WIDTH = 4U;
    static constexpr IData/*31:0*/ TL_SINK_WIDTH = 4U;

    // CONSTRUCTORS
    Vtop_tl_pkg(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_tl_pkg();
    VL_UNCOPYABLE(Vtop_tl_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
