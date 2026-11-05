// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_p2.h for the primary calling header

#include "Vtb_p2__pch.h"

VlCoroutine Vtb_p2___024root___eval_initial__TOP__Vtiming__0(Vtb_p2___024root* vlSelf);
VlCoroutine Vtb_p2___024root___eval_initial__TOP__Vtiming__1(Vtb_p2___024root* vlSelf);
VlCoroutine Vtb_p2___024root___eval_initial__TOP__Vtiming__2(Vtb_p2___024root* vlSelf);

void Vtb_p2___024root___eval_initial(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_initial\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        if (VL_TESTPLUSARGS_I("trace"s)) {
            vlSymsp->_vm_contextp__->dumpfile("build/p2.vcd"s);
            VL_PRINTF_MT("-Info: tb/tb_p2.sv:169: $dumpvar ignored, as Verilated without --trace\n");
        }
    }
    Vtb_p2___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_p2___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_p2___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

void Vtb_p2___024root___eval_sample(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_sample\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_p2___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_p2___024root___eval_ico(Vtb_p2___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_ico\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_p2___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vtb_p2___024root___timing_ready(Vtb_p2___024root* vlSelf);
void Vtb_p2___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_p2___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtb_p2___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtb_p2___024root___timing_resume(Vtb_p2___024root* vlSelf);

bool Vtb_p2___024root___eval_act(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_act\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.tb_p2__DOT__clk_i)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_p2__DOT__clk_i__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.tb_p2__DOT__clk_i) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_p2__DOT__clk_i__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_p2__DOT__clk_i__0 
            = vlSelfRef.tb_p2__DOT__clk_i;
    }
    Vtb_p2___024root___timing_ready(vlSelf);
    Vtb_p2___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_p2___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_p2___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_p2___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_p2___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_body__act
            if ((7ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    CData/*0:0*/ __Vinline_0__eval_body__act___Vinline_1__act_comb__TOP__0___VdfgRegularize_hebeb780c_0_0;
                    __Vinline_0__eval_body__act___Vinline_1__act_comb__TOP__0___VdfgRegularize_hebeb780c_0_0 = 0;
                    __Vinline_0__eval_body__act___Vinline_1__act_comb__TOP__0___VdfgRegularize_hebeb780c_0_0 
                        = ((IData)(vlSelfRef.tb_p2__DOT__bypass_en_i) 
                           & ((IData)(vlSelfRef.tb_p2__DOT__wr_i) 
                              >> 0x0000000bU));
                    vlSelfRef.tb_p2__DOT__rs1_data_o 
                        = (0x000000ffU & (((((IData)(vlSelfRef.tb_p2__DOT__rs1_addr_i) 
                                             == (7U 
                                                 & ((IData)(vlSelfRef.tb_p2__DOT__wr_i) 
                                                    >> 8U))) 
                                            & __Vinline_0__eval_body__act___Vinline_1__act_comb__TOP__0___VdfgRegularize_hebeb780c_0_0)
                                            ? (IData)(vlSelfRef.tb_p2__DOT__wr_i)
                                            : vlSelfRef.tb_p2__DOT__dut__DOT__regs_q
                                           [vlSelfRef.tb_p2__DOT__rs1_addr_i]) 
                                          & (- (IData)(
                                                       (0U 
                                                        != (IData)(vlSelfRef.tb_p2__DOT__rs1_addr_i))))));
                    vlSelfRef.tb_p2__DOT__rs2_data_o 
                        = (0x000000ffU & (((((IData)(vlSelfRef.tb_p2__DOT__rs2_addr_i) 
                                             == (7U 
                                                 & ((IData)(vlSelfRef.tb_p2__DOT__wr_i) 
                                                    >> 8U))) 
                                            & __Vinline_0__eval_body__act___Vinline_1__act_comb__TOP__0___VdfgRegularize_hebeb780c_0_0)
                                            ? (IData)(vlSelfRef.tb_p2__DOT__wr_i)
                                            : vlSelfRef.tb_p2__DOT__dut__DOT__regs_q
                                           [vlSelfRef.tb_p2__DOT__rs2_addr_i]) 
                                          & (- (IData)(
                                                       (0U 
                                                        != (IData)(vlSelfRef.tb_p2__DOT__rs2_addr_i))))));
                }
            }
        }
    }
    return (__VactExecute);
}

bool Vtb_p2___024root___eval_inact(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_inact\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/tb_p2.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_p2___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vtb_p2___024root___eval_nba(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_nba\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_p2___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    CData/*7:0*/ __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_p2__DOT__dut__DOT__regs_q__v0;
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_p2__DOT__dut__DOT__regs_q__v0 = 0;
                    CData/*2:0*/ __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_p2__DOT__dut__DOT__regs_q__v0;
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_p2__DOT__dut__DOT__regs_q__v0 = 0;
                    CData/*0:0*/ __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_p2__DOT__dut__DOT__regs_q__v0;
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_p2__DOT__dut__DOT__regs_q__v0 = 0;
                    CData/*0:0*/ __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_p2__DOT__dut__DOT__regs_q__v1;
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_p2__DOT__dut__DOT__regs_q__v1 = 0;
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_p2__DOT__dut__DOT__regs_q__v0 = 0U;
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_p2__DOT__dut__DOT__regs_q__v1 = 0U;
                    if (vlSelfRef.tb_p2__DOT__rst_ni) {
                        if ((((IData)(vlSelfRef.tb_p2__DOT__wr_i) 
                              >> 0x0000000bU) & (0U 
                                                 != 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.tb_p2__DOT__wr_i) 
                                                     >> 8U))))) {
                            __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_p2__DOT__dut__DOT__regs_q__v0 
                                = (0x000000ffU & (IData)(vlSelfRef.tb_p2__DOT__wr_i));
                            __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_p2__DOT__dut__DOT__regs_q__v0 
                                = (7U & ((IData)(vlSelfRef.tb_p2__DOT__wr_i) 
                                         >> 8U));
                            __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_p2__DOT__dut__DOT__regs_q__v0 = 1U;
                        }
                    } else {
                        __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_p2__DOT__dut__DOT__regs_q__v1 = 1U;
                    }
                    if (__Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_p2__DOT__dut__DOT__regs_q__v0) {
                        vlSelfRef.tb_p2__DOT__dut__DOT__regs_q[__Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_p2__DOT__dut__DOT__regs_q__v0] 
                            = __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_p2__DOT__dut__DOT__regs_q__v0;
                    }
                    if (__Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_p2__DOT__dut__DOT__regs_q__v1) {
                        vlSelfRef.tb_p2__DOT__dut__DOT__regs_q[0U] = 0U;
                        vlSelfRef.tb_p2__DOT__dut__DOT__regs_q[1U] = 0U;
                        vlSelfRef.tb_p2__DOT__dut__DOT__regs_q[2U] = 0U;
                        vlSelfRef.tb_p2__DOT__dut__DOT__regs_q[3U] = 0U;
                        vlSelfRef.tb_p2__DOT__dut__DOT__regs_q[4U] = 0U;
                        vlSelfRef.tb_p2__DOT__dut__DOT__regs_q[5U] = 0U;
                        vlSelfRef.tb_p2__DOT__dut__DOT__regs_q[6U] = 0U;
                        vlSelfRef.tb_p2__DOT__dut__DOT__regs_q[7U] = 0U;
                    }
                }
            }
            if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    CData/*0:0*/ __Vinline_0__eval_body__nba___Vinline_2__act_comb__TOP__0___VdfgRegularize_hebeb780c_0_0;
                    __Vinline_0__eval_body__nba___Vinline_2__act_comb__TOP__0___VdfgRegularize_hebeb780c_0_0 = 0;
                    __Vinline_0__eval_body__nba___Vinline_2__act_comb__TOP__0___VdfgRegularize_hebeb780c_0_0 
                        = ((IData)(vlSelfRef.tb_p2__DOT__bypass_en_i) 
                           & ((IData)(vlSelfRef.tb_p2__DOT__wr_i) 
                              >> 0x0000000bU));
                    vlSelfRef.tb_p2__DOT__rs1_data_o 
                        = (0x000000ffU & (((((IData)(vlSelfRef.tb_p2__DOT__rs1_addr_i) 
                                             == (7U 
                                                 & ((IData)(vlSelfRef.tb_p2__DOT__wr_i) 
                                                    >> 8U))) 
                                            & __Vinline_0__eval_body__nba___Vinline_2__act_comb__TOP__0___VdfgRegularize_hebeb780c_0_0)
                                            ? (IData)(vlSelfRef.tb_p2__DOT__wr_i)
                                            : vlSelfRef.tb_p2__DOT__dut__DOT__regs_q
                                           [vlSelfRef.tb_p2__DOT__rs1_addr_i]) 
                                          & (- (IData)(
                                                       (0U 
                                                        != (IData)(vlSelfRef.tb_p2__DOT__rs1_addr_i))))));
                    vlSelfRef.tb_p2__DOT__rs2_data_o 
                        = (0x000000ffU & (((((IData)(vlSelfRef.tb_p2__DOT__rs2_addr_i) 
                                             == (7U 
                                                 & ((IData)(vlSelfRef.tb_p2__DOT__wr_i) 
                                                    >> 8U))) 
                                            & __Vinline_0__eval_body__nba___Vinline_2__act_comb__TOP__0___VdfgRegularize_hebeb780c_0_0)
                                            ? (IData)(vlSelfRef.tb_p2__DOT__wr_i)
                                            : vlSelfRef.tb_p2__DOT__dut__DOT__regs_q
                                           [vlSelfRef.tb_p2__DOT__rs2_addr_i]) 
                                          & (- (IData)(
                                                       (0U 
                                                        != (IData)(vlSelfRef.tb_p2__DOT__rs2_addr_i))))));
                }
            }
        }
        Vtb_p2___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vtb_p2___024root___eval_obs(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_obs\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtb_p2___024root___eval_react(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_react\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vtb_p2___024root___eval_postponed(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_postponed\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_p2___024root____VbeforeTrig_h50a2675e__0(Vtb_p2___024root* vlSelf, const char* __VeventDescription);
void Vtb_p2___024root____VbeforeTrig_h50a2681d__0(Vtb_p2___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_p2___024root___eval_initial__TOP__Vtiming__0(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_p2__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_p2__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ tb_p2__DOT__unnamedblk2__DOT__i;
    tb_p2__DOT__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ tb_p2__DOT__unnamedblk3__DOT__i;
    tb_p2__DOT__unnamedblk3__DOT__i = 0;
    IData/*31:0*/ tb_p2__DOT__unnamedblk4__DOT__i;
    tb_p2__DOT__unnamedblk4__DOT__i = 0;
    IData/*31:0*/ tb_p2__DOT__unnamedblk5__DOT__i;
    tb_p2__DOT__unnamedblk5__DOT__i = 0;
    IData/*31:0*/ tb_p2__DOT__unnamedblk6__DOT__i;
    tb_p2__DOT__unnamedblk6__DOT__i = 0;
    CData/*2:0*/ __Vtask_tb_p2__DOT__rd_chk__0__a1;
    __Vtask_tb_p2__DOT__rd_chk__0__a1 = 0;
    CData/*2:0*/ __Vtask_tb_p2__DOT__rd_chk__0__a2;
    __Vtask_tb_p2__DOT__rd_chk__0__a2 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__1__got;
    __Vtask_tb_p2__DOT__chk__1__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__1__exp;
    __Vtask_tb_p2__DOT__chk__1__exp = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__2__got;
    __Vtask_tb_p2__DOT__chk__2__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__2__exp;
    __Vtask_tb_p2__DOT__chk__2__exp = 0;
    CData/*2:0*/ __Vtask_tb_p2__DOT__wr__3__a;
    __Vtask_tb_p2__DOT__wr__3__a = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__wr__3__d;
    __Vtask_tb_p2__DOT__wr__3__d = 0;
    CData/*2:0*/ __Vtask_tb_p2__DOT__rd_chk__4__a1;
    __Vtask_tb_p2__DOT__rd_chk__4__a1 = 0;
    CData/*2:0*/ __Vtask_tb_p2__DOT__rd_chk__4__a2;
    __Vtask_tb_p2__DOT__rd_chk__4__a2 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__5__got;
    __Vtask_tb_p2__DOT__chk__5__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__5__exp;
    __Vtask_tb_p2__DOT__chk__5__exp = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__6__got;
    __Vtask_tb_p2__DOT__chk__6__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__6__exp;
    __Vtask_tb_p2__DOT__chk__6__exp = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__7__got;
    __Vtask_tb_p2__DOT__chk__7__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__7__exp;
    __Vtask_tb_p2__DOT__chk__7__exp = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__8__got;
    __Vtask_tb_p2__DOT__chk__8__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__8__exp;
    __Vtask_tb_p2__DOT__chk__8__exp = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__9__got;
    __Vtask_tb_p2__DOT__chk__9__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__9__exp;
    __Vtask_tb_p2__DOT__chk__9__exp = 0;
    CData/*2:0*/ __Vtask_tb_p2__DOT__rd_chk__10__a1;
    __Vtask_tb_p2__DOT__rd_chk__10__a1 = 0;
    CData/*2:0*/ __Vtask_tb_p2__DOT__rd_chk__10__a2;
    __Vtask_tb_p2__DOT__rd_chk__10__a2 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__11__got;
    __Vtask_tb_p2__DOT__chk__11__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__11__exp;
    __Vtask_tb_p2__DOT__chk__11__exp = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__12__got;
    __Vtask_tb_p2__DOT__chk__12__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__12__exp;
    __Vtask_tb_p2__DOT__chk__12__exp = 0;
    CData/*2:0*/ __Vtask_tb_p2__DOT__wr__13__a;
    __Vtask_tb_p2__DOT__wr__13__a = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__wr__13__d;
    __Vtask_tb_p2__DOT__wr__13__d = 0;
    CData/*2:0*/ __Vtask_tb_p2__DOT__rd_chk__14__a1;
    __Vtask_tb_p2__DOT__rd_chk__14__a1 = 0;
    CData/*2:0*/ __Vtask_tb_p2__DOT__rd_chk__14__a2;
    __Vtask_tb_p2__DOT__rd_chk__14__a2 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__15__got;
    __Vtask_tb_p2__DOT__chk__15__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__15__exp;
    __Vtask_tb_p2__DOT__chk__15__exp = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__16__got;
    __Vtask_tb_p2__DOT__chk__16__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__16__exp;
    __Vtask_tb_p2__DOT__chk__16__exp = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__17__got;
    __Vtask_tb_p2__DOT__chk__17__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__17__exp;
    __Vtask_tb_p2__DOT__chk__17__exp = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__18__got;
    __Vtask_tb_p2__DOT__chk__18__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__18__exp;
    __Vtask_tb_p2__DOT__chk__18__exp = 0;
    CData/*2:0*/ __Vtask_tb_p2__DOT__rd_chk__19__a1;
    __Vtask_tb_p2__DOT__rd_chk__19__a1 = 0;
    CData/*2:0*/ __Vtask_tb_p2__DOT__rd_chk__19__a2;
    __Vtask_tb_p2__DOT__rd_chk__19__a2 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__20__got;
    __Vtask_tb_p2__DOT__chk__20__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__20__exp;
    __Vtask_tb_p2__DOT__chk__20__exp = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__21__got;
    __Vtask_tb_p2__DOT__chk__21__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__21__exp;
    __Vtask_tb_p2__DOT__chk__21__exp = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__22__got;
    __Vtask_tb_p2__DOT__chk__22__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__22__exp;
    __Vtask_tb_p2__DOT__chk__22__exp = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__23__got;
    __Vtask_tb_p2__DOT__chk__23__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__23__exp;
    __Vtask_tb_p2__DOT__chk__23__exp = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__24__got;
    __Vtask_tb_p2__DOT__chk__24__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__24__exp;
    __Vtask_tb_p2__DOT__chk__24__exp = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__25__got;
    __Vtask_tb_p2__DOT__chk__25__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__25__exp;
    __Vtask_tb_p2__DOT__chk__25__exp = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__26__got;
    __Vtask_tb_p2__DOT__chk__26__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__26__exp;
    __Vtask_tb_p2__DOT__chk__26__exp = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__27__got;
    __Vtask_tb_p2__DOT__chk__27__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__27__exp;
    __Vtask_tb_p2__DOT__chk__27__exp = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__28__got;
    __Vtask_tb_p2__DOT__chk__28__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__28__exp;
    __Vtask_tb_p2__DOT__chk__28__exp = 0;
    // Body
    vlSelfRef.tb_p2__DOT__rst_ni = 0U;
    vlSelfRef.tb_p2__DOT__wr_i = 0U;
    vlSelfRef.tb_p2__DOT__bypass_en_i = 0U;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = 0U;
    vlSelfRef.tb_p2__DOT__rs2_addr_i = 0U;
    vlSelfRef.tb_p2__DOT__model[0U] = 0U;
    vlSelfRef.tb_p2__DOT__model[1U] = 0U;
    vlSelfRef.tb_p2__DOT__model[2U] = 0U;
    vlSelfRef.tb_p2__DOT__model[3U] = 0U;
    vlSelfRef.tb_p2__DOT__model[4U] = 0U;
    vlSelfRef.tb_p2__DOT__model[5U] = 0U;
    vlSelfRef.tb_p2__DOT__model[6U] = 0U;
    vlSelfRef.tb_p2__DOT__model[7U] = 0U;
    tb_p2__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    while (VL_LTS_III(32, 0U, tb_p2__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_p2___024root____VbeforeTrig_h50a2675e__0(vlSelf, 
                                                     "@(posedge tb_p2.clk_i)");
        co_await vlSelfRef.__VtrigSched_h50a2675e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_p2.clk_i)", 
                                                             "tb/tb_p2.sv", 
                                                             48);
        tb_p2__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_p2__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    Vtb_p2___024root____VbeforeTrig_h50a2681d__0(vlSelf, 
                                                 "@(negedge tb_p2.clk_i)");
    co_await vlSelfRef.__VtrigSched_h50a2681d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         49);
    vlSelfRef.tb_p2__DOT__rst_ni = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         51);
    tb_p2__DOT__unnamedblk2__DOT__i = 0U;
    while ((8U > tb_p2__DOT__unnamedblk2__DOT__i)) {
        __Vtask_tb_p2__DOT__rd_chk__0__a2 = (7U & tb_p2__DOT__unnamedblk2__DOT__i);
        __Vtask_tb_p2__DOT__rd_chk__0__a1 = (7U & tb_p2__DOT__unnamedblk2__DOT__i);
        vlSelfRef.tb_p2__DOT__rs1_addr_i = __Vtask_tb_p2__DOT__rd_chk__0__a1;
        vlSelfRef.tb_p2__DOT__rs2_addr_i = __Vtask_tb_p2__DOT__rd_chk__0__a2;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_p2.sv", 
                                             39);
        __Vtask_tb_p2__DOT__chk__1__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__0__a1))
                                            ? 0U : vlSelfRef.tb_p2__DOT__model
                                           [__Vtask_tb_p2__DOT__rd_chk__0__a1]);
        __Vtask_tb_p2__DOT__chk__1__got = vlSelfRef.tb_p2__DOT__rs1_data_o;
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_p2__DOT__chk__1__what
                      ,"rs1 read of r%0d",1, '#',3,__Vtask_tb_p2__DOT__rd_chk__0__a1);
        if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__1__got) 
                          != (IData)(__Vtask_tb_p2__DOT__chk__1__exp))))) {
            VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__1__what)
                         , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__1__got)
                         , '#',8,__Vtask_tb_p2__DOT__chk__1__exp);
            vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_p2__DOT__errors);
        }
        __Vtask_tb_p2__DOT__chk__2__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__0__a2))
                                            ? 0U : vlSelfRef.tb_p2__DOT__model
                                           [__Vtask_tb_p2__DOT__rd_chk__0__a2]);
        __Vtask_tb_p2__DOT__chk__2__got = vlSelfRef.tb_p2__DOT__rs2_data_o;
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_p2__DOT__chk__2__what
                      ,"rs2 read of r%0d",1, '#',3,__Vtask_tb_p2__DOT__rd_chk__0__a2);
        if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__2__got) 
                          != (IData)(__Vtask_tb_p2__DOT__chk__2__exp))))) {
            VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__2__what)
                         , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__2__got)
                         , '#',8,__Vtask_tb_p2__DOT__chk__2__exp);
            vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_p2__DOT__errors);
        }
        tb_p2__DOT__unnamedblk2__DOT__i = ((IData)(1U) 
                                           + tb_p2__DOT__unnamedblk2__DOT__i);
    }
    tb_p2__DOT__unnamedblk3__DOT__i = 1U;
    while ((8U > tb_p2__DOT__unnamedblk3__DOT__i)) {
        __Vtask_tb_p2__DOT__wr__3__d = (0x000000ffU 
                                        & ((IData)(0xa0U) 
                                           + tb_p2__DOT__unnamedblk3__DOT__i));
        __Vtask_tb_p2__DOT__wr__3__a = (7U & tb_p2__DOT__unnamedblk3__DOT__i);
        Vtb_p2___024root____VbeforeTrig_h50a2681d__0(vlSelf, 
                                                     "@(negedge tb_p2.clk_i)");
        co_await vlSelfRef.__VtrigSched_h50a2681d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_p2.clk_i)", 
                                                             "tb/tb_p2.sv", 
                                                             27);
        vlSelfRef.tb_p2__DOT__wr_i = (0x00000800U | 
                                      (((IData)(__Vtask_tb_p2__DOT__wr__3__a) 
                                        << 8U) | (IData)(__Vtask_tb_p2__DOT__wr__3__d)));
        Vtb_p2___024root____VbeforeTrig_h50a2675e__0(vlSelf, 
                                                     "@(posedge tb_p2.clk_i)");
        co_await vlSelfRef.__VtrigSched_h50a2675e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_p2.clk_i)", 
                                                             "tb/tb_p2.sv", 
                                                             29);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_p2.sv", 
                                             29);
        Vtb_p2___024root____VbeforeTrig_h50a2681d__0(vlSelf, 
                                                     "@(negedge tb_p2.clk_i)");
        co_await vlSelfRef.__VtrigSched_h50a2681d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_p2.clk_i)", 
                                                             "tb/tb_p2.sv", 
                                                             30);
        vlSelfRef.tb_p2__DOT__wr_i = 0U;
        if ((0U != (IData)(__Vtask_tb_p2__DOT__wr__3__a))) {
            vlSelfRef.tb_p2__DOT__model[__Vtask_tb_p2__DOT__wr__3__a] 
                = __Vtask_tb_p2__DOT__wr__3__d;
        }
        tb_p2__DOT__unnamedblk3__DOT__i = ((IData)(1U) 
                                           + tb_p2__DOT__unnamedblk3__DOT__i);
    }
    tb_p2__DOT__unnamedblk4__DOT__i = 0U;
    while ((8U > tb_p2__DOT__unnamedblk4__DOT__i)) {
        __Vtask_tb_p2__DOT__rd_chk__4__a2 = (7U & ((IData)(7U) 
                                                   - tb_p2__DOT__unnamedblk4__DOT__i));
        __Vtask_tb_p2__DOT__rd_chk__4__a1 = (7U & tb_p2__DOT__unnamedblk4__DOT__i);
        vlSelfRef.tb_p2__DOT__rs1_addr_i = __Vtask_tb_p2__DOT__rd_chk__4__a1;
        vlSelfRef.tb_p2__DOT__rs2_addr_i = __Vtask_tb_p2__DOT__rd_chk__4__a2;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_p2.sv", 
                                             39);
        __Vtask_tb_p2__DOT__chk__5__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__4__a1))
                                            ? 0U : vlSelfRef.tb_p2__DOT__model
                                           [__Vtask_tb_p2__DOT__rd_chk__4__a1]);
        __Vtask_tb_p2__DOT__chk__5__got = vlSelfRef.tb_p2__DOT__rs1_data_o;
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_p2__DOT__chk__5__what
                      ,"rs1 read of r%0d",1, '#',3,__Vtask_tb_p2__DOT__rd_chk__4__a1);
        if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__5__got) 
                          != (IData)(__Vtask_tb_p2__DOT__chk__5__exp))))) {
            VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__5__what)
                         , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__5__got)
                         , '#',8,__Vtask_tb_p2__DOT__chk__5__exp);
            vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_p2__DOT__errors);
        }
        __Vtask_tb_p2__DOT__chk__6__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__4__a2))
                                            ? 0U : vlSelfRef.tb_p2__DOT__model
                                           [__Vtask_tb_p2__DOT__rd_chk__4__a2]);
        __Vtask_tb_p2__DOT__chk__6__got = vlSelfRef.tb_p2__DOT__rs2_data_o;
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_p2__DOT__chk__6__what
                      ,"rs2 read of r%0d",1, '#',3,__Vtask_tb_p2__DOT__rd_chk__4__a2);
        if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__6__got) 
                          != (IData)(__Vtask_tb_p2__DOT__chk__6__exp))))) {
            VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__6__what)
                         , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__6__got)
                         , '#',8,__Vtask_tb_p2__DOT__chk__6__exp);
            vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_p2__DOT__errors);
        }
        tb_p2__DOT__unnamedblk4__DOT__i = ((IData)(1U) 
                                           + tb_p2__DOT__unnamedblk4__DOT__i);
    }
    vlSelfRef.tb_p2__DOT__rs1_addr_i = 2U;
    vlSelfRef.tb_p2__DOT__rs2_addr_i = 5U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         61);
    __Vtask_tb_p2__DOT__chk__7__exp = vlSelfRef.tb_p2__DOT__model[2U];
    __Vtask_tb_p2__DOT__chk__7__got = vlSelfRef.tb_p2__DOT__rs1_data_o;
    vlSelfRef.__Vtask_tb_p2__DOT__chk__7__what = "independent ports rs1"s;
    if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__7__got) 
                      != (IData)(__Vtask_tb_p2__DOT__chk__7__exp))))) {
        VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__7__what)
                     , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__7__got)
                     , '#',8,__Vtask_tb_p2__DOT__chk__7__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__chk__8__exp = vlSelfRef.tb_p2__DOT__model[5U];
    __Vtask_tb_p2__DOT__chk__8__got = vlSelfRef.tb_p2__DOT__rs2_data_o;
    vlSelfRef.__Vtask_tb_p2__DOT__chk__8__what = "independent ports rs2"s;
    if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__8__got) 
                      != (IData)(__Vtask_tb_p2__DOT__chk__8__exp))))) {
        VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__8__what)
                     , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__8__got)
                     , '#',8,__Vtask_tb_p2__DOT__chk__8__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    Vtb_p2___024root____VbeforeTrig_h50a2681d__0(vlSelf, 
                                                 "@(negedge tb_p2.clk_i)");
    co_await vlSelfRef.__VtrigSched_h50a2681d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         66);
    vlSelfRef.tb_p2__DOT__wr_i = 0x08ffU;
    Vtb_p2___024root____VbeforeTrig_h50a2675e__0(vlSelf, 
                                                 "@(posedge tb_p2.clk_i)");
    co_await vlSelfRef.__VtrigSched_h50a2675e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         68);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         68);
    Vtb_p2___024root____VbeforeTrig_h50a2681d__0(vlSelf, 
                                                 "@(negedge tb_p2.clk_i)");
    co_await vlSelfRef.__VtrigSched_h50a2681d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         69);
    vlSelfRef.tb_p2__DOT__wr_i = 0U;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         70);
    __Vtask_tb_p2__DOT__chk__9__exp = 0U;
    __Vtask_tb_p2__DOT__chk__9__got = vlSelfRef.tb_p2__DOT__rs1_data_o;
    vlSelfRef.__Vtask_tb_p2__DOT__chk__9__what = "r0 after writing FF to it"s;
    if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__9__got) 
                      != (IData)(__Vtask_tb_p2__DOT__chk__9__exp))))) {
        VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__9__what)
                     , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__9__got)
                     , '#',8,__Vtask_tb_p2__DOT__chk__9__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    Vtb_p2___024root____VbeforeTrig_h50a2681d__0(vlSelf, 
                                                 "@(negedge tb_p2.clk_i)");
    co_await vlSelfRef.__VtrigSched_h50a2681d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         74);
    vlSelfRef.tb_p2__DOT__wr_i = 0x045aU;
    Vtb_p2___024root____VbeforeTrig_h50a2675e__0(vlSelf, 
                                                 "@(posedge tb_p2.clk_i)");
    co_await vlSelfRef.__VtrigSched_h50a2675e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         76);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         76);
    Vtb_p2___024root____VbeforeTrig_h50a2681d__0(vlSelf, 
                                                 "@(negedge tb_p2.clk_i)");
    co_await vlSelfRef.__VtrigSched_h50a2681d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         77);
    vlSelfRef.tb_p2__DOT__wr_i = 0U;
    __Vtask_tb_p2__DOT__rd_chk__10__a2 = 4U;
    __Vtask_tb_p2__DOT__rd_chk__10__a1 = 4U;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = __Vtask_tb_p2__DOT__rd_chk__10__a1;
    vlSelfRef.tb_p2__DOT__rs2_addr_i = __Vtask_tb_p2__DOT__rd_chk__10__a2;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         39);
    __Vtask_tb_p2__DOT__chk__11__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__10__a1))
                                         ? 0U : vlSelfRef.tb_p2__DOT__model
                                        [__Vtask_tb_p2__DOT__rd_chk__10__a1]);
    __Vtask_tb_p2__DOT__chk__11__got = vlSelfRef.tb_p2__DOT__rs1_data_o;
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_p2__DOT__chk__11__what
                  ,"rs1 read of r%0d",1, '#',3,__Vtask_tb_p2__DOT__rd_chk__10__a1);
    if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__11__got) 
                      != (IData)(__Vtask_tb_p2__DOT__chk__11__exp))))) {
        VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__11__what)
                     , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__11__got)
                     , '#',8,__Vtask_tb_p2__DOT__chk__11__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__chk__12__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__10__a2))
                                         ? 0U : vlSelfRef.tb_p2__DOT__model
                                        [__Vtask_tb_p2__DOT__rd_chk__10__a2]);
    __Vtask_tb_p2__DOT__chk__12__got = vlSelfRef.tb_p2__DOT__rs2_data_o;
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_p2__DOT__chk__12__what
                  ,"rs2 read of r%0d",1, '#',3,__Vtask_tb_p2__DOT__rd_chk__10__a2);
    if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__12__got) 
                      != (IData)(__Vtask_tb_p2__DOT__chk__12__exp))))) {
        VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__12__what)
                     , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__12__got)
                     , '#',8,__Vtask_tb_p2__DOT__chk__12__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    tb_p2__DOT__unnamedblk5__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000064U, tb_p2__DOT__unnamedblk5__DOT__i)) {
        vlSelfRef.tb_p2__DOT____VlemExpr_0 = VL_URANDOM_RANGE_I(0U, 7U);
        __Vtask_tb_p2__DOT__wr__13__d = (0x000000ffU 
                                         & VL_RANDOM_I());
        __Vtask_tb_p2__DOT__wr__13__a = (7U & vlSelfRef.tb_p2__DOT____VlemExpr_0);
        Vtb_p2___024root____VbeforeTrig_h50a2681d__0(vlSelf, 
                                                     "@(negedge tb_p2.clk_i)");
        co_await vlSelfRef.__VtrigSched_h50a2681d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_p2.clk_i)", 
                                                             "tb/tb_p2.sv", 
                                                             27);
        vlSelfRef.tb_p2__DOT__wr_i = (0x00000800U | 
                                      (((IData)(__Vtask_tb_p2__DOT__wr__13__a) 
                                        << 8U) | (IData)(__Vtask_tb_p2__DOT__wr__13__d)));
        Vtb_p2___024root____VbeforeTrig_h50a2675e__0(vlSelf, 
                                                     "@(posedge tb_p2.clk_i)");
        co_await vlSelfRef.__VtrigSched_h50a2675e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_p2.clk_i)", 
                                                             "tb/tb_p2.sv", 
                                                             29);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_p2.sv", 
                                             29);
        Vtb_p2___024root____VbeforeTrig_h50a2681d__0(vlSelf, 
                                                     "@(negedge tb_p2.clk_i)");
        co_await vlSelfRef.__VtrigSched_h50a2681d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_p2.clk_i)", 
                                                             "tb/tb_p2.sv", 
                                                             30);
        vlSelfRef.tb_p2__DOT__wr_i = 0U;
        if ((0U != (IData)(__Vtask_tb_p2__DOT__wr__13__a))) {
            vlSelfRef.tb_p2__DOT__model[__Vtask_tb_p2__DOT__wr__13__a] 
                = __Vtask_tb_p2__DOT__wr__13__d;
        }
        vlSelfRef.tb_p2__DOT____VlemExpr_1 = VL_URANDOM_RANGE_I(0U, 7U);
        vlSelfRef.tb_p2__DOT____VlemExpr_2 = VL_URANDOM_RANGE_I(0U, 7U);
        __Vtask_tb_p2__DOT__rd_chk__14__a2 = (7U & vlSelfRef.tb_p2__DOT____VlemExpr_2);
        __Vtask_tb_p2__DOT__rd_chk__14__a1 = (7U & vlSelfRef.tb_p2__DOT____VlemExpr_1);
        vlSelfRef.tb_p2__DOT__rs1_addr_i = __Vtask_tb_p2__DOT__rd_chk__14__a1;
        vlSelfRef.tb_p2__DOT__rs2_addr_i = __Vtask_tb_p2__DOT__rd_chk__14__a2;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_p2.sv", 
                                             39);
        __Vtask_tb_p2__DOT__chk__15__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__14__a1))
                                             ? 0U : vlSelfRef.tb_p2__DOT__model
                                            [__Vtask_tb_p2__DOT__rd_chk__14__a1]);
        __Vtask_tb_p2__DOT__chk__15__got = vlSelfRef.tb_p2__DOT__rs1_data_o;
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_p2__DOT__chk__15__what
                      ,"rs1 read of r%0d",1, '#',3,__Vtask_tb_p2__DOT__rd_chk__14__a1);
        if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__15__got) 
                          != (IData)(__Vtask_tb_p2__DOT__chk__15__exp))))) {
            VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__15__what)
                         , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__15__got)
                         , '#',8,__Vtask_tb_p2__DOT__chk__15__exp);
            vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_p2__DOT__errors);
        }
        __Vtask_tb_p2__DOT__chk__16__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__14__a2))
                                             ? 0U : vlSelfRef.tb_p2__DOT__model
                                            [__Vtask_tb_p2__DOT__rd_chk__14__a2]);
        __Vtask_tb_p2__DOT__chk__16__got = vlSelfRef.tb_p2__DOT__rs2_data_o;
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_p2__DOT__chk__16__what
                      ,"rs2 read of r%0d",1, '#',3,__Vtask_tb_p2__DOT__rd_chk__14__a2);
        if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__16__got) 
                          != (IData)(__Vtask_tb_p2__DOT__chk__16__exp))))) {
            VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__16__what)
                         , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__16__got)
                         , '#',8,__Vtask_tb_p2__DOT__chk__16__exp);
            vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_p2__DOT__errors);
        }
        tb_p2__DOT__unnamedblk5__DOT__i = ((IData)(1U) 
                                           + tb_p2__DOT__unnamedblk5__DOT__i);
    }
    vlSelfRef.tb_p2__DOT__bypass_en_i = 0U;
    Vtb_p2___024root____VbeforeTrig_h50a2681d__0(vlSelf, 
                                                 "@(negedge tb_p2.clk_i)");
    co_await vlSelfRef.__VtrigSched_h50a2681d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         89);
    vlSelfRef.tb_p2__DOT__wr_i = 0x0b77U;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = 3U;
    vlSelfRef.tb_p2__DOT__rs2_addr_i = 3U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         93);
    __Vtask_tb_p2__DOT__chk__17__exp = vlSelfRef.tb_p2__DOT__model[3U];
    __Vtask_tb_p2__DOT__chk__17__got = vlSelfRef.tb_p2__DOT__rs1_data_o;
    vlSelfRef.__Vtask_tb_p2__DOT__chk__17__what = "bypass OFF: rs1 sees old value"s;
    if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__17__got) 
                      != (IData)(__Vtask_tb_p2__DOT__chk__17__exp))))) {
        VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__17__what)
                     , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__17__got)
                     , '#',8,__Vtask_tb_p2__DOT__chk__17__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__chk__18__exp = vlSelfRef.tb_p2__DOT__model[3U];
    __Vtask_tb_p2__DOT__chk__18__got = vlSelfRef.tb_p2__DOT__rs2_data_o;
    vlSelfRef.__Vtask_tb_p2__DOT__chk__18__what = "bypass OFF: rs2 sees old value"s;
    if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__18__got) 
                      != (IData)(__Vtask_tb_p2__DOT__chk__18__exp))))) {
        VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__18__what)
                     , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__18__got)
                     , '#',8,__Vtask_tb_p2__DOT__chk__18__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    Vtb_p2___024root____VbeforeTrig_h50a2675e__0(vlSelf, 
                                                 "@(posedge tb_p2.clk_i)");
    co_await vlSelfRef.__VtrigSched_h50a2675e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         96);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         96);
    Vtb_p2___024root____VbeforeTrig_h50a2681d__0(vlSelf, 
                                                 "@(negedge tb_p2.clk_i)");
    co_await vlSelfRef.__VtrigSched_h50a2681d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         97);
    vlSelfRef.tb_p2__DOT__wr_i = 0U;
    vlSelfRef.tb_p2__DOT__model[3U] = 0x77U;
    __Vtask_tb_p2__DOT__rd_chk__19__a2 = 3U;
    __Vtask_tb_p2__DOT__rd_chk__19__a1 = 3U;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = __Vtask_tb_p2__DOT__rd_chk__19__a1;
    vlSelfRef.tb_p2__DOT__rs2_addr_i = __Vtask_tb_p2__DOT__rd_chk__19__a2;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         39);
    __Vtask_tb_p2__DOT__chk__20__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__19__a1))
                                         ? 0U : vlSelfRef.tb_p2__DOT__model
                                        [__Vtask_tb_p2__DOT__rd_chk__19__a1]);
    __Vtask_tb_p2__DOT__chk__20__got = vlSelfRef.tb_p2__DOT__rs1_data_o;
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_p2__DOT__chk__20__what
                  ,"rs1 read of r%0d",1, '#',3,__Vtask_tb_p2__DOT__rd_chk__19__a1);
    if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__20__got) 
                      != (IData)(__Vtask_tb_p2__DOT__chk__20__exp))))) {
        VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__20__what)
                     , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__20__got)
                     , '#',8,__Vtask_tb_p2__DOT__chk__20__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__chk__21__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__19__a2))
                                         ? 0U : vlSelfRef.tb_p2__DOT__model
                                        [__Vtask_tb_p2__DOT__rd_chk__19__a2]);
    __Vtask_tb_p2__DOT__chk__21__got = vlSelfRef.tb_p2__DOT__rs2_data_o;
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_p2__DOT__chk__21__what
                  ,"rs2 read of r%0d",1, '#',3,__Vtask_tb_p2__DOT__rd_chk__19__a2);
    if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__21__got) 
                      != (IData)(__Vtask_tb_p2__DOT__chk__21__exp))))) {
        VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__21__what)
                     , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__21__got)
                     , '#',8,__Vtask_tb_p2__DOT__chk__21__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    vlSelfRef.tb_p2__DOT__bypass_en_i = 1U;
    Vtb_p2___024root____VbeforeTrig_h50a2681d__0(vlSelf, 
                                                 "@(negedge tb_p2.clk_i)");
    co_await vlSelfRef.__VtrigSched_h50a2681d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         103);
    vlSelfRef.tb_p2__DOT__wr_i = 0x0e99U;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = 6U;
    vlSelfRef.tb_p2__DOT__rs2_addr_i = 2U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         107);
    __Vtask_tb_p2__DOT__chk__22__exp = 0x99U;
    __Vtask_tb_p2__DOT__chk__22__got = vlSelfRef.tb_p2__DOT__rs1_data_o;
    vlSelfRef.__Vtask_tb_p2__DOT__chk__22__what = "bypass ON: colliding rs1 sees new data"s;
    if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__22__got) 
                      != (IData)(__Vtask_tb_p2__DOT__chk__22__exp))))) {
        VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__22__what)
                     , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__22__got)
                     , '#',8,__Vtask_tb_p2__DOT__chk__22__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__chk__23__exp = vlSelfRef.tb_p2__DOT__model[2U];
    __Vtask_tb_p2__DOT__chk__23__got = vlSelfRef.tb_p2__DOT__rs2_data_o;
    vlSelfRef.__Vtask_tb_p2__DOT__chk__23__what = "bypass ON: other port unaffected"s;
    if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__23__got) 
                      != (IData)(__Vtask_tb_p2__DOT__chk__23__exp))))) {
        VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__23__what)
                     , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__23__got)
                     , '#',8,__Vtask_tb_p2__DOT__chk__23__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    Vtb_p2___024root____VbeforeTrig_h50a2675e__0(vlSelf, 
                                                 "@(posedge tb_p2.clk_i)");
    co_await vlSelfRef.__VtrigSched_h50a2675e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         110);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         110);
    Vtb_p2___024root____VbeforeTrig_h50a2681d__0(vlSelf, 
                                                 "@(negedge tb_p2.clk_i)");
    co_await vlSelfRef.__VtrigSched_h50a2681d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         111);
    vlSelfRef.tb_p2__DOT__wr_i = 0U;
    vlSelfRef.tb_p2__DOT__model[6U] = 0x99U;
    vlSelfRef.tb_p2__DOT__bypass_en_i = 1U;
    Vtb_p2___024root____VbeforeTrig_h50a2681d__0(vlSelf, 
                                                 "@(negedge tb_p2.clk_i)");
    co_await vlSelfRef.__VtrigSched_h50a2681d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         116);
    vlSelfRef.tb_p2__DOT__wr_i = 0x06eeU;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = 6U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         119);
    __Vtask_tb_p2__DOT__chk__24__exp = vlSelfRef.tb_p2__DOT__model[6U];
    __Vtask_tb_p2__DOT__chk__24__got = vlSelfRef.tb_p2__DOT__rs1_data_o;
    vlSelfRef.__Vtask_tb_p2__DOT__chk__24__what = "bypass ON but wr.en low: no forwarding"s;
    if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__24__got) 
                      != (IData)(__Vtask_tb_p2__DOT__chk__24__exp))))) {
        VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__24__what)
                     , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__24__got)
                     , '#',8,__Vtask_tb_p2__DOT__chk__24__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    Vtb_p2___024root____VbeforeTrig_h50a2681d__0(vlSelf, 
                                                 "@(negedge tb_p2.clk_i)");
    co_await vlSelfRef.__VtrigSched_h50a2681d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         121);
    vlSelfRef.tb_p2__DOT__wr_i = 0U;
    vlSelfRef.tb_p2__DOT__bypass_en_i = 1U;
    Vtb_p2___024root____VbeforeTrig_h50a2681d__0(vlSelf, 
                                                 "@(negedge tb_p2.clk_i)");
    co_await vlSelfRef.__VtrigSched_h50a2681d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         125);
    vlSelfRef.tb_p2__DOT__wr_i = 0x08bbU;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = 0U;
    vlSelfRef.tb_p2__DOT__rs2_addr_i = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         129);
    __Vtask_tb_p2__DOT__chk__25__exp = 0U;
    __Vtask_tb_p2__DOT__chk__25__got = vlSelfRef.tb_p2__DOT__rs1_data_o;
    vlSelfRef.__Vtask_tb_p2__DOT__chk__25__what = "bypass ON: r0 still reads zero"s;
    if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__25__got) 
                      != (IData)(__Vtask_tb_p2__DOT__chk__25__exp))))) {
        VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__25__what)
                     , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__25__got)
                     , '#',8,__Vtask_tb_p2__DOT__chk__25__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__chk__26__exp = 0U;
    __Vtask_tb_p2__DOT__chk__26__got = vlSelfRef.tb_p2__DOT__rs2_data_o;
    vlSelfRef.__Vtask_tb_p2__DOT__chk__26__what = "bypass ON: r0 still reads zero"s;
    if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__26__got) 
                      != (IData)(__Vtask_tb_p2__DOT__chk__26__exp))))) {
        VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__26__what)
                     , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__26__got)
                     , '#',8,__Vtask_tb_p2__DOT__chk__26__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    Vtb_p2___024root____VbeforeTrig_h50a2675e__0(vlSelf, 
                                                 "@(posedge tb_p2.clk_i)");
    co_await vlSelfRef.__VtrigSched_h50a2675e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         132);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         132);
    Vtb_p2___024root____VbeforeTrig_h50a2681d__0(vlSelf, 
                                                 "@(negedge tb_p2.clk_i)");
    co_await vlSelfRef.__VtrigSched_h50a2681d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         133);
    vlSelfRef.tb_p2__DOT__wr_i = 0U;
    tb_p2__DOT__unnamedblk6__DOT__i = 0U;
    while (VL_GTS_III(32, 0x000000c8U, tb_p2__DOT__unnamedblk6__DOT__i)) {
        vlSelfRef.tb_p2__DOT____VlemExpr_3 = VL_URANDOM_RANGE_I(0U, 7U);
        vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wa 
            = (7U & vlSelfRef.tb_p2__DOT____VlemExpr_3);
        vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wd 
            = (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.tb_p2__DOT____VlemExpr_4 = VL_URANDOM_RANGE_I(0U, 7U);
        vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__a1 
            = (7U & vlSelfRef.tb_p2__DOT____VlemExpr_4);
        vlSelfRef.tb_p2__DOT____VlemExpr_5 = VL_URANDOM_RANGE_I(0U, 7U);
        vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__a2 
            = (7U & vlSelfRef.tb_p2__DOT____VlemExpr_5);
        vlSelfRef.tb_p2__DOT____VlemExpr_6 = VL_URANDOM_RANGE_I(0U, 1U);
        vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__we 
            = (1U & vlSelfRef.tb_p2__DOT____VlemExpr_6);
        vlSelfRef.tb_p2__DOT____VlemExpr_7 = VL_URANDOM_RANGE_I(0U, 1U);
        vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__be 
            = (1U & vlSelfRef.tb_p2__DOT____VlemExpr_7);
        Vtb_p2___024root____VbeforeTrig_h50a2681d__0(vlSelf, 
                                                     "@(negedge tb_p2.clk_i)");
        co_await vlSelfRef.__VtrigSched_h50a2681d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_p2.clk_i)", 
                                                             "tb/tb_p2.sv", 
                                                             144);
        vlSelfRef.tb_p2__DOT__bypass_en_i = vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__be;
        vlSelfRef.tb_p2__DOT__wr_i = (((IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__we) 
                                       << 0x0000000bU) 
                                      | (((IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wa) 
                                          << 8U) | (IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wd)));
        vlSelfRef.tb_p2__DOT__rs1_addr_i = vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__a1;
        vlSelfRef.tb_p2__DOT__rs2_addr_i = vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__a2;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_p2.sv", 
                                             149);
        __Vtask_tb_p2__DOT__chk__27__exp = ((0U == (IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__a1))
                                             ? 0U : 
                                            (((((IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__be) 
                                                & (IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__we)) 
                                               & ((IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wa) 
                                                  == (IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__a1))) 
                                              & (0U 
                                                 != (IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wa)))
                                              ? (IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wd)
                                              : vlSelfRef.tb_p2__DOT__model
                                             [vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__a1]));
        __Vtask_tb_p2__DOT__chk__27__got = vlSelfRef.tb_p2__DOT__rs1_data_o;
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_p2__DOT__chk__27__what
                      ,"random rs1 (bypass=%0b we=%0b)",2
                      , '#',1,vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__be
                      , '#',1,(IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__we));
        if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__27__got) 
                          != (IData)(__Vtask_tb_p2__DOT__chk__27__exp))))) {
            VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__27__what)
                         , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__27__got)
                         , '#',8,__Vtask_tb_p2__DOT__chk__27__exp);
            vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_p2__DOT__errors);
        }
        __Vtask_tb_p2__DOT__chk__28__exp = ((0U == (IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__a2))
                                             ? 0U : 
                                            (((((IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__be) 
                                                & (IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__we)) 
                                               & ((IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wa) 
                                                  == (IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__a2))) 
                                              & (0U 
                                                 != (IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wa)))
                                              ? (IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wd)
                                              : vlSelfRef.tb_p2__DOT__model
                                             [vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__a2]));
        __Vtask_tb_p2__DOT__chk__28__got = vlSelfRef.tb_p2__DOT__rs2_data_o;
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_p2__DOT__chk__28__what
                      ,"random rs2 (bypass=%0b we=%0b)",2
                      , '#',1,vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__be
                      , '#',1,(IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__we));
        if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__28__got) 
                          != (IData)(__Vtask_tb_p2__DOT__chk__28__exp))))) {
            VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__28__what)
                         , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__28__got)
                         , '#',8,__Vtask_tb_p2__DOT__chk__28__exp);
            vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_p2__DOT__errors);
        }
        Vtb_p2___024root____VbeforeTrig_h50a2675e__0(vlSelf, 
                                                     "@(posedge tb_p2.clk_i)");
        co_await vlSelfRef.__VtrigSched_h50a2675e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_p2.clk_i)", 
                                                             "tb/tb_p2.sv", 
                                                             155);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_p2.sv", 
                                             155);
        if (((IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__we) 
             & (0U != (IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wa)))) {
            vlSelfRef.tb_p2__DOT__model[vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wa] 
                = vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wd;
        }
        Vtb_p2___024root____VbeforeTrig_h50a2681d__0(vlSelf, 
                                                     "@(negedge tb_p2.clk_i)");
        co_await vlSelfRef.__VtrigSched_h50a2681d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_p2.clk_i)", 
                                                             "tb/tb_p2.sv", 
                                                             157);
        vlSelfRef.tb_p2__DOT__wr_i = 0U;
        tb_p2__DOT__unnamedblk6__DOT__i = ((IData)(1U) 
                                           + tb_p2__DOT__unnamedblk6__DOT__i);
    }
    if ((0U == vlSelfRef.tb_p2__DOT__errors)) {
        VL_WRITEF_NX("P2 PASS  (reset, r0, dual reads, write enable, bypass on/off)\n",0);
    } else {
        VL_WRITEF_NX("P2 FAIL  (%0d errors)\n",1, '~',32,vlSelfRef.tb_p2__DOT__errors);
    }
    VL_FINISH_MT("tb/tb_p2.sv", 163, "");
    co_return;
}

VlCoroutine Vtb_p2___024root___eval_initial__TOP__Vtiming__1(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x00000000001e8480ULL, 
                                         nullptr, "tb/tb_p2.sv", 
                                         174);
    VL_WRITEF_NX("P2 TIMEOUT -- the testbench never reached the end; your design is probably stalled.\n[%0t] %%Fatal: tb_p2.sv:176: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_p2", 'T',-12
                 , '#',64,VL_TIME_UNITED_Q(1));
    VL_STOP_MT("tb/tb_p2.sv", 176, "", false);
    co_return;
}

VlCoroutine Vtb_p2___024root___eval_initial__TOP__Vtiming__2(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/tb_p2.sv", 
                                             12);
        vlSelfRef.tb_p2__DOT__clk_i = (1U & (~ (IData)(vlSelfRef.tb_p2__DOT__clk_i)));
    }
    co_return;
}

bool Vtb_p2___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___trigger_anySet__ico\n"); );
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

bool Vtb_p2___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___trigger_anySet__act\n"); );
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

void Vtb_p2___024root___timing_ready(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___timing_ready\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h50a2675e__0.ready("@(posedge tb_p2.clk_i)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h50a2681d__0.ready("@(negedge tb_p2.clk_i)");
    }
}

void Vtb_p2___024root___timing_resume(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___timing_resume\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h50a2675e__0.moveToResumeQueue(
                                                          "@(posedge tb_p2.clk_i)");
    vlSelfRef.__VtrigSched_h50a2681d__0.moveToResumeQueue(
                                                          "@(negedge tb_p2.clk_i)");
    vlSelfRef.__VtrigSched_h50a2675e__0.resume("@(posedge tb_p2.clk_i)");
    vlSelfRef.__VtrigSched_h50a2681d__0.resume("@(negedge tb_p2.clk_i)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_p2___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vtb_p2___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vtb_p2___024root____VbeforeTrig_h50a2675e__0(Vtb_p2___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root____VbeforeTrig_h50a2675e__0\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_p2__DOT__clk_i)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_p2__DOT__clk_i__0)) 
                                   << 1U) | ((IData)(vlSelfRef.tb_p2__DOT__clk_i) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_p2__DOT__clk_i__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_p2__DOT__clk_i__0 
        = vlSelfRef.tb_p2__DOT__clk_i;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h50a2675e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2675e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2675e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2675e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2675e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2675e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2675e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2675e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2675e__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h50a2681d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2681d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2681d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2681d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2681d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2681d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2681d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2681d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2681d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2681d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2681d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2681d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2681d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2681d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2681d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2681d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2681d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2681d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2681d__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_p2___024root____VbeforeTrig_h50a2681d__0(Vtb_p2___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root____VbeforeTrig_h50a2681d__0\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_p2__DOT__clk_i)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_p2__DOT__clk_i__0)) 
                                   << 1U) | ((IData)(vlSelfRef.tb_p2__DOT__clk_i) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_p2__DOT__clk_i__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_p2__DOT__clk_i__0 
        = vlSelfRef.tb_p2__DOT__clk_i;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h50a2675e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2675e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2675e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2675e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2675e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2675e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2675e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2675e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2675e__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h50a2681d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2681d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2681d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2681d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2681d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2681d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2681d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2681d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2681d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2681d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2681d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2681d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2681d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2681d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2681d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2681d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2681d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2681d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h50a2681d__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_p2___024root___eval_debug_assertions(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_debug_assertions\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
