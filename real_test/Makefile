NAME = test.a
CC = cc
CFLAGS = -Wall -Werror -Wextra

LIBFT = ../resource/libft.a

SOURCE = 	strlen_test/strlen1.c \
			strlen_test/strlen2.c \
			strlen_test/strlen3.c \
			strlen_test/strlen4.c \
			atoi_test/atoi1.c \
			atoi_test/atoi2.c \
			atoi_test/atoi3.c \
			atoi_test/atoi4.c

OBJ = $(SOURCE:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	cp -rf $(LIBFT) $(NAME)
	ar -rcs $@ $(OBJ)

$(LIBFT):
	make -C libft

clean:
	rm -rf $(OBJ)
	make -C libft clean

fclean: clean
	rm -rf $(NAME)
	make -C libft fclean

re: fclean all

.PHONY : all clean fclean re
