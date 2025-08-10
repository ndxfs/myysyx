// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vseg__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vseg::Vseg(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vseg__Syms(contextp(), _vcname__, this)}
    , en{vlSymsp->TOP.en}
    , Switch{vlSymsp->TOP.Switch}
    , digital_tube{vlSymsp->TOP.digital_tube}
    , led{vlSymsp->TOP.led}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vseg::Vseg(const char* _vcname__)
    : Vseg(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vseg::~Vseg() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vseg___024root___eval_debug_assertions(Vseg___024root* vlSelf);
#endif  // VL_DEBUG
void Vseg___024root___eval_static(Vseg___024root* vlSelf);
void Vseg___024root___eval_initial(Vseg___024root* vlSelf);
void Vseg___024root___eval_settle(Vseg___024root* vlSelf);
void Vseg___024root___eval(Vseg___024root* vlSelf);

void Vseg::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vseg::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vseg___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vseg___024root___eval_static(&(vlSymsp->TOP));
        Vseg___024root___eval_initial(&(vlSymsp->TOP));
        Vseg___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vseg___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vseg::eventsPending() { return false; }

uint64_t Vseg::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vseg::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vseg___024root___eval_final(Vseg___024root* vlSelf);

VL_ATTR_COLD void Vseg::final() {
    Vseg___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vseg::hierName() const { return vlSymsp->name(); }
const char* Vseg::modelName() const { return "Vseg"; }
unsigned Vseg::threads() const { return 1; }
void Vseg::prepareClone() const { contextp()->prepareClone(); }
void Vseg::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vseg::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vseg___024root__trace_decl_types(VerilatedVcd* tracep);

void Vseg___024root__trace_init_top(Vseg___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vseg___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vseg___024root*>(voidSelf);
    Vseg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vseg___024root__trace_decl_types(tracep);
    Vseg___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vseg___024root__trace_register(Vseg___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vseg::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vseg::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vseg___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
