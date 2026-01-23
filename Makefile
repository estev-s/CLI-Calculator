# Compiler and Flags
CC      := gcc
CFLAGS  := -Wall -Wextra -g
LDFLAGS := -lm
# Directories
SRC_DIR   := src
OBJ_DIR   := obj
BIN_DIR   := bin

# This simple script is to simply type in terminal: make "program".
# It looks for source code (src/program.c), creates objects (obj/program.o) and binary (bin/program).
%: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR) $(BIN_DIR)
	@echo "Compiling $<..."
	$(CC) $(CFLAGS) -c $< -o $(OBJ_DIR)/$*.o
	@echo "Linking $@..."
	$(CC) $(OBJ_DIR)/$*.o -o $(BIN_DIR)/$@ $(LDFLAGS)
	@echo "Done! Executable is in $(BIN_DIR)/$@"

# Clean utility
clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)
	@echo "Bin and Obj directories removed."

.PHONY: clean
