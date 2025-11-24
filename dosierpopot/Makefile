NAME = test.a

CC = cc

CFLAGS = -Werror -Wextra -Wall -g3

SOURCES =	test_strlen.c \
			test_atoi.c

MAKEBASE = libunit_rush
LIBFT = libunit_rush/0_LIBFT

OBJ = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $@ $(OBJ)
$(NAME): $(LIBFT) $(OBJ)
	cp -rf $(LIBFT) $(NAME)
	ar -rcs $@ $(OBJ)
$(LIBFT):
	make -C ..

la:

clean:
	rm -rf $(OBJ)
#	make -C .. clean
	make -c $(LIBFT) clean

fclean: clean
	rm -rf $(NAME)
#	make -C .. fclean
	make -c $(LIBFT) fclean

re: fclean all

.PHONY : all la clean fclean re

