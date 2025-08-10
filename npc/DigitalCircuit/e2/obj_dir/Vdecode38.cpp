// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdecode38__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdecode38::Vdecode38(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdecode38__Syms(contextp(), _vcname__, this)}
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

Vdecode38::Vdecode38(const char* _vcname__)
    : Vdecode38(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdecode38::~Vdecode38() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdecode38___024root___eval_debug_assertions(Vdecode38___024root* vlSelf);
#endif  // VL_DEBUG
void Vdecode38___024root___eval_static(Vdecode38___024root* vlSelf);
void Vdecode38___024root___eval_initial(Vdecode38___024root* vlSelf);
void Vdecode38___024root___eval_settle(Vdecode38___024root* vlSelf);
void Vdecode38___024root___eval(Vdecode38___024root* vlSelf);

void Vdecode38::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdecode38::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdecode38___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdecode38___024root___eval_static(&(vlSymsp->TOP));
        Vdecode38___024root___eval_initial(&(vlSymsp->TOP));
        Vdecode38___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdecode38___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdecode38::eventsPending() { return false; }

uint64_t Vdecode38::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vdecode38::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdecode38___024root___eval_final(Vdecode38___024root* vlSelf);

VL_ATTR_COLD void Vdecode38::final() {
    Vdecode38___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdecode38::hierName() const { return vlSymsp->name(); }
const char* Vdecode38::modelName() const { return "Vdecode38"; }
unsigned Vdecode38::threads() const { return 1; }
void Vdecode38::prepareClone() const { contextp()->prepareClone(); }
void Vdecode38::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vdecode38::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vdecode38___024root__trace_decl_types(VerilatedVcd* tracep);

void Vdecode38___024root__trace_init_top(Vdecode38___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdecode38___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdecode38___024root*>(voidSelf);
    Vdecode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vdecode38___024root__trace_decl_types(tracep);
    Vdecode38___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdecode38___024root__trace_register(Vdecode38___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdecode38::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vdecode38::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vdecode38___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
