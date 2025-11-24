# 执行和调试规则
include $(CPU_HOME)/scripts/build.mk

include $(CPU_HOME)/tools/difftest.mk

override ARGS ?= --log=$(BUILD_DIR)/npc-log.txt
override ARGS += $(ARGS_DIFF)

IMG ?=
NPC_EXEC := $(BINARY) $(ARGS) $(IMG)

run-env: $(BINARY) $(DIFF_REF_SO)

run: run-env
	$(NPC_EXEC)

gdb: run-env
	gdb -s $(BINARY) --args $(NPC_EXEC)

clean-tools = $(dir $(shell find ./tools -maxdepth 2 -mindepth 2 -name "Makefile"))
$(clean-tools):
	-@$(MAKE) -s -C $@ clean
clean-tools: $(clean-tools)
	clean-all: clean distclean clean-tools
.PHONY: run gdb run-env clean-tools clean-all $(clean-tools)
