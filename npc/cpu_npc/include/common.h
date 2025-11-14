#ifndef __COMMON_H__
#define __COMMON_H__

#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>
#include <string.h>
#include <macro.h>

#include <assert.h>
#include <stdlib.h>

#include <generated/autoconf.h>

#if CONFIG_MBASE + CONFIG_MSIZE > 0x100000000ul
#define PMEM64 1
#endif

typedef uint32_t word_t;
typedef int32_t sword_t;
typedef word_t vaddr_t; 
#define FMT_WORD MUXDEF(CONFIG_ISA64, "0x%016" PRIx64, "0x%08" PRIx32)
// 计算word_t的位数（假设word_t是无符号类型）
#define WORD_BITS (sizeof(word_t) * 8)
// 无符号word_t的最大值：2^WORD_BITS - 1
#define WORD_MAX ((1ULL << WORD_BITS) - 1)
typedef word_t vaddr_t;
typedef MUXDEF(PMEM64, uint64_t, uint32_t) paddr_t;
#define FMT_PADDR MUXDEF(PMEM64, "0x%016" PRIx64, "0x%08" PRIx32)
typedef uint16_t ioaddr_t;

#include <debug.h>

#endif
