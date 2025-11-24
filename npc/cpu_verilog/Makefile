TOP := ysyx_25100258_cpu
VERILATOR := verilator

VSRCS := ./vsrc/$(TOP).v
VSRCS += ./vsrc/ysyx_25100258_IFU.v
VSRCS += ./vsrc/ysyx_25100258_IDU.v
VSRCS += ./vsrc/ysyx_25100258_EXU.v
VSRCS += ./vsrc/ysyx_25100258_RegisterFile.v
VSRCS += ./vsrc/ysyx_25100258_MuxKeyWithDefault.v
VSRCS += ./vsrc/ysyx_25100258_MuxKeyInternal.v

CSRCS := ./csrc/tb_$(TOP).cpp 


OBJ_DIR := ./obj_dir
VCD_FILE := $(TOP).vcd


all: compile run wave


compile:
	$(VERILATOR) -Wall --trace \
		--cc $(VSRCS) \
		-I./vsrc \
		--exe $(CSRCS) \
		--top-module $(TOP) \
		-o $(TOP)
	

	#make -C $(OBJ_DIR) -f V$(TOP).mk V$(TOP) $(OBJ_DIR)/V$(TOP)
	#make -C $(OBJ_DIR) -f V$(TOP).mk

run:
	$(OBJ_DIR)/$(TOP) 


wave:
	gtkwave $(VCD_FILE) 


clean:
	rm -rf $(OBJ_DIR)
	rm -f $(VCD_FILE)
	rm -f *.log
