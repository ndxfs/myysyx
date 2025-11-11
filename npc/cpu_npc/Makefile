# Verilator构建
VERILATOR = verilator
VERILATOR_FLAGS = --trace --Wall
TOP := ysyx_25100258_cpu
BUILD_DIR = build
# 源文件
VSRC = $(wildcard vsrc/*.v)
CSRC = $(wildcard src/**/*.c src/*.c src/*.cpp)


# 主目标
all: npc-am

npc-am: $(VSRC) $(CSRC)
	$(VERILATOR) $(VERILATOR_FLAGS) \
		--top-module $(TOP) \
		-I./vsrc \
		--Mdir $(BUILD_DIR) \
		-CFLAGS "-I$(PWD)/include -I$(PWD)/$(BUILD_DIR)" \
		--cc $(VSRC) \
		--exe $(CSRC) \

	make -C $(BUILD_DIR) -f V$(TOP).mk

run: npc-am
	$(BUILD_DIR)/V$(TOP)

clean:
	rm -rf $(BUILD_DIR)

.PHONY: all run clean
