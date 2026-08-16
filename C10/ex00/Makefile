CC = cc
CFLAGS += -Wall -Wextra -Werror
CFLAGS += -Iincludes

SRC_FILES = \
	srcs/ft_getstr.c \
	srcs/ft_puterr.c \
	srcs/ft_putstr.c \
	srcs/ft_strlen.c

OBJ_FILES = $(SRC_FILES:.c=.o)

PRG_NAME = ft_display_file

LIB_NAME = libft.a

all: $(LIB_NAME)
	$(CC) $(CFLAGS) main.c -o $(PRG_NAME) -L. -lft

$(LIB_NAME) : $(OBJ_FILES)
	@echo Create static library with ar
	@echo "The flags are: r(eplace objects in library), c(reate lib), s(ymbol index creation)."
	ar rcs $(LIB_NAME) $(OBJ_FILES)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -fv $(OBJ_FILES)

fclean:
	rm -fv $(LIB_NAME) $(PRG_NAME)

re: fclean all
