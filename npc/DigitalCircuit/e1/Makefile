TOPNAME = mux241_template
NXDC_FILES = mux241.nxdc
INC_PATH ?=
VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc \
										-O3 --x-assign fast --x-initial fast --noassert
										
										BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

mux21:mux21.v tb_mux21.cpp
	verilator -Wall --trace	-cc mux21.v --exe tb_mux21.cpp
	make -C obj_dir -f Vmux21.mk Vmux21
	./obj_dir/Vmux21
	gtkwave dump.vcd

mux21_struction:mux21_struction.v tb_mux21_struction.cpp
	verilator -Wall --trace -cc mux21_struction.v --exe tb_mux21_struction.cpp
	make -C obj_dir -f Vmux21_struction.mk Vmux21_struction
	./obj_dir/Vmux21_struction
	gtkwave vmux21_struction.vcd

mux21_behavior:mux21_behavior.v tb_mux21_behavior.cpp
	verilator -Wall --trace -cc mux21_behavior.v --exe tb_mux21_behavior.cpp
	make -C obj_dir -f Vmux21_behavior.mk Vmux21_behavior
	./obj_dir/Vmux21_behavior
	gtkwave vmux21_behavior.vcd
	
mux21_template:mux21_template.v tb_mux21_template.cpp
	verilator -Wall --trace -cc mux21_template.v --exe tb_mux21_template.cpp
	make -C obj_dir -f Vmux21_template.mk Vmux21_template
	./obj_dir/Vmux21_template
	gtkwave vmux21_template.vcd

mux41:mux41.v tb_mux41.cpp
	verilator -Wall --trace	-cc mux41.v --exe tb_mux41.cpp
	make -C obj_dir -f Vmux41.mk Vmux41
	./obj_dir/Vmux41
	gtkwave vmux41.vcd

mux41_template:mux41_template.v tb_mux41_template.cpp
	verilator -Wall --trace	-cc mux41_template.v --exe tb_mux41_template.cpp
	make -C obj_dir -f Vmux41_template.mk Vmux41_template
	./obj_dir/Vmux41_template
	gtkwave vmux41_template.vcd

mux241_template:mux241_template.v tb_mux241_template.cpp
	verilator -Wall --trace	-cc mux241_template.v --exe tb_mux241_template.cpp
	make -C obj_dir -f Vmux241_template.mk Vmux241_template
	./obj_dir/Vmux241_template
	gtkwave vmux241_template.vcd
	


mux241_NVboard: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

VSRCS = $(abspath ./mux241_template.v)
CSRCS = $(abspath ./tb_mux241_NVboard.cpp)
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
