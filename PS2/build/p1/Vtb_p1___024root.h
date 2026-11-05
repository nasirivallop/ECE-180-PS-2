// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_p1.h for the primary calling header

#ifndef VERILATED_VTB_P1___024ROOT_H_
#define VERILATED_VTB_P1___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_p1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_p1___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_p1__DOT__clk_i;
    CData/*0:0*/ tb_p1__DOT__rst_ni;
    CData/*0:0*/ tb_p1__DOT__bit_i;
    CData/*1:0*/ tb_p1__DOT__dut__DOT__state_q;
    CData/*7:0*/ tb_p1__DOT__dut__DOT__count_q;
    CData/*2:0*/ __VdfgRegularize_hebeb780c_0_0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_p1__DOT__clk_i__0;
    IData/*31:0*/ tb_p1__DOT____VlemExpr_0;
    IData/*31:0*/ tb_p1__DOT__errors;
    IData/*31:0*/ tb_p1__DOT__exp_count;
    IData/*31:0*/ tb_p1__DOT__seen;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hfa4a293b__0;
    VlTriggerScheduler __VtrigSched_hfa4a29fc__0;

    // INTERNAL VARIABLES
    Vtb_p1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_p1___024root(Vtb_p1__Syms* symsp, const char* namep);
    ~Vtb_p1___024root();
    VL_UNCOPYABLE(Vtb_p1___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
