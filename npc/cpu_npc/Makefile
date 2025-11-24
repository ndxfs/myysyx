# NPC Makefile - 基于成功案例优化
-include $(CPU_HOME)/include/config/auto.conf
-include $(CPU_HOME)/include/config/auto.conf.cmd

remove_quote = $(patsubst "%",%,$(1))

GUEST_ISA ?= $(call remove_quote,$(CONFIG_ISA))
ENGINE ?= $(call remove_quote,$(CONFIG_ENGINE))
NAME    = $(GUEST_ISA)-npc-$(ENGINE)

FILELIST_MK = $(shell find -L ./src -name "filelist.mk")
include $(FILELIST_MK)

#verilator
TOP := ysyx_25100258_cpu

DIRS-BLACKLIST-y += $(DIRS-BLACKLIST)
SRCS-BLACKLIST-y += $(SRCS-BLACKLIST) $(shell find -L $(DIRS-BLACKLIST-y) -name "*.c")
SRCS-y += $(shell find -L $(DIRS-y) -name "*.c")
SRCS = $(filter-out $(SRCS-BLACKLIST-y),$(SRCS-y))
#$(info SRCS is set to: $(SRCS))

ifneq ($(CONFIG_CC),)
CC = $(call remove_quote,$(CONFIG_CC))
endif


VSRC = $(wildcard vsrc/*.v)
CFLAGS_BUILD += $(call remove_quote,$(CONFIG_CC_OPT))
CFLAGS_BUILD += $(if $(CONFIG_CC_LTO),-flto,)
CFLAGS_BUILD += $(if $(CONFIG_CC_DEBUG),-Og -ggdb3,)
CFLAGS_BUILD += $(if $(CONFIG_CC_ASAN),-fsanitize=address,)
CFLAGS_TRACE += -DITRACE_COND=$(if $(CONFIG_ITRACE_COND),$(call remove_quote,$(CONFIG_ITRACE_COND)),true)
CFLAGS  += $(CFLAGS_BUILD) $(CFLAGS_TRACE) -D__GUEST_ISA__=$(GUEST_ISA)
LDFLAGS += $(CFLAGS_BUILD)
include $(CPU_HOME)/scripts/config.mk
include $(CPU_HOME)/scripts/native.mk
