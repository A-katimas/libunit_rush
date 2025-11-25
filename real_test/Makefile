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


SOURCE = 	strlen_test/00_str.c \
			strlen_test/01_empty.c \
			strlen_test/02_NULL.c \
			strlen_test/03_charspe.c \
			atoi_test/00_intmax.c \
			atoi_test/01_intmin.c \
			atoi_test/02_empty.c \
			atoi_test/03_normal.c \
			atoi_test/04_space.c \
			putstr_test/00_str.c \
			putstr_test/01_charspe.c \
			putstr_test/02_strspe.c \
			putstr_test/03_empty.c \
			str_join_test/00_normal.c \
			str_join_test/01_NULL.c \
			str_join_test/02_strempty.c \
			str_join_test/03_emptystr.c \
			isalpha_test/00_char.c





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
