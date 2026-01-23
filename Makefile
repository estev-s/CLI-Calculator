# Compiler and Flags
CC      := gcc
CFLAGS  := -Wall -Wextra -g

# Directories
SRC_DIR   := src
OBJ_DIR   := obj
BIN_DIR   := bin

# This magic rule allows you to run 'make program'
# It looks for src/program.c, creates obj/program.o, and builds build/program
%: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR) $(BIN_DIR)
	@echo "Compiling $<..."
	$(CC) $(CFLAGS) -c $< -o $(OBJ_DIR)/$*.o
	@echo "Linking $@..."
	$(CC) $(OBJ_DIR)/$*.o -o $(BIN_DIR)/$@
	@echo "Done! Executable is in $(BIN_DIR)/$@"

# Clean utility
clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)
	@echo "Build and Obj directories removed."

.PHONY: clean
