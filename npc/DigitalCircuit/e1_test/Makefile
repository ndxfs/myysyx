# 测试项目Makefile - 分离编译方案

# 目标名称
TOP = mux21
BUILD_DIR = build

# 编译器
CC = gcc
CXX = g++
VERILATOR = verilator

# 源文件
VSRC = mux21.v
CPP_SRC = tb_mux21.cpp
C_SRC = main.c

# 对象文件
C_OBJ = $(BUILD_DIR)/main.o
VERILATOR_EXE = $(BUILD_DIR)/V$(TOP)
FINAL_EXE = $(BUILD_DIR)/$(TOP)

# 编译标志
CFLAGS = -I$(BUILD_DIR) -O2 -Wall
VERILATOR_FLAGS = --trace --Wall -Wno-fatal

.PHONY: all clean run

all: $(FINAL_EXE)

# 最终目标：链接所有文件
$(FINAL_EXE): $(C_OBJ) $(VERILATOR_EXE)
	@echo "[LINK] 创建最终可执行文件..."
	@cp $(VERILATOR_EXE) $(FINAL_EXE)
	@echo "[SUCCESS] 构建完成: $(FINAL_EXE)"

# 步骤1：用gcc编译main.c
$(C_OBJ): $(C_SRC)
	@echo "[CC] 编译main.c..."
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -c -o $@ $<

# 步骤2：用verilator编译verilog和cpp，并链接main.o
$(VERILATOR_EXE): $(VSRC) $(CPP_SRC) $(C_OBJ)
	@echo "[VERILATOR] 编译Verilog和C++，链接main.o..."
	$(VERILATOR) $(VERILATOR_FLAGS) \
		--top-module $(TOP) \
		--Mdir $(BUILD_DIR) \
		--cc $(VSRC) \
		--exe $(CPP_SRC) $(notdir $(C_OBJ)) \
		--build

# 运行测试
run: $(FINAL_EXE)
	@echo "[RUN] 运行仿真..."
	./$(FINAL_EXE)
	@echo "[RUN] 完成，波形文件: dump.vcd"

# 查看波形
wave:
	@echo "[WAVE] 打开波形文件..."
	gtkwave dump.vcd || echo "请安装gtkwave: sudo apt-get install gtkwave"

# 清理
clean:
	rm -rf $(BUILD_DIR) dump.vcd

# 调试信息
debug:
	@echo "=== 调试信息 ==="
	@echo "Verilog源文件: $(VSRC)"
	@echo "C++源文件: $(CPP_SRC)"
	@echo "C源文件: $(C_SRC)"
	@echo "C对象文件: $(C_OBJ)"
	@echo "Verilator可执行文件: $(VERILATOR_EXE)"
	@echo "最终可执行文件: $(FINAL_EXE)"
	@echo "构建目录: $(BUILD_DIR)"
