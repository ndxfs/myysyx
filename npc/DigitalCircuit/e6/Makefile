TOPNAME = top_shift
NXDC_FILES = ./constr/top_shift.nxdc
INC_PATH ?=
VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc \
										-O3 --x-assign fast --x-initial fast --noassert
										
										BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

barrel_shifter:./vsrc/barrel_shifter.v ./csrc/tb_barrel_shifter.cpp ./vsrc/mux4_1.v
	verilator -Wall --trace -cc ./vsrc/barrel_shifter.v ./vsrc/mux4_1.v --exe ./csrc/tb_barrel_shifter.cpp
	make -C obj_dir -f Vbarrel_shifter.mk Vbarrel_shifter
	./obj_dir/Vbarrel_shifter
	gtkwave barrel_shifter.vcd

top_shift: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

VSRCS = $(abspath ./vsrc/top_shift.v)
VSRCS += $(abspath ./vsrc/shift.v)
VSRCS += $(abspath ./vsrc/seg.v) 
CSRCS = $(abspath ./csrc/tb_top_shift.cpp)
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
