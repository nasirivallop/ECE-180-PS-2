// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_p2.h for the primary calling header

#include "Vtb_p2__pch.h"

void Vtb_p2___024root___timing_ready(Vtb_p2___024root* vlSelf);

VL_ATTR_COLD void Vtb_p2___024root___eval_static(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_static\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.tb_p2__DOT__clk_i = 0U;
        vlSelfRef.tb_p2__DOT__errors = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__tb_p2__DOT__clk_i__0 = 0U;
    Vtb_p2___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_p2___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_p2___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

VL_ATTR_COLD bool Vtb_p2___024root___eval_stl(Vtb_p2___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_stl\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_p2___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_p2___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    CData/*0:0*/ __Vinline_0__eval_body__stl___Vinline_0__act_comb__TOP__0___VdfgRegularize_hebeb780c_0_0;
                    __Vinline_0__eval_body__stl___Vinline_0__act_comb__TOP__0___VdfgRegularize_hebeb780c_0_0 = 0;
                    __Vinline_0__eval_body__stl___Vinline_0__act_comb__TOP__0___VdfgRegularize_hebeb780c_0_0 
                        = ((IData)(vlSelfRef.tb_p2__DOT__bypass_en_i) 
                           & ((IData)(vlSelfRef.tb_p2__DOT__wr_i) 
                              >> 0x0000000bU));
                    vlSelfRef.tb_p2__DOT__rs1_data_o 
                        = (0x000000ffU & (((((IData)(vlSelfRef.tb_p2__DOT__rs1_addr_i) 
                                             == (7U 
                                                 & ((IData)(vlSelfRef.tb_p2__DOT__wr_i) 
                                                    >> 8U))) 
                                            & __Vinline_0__eval_body__stl___Vinline_0__act_comb__TOP__0___VdfgRegularize_hebeb780c_0_0)
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
                                            & __Vinline_0__eval_body__stl___Vinline_0__act_comb__TOP__0___VdfgRegularize_hebeb780c_0_0)
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
    return (__VstlExecute);
}

VL_ATTR_COLD void Vtb_p2___024root___eval_dump_triggers__stl(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_dump_triggers__stl\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_p2___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_p2___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_p2___024root___eval_dump_triggers__ico(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_dump_triggers__ico\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_p2___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_p2___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_p2___024root___eval_dump_triggers__act(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_dump_triggers__act\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_p2___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vtb_p2___024root___eval_dump_triggers__nba(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_dump_triggers__nba\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_p2___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vtb_p2___024root___eval_dump_triggers__obs(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_dump_triggers__obs\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_p2___024root___eval_dump_triggers__react(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_dump_triggers__react\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_p2___024root___eval_final(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_final\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_p2___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_p2___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_p2___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___trigger_anySet__stl\n"); );
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

bool Vtb_p2___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_p2___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_p2___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtb_p2___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_p2___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_p2___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_p2.clk_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_p2.clk_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_p2___024root___ctor_var_reset(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___ctor_var_reset\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_p2__DOT__rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12184823941250693225ull);
    vlSelf->tb_p2__DOT__rs1_addr_i = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14591527584669932234ull);
    vlSelf->tb_p2__DOT__rs2_addr_i = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 189074227482289551ull);
    vlSelf->tb_p2__DOT__rs1_data_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6665011720771534969ull);
    vlSelf->tb_p2__DOT__rs2_data_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13230258554300974723ull);
    vlSelf->tb_p2__DOT__wr_i = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11769315032413926650ull);
    vlSelf->tb_p2__DOT__bypass_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14504567295501449745ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_p2__DOT__model[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10071314799037970493ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_p2__DOT__dut__DOT__regs_q[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16262895257522534083ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_p2__DOT__clk_i__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
