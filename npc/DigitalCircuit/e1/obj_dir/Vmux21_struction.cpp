// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmux21_struction.h"
#include "Vmux21_struction__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmux21_struction::Vmux21_struction(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmux21_struction__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , s{vlSymsp->TOP.s}
    , y{vlSymsp->TOP.y}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmux21_struction::Vmux21_struction(const char* _vcname__)
    : Vmux21_struction(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmux21_struction::~Vmux21_struction() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmux21_struction___024root___eval_debug_assertions(Vmux21_struction___024root* vlSelf);
#endif  // VL_DEBUG
void Vmux21_struction___024root___eval_static(Vmux21_struction___024root* vlSelf);
void Vmux21_struction___024root___eval_initial(Vmux21_struction___024root* vlSelf);
void Vmux21_struction___024root___eval_settle(Vmux21_struction___024root* vlSelf);
void Vmux21_struction___024root___eval(Vmux21_struction___024root* vlSelf);

void Vmux21_struction::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmux21_struction::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmux21_struction___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmux21_struction___024root___eval_static(&(vlSymsp->TOP));
        Vmux21_struction___024root___eval_initial(&(vlSymsp->TOP));
        Vmux21_struction___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmux21_struction___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmux21_struction::eventsPending() { return false; }

uint64_t Vmux21_struction::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmux21_struction::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmux21_struction___024root___eval_final(Vmux21_struction___024root* vlSelf);

VL_ATTR_COLD void Vmux21_struction::final() {
    Vmux21_struction___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmux21_struction::hierName() const { return vlSymsp->name(); }
const char* Vmux21_struction::modelName() const { return "Vmux21_struction"; }
unsigned Vmux21_struction::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vmux21_struction::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vmux21_struction___024root__trace_init_top(Vmux21_struction___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmux21_struction___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux21_struction___024root*>(voidSelf);
    Vmux21_struction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vmux21_struction___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vmux21_struction___024root__trace_register(Vmux21_struction___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmux21_struction::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vmux21_struction::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmux21_struction___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
