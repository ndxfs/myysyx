

-include include/config/auto.conf
remove_quote = $(patsubst "%",%,$(1))

GUEST_ISA ?= $(call remove_quote,$(CONFIG_ISA))

FLAGS_TRACE += -DITRACE_COND=$(if $(CONFIG_ITRACE_COND),$(call remove_quote,$(CONFIG_ITRACE_COND)),true)
CFLAGS += $(FLAGS_TRACE) -D__GUEST_ISA__=$(GUEST_ISA)


# Verilator构建
VERILATOR = verilator
VERILATOR_FLAGS = --trace --Wall
TOP := ysyx_25100258_cpu
BUILD_DIR = build
# 源文件
VSRC = $(wildcard vsrc/*.v)

DIRS-y := src src/isa src/engine/interpreter src/utils src/monitor src/memory src/monitor/sdb src/cpu src/cpu/difftest

FILELIST_MK = $(shell find -L ./src -name "filelist.mk")
include $(FILELIST_MK)

DIRS-BLACKLIST-y += $(DIRS-BLACKLIST)
SRCS-BLACKLIST-y += $(SRCS-BLACKLIST) $(shell find -L $(DIRS-BLACKLIST-y) -name "*.c" | sort -u)  
SRCS-y += $(shell find -L $(DIRS-y) -name "*.c")  
CSRC = $(filter-out $(SRCS-BLACKLIST-y),$(SRCS-y))  
CXXSRC = $(wildcard src/isa/*.cpp)

BINARY = $(BUILD_DIR)/V$(TOP)
BUILD_MODE ?= release
CXXFLAGS_BASE = -std=c++14
ifeq ($(BUILD_MODE),debug)
  CXXFLAGS_EXTRA = -g -O0
else
  CXXFLAGS_EXTRA = -O2
endif

NPC_EXEC = $(BUILD_DIR)/V$(TOP)
VERILATOR_MK = $(BUILD_DIR)/V$(TOP).mk
#include scripts/config.mk

include $(CPU_HOME)/scripts/build.mk
include $(CPU_HOME)/scripts/native.mk
# 主目标
all: npc

npc: $(BINARY)


clean:
	rm -rf $(BUILD_DIR)

.PHONY: clean gdb
