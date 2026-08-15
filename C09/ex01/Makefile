#### Declarations
# = recursive assignment: the last assignment is what if counts (goes backwards)
# := simple assignment: The assignment happens each time.
# += append assignment: append something at the end.
# ?= conditional assignment: only happens if the target is empty.
# -----------------------------------------
# Target specific: for assignment inside rules.
# rule : variable = value
# rule : 
# 	echo $(variable)
# This variable only works with this value in this rule.
# -----------------------------------------
# Enviroment variables
# rule:
# 	echo ${USER}
# 	echo ${env_var}
# $ make rule env_var=test
# -----------------------------------------
# Special (magic) variables
# $@ target / rule name
# $< first pre requisite of the rule
# $? pre requisite that have change in disc since last time
# $^ all the pre requisites.
# -----------------------------------------
# Wild cards and shells
# list1 = srcs/*c --> This is the string "srcs/*c"
# list2 = $(wildcard srcs/*c) --> This is all c files in srcs
# list3 = $(shell ls srcs/*c) --> This is all c files in srcs
# list4 != srcs/*c --> This is all c files in srcs --> this only works in make version >= 4.2
# -----------------------------------------
# $(MAKEFLAGS) is the list of flags set by make.
# -----------------------------------------
# % is the wildcard in the make file
# This can be used in rules:
# %.o : %.c
# This will have as a rule ANY.o file that depends on ANY.c file so we can call the make ANY.o

# What C compiler to use (g)cc, clang or other
CC = cc
# What flags to use (all + extra) warnings and make them as errors so no compilation.
CFLAGS += -Wall -Wextra -Werror
# Add as -I (include) the folder includes/
CFLAGS += -Iincludes

# The name of the static library
LIB_NAME = libft.a

# Get the current directory
CUR_DIR = $(shell pwd)

# Where are located the source files
SRC_FILES = $(shell ls srcs/*)

# Location of the source code.
SRC_DIR = srcs

# Assignment replacement of the object files *.c --> *.o
OBJ_FILES = $(SRC_FILES:.c=.o)

#### Rule
# with the symbol @ before it does not write the command before executing it.
# test:
# 	echo These are my obj files $(OBJ_FILES).
# 	@echo These are my src files $(SRC_FILES). <-- This does not show the command before executing it.

# First rule is called by default with make.
all: $(LIB_NAME)

# For any object rule, use the corresponding c file.
# The first (only) target replaces $<
# The name (not necessary in this case) of the rule replaces $@
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Having all object functions, create the static library with ar
# r for insert/replace object files.
# c for creating the file if it does not exist.
# s create the symbol index.
$(LIB_NAME):  $(OBJ_FILES)
	ar rcs $(LIB_NAME) $(OBJ_FILES)

# Remove object files
clean: 
	rm -vf $(OBJ_FILES)
	./clean_emacs

# Remove the library file
fclean:
	rm -vf $(LIB_NAME)

# Rebuild the library 
re: fclean all
