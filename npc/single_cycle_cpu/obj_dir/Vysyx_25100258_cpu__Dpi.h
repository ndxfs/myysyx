// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYX_25100258_CPU__DPI_H_
#define VERILATED_VYSYX_25100258_CPU__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at vsrc/ysyx_25100258_RegisterFile.v:17:17
    extern void read_register(int reg_addr, int* reg_num);

    // DPI IMPORTS
    // DPI import at vsrc/ysyx_25100258_EXU.v:17:31
    extern void ebreak_call();

#ifdef __cplusplus
}
#endif

#endif  // guard
