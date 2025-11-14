
override ARGS ?= --log=$(BUILD_DIR)/npc-log.txt
IMG ?=
NPC_EXEC += $(ARGS) $(IMG)

run: npc
	$(NPC_EXEC)

debug:
	$(MAKE) BUILD_MODE=debug npc
	@echo "Build in debug mode"

gdb: debug
	gdb $(NPC_EXEC)


