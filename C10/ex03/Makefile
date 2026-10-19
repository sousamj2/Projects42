#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marisous <marisous@student.42lisb...>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/22 14:14:59 by marisous          #+#    #+#              #
#    Updated: 2026/09/24 21:20:45 by marisous         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

# Compiler 
CC = cc
CFLAGS += -Wall -Wextra -Werror
CFLAGS += -Iincludes
LIBS += -L. -lft

SRC_FILES = \
	srcs/ft_getstr.c \
	srcs/ft_puterr.c \
	srcs/ft_putstr.c \
	srcs/ft_strlen.c \
	srcs/ft_parse.c \
	srcs/ft_atoi.c \
	srcs/ft_getchar.c \
	srcs/ft_strcmp.c \
	srcs/ft_process_file.c \
	srcs/ft_malloc_str.c \
	srcs/ft_print_memory.c

OBJ_FILES = $(SRC_FILES:.c=.o)

PRG_FILE = ft_hexdump
LIB_NAME = libft.a

all : $(LIB_NAME)
	$(CC) $(CFLAGS) main.c -o $(PRG_FILE) $(OBJ_FILES) $(LIBS)

$(LIB_NAME): $(OBJ_FILES)
	@echo "Create static library with ar"
	@echo "The flags are: r(eplace objects in library), c(reate library), s(ymbol index creation)."
	ar rcs $(LIB_NAME) $(OBJ_FILES)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -vf $(OBJ_FILES)

fclean:
	rm -vf $(LIB_NAME) $(PRG_FILE)

re: fclean all
