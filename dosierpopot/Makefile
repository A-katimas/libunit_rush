NAME = test.a

CC = cc

CFLAGS = -Werror -Wextra -Wall -g3

SOURCES = test.c

MAKEBASE = libunit_rush/Makefile

OBJ = $(SOURCES: .c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $@ $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re