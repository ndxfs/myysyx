TOPNAME = seg
NXDC_FILES = ./constr/seg.nxdc
INC_PATH ?=
VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc \
										-O3 --x-assign fast --x-initial fast --noassert
										
										BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

decode24:./vsrc/decode24.v ./csrc/tb_decode24.cpp
	verilator -Wall --trace	-cc ./vsrc/decode24.v --exe ./csrc/tb_decode24.cpp
	make -C obj_dir -f Vdecode24.mk Vdecode24
	./obj_dir/Vdecode24
	gtkwave decode24.vcd

decode38:./vsrc/decode38.v ./csrc/tb_decode38.cpp
	verilator -Wall --trace	-cc ./vsrc/decode38.v --exe ./csrc/tb_decode38.cpp
	make -C obj_dir -f Vdecode38.mk Vdecode38
	./obj_dir/Vdecode38
	gtkwave decode38.vcd

encode42:./vsrc/encode42.v ./csrc/tb_encode42.cpp
	verilator -Wall --trace	-cc ./vsrc/encode42.v --exe ./csrc/tb_encode42.cpp
	make -C obj_dir -f Vencode42.mk Vencode42
	./obj_dir/Vencode42
	gtkwave encode42.vcd

encode42_priority:./vsrc/encode42_priority.v ./csrc/tb_encode42_priority.cpp
	verilator -Wall --trace	-cc ./vsrc/encode42_priority.v --exe ./csrc/tb_encode42_priority.cpp
	make -C obj_dir -f Vencode42_priority.mk Vencode42_priority
	./obj_dir/Vencode42_priority
	gtkwave encode42_priority.vcd

seg:./vsrc/seg.v ./csrc/tb_seg.cpp
	verilator -Wall --trace	-cc ./vsrc/seg.v --exe ./csrc/tb_seg.cpp
	make -C obj_dir -f Vseg.mk Vseg
	./obj_dir/Vseg
	gtkwave seg.vcd

seg_NVboard: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

VSRCS = $(abspath ./vsrc/seg.v)
CSRCS = $(abspath ./csrc/tb_seg_NVboard.cpp)
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
