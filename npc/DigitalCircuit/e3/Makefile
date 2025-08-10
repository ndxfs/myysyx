TOPNAME = top_alu
NXDC_FILES = ./constr/top_alu.nxdc
INC_PATH ?=
VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc \
										-O3 --x-assign fast --x-initial fast --noassert
										
										BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

addsub:./vsrc/addsub.v ./csrc/tb_addsub.cpp
	verilator -Wall --trace	-cc ./vsrc/addsub.v --exe ./csrc/tb_addsub.cpp
	make -C obj_dir -f Vaddsub.mk Vaddsub
	./obj_dir/Vaddsub
	gtkwave addsub.vcd

top_alu_NVboard: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

VSRCS = $(abspath ./vsrc/top_alu.v)
VSRCS += $(abspath ./vsrc/alu.v)
VSRCS += $(abspath ./vsrc/seg.v)

CSRCS = $(abspath ./csrc/tb_top_alu_NVboard.cpp)
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
