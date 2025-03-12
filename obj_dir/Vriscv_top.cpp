// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vriscv_top__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vriscv_top::Vriscv_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vriscv_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , rom_addr{vlSymsp->TOP.rom_addr}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vriscv_top::Vriscv_top(const char* _vcname__)
    : Vriscv_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vriscv_top::~Vriscv_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vriscv_top___024root___eval_debug_assertions(Vriscv_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vriscv_top___024root___eval_static(Vriscv_top___024root* vlSelf);
void Vriscv_top___024root___eval_initial(Vriscv_top___024root* vlSelf);
void Vriscv_top___024root___eval_settle(Vriscv_top___024root* vlSelf);
void Vriscv_top___024root___eval(Vriscv_top___024root* vlSelf);

void Vriscv_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vriscv_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vriscv_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vriscv_top___024root___eval_static(&(vlSymsp->TOP));
        Vriscv_top___024root___eval_initial(&(vlSymsp->TOP));
        Vriscv_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vriscv_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vriscv_top::eventsPending() { return false; }

uint64_t Vriscv_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vriscv_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vriscv_top___024root___eval_final(Vriscv_top___024root* vlSelf);

VL_ATTR_COLD void Vriscv_top::final() {
    Vriscv_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vriscv_top::hierName() const { return vlSymsp->name(); }
const char* Vriscv_top::modelName() const { return "Vriscv_top"; }
unsigned Vriscv_top::threads() const { return 1; }
void Vriscv_top::prepareClone() const { contextp()->prepareClone(); }
void Vriscv_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vriscv_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vriscv_top___024root__trace_decl_types(VerilatedVcd* tracep);

void Vriscv_top___024root__trace_init_top(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vriscv_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_top___024root*>(voidSelf);
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_top___024root__trace_decl_types(tracep);
    Vriscv_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vriscv_top___024root__trace_register(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vriscv_top::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vriscv_top::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vriscv_top___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
