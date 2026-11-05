// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_p2.h for the primary calling header

#ifndef VERILATED_VTB_P2___024ROOT_H_
#define VERILATED_VTB_P2___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_p2__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_p2___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_p2__DOT__clk_i;
    CData/*0:0*/ tb_p2__DOT__rst_ni;
    CData/*2:0*/ tb_p2__DOT__rs1_addr_i;
    CData/*2:0*/ tb_p2__DOT__rs2_addr_i;
    CData/*7:0*/ tb_p2__DOT__rs1_data_o;
    CData/*7:0*/ tb_p2__DOT__rs2_data_o;
    CData/*0:0*/ tb_p2__DOT__bypass_en_i;
    CData/*2:0*/ tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wa;
    CData/*7:0*/ tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wd;
    CData/*2:0*/ tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__a1;
    CData/*2:0*/ tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__a2;
    CData/*0:0*/ tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__we;
    CData/*0:0*/ tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__be;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_p2__DOT__clk_i__0;
    SData/*11:0*/ tb_p2__DOT__wr_i;
    IData/*31:0*/ tb_p2__DOT____VlemExpr_7;
    IData/*31:0*/ tb_p2__DOT____VlemExpr_6;
    IData/*31:0*/ tb_p2__DOT____VlemExpr_5;
    IData/*31:0*/ tb_p2__DOT____VlemExpr_4;
    IData/*31:0*/ tb_p2__DOT____VlemExpr_3;
    IData/*31:0*/ tb_p2__DOT____VlemExpr_2;
    IData/*31:0*/ tb_p2__DOT____VlemExpr_1;
    IData/*31:0*/ tb_p2__DOT____VlemExpr_0;
    IData/*31:0*/ tb_p2__DOT__errors;
    IData/*31:0*/ __Vi;
    VlUnpacked<CData/*7:0*/, 8> tb_p2__DOT__model;
    VlUnpacked<CData/*7:0*/, 8> tb_p2__DOT__dut__DOT__regs_q;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    std::string __Vtask_tb_p2__DOT__chk__1__what;
    std::string __Vtask_tb_p2__DOT__chk__2__what;
    std::string __Vtask_tb_p2__DOT__chk__5__what;
    std::string __Vtask_tb_p2__DOT__chk__6__what;
    std::string __Vtask_tb_p2__DOT__chk__7__what;
    std::string __Vtask_tb_p2__DOT__chk__8__what;
    std::string __Vtask_tb_p2__DOT__chk__9__what;
    std::string __Vtask_tb_p2__DOT__chk__11__what;
    std::string __Vtask_tb_p2__DOT__chk__12__what;
    std::string __Vtask_tb_p2__DOT__chk__15__what;
    std::string __Vtask_tb_p2__DOT__chk__16__what;
    std::string __Vtask_tb_p2__DOT__chk__17__what;
    std::string __Vtask_tb_p2__DOT__chk__18__what;
    std::string __Vtask_tb_p2__DOT__chk__20__what;
    std::string __Vtask_tb_p2__DOT__chk__21__what;
    std::string __Vtask_tb_p2__DOT__chk__22__what;
    std::string __Vtask_tb_p2__DOT__chk__23__what;
    std::string __Vtask_tb_p2__DOT__chk__24__what;
    std::string __Vtask_tb_p2__DOT__chk__25__what;
    std::string __Vtask_tb_p2__DOT__chk__26__what;
    std::string __Vtask_tb_p2__DOT__chk__27__what;
    std::string __Vtask_tb_p2__DOT__chk__28__what;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h50a2675e__0;
    VlTriggerScheduler __VtrigSched_h50a2681d__0;

    // INTERNAL VARIABLES
    Vtb_p2__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_p2___024root(Vtb_p2__Syms* symsp, const char* namep);
    ~Vtb_p2___024root();
    VL_UNCOPYABLE(Vtb_p2___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
