#include $(CPU_HOME)/scripts/build.mk
include $(CPU_HOME)/tools/difftest.mk
override ARGS ?= --log=$(BUILD_DIR)/npc-log.txt
override ARGS += $(ARGS_DIFF)

IMG ?=
NPC_EXEC += $(ARGS) $(IMG)

run: npc
	LD_PRELOAD=/usr/lib/x86_64-linux-gnu/libasan.so.6 $(NPC_EXEC)

debug:
	$(MAKE) BUILD_MODE=debug npc
	@echo "Build in debug mode"

gdb: debug
	gdb $(NPC_EXEC)


