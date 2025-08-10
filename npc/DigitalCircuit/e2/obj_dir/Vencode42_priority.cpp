// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vencode42_priority__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vencode42_priority::Vencode42_priority(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vencode42_priority__Syms(contextp(), _vcname__, this)}
    , en{vlSymsp->TOP.en}
    , x{vlSymsp->TOP.x}
    , y{vlSymsp->TOP.y}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vencode42_priority::Vencode42_priority(const char* _vcname__)
    : Vencode42_priority(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vencode42_priority::~Vencode42_priority() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vencode42_priority___024root___eval_debug_assertions(Vencode42_priority___024root* vlSelf);
#endif  // VL_DEBUG
void Vencode42_priority___024root___eval_static(Vencode42_priority___024root* vlSelf);
void Vencode42_priority___024root___eval_initial(Vencode42_priority___024root* vlSelf);
void Vencode42_priority___024root___eval_settle(Vencode42_priority___024root* vlSelf);
void Vencode42_priority___024root___eval(Vencode42_priority___024root* vlSelf);

void Vencode42_priority::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vencode42_priority::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vencode42_priority___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vencode42_priority___024root___eval_static(&(vlSymsp->TOP));
        Vencode42_priority___024root___eval_initial(&(vlSymsp->TOP));
        Vencode42_priority___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vencode42_priority___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vencode42_priority::eventsPending() { return false; }

uint64_t Vencode42_priority::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vencode42_priority::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vencode42_priority___024root___eval_final(Vencode42_priority___024root* vlSelf);

VL_ATTR_COLD void Vencode42_priority::final() {
    Vencode42_priority___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vencode42_priority::hierName() const { return vlSymsp->name(); }
const char* Vencode42_priority::modelName() const { return "Vencode42_priority"; }
unsigned Vencode42_priority::threads() const { return 1; }
void Vencode42_priority::prepareClone() const { contextp()->prepareClone(); }
void Vencode42_priority::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vencode42_priority::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vencode42_priority___024root__trace_decl_types(VerilatedVcd* tracep);

void Vencode42_priority___024root__trace_init_top(Vencode42_priority___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vencode42_priority___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vencode42_priority___024root*>(voidSelf);
    Vencode42_priority__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vencode42_priority___024root__trace_decl_types(tracep);
    Vencode42_priority___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vencode42_priority___024root__trace_register(Vencode42_priority___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vencode42_priority::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vencode42_priority::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vencode42_priority___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
