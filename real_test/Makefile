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


SOURCE = 	strlen_test/strlen1.c \
			strlen_test/strlen2.c \
			strlen_test/strlen3.c \
			strlen_test/strlen4.c \
			atoi_test/atoi1.c \
			atoi_test/atoi2.c \
			atoi_test/atoi3.c \
			atoi_test/atoi4.c \
			atoi_test/atoi5.c \
			putstr_test/putstr1.c \
			putstr_test/putstr2.c \
			putstr_test/putstr3.c \
			putstr_test/putstr4.c \
			str_join_test/strjoin1.c \
			str_join_test/strjoin2.c \
			str_join_test/strjoin3.c \
			str_join_test/strjoin4.c \
			




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
