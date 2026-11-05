// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_pe.h for the primary calling header

#include "Vtb_pe__pch.h"

VlCoroutine Vtb_pe___024root___eval_initial__TOP__Vtiming__0(Vtb_pe___024root* vlSelf);
VlCoroutine Vtb_pe___024root___eval_initial__TOP__Vtiming__1(Vtb_pe___024root* vlSelf);
VlCoroutine Vtb_pe___024root___eval_initial__TOP__Vtiming__2(Vtb_pe___024root* vlSelf);

void Vtb_pe___024root___eval_initial(Vtb_pe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___eval_initial\n"); );
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        if (VL_TESTPLUSARGS_I("trace"s)) {
            vlSymsp->_vm_contextp__->dumpfile("build/tb/pe.vcd"s);
            VL_PRINTF_MT("-Info: tb/tb_pe.sv:250: $dumpvar ignored, as Verilated without --trace\n");
        }
    }
    Vtb_pe___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_pe___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_pe___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

void Vtb_pe___024root___eval_sample(Vtb_pe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___eval_sample\n"); );
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_pe___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_pe___024root___eval_ico(Vtb_pe___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___eval_ico\n"); );
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_pe___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vtb_pe___024root___timing_ready(Vtb_pe___024root* vlSelf);
void Vtb_pe___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_pe___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtb_pe___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtb_pe___024root___timing_resume(Vtb_pe___024root* vlSelf);

bool Vtb_pe___024root___eval_act(Vtb_pe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___eval_act\n"); );
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.tb_pe__DOT__clk_i)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pe__DOT__clk_i__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.tb_pe__DOT__clk_i) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pe__DOT__clk_i__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_pe__DOT__clk_i__0 
            = vlSelfRef.tb_pe__DOT__clk_i;
    }
    Vtb_pe___024root___timing_ready(vlSelf);
    Vtb_pe___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_pe___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_pe___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_pe___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_pe___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_pe___024root___eval_inact(Vtb_pe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___eval_inact\n"); );
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/tb_pe.sv", 12, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_pe___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vtb_pe___024root___eval_nba(Vtb_pe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___eval_nba\n"); );
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_pe___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    IData/*31:0*/ __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_pe__DOT__dut__DOT__u_acc__DOT__q;
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_pe__DOT__dut__DOT__u_acc__DOT__q = 0;
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_pe__DOT__dut__DOT__u_acc__DOT__q 
                        = vlSelfRef.tb_pe__DOT__dut__DOT__u_acc__DOT__q;
                    if (vlSelfRef.tb_pe__DOT__rst_ni) {
                        if (vlSelfRef.tb_pe__DOT__clear_i) {
                            __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_pe__DOT__dut__DOT__u_acc__DOT__q = 0U;
                        } else if (vlSelfRef.tb_pe__DOT__valid_i) {
                            __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_pe__DOT__dut__DOT__u_acc__DOT__q 
                                = (vlSelfRef.tb_pe__DOT__dut__DOT__u_acc__DOT__q 
                                   + VL_EXTENDS_II(32,16, 
                                                   (0x0000ffffU 
                                                    & VL_MULS_III(16, 
                                                                  (0x0000ffffU 
                                                                   & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tb_pe__DOT__act_i))), 
                                                                  (0x0000ffffU 
                                                                   & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tb_pe__DOT__wgt_i)))))));
                        }
                    } else {
                        __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_pe__DOT__dut__DOT__u_acc__DOT__q = 0U;
                    }
                    vlSelfRef.tb_pe__DOT__dut__DOT__u_acc__DOT__q 
                        = __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_pe__DOT__dut__DOT__u_acc__DOT__q;
                }
            }
        }
        Vtb_pe___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vtb_pe___024root___eval_obs(Vtb_pe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___eval_obs\n"); );
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtb_pe___024root___eval_react(Vtb_pe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___eval_react\n"); );
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vtb_pe___024root___eval_postponed(Vtb_pe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___eval_postponed\n"); );
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_pe___024root____VbeforeTrig_he1f455a1__0(Vtb_pe___024root* vlSelf, const char* __VeventDescription);
void Vtb_pe___024root____VbeforeTrig_he1f45562__0(Vtb_pe___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_pe___024root___eval_initial__TOP__Vtiming__0(Vtb_pe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_pe__DOT__unnamedblk1_2__DOT____Vrepeat1;
    tb_pe__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_tb_pe__DOT__do_reset__0__tb_pe__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_pe__DOT__do_reset__0__tb_pe__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*7:0*/ __Vtask_tb_pe__DOT__send__2__a;
    __Vtask_tb_pe__DOT__send__2__a = 0;
    CData/*7:0*/ __Vtask_tb_pe__DOT__send__2__w;
    __Vtask_tb_pe__DOT__send__2__w = 0;
    CData/*7:0*/ __Vtask_tb_pe__DOT__send__3__a;
    __Vtask_tb_pe__DOT__send__3__a = 0;
    CData/*7:0*/ __Vtask_tb_pe__DOT__send__3__w;
    __Vtask_tb_pe__DOT__send__3__w = 0;
    CData/*7:0*/ __Vtask_tb_pe__DOT__send__4__a;
    __Vtask_tb_pe__DOT__send__4__a = 0;
    CData/*7:0*/ __Vtask_tb_pe__DOT__send__4__w;
    __Vtask_tb_pe__DOT__send__4__w = 0;
    CData/*7:0*/ __Vtask_tb_pe__DOT__send__5__a;
    __Vtask_tb_pe__DOT__send__5__a = 0;
    CData/*7:0*/ __Vtask_tb_pe__DOT__send__5__w;
    __Vtask_tb_pe__DOT__send__5__w = 0;
    IData/*31:0*/ __Vtask_tb_pe__DOT__check__6__got;
    __Vtask_tb_pe__DOT__check__6__got = 0;
    IData/*31:0*/ __Vtask_tb_pe__DOT__check__6__exp;
    __Vtask_tb_pe__DOT__check__6__exp = 0;
    IData/*31:0*/ __Vtask_tb_pe__DOT__check__7__got;
    __Vtask_tb_pe__DOT__check__7__got = 0;
    IData/*31:0*/ __Vtask_tb_pe__DOT__check__7__exp;
    __Vtask_tb_pe__DOT__check__7__exp = 0;
    CData/*7:0*/ __Vtask_tb_pe__DOT__send__9__a;
    __Vtask_tb_pe__DOT__send__9__a = 0;
    CData/*7:0*/ __Vtask_tb_pe__DOT__send__9__w;
    __Vtask_tb_pe__DOT__send__9__w = 0;
    CData/*7:0*/ __Vtask_tb_pe__DOT__send__10__a;
    __Vtask_tb_pe__DOT__send__10__a = 0;
    CData/*7:0*/ __Vtask_tb_pe__DOT__send__10__w;
    __Vtask_tb_pe__DOT__send__10__w = 0;
    IData/*31:0*/ __Vtask_tb_pe__DOT__check__11__got;
    __Vtask_tb_pe__DOT__check__11__got = 0;
    IData/*31:0*/ __Vtask_tb_pe__DOT__check__11__exp;
    __Vtask_tb_pe__DOT__check__11__exp = 0;
    IData/*31:0*/ __Vtask_tb_pe__DOT__check__12__got;
    __Vtask_tb_pe__DOT__check__12__got = 0;
    IData/*31:0*/ __Vtask_tb_pe__DOT__check__12__exp;
    __Vtask_tb_pe__DOT__check__12__exp = 0;
    CData/*7:0*/ __Vtask_tb_pe__DOT__send__14__a;
    __Vtask_tb_pe__DOT__send__14__a = 0;
    CData/*7:0*/ __Vtask_tb_pe__DOT__send__14__w;
    __Vtask_tb_pe__DOT__send__14__w = 0;
    CData/*7:0*/ __Vtask_tb_pe__DOT__send__15__a;
    __Vtask_tb_pe__DOT__send__15__a = 0;
    CData/*7:0*/ __Vtask_tb_pe__DOT__send__15__w;
    __Vtask_tb_pe__DOT__send__15__w = 0;
    IData/*31:0*/ __Vtask_tb_pe__DOT__check__16__got;
    __Vtask_tb_pe__DOT__check__16__got = 0;
    IData/*31:0*/ __Vtask_tb_pe__DOT__check__16__exp;
    __Vtask_tb_pe__DOT__check__16__exp = 0;
    IData/*31:0*/ __Vtask_tb_pe__DOT__check__18__got;
    __Vtask_tb_pe__DOT__check__18__got = 0;
    IData/*31:0*/ __Vtask_tb_pe__DOT__check__18__exp;
    __Vtask_tb_pe__DOT__check__18__exp = 0;
    CData/*7:0*/ __Vtask_tb_pe__DOT__send__19__a;
    __Vtask_tb_pe__DOT__send__19__a = 0;
    CData/*7:0*/ __Vtask_tb_pe__DOT__send__19__w;
    __Vtask_tb_pe__DOT__send__19__w = 0;
    CData/*7:0*/ __Vtask_tb_pe__DOT__send__20__a;
    __Vtask_tb_pe__DOT__send__20__a = 0;
    CData/*7:0*/ __Vtask_tb_pe__DOT__send__20__w;
    __Vtask_tb_pe__DOT__send__20__w = 0;
    IData/*31:0*/ __Vtask_tb_pe__DOT__check__21__got;
    __Vtask_tb_pe__DOT__check__21__got = 0;
    IData/*31:0*/ __Vtask_tb_pe__DOT__check__21__exp;
    __Vtask_tb_pe__DOT__check__21__exp = 0;
    IData/*31:0*/ __Vtask_tb_pe__DOT__check__22__got;
    __Vtask_tb_pe__DOT__check__22__got = 0;
    IData/*31:0*/ __Vtask_tb_pe__DOT__check__22__exp;
    __Vtask_tb_pe__DOT__check__22__exp = 0;
    CData/*7:0*/ __Vtask_tb_pe__DOT__send__24__a;
    __Vtask_tb_pe__DOT__send__24__a = 0;
    CData/*7:0*/ __Vtask_tb_pe__DOT__send__24__w;
    __Vtask_tb_pe__DOT__send__24__w = 0;
    IData/*31:0*/ __Vtask_tb_pe__DOT__check__25__got;
    __Vtask_tb_pe__DOT__check__25__got = 0;
    IData/*31:0*/ __Vtask_tb_pe__DOT__check__25__exp;
    __Vtask_tb_pe__DOT__check__25__exp = 0;
    IData/*31:0*/ __Vtask_tb_pe__DOT__check__26__got;
    __Vtask_tb_pe__DOT__check__26__got = 0;
    IData/*31:0*/ __Vtask_tb_pe__DOT__check__26__exp;
    __Vtask_tb_pe__DOT__check__26__exp = 0;
    // Body
    VL_WRITEF_NX("=== tb_pe ===\n",0);
    vlSelfRef.tb_pe__DOT__rst_ni = 0U;
    vlSelfRef.tb_pe__DOT__clear_i = 0U;
    vlSelfRef.tb_pe__DOT__valid_i = 0U;
    vlSelfRef.tb_pe__DOT__act_i = 0U;
    vlSelfRef.tb_pe__DOT__wgt_i = 0U;
    __Vtask_tb_pe__DOT__do_reset__0__tb_pe__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_pe__DOT__do_reset__0__tb_pe__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_pe___024root____VbeforeTrig_he1f455a1__0(vlSelf, 
                                                     "@(posedge tb_pe.clk_i)");
        co_await vlSelfRef.__VtrigSched_he1f455a1__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pe.clk_i)", 
                                                             "tb/tb_pe.sv", 
                                                             84);
        __Vtask_tb_pe__DOT__do_reset__0__tb_pe__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_pe__DOT__do_reset__0__tb_pe__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    Vtb_pe___024root____VbeforeTrig_he1f45562__0(vlSelf, 
                                                 "@(negedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f45562__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         85);
    vlSelfRef.tb_pe__DOT__rst_ni = 1U;
    Vtb_pe___024root____VbeforeTrig_he1f45562__0(vlSelf, 
                                                 "@(negedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f45562__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         91);
    vlSelfRef.tb_pe__DOT__clear_i = 1U;
    Vtb_pe___024root____VbeforeTrig_he1f455a1__0(vlSelf, 
                                                 "@(posedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f455a1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         93);
    Vtb_pe___024root____VbeforeTrig_he1f45562__0(vlSelf, 
                                                 "@(negedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f45562__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         94);
    vlSelfRef.tb_pe__DOT__clear_i = 0U;
    __Vtask_tb_pe__DOT__send__2__w = 5U;
    __Vtask_tb_pe__DOT__send__2__a = 1U;
    Vtb_pe___024root____VbeforeTrig_he1f45562__0(vlSelf, 
                                                 "@(negedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f45562__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         101);
    vlSelfRef.tb_pe__DOT__valid_i = 1U;
    vlSelfRef.tb_pe__DOT__act_i = __Vtask_tb_pe__DOT__send__2__a;
    vlSelfRef.tb_pe__DOT__wgt_i = __Vtask_tb_pe__DOT__send__2__w;
    Vtb_pe___024root____VbeforeTrig_he1f455a1__0(vlSelf, 
                                                 "@(posedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f455a1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         105);
    Vtb_pe___024root____VbeforeTrig_he1f45562__0(vlSelf, 
                                                 "@(negedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f45562__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         106);
    vlSelfRef.tb_pe__DOT__valid_i = 0U;
    __Vtask_tb_pe__DOT__send__3__w = 6U;
    __Vtask_tb_pe__DOT__send__3__a = 2U;
    Vtb_pe___024root____VbeforeTrig_he1f45562__0(vlSelf, 
                                                 "@(negedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f45562__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         101);
    vlSelfRef.tb_pe__DOT__valid_i = 1U;
    vlSelfRef.tb_pe__DOT__act_i = __Vtask_tb_pe__DOT__send__3__a;
    vlSelfRef.tb_pe__DOT__wgt_i = __Vtask_tb_pe__DOT__send__3__w;
    Vtb_pe___024root____VbeforeTrig_he1f455a1__0(vlSelf, 
                                                 "@(posedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f455a1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         105);
    Vtb_pe___024root____VbeforeTrig_he1f45562__0(vlSelf, 
                                                 "@(negedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f45562__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         106);
    vlSelfRef.tb_pe__DOT__valid_i = 0U;
    __Vtask_tb_pe__DOT__send__4__w = 7U;
    __Vtask_tb_pe__DOT__send__4__a = 3U;
    Vtb_pe___024root____VbeforeTrig_he1f45562__0(vlSelf, 
                                                 "@(negedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f45562__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         101);
    vlSelfRef.tb_pe__DOT__valid_i = 1U;
    vlSelfRef.tb_pe__DOT__act_i = __Vtask_tb_pe__DOT__send__4__a;
    vlSelfRef.tb_pe__DOT__wgt_i = __Vtask_tb_pe__DOT__send__4__w;
    Vtb_pe___024root____VbeforeTrig_he1f455a1__0(vlSelf, 
                                                 "@(posedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f455a1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         105);
    Vtb_pe___024root____VbeforeTrig_he1f45562__0(vlSelf, 
                                                 "@(negedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f45562__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         106);
    vlSelfRef.tb_pe__DOT__valid_i = 0U;
    __Vtask_tb_pe__DOT__send__5__w = 8U;
    __Vtask_tb_pe__DOT__send__5__a = 4U;
    Vtb_pe___024root____VbeforeTrig_he1f45562__0(vlSelf, 
                                                 "@(negedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f45562__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         101);
    vlSelfRef.tb_pe__DOT__valid_i = 1U;
    vlSelfRef.tb_pe__DOT__act_i = __Vtask_tb_pe__DOT__send__5__a;
    vlSelfRef.tb_pe__DOT__wgt_i = __Vtask_tb_pe__DOT__send__5__w;
    Vtb_pe___024root____VbeforeTrig_he1f455a1__0(vlSelf, 
                                                 "@(posedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f455a1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         105);
    Vtb_pe___024root____VbeforeTrig_he1f45562__0(vlSelf, 
                                                 "@(negedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f45562__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         106);
    vlSelfRef.tb_pe__DOT__valid_i = 0U;
    __Vtask_tb_pe__DOT__check__6__exp = 0x00000046U;
    __Vtask_tb_pe__DOT__check__6__got = vlSelfRef.tb_pe__DOT__dut__DOT__u_acc__DOT__q;
    vlSelfRef.__Vtask_tb_pe__DOT__check__6__name = "test1 sum"s;
    if ((__Vtask_tb_pe__DOT__check__6__got != __Vtask_tb_pe__DOT__check__6__exp)) {
        VL_WRITEF_NX("  FAIL %-24s got=%0d  expected=%0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_pe__DOT__check__6__name)
                     , '~',32,__Vtask_tb_pe__DOT__check__6__got
                     , '~',32,__Vtask_tb_pe__DOT__check__6__exp);
        vlSelfRef.tb_pe__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_pe__DOT__errors);
    } else {
        VL_WRITEF_NX("  ok   %-24s = %0d\n",2, 'S',&(vlSelfRef.__Vtask_tb_pe__DOT__check__6__name)
                     , '~',32,__Vtask_tb_pe__DOT__check__6__got);
    }
    __Vtask_tb_pe__DOT__check__7__exp = 0x00000046U;
    __Vtask_tb_pe__DOT__check__7__got = (vlSelfRef.tb_pe__DOT__dut__DOT__u_acc__DOT__q 
                                         & (- (IData)(
                                                      (1U 
                                                       & (~ 
                                                          (vlSelfRef.tb_pe__DOT__dut__DOT__u_acc__DOT__q 
                                                           >> 0x0000001fU))))));
    vlSelfRef.__Vtask_tb_pe__DOT__check__7__name = "test1 relu"s;
    if ((__Vtask_tb_pe__DOT__check__7__got != __Vtask_tb_pe__DOT__check__7__exp)) {
        VL_WRITEF_NX("  FAIL %-24s got=%0d  expected=%0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_pe__DOT__check__7__name)
                     , '~',32,__Vtask_tb_pe__DOT__check__7__got
                     , '~',32,__Vtask_tb_pe__DOT__check__7__exp);
        vlSelfRef.tb_pe__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_pe__DOT__errors);
    } else {
        VL_WRITEF_NX("  ok   %-24s = %0d\n",2, 'S',&(vlSelfRef.__Vtask_tb_pe__DOT__check__7__name)
                     , '~',32,__Vtask_tb_pe__DOT__check__7__got);
    }
    Vtb_pe___024root____VbeforeTrig_he1f45562__0(vlSelf, 
                                                 "@(negedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f45562__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         91);
    vlSelfRef.tb_pe__DOT__clear_i = 1U;
    Vtb_pe___024root____VbeforeTrig_he1f455a1__0(vlSelf, 
                                                 "@(posedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f455a1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         93);
    Vtb_pe___024root____VbeforeTrig_he1f45562__0(vlSelf, 
                                                 "@(negedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f45562__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         94);
    vlSelfRef.tb_pe__DOT__clear_i = 0U;
    __Vtask_tb_pe__DOT__send__9__w = 0xfcU;
    __Vtask_tb_pe__DOT__send__9__a = 2U;
    Vtb_pe___024root____VbeforeTrig_he1f45562__0(vlSelf, 
                                                 "@(negedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f45562__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         101);
    vlSelfRef.tb_pe__DOT__valid_i = 1U;
    vlSelfRef.tb_pe__DOT__act_i = __Vtask_tb_pe__DOT__send__9__a;
    vlSelfRef.tb_pe__DOT__wgt_i = __Vtask_tb_pe__DOT__send__9__w;
    Vtb_pe___024root____VbeforeTrig_he1f455a1__0(vlSelf, 
                                                 "@(posedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f455a1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         105);
    Vtb_pe___024root____VbeforeTrig_he1f45562__0(vlSelf, 
                                                 "@(negedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f45562__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         106);
    vlSelfRef.tb_pe__DOT__valid_i = 0U;
    __Vtask_tb_pe__DOT__send__10__w = 0xfbU;
    __Vtask_tb_pe__DOT__send__10__a = 3U;
    Vtb_pe___024root____VbeforeTrig_he1f45562__0(vlSelf, 
                                                 "@(negedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f45562__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         101);
    vlSelfRef.tb_pe__DOT__valid_i = 1U;
    vlSelfRef.tb_pe__DOT__act_i = __Vtask_tb_pe__DOT__send__10__a;
    vlSelfRef.tb_pe__DOT__wgt_i = __Vtask_tb_pe__DOT__send__10__w;
    Vtb_pe___024root____VbeforeTrig_he1f455a1__0(vlSelf, 
                                                 "@(posedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f455a1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         105);
    Vtb_pe___024root____VbeforeTrig_he1f45562__0(vlSelf, 
                                                 "@(negedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f45562__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         106);
    vlSelfRef.tb_pe__DOT__valid_i = 0U;
    __Vtask_tb_pe__DOT__check__11__exp = 0xffffffe9U;
    __Vtask_tb_pe__DOT__check__11__got = vlSelfRef.tb_pe__DOT__dut__DOT__u_acc__DOT__q;
    vlSelfRef.__Vtask_tb_pe__DOT__check__11__name = "test2 sum"s;
    if ((__Vtask_tb_pe__DOT__check__11__got != __Vtask_tb_pe__DOT__check__11__exp)) {
        VL_WRITEF_NX("  FAIL %-24s got=%0d  expected=%0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_pe__DOT__check__11__name)
                     , '~',32,__Vtask_tb_pe__DOT__check__11__got
                     , '~',32,__Vtask_tb_pe__DOT__check__11__exp);
        vlSelfRef.tb_pe__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_pe__DOT__errors);
    } else {
        VL_WRITEF_NX("  ok   %-24s = %0d\n",2, 'S',&(vlSelfRef.__Vtask_tb_pe__DOT__check__11__name)
                     , '~',32,__Vtask_tb_pe__DOT__check__11__got);
    }
    __Vtask_tb_pe__DOT__check__12__exp = 0U;
    __Vtask_tb_pe__DOT__check__12__got = (vlSelfRef.tb_pe__DOT__dut__DOT__u_acc__DOT__q 
                                          & (- (IData)(
                                                       (1U 
                                                        & (~ 
                                                           (vlSelfRef.tb_pe__DOT__dut__DOT__u_acc__DOT__q 
                                                            >> 0x0000001fU))))));
    vlSelfRef.__Vtask_tb_pe__DOT__check__12__name = "test2 relu"s;
    if ((__Vtask_tb_pe__DOT__check__12__got != __Vtask_tb_pe__DOT__check__12__exp)) {
        VL_WRITEF_NX("  FAIL %-24s got=%0d  expected=%0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_pe__DOT__check__12__name)
                     , '~',32,__Vtask_tb_pe__DOT__check__12__got
                     , '~',32,__Vtask_tb_pe__DOT__check__12__exp);
        vlSelfRef.tb_pe__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_pe__DOT__errors);
    } else {
        VL_WRITEF_NX("  ok   %-24s = %0d\n",2, 'S',&(vlSelfRef.__Vtask_tb_pe__DOT__check__12__name)
                     , '~',32,__Vtask_tb_pe__DOT__check__12__got);
    }
    Vtb_pe___024root____VbeforeTrig_he1f45562__0(vlSelf, 
                                                 "@(negedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f45562__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         91);
    vlSelfRef.tb_pe__DOT__clear_i = 1U;
    Vtb_pe___024root____VbeforeTrig_he1f455a1__0(vlSelf, 
                                                 "@(posedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f455a1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         93);
    Vtb_pe___024root____VbeforeTrig_he1f45562__0(vlSelf, 
                                                 "@(negedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f45562__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         94);
    vlSelfRef.tb_pe__DOT__clear_i = 0U;
    __Vtask_tb_pe__DOT__send__14__w = 0x0aU;
    __Vtask_tb_pe__DOT__send__14__a = 0x0aU;
    Vtb_pe___024root____VbeforeTrig_he1f45562__0(vlSelf, 
                                                 "@(negedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f45562__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         101);
    vlSelfRef.tb_pe__DOT__valid_i = 1U;
    vlSelfRef.tb_pe__DOT__act_i = __Vtask_tb_pe__DOT__send__14__a;
    vlSelfRef.tb_pe__DOT__wgt_i = __Vtask_tb_pe__DOT__send__14__w;
    Vtb_pe___024root____VbeforeTrig_he1f455a1__0(vlSelf, 
                                                 "@(posedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f455a1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         105);
    Vtb_pe___024root____VbeforeTrig_he1f45562__0(vlSelf, 
                                                 "@(negedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f45562__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         106);
    vlSelfRef.tb_pe__DOT__valid_i = 0U;
    __Vtask_tb_pe__DOT__send__15__w = 7U;
    __Vtask_tb_pe__DOT__send__15__a = 0xfdU;
    Vtb_pe___024root____VbeforeTrig_he1f45562__0(vlSelf, 
                                                 "@(negedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f45562__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         101);
    vlSelfRef.tb_pe__DOT__valid_i = 1U;
    vlSelfRef.tb_pe__DOT__act_i = __Vtask_tb_pe__DOT__send__15__a;
    vlSelfRef.tb_pe__DOT__wgt_i = __Vtask_tb_pe__DOT__send__15__w;
    Vtb_pe___024root____VbeforeTrig_he1f455a1__0(vlSelf, 
                                                 "@(posedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f455a1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         105);
    Vtb_pe___024root____VbeforeTrig_he1f45562__0(vlSelf, 
                                                 "@(negedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f45562__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         106);
    vlSelfRef.tb_pe__DOT__valid_i = 0U;
    __Vtask_tb_pe__DOT__check__16__exp = 0x0000004fU;
    __Vtask_tb_pe__DOT__check__16__got = vlSelfRef.tb_pe__DOT__dut__DOT__u_acc__DOT__q;
    vlSelfRef.__Vtask_tb_pe__DOT__check__16__name = "test3 first sum"s;
    if ((__Vtask_tb_pe__DOT__check__16__got != __Vtask_tb_pe__DOT__check__16__exp)) {
        VL_WRITEF_NX("  FAIL %-24s got=%0d  expected=%0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_pe__DOT__check__16__name)
                     , '~',32,__Vtask_tb_pe__DOT__check__16__got
                     , '~',32,__Vtask_tb_pe__DOT__check__16__exp);
        vlSelfRef.tb_pe__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_pe__DOT__errors);
    } else {
        VL_WRITEF_NX("  ok   %-24s = %0d\n",2, 'S',&(vlSelfRef.__Vtask_tb_pe__DOT__check__16__name)
                     , '~',32,__Vtask_tb_pe__DOT__check__16__got);
    }
    Vtb_pe___024root____VbeforeTrig_he1f45562__0(vlSelf, 
                                                 "@(negedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f45562__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         91);
    vlSelfRef.tb_pe__DOT__clear_i = 1U;
    Vtb_pe___024root____VbeforeTrig_he1f455a1__0(vlSelf, 
                                                 "@(posedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f455a1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         93);
    Vtb_pe___024root____VbeforeTrig_he1f45562__0(vlSelf, 
                                                 "@(negedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f45562__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         94);
    vlSelfRef.tb_pe__DOT__clear_i = 0U;
    __Vtask_tb_pe__DOT__check__18__exp = 0U;
    __Vtask_tb_pe__DOT__check__18__got = vlSelfRef.tb_pe__DOT__dut__DOT__u_acc__DOT__q;
    vlSelfRef.__Vtask_tb_pe__DOT__check__18__name = "test3 after clear"s;
    if ((__Vtask_tb_pe__DOT__check__18__got != __Vtask_tb_pe__DOT__check__18__exp)) {
        VL_WRITEF_NX("  FAIL %-24s got=%0d  expected=%0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_pe__DOT__check__18__name)
                     , '~',32,__Vtask_tb_pe__DOT__check__18__got
                     , '~',32,__Vtask_tb_pe__DOT__check__18__exp);
        vlSelfRef.tb_pe__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_pe__DOT__errors);
    } else {
        VL_WRITEF_NX("  ok   %-24s = %0d\n",2, 'S',&(vlSelfRef.__Vtask_tb_pe__DOT__check__18__name)
                     , '~',32,__Vtask_tb_pe__DOT__check__18__got);
    }
    __Vtask_tb_pe__DOT__send__19__w = 0xfeU;
    __Vtask_tb_pe__DOT__send__19__a = 6U;
    Vtb_pe___024root____VbeforeTrig_he1f45562__0(vlSelf, 
                                                 "@(negedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f45562__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         101);
    vlSelfRef.tb_pe__DOT__valid_i = 1U;
    vlSelfRef.tb_pe__DOT__act_i = __Vtask_tb_pe__DOT__send__19__a;
    vlSelfRef.tb_pe__DOT__wgt_i = __Vtask_tb_pe__DOT__send__19__w;
    Vtb_pe___024root____VbeforeTrig_he1f455a1__0(vlSelf, 
                                                 "@(posedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f455a1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         105);
    Vtb_pe___024root____VbeforeTrig_he1f45562__0(vlSelf, 
                                                 "@(negedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f45562__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         106);
    vlSelfRef.tb_pe__DOT__valid_i = 0U;
    __Vtask_tb_pe__DOT__send__20__w = 9U;
    __Vtask_tb_pe__DOT__send__20__a = 1U;
    Vtb_pe___024root____VbeforeTrig_he1f45562__0(vlSelf, 
                                                 "@(negedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f45562__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         101);
    vlSelfRef.tb_pe__DOT__valid_i = 1U;
    vlSelfRef.tb_pe__DOT__act_i = __Vtask_tb_pe__DOT__send__20__a;
    vlSelfRef.tb_pe__DOT__wgt_i = __Vtask_tb_pe__DOT__send__20__w;
    Vtb_pe___024root____VbeforeTrig_he1f455a1__0(vlSelf, 
                                                 "@(posedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f455a1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         105);
    Vtb_pe___024root____VbeforeTrig_he1f45562__0(vlSelf, 
                                                 "@(negedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f45562__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         106);
    vlSelfRef.tb_pe__DOT__valid_i = 0U;
    __Vtask_tb_pe__DOT__check__21__exp = 0xfffffffdU;
    __Vtask_tb_pe__DOT__check__21__got = vlSelfRef.tb_pe__DOT__dut__DOT__u_acc__DOT__q;
    vlSelfRef.__Vtask_tb_pe__DOT__check__21__name = "test3 second sum"s;
    if ((__Vtask_tb_pe__DOT__check__21__got != __Vtask_tb_pe__DOT__check__21__exp)) {
        VL_WRITEF_NX("  FAIL %-24s got=%0d  expected=%0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_pe__DOT__check__21__name)
                     , '~',32,__Vtask_tb_pe__DOT__check__21__got
                     , '~',32,__Vtask_tb_pe__DOT__check__21__exp);
        vlSelfRef.tb_pe__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_pe__DOT__errors);
    } else {
        VL_WRITEF_NX("  ok   %-24s = %0d\n",2, 'S',&(vlSelfRef.__Vtask_tb_pe__DOT__check__21__name)
                     , '~',32,__Vtask_tb_pe__DOT__check__21__got);
    }
    __Vtask_tb_pe__DOT__check__22__exp = 0U;
    __Vtask_tb_pe__DOT__check__22__got = (vlSelfRef.tb_pe__DOT__dut__DOT__u_acc__DOT__q 
                                          & (- (IData)(
                                                       (1U 
                                                        & (~ 
                                                           (vlSelfRef.tb_pe__DOT__dut__DOT__u_acc__DOT__q 
                                                            >> 0x0000001fU))))));
    vlSelfRef.__Vtask_tb_pe__DOT__check__22__name = "test3 second relu"s;
    if ((__Vtask_tb_pe__DOT__check__22__got != __Vtask_tb_pe__DOT__check__22__exp)) {
        VL_WRITEF_NX("  FAIL %-24s got=%0d  expected=%0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_pe__DOT__check__22__name)
                     , '~',32,__Vtask_tb_pe__DOT__check__22__got
                     , '~',32,__Vtask_tb_pe__DOT__check__22__exp);
        vlSelfRef.tb_pe__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_pe__DOT__errors);
    } else {
        VL_WRITEF_NX("  ok   %-24s = %0d\n",2, 'S',&(vlSelfRef.__Vtask_tb_pe__DOT__check__22__name)
                     , '~',32,__Vtask_tb_pe__DOT__check__22__got);
    }
    Vtb_pe___024root____VbeforeTrig_he1f45562__0(vlSelf, 
                                                 "@(negedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f45562__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         91);
    vlSelfRef.tb_pe__DOT__clear_i = 1U;
    Vtb_pe___024root____VbeforeTrig_he1f455a1__0(vlSelf, 
                                                 "@(posedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f455a1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         93);
    Vtb_pe___024root____VbeforeTrig_he1f45562__0(vlSelf, 
                                                 "@(negedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f45562__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         94);
    vlSelfRef.tb_pe__DOT__clear_i = 0U;
    __Vtask_tb_pe__DOT__send__24__w = 3U;
    __Vtask_tb_pe__DOT__send__24__a = 7U;
    Vtb_pe___024root____VbeforeTrig_he1f45562__0(vlSelf, 
                                                 "@(negedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f45562__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         101);
    vlSelfRef.tb_pe__DOT__valid_i = 1U;
    vlSelfRef.tb_pe__DOT__act_i = __Vtask_tb_pe__DOT__send__24__a;
    vlSelfRef.tb_pe__DOT__wgt_i = __Vtask_tb_pe__DOT__send__24__w;
    Vtb_pe___024root____VbeforeTrig_he1f455a1__0(vlSelf, 
                                                 "@(posedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f455a1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         105);
    Vtb_pe___024root____VbeforeTrig_he1f45562__0(vlSelf, 
                                                 "@(negedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f45562__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         106);
    vlSelfRef.tb_pe__DOT__valid_i = 0U;
    __Vtask_tb_pe__DOT__check__25__exp = 0x00000015U;
    __Vtask_tb_pe__DOT__check__25__got = vlSelfRef.tb_pe__DOT__dut__DOT__u_acc__DOT__q;
    vlSelfRef.__Vtask_tb_pe__DOT__check__25__name = "test4 before idle"s;
    if ((__Vtask_tb_pe__DOT__check__25__got != __Vtask_tb_pe__DOT__check__25__exp)) {
        VL_WRITEF_NX("  FAIL %-24s got=%0d  expected=%0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_pe__DOT__check__25__name)
                     , '~',32,__Vtask_tb_pe__DOT__check__25__got
                     , '~',32,__Vtask_tb_pe__DOT__check__25__exp);
        vlSelfRef.tb_pe__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_pe__DOT__errors);
    } else {
        VL_WRITEF_NX("  ok   %-24s = %0d\n",2, 'S',&(vlSelfRef.__Vtask_tb_pe__DOT__check__25__name)
                     , '~',32,__Vtask_tb_pe__DOT__check__25__got);
    }
    Vtb_pe___024root____VbeforeTrig_he1f45562__0(vlSelf, 
                                                 "@(negedge tb_pe.clk_i)");
    co_await vlSelfRef.__VtrigSched_he1f45562__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pe.clk_i)", 
                                                         "tb/tb_pe.sv", 
                                                         228);
    vlSelfRef.tb_pe__DOT__act_i = 0x63U;
    vlSelfRef.tb_pe__DOT__wgt_i = 0x63U;
    tb_pe__DOT__unnamedblk1_2__DOT____Vrepeat1 = 3U;
    while (VL_LTS_III(32, 0U, tb_pe__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb_pe___024root____VbeforeTrig_he1f455a1__0(vlSelf, 
                                                     "@(posedge tb_pe.clk_i)");
        co_await vlSelfRef.__VtrigSched_he1f455a1__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pe.clk_i)", 
                                                             "tb/tb_pe.sv", 
                                                             229);
        tb_pe__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (tb_pe__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    __Vtask_tb_pe__DOT__check__26__exp = 0x00000015U;
    __Vtask_tb_pe__DOT__check__26__got = vlSelfRef.tb_pe__DOT__dut__DOT__u_acc__DOT__q;
    vlSelfRef.__Vtask_tb_pe__DOT__check__26__name = "test4 after idle"s;
    if ((__Vtask_tb_pe__DOT__check__26__got != __Vtask_tb_pe__DOT__check__26__exp)) {
        VL_WRITEF_NX("  FAIL %-24s got=%0d  expected=%0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_pe__DOT__check__26__name)
                     , '~',32,__Vtask_tb_pe__DOT__check__26__got
                     , '~',32,__Vtask_tb_pe__DOT__check__26__exp);
        vlSelfRef.tb_pe__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_pe__DOT__errors);
    } else {
        VL_WRITEF_NX("  ok   %-24s = %0d\n",2, 'S',&(vlSelfRef.__Vtask_tb_pe__DOT__check__26__name)
                     , '~',32,__Vtask_tb_pe__DOT__check__26__got);
    }
    VL_WRITEF_NX("\n",0);
    if ((0U == vlSelfRef.tb_pe__DOT__errors)) {
        VL_WRITEF_NX("tb_pe: PASS\n",0);
    } else {
        VL_WRITEF_NX("tb_pe: FAIL  (%0d errors)\n",1
                     , '~',32,vlSelfRef.tb_pe__DOT__errors);
    }
    VL_FINISH_MT("tb/tb_pe.sv", 239, "");
    co_return;
}

VlCoroutine Vtb_pe___024root___eval_initial__TOP__Vtiming__1(Vtb_pe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x00000000000186a0ULL, 
                                         nullptr, "tb/tb_pe.sv", 
                                         256);
    VL_WRITEF_NX("tb_pe: TIMEOUT -- simulation never reached $finish.\n[%0t] %%Fatal: tb_pe.sv:258: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_pe", 'T',-12
                 , '#',64,VL_TIME_UNITED_Q(1));
    VL_STOP_MT("tb/tb_pe.sv", 258, "", false);
    co_return;
}

VlCoroutine Vtb_pe___024root___eval_initial__TOP__Vtiming__2(Vtb_pe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/tb_pe.sv", 
                                             40);
        vlSelfRef.tb_pe__DOT__clk_i = (1U & (~ (IData)(vlSelfRef.tb_pe__DOT__clk_i)));
    }
    co_return;
}

bool Vtb_pe___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

bool Vtb_pe___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtb_pe___024root___timing_ready(Vtb_pe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___timing_ready\n"); );
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_he1f455a1__0.ready("@(posedge tb_pe.clk_i)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_he1f45562__0.ready("@(negedge tb_pe.clk_i)");
    }
}

void Vtb_pe___024root___timing_resume(Vtb_pe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___timing_resume\n"); );
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_he1f455a1__0.moveToResumeQueue(
                                                          "@(posedge tb_pe.clk_i)");
    vlSelfRef.__VtrigSched_he1f45562__0.moveToResumeQueue(
                                                          "@(negedge tb_pe.clk_i)");
    vlSelfRef.__VtrigSched_he1f455a1__0.resume("@(posedge tb_pe.clk_i)");
    vlSelfRef.__VtrigSched_he1f45562__0.resume("@(negedge tb_pe.clk_i)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_pe___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vtb_pe___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vtb_pe___024root____VbeforeTrig_he1f455a1__0(Vtb_pe___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root____VbeforeTrig_he1f455a1__0\n"); );
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_pe__DOT__clk_i)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pe__DOT__clk_i__0)) 
                                   << 1U) | ((IData)(vlSelfRef.tb_pe__DOT__clk_i) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pe__DOT__clk_i__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pe__DOT__clk_i__0 
        = vlSelfRef.tb_pe__DOT__clk_i;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_he1f455a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f455a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f455a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f455a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f455a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f455a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f455a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f455a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f455a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f455a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f455a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f455a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f455a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f455a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f455a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f455a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f455a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f455a1__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_pe___024root____VbeforeTrig_he1f45562__0(Vtb_pe___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root____VbeforeTrig_he1f45562__0\n"); );
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_pe__DOT__clk_i)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pe__DOT__clk_i__0)) 
                                   << 1U) | ((IData)(vlSelfRef.tb_pe__DOT__clk_i) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pe__DOT__clk_i__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pe__DOT__clk_i__0 
        = vlSelfRef.tb_pe__DOT__clk_i;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_he1f455a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f455a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f455a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f455a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f455a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f455a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f455a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f455a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f455a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f455a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f455a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f455a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f455a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f455a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f455a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f455a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f455a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f455a1__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1f45562__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_pe___024root___eval_debug_assertions(Vtb_pe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___eval_debug_assertions\n"); );
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
