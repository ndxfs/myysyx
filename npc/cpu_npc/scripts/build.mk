# NPC构建规则

.DEFAULT_GOAL = app

WORK_DIR  = $(shell pwd)
BUILD_DIR = $(WORK_DIR)/build

# Object directories
VERILATOR_OBJ_DIR = $(BUILD_DIR)/obj-verilator
NPC_OBJ_DIR = $(BUILD_DIR)/obj-$(NAME)
VERILATOR = verilator
CPP_SRC = $(CPU_HOME)/src/isa/isa.cpp

# Include paths
#INC_PATH := $(WORK_DIR)/include $(BUILD_DIR) $(INC_PATH)
#INCLUDES = $(addprefix -I, $(INC_PATH))
INC_PATH := $(WORK_DIR)/include $(INC_PATH)
OBJ_DIR  = $(BUILD_DIR)/obj-$(NAME)
BINARY   = $(BUILD_DIR)/V$(TOP)

# C/C++编译器
CC = gcc
CXX = g++

INCLUDES = $(addprefix -I, $(INC_PATH))
CFLAGS  := -O2 -MMD -Wall -Werror $(INCLUDES) $(CFLAGS)

OBJS = $(SRCS:%.c=$(OBJ_DIR)/%.o) $(CXXSRC:%.cc=$(OBJ_DIR)/%.o)

#$(info [DEBUG] The list of object files (OBJS) is: $(OBJS))

$(OBJ_DIR)/%.o: %.c
	@echo + CC $<
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c -o $@ $<
	$(call call_fixdep, $(@:.o=.d), $@)

$(BINARY): $(OBJS) $(VSRC) $(CPP_SRC) $(OBJS)
	@echo "[VERILATOR] 编译Verilog和C++，链接o..."
	$(VERILATOR) \
		--top-module $(TOP) \
		--Mdir $(BUILD_DIR) \
		-CFLAGS "-I$(PWD)/include -I$(PWD)/$(BUILD_DIR)" \
		-I./vsrc \
		--cc $(VSRC) \
		--exe $(CPP_SRC) $(OBJS) \
		-LDFLAGS "-fsanitize=address -lreadline" \
		--build

-include $(OBJS:.o=.d)

.PHONY: app clean

app: $(BINARY)

clean:
	-rm -rf $(BUILD_DIR)


#$(BINARY):: $(OBJS)
