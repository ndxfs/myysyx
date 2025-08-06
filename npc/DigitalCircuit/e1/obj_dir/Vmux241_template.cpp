// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmux241_template.h"
#include "Vmux241_template__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmux241_template::Vmux241_template(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmux241_template__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , s{vlSymsp->TOP.s}
    , y{vlSymsp->TOP.y}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmux241_template::Vmux241_template(const char* _vcname__)
    : Vmux241_template(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmux241_template::~Vmux241_template() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmux241_template___024root___eval_debug_assertions(Vmux241_template___024root* vlSelf);
#endif  // VL_DEBUG
void Vmux241_template___024root___eval_static(Vmux241_template___024root* vlSelf);
void Vmux241_template___024root___eval_initial(Vmux241_template___024root* vlSelf);
void Vmux241_template___024root___eval_settle(Vmux241_template___024root* vlSelf);
void Vmux241_template___024root___eval(Vmux241_template___024root* vlSelf);

void Vmux241_template::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmux241_template::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmux241_template___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmux241_template___024root___eval_static(&(vlSymsp->TOP));
        Vmux241_template___024root___eval_initial(&(vlSymsp->TOP));
        Vmux241_template___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmux241_template___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmux241_template::eventsPending() { return false; }

uint64_t Vmux241_template::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmux241_template::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmux241_template___024root___eval_final(Vmux241_template___024root* vlSelf);

VL_ATTR_COLD void Vmux241_template::final() {
    Vmux241_template___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmux241_template::hierName() const { return vlSymsp->name(); }
const char* Vmux241_template::modelName() const { return "Vmux241_template"; }
unsigned Vmux241_template::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vmux241_template::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vmux241_template___024root__trace_init_top(Vmux241_template___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmux241_template___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux241_template___024root*>(voidSelf);
    Vmux241_template__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vmux241_template___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vmux241_template___024root__trace_register(Vmux241_template___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmux241_template::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vmux241_template::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmux241_template___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
