// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmux41_template.h"
#include "Vmux41_template__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmux41_template::Vmux41_template(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmux41_template__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , s{vlSymsp->TOP.s}
    , y{vlSymsp->TOP.y}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmux41_template::Vmux41_template(const char* _vcname__)
    : Vmux41_template(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmux41_template::~Vmux41_template() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmux41_template___024root___eval_debug_assertions(Vmux41_template___024root* vlSelf);
#endif  // VL_DEBUG
void Vmux41_template___024root___eval_static(Vmux41_template___024root* vlSelf);
void Vmux41_template___024root___eval_initial(Vmux41_template___024root* vlSelf);
void Vmux41_template___024root___eval_settle(Vmux41_template___024root* vlSelf);
void Vmux41_template___024root___eval(Vmux41_template___024root* vlSelf);

void Vmux41_template::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmux41_template::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmux41_template___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmux41_template___024root___eval_static(&(vlSymsp->TOP));
        Vmux41_template___024root___eval_initial(&(vlSymsp->TOP));
        Vmux41_template___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmux41_template___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmux41_template::eventsPending() { return false; }

uint64_t Vmux41_template::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmux41_template::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmux41_template___024root___eval_final(Vmux41_template___024root* vlSelf);

VL_ATTR_COLD void Vmux41_template::final() {
    Vmux41_template___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmux41_template::hierName() const { return vlSymsp->name(); }
const char* Vmux41_template::modelName() const { return "Vmux41_template"; }
unsigned Vmux41_template::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vmux41_template::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vmux41_template___024root__trace_init_top(Vmux41_template___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmux41_template___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux41_template___024root*>(voidSelf);
    Vmux41_template__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vmux41_template___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vmux41_template___024root__trace_register(Vmux41_template___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmux41_template::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vmux41_template::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmux41_template___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
