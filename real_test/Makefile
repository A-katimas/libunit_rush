
ATOI_DIR =	atoi_test/
ATOI_SRC =	00_launcher.c \
			01_intmax.c \
			02_empty.c \
			03_intmin.c \
			04_normal.c \
			05_space.c

ATOI_FILES =	$(addprefix $(ATOI_DIR), $(ATOI_SRC))
ATOI_NAME =	$(ATOI_DIR)atoi_test.exe

STRJOIN_DIR = 	str_join_test/
STRJOIN_SRC = 	00_launcher.c \
				01_normal.c \
				02_NULL.c \
				03_strempty.c \
				04_emptystr.c

STRJOIN_FILES = 	$(addprefix $(STRJOIN_DIR), $(STRJOIN_SRC))
STRJOIN_NAME = $(STRJOIN_DIR)str_join_test.exe

STRLEN_DIR = 	strlen_test/
STRLEN_SRC = 	00_launcher.c \
				04_str.c \
				01_empty.c \
				02_NULL.c \
				03_charspe.c

STRLEN_FILES = 	$(addprefix $(STRLEN_DIR), $(STRLEN_SRC))
STRLEN_NAME = $(STRLEN_DIR)strlen_test.exe


ISALPHA_DIR = 	isalpha_test/
ISALPHA_SRC = 	00_launcher.c \
				01_charmin.c \
				02_charmaj.c \
				03_space.c \
				04_nbr.c \
				05_charspe.c

ISALPHA_FILES = 	$(addprefix $(ISALPHA_DIR), $(ISALPHA_SRC))
ISALPHA_NAME = $(ISALPHA_DIR)ISALPHA_test.exe



MAIN = main.c
NAME = test.a
CC = cc
CFLAGS = -Wall -Werror -Wextra -g3

LIBFT = ../resource/libft.a
LIBFT_DIR = ../resource/

LIBUNIT = ../libunit.a
LIBUNIT_DIR = ../

SOURCE = 	$(STRLEN_FILES) \
			$(ATOI_FILES) \
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

$(LIBUNIT):
	make -C $(LIBUNIT_DIR)

clean:
	rm -rf $(OBJ)
	make -C $(LIBFT_DIR) clean
	make -C $(LIBUNIT_DIR) clean

fclean: clean
	rm -rf $(NAME)
	make -C $(LIBFT_DIR) fclean
	make -C $(LIBUNIT_DIR) fclean

re: fclean all

atoi: $(ATOI_FILES) $(LIBFT) $(LIBUNIT)
	$(CC) $(CFLAGS) -o $(ATOI_NAME) $(ATOI_FILES) $(MAIN) $(LIBUNIT) $(LIBFT)
	${ATOI_NAME}

str_join: $(STRJOIN_FILES) $(LIBFT) $(LIBUNIT)
	$(CC) $(CFLAGS) -o $(STRJOIN_NAME) $(STRJOIN_FILES) $(MAIN) $(LIBUNIT) $(LIBFT)
	${STRJOIN_NAME}

strlen: $(STRLEN_FILES) $(LIBFT) $(LIBUNIT)
	$(CC) $(CFLAGS) -o $(STRLEN_NAME) $(STRLEN_FILES) $(MAIN) $(LIBUNIT) $(LIBFT)
	${STRLEN_NAME}

.PHONY : all clean fclean re strlen