// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmux21__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmux21::Vmux21(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmux21__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , s{vlSymsp->TOP.s}
    , y{vlSymsp->TOP.y}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vmux21::Vmux21(const char* _vcname__)
    : Vmux21(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmux21::~Vmux21() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmux21___024root___eval_debug_assertions(Vmux21___024root* vlSelf);
#endif  // VL_DEBUG
void Vmux21___024root___eval_static(Vmux21___024root* vlSelf);
void Vmux21___024root___eval_initial(Vmux21___024root* vlSelf);
void Vmux21___024root___eval_settle(Vmux21___024root* vlSelf);
void Vmux21___024root___eval(Vmux21___024root* vlSelf);

void Vmux21::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmux21::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmux21___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmux21___024root___eval_static(&(vlSymsp->TOP));
        Vmux21___024root___eval_initial(&(vlSymsp->TOP));
        Vmux21___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmux21___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmux21::eventsPending() { return false; }

uint64_t Vmux21::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmux21::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmux21___024root___eval_final(Vmux21___024root* vlSelf);

VL_ATTR_COLD void Vmux21::final() {
    Vmux21___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmux21::hierName() const { return vlSymsp->name(); }
const char* Vmux21::modelName() const { return "Vmux21"; }
unsigned Vmux21::threads() const { return 1; }
void Vmux21::prepareClone() const { contextp()->prepareClone(); }
void Vmux21::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vmux21::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vmux21___024root__trace_decl_types(VerilatedVcd* tracep);

void Vmux21___024root__trace_init_top(Vmux21___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmux21___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux21___024root*>(voidSelf);
    Vmux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vmux21___024root__trace_decl_types(tracep);
    Vmux21___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmux21___024root__trace_register(Vmux21___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmux21::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vmux21::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmux21___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
