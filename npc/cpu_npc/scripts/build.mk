

# Verilator 生成 mk 文件和 C++ 代码的规则（仅源文件更新时重新生成）
$(VERILATOR_MK): $(VSRC) $(CSRC) $(CXXSRC)
	$(info [BUILD] 生成 Verilator 编译文件...)
	$(VERILATOR) $(VERILATOR_FLAGS) \
		--top-module $(TOP) \
		-I./vsrc \
		--Mdir $(BUILD_DIR) \
		-CFLAGS "-I$(PWD)/include -I$(PWD)/$(BUILD_DIR) $(CFLAGS)" \
		-LDFLAGS "-lreadline" \
		--cc $(VSRC) \
		--exe $(CSRC) $(CXXSRC)
	$(info [BUILD] Verilator 生成完成：$@)
	sed -i '1i CXXFLAGS = $(CXXFLAGS_BASE) $(CXXFLAGS_EXTRA)' $(VERILATOR_MK)

$(BINARY): $(VERILATOR_MK)
	$(MAKE) -C $(BUILD_DIR) -f $(notdir $(VERILATOR_MK))


