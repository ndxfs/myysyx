all:switch sim
	@echo "Write this Makefile by your self."

switch:vsrc/switch.v csrc/tb_switch.cpp
	verilator -Wall --trace -cc vsrc/switch.v --exe csrc/tb_switch.cpp
	make -C obj_dir -f Vswitch.mk Vswitch
sim:switch
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!	
	obj_dir/Vswitch
	gtkwave obj_dir/waveform.vcd
	@echo "Write this Makefile by your self."

include ../Makefile
