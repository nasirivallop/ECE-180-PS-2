// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_pe.h for the primary calling header

#ifndef VERILATED_VTB_PE___024ROOT_H_
#define VERILATED_VTB_PE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_pe__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_pe___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_pe__DOT__clk_i;
    CData/*0:0*/ tb_pe__DOT__rst_ni;
    CData/*0:0*/ tb_pe__DOT__clear_i;
    CData/*0:0*/ tb_pe__DOT__valid_i;
    CData/*7:0*/ tb_pe__DOT__act_i;
    CData/*7:0*/ tb_pe__DOT__wgt_i;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_pe__DOT__clk_i__0;
    IData/*31:0*/ tb_pe__DOT__errors;
    IData/*31:0*/ tb_pe__DOT__dut__DOT__u_acc__DOT__q;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    std::string __Vtask_tb_pe__DOT__check__6__name;
    std::string __Vtask_tb_pe__DOT__check__7__name;
    std::string __Vtask_tb_pe__DOT__check__11__name;
    std::string __Vtask_tb_pe__DOT__check__12__name;
    std::string __Vtask_tb_pe__DOT__check__16__name;
    std::string __Vtask_tb_pe__DOT__check__18__name;
    std::string __Vtask_tb_pe__DOT__check__21__name;
    std::string __Vtask_tb_pe__DOT__check__22__name;
    std::string __Vtask_tb_pe__DOT__check__25__name;
    std::string __Vtask_tb_pe__DOT__check__26__name;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_he1f455a1__0;
    VlTriggerScheduler __VtrigSched_he1f45562__0;

    // INTERNAL VARIABLES
    Vtb_pe__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_pe___024root(Vtb_pe__Syms* symsp, const char* namep);
    ~Vtb_pe___024root();
    VL_UNCOPYABLE(Vtb_pe___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
