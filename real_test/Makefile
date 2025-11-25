STRLEN_DIR = 	strlen_test/
STRLEN_SRC = 	00_launcher.c \
				strlen1.c \
				strlen2.c \
				strlen3.c \
				strlen4.c

STRLEN_FILES = 	$(addprefix $(STRLEN_DIR), $(STRLEN_SRC))

NAME = test.a
CC = cc
CFLAGS = -Wall -Werror -Wextra -g3

LIBFT = ../resource/libft.a

LIBFT_DIR = ../resource/


SOURCE = 	strlen_test/00str.c \
			strlen_test/01empty.c \
			strlen_test/02NULL.c \
			strlen_test/03charspe.c \
			atoi_test/00intmax.c \
			atoi_test/01intmin.c \
			atoi_test/02empty.c \
			atoi_test/03normal.c \
			atoi_test/04space.c \
			putstr_test/00str.c \
			putstr_test/01charspe.c \
			putstr_test/02strspe.c \
			putstr_test/03empty.c \
			str_join_test/00normal.c \
			str_join_test/01NULL.c \
			str_join_test/02strempty.c \
			str_join_test/03emptystr.c \
			isalpha_test/00char.c





OBJ = $(SOURCE:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	cp -rf $(LIBFT) $(NAME)
	ar -rcs $@ $(OBJ)

$(LIBFT):
	make -C $(LIBFT_DIR)

clean:
	rm -rf $(OBJ)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -rf $(NAME)
	make -C $(LIBFT_DIR) fclean

re: fclean all

strlen: $(STRLEN_FILES) main.c $(LIBFT) ../libunit.a
	$(CC) $(CFLAGS) -o strlen_test/a.out $(STRLEN_FILES) main.c ../libunit.a $(LIBFT)

.PHONY : all clean fclean re
