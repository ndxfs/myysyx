TOPNAME = top_keyboard
NXDC_FILES = ./constr/top_keyboard.nxdc
INC_PATH ?=
VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc \
										-O3 --x-assign fast --x-initial fast --noassert
										
										BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

ps2_keyboard:./vsrc/ps2_keyboard.v ./csrc/tb_ps2_keyboard.cpp
	verilator -Wall --trace	-cc ./vsrc/ps2_keyboard.v --exe ./csrc/tb_ps2_keyboard.cpp
	make -C obj_dir -f Vps2_keyboard.mk Vps2_keyboard
	./obj_dir/Vps2_keyboard
	gtkwave ps2_keyboard.vcd

top_keyboard: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

VSRCS = $(abspath ./vsrc/top_keyboard.v)
VSRCS += $(abspath ./vsrc/MuxKeyWithDefault.v)
VSRCS += $(abspath ./vsrc/MuxKeyInternal.v)  
VSRCS += $(abspath ./vsrc/ps2_keyboard.v)  
VSRCS += $(abspath ./vsrc/seg.v)

CSRCS = $(abspath ./csrc/tb_top_keyboard.cpp)
CSRCS += $(SRC_AUTO_BIND)

# rules for NVBoard
include $(NVBOARD_HOME)/scripts/nvboard.mk

# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""

$(BIN): $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

run: $(BIN)
	@$^

clean:
	rm -rf $(BUILD_DIR)
 
.PHONY: default all clean run  
