
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
NAME = test.exe
CC = cc
CFLAGS = -Wall -Werror -Wextra -g3

LIBFT = ../resource/libft.a
LIBFT_DIR = ../resource/

LIBUNIT = ../libunit.a
LIBUNIT_DIR = ../

SOURCE = 	$(STRLEN_FILES) \
			$(ATOI_FILES) \
			$(ISALPHA_FILES) \
			$(STRJOIN_FILES)

OBJ = $(SOURCE:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(LIBUNIT) $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(SOURCE) $(MAIN) $(LIBUNIT) $(LIBFT)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(LIBUNIT):
	make -C $(LIBUNIT_DIR)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

# atoi: $(ATOI_FILES) $(LIBFT) $(LIBUNIT)
# 	$(CC) $(CFLAGS) -o $(ATOI_NAME) $(ATOI_FILES) $(MAIN) $(LIBUNIT) $(LIBFT)

# isalpha: $(ISALPHA_FILES) $(LIBFT) $(LIBUNIT)
# 	$(CC) $(CFLAGS) -o $(ISALPHA_NAME) $(ISALPHA_FILES) $(MAIN) $(LIBUNIT) $(LIBFT)

# str_join: $(STRJOIN_FILES) $(LIBFT) $(LIBUNIT)
# 	$(CC) $(CFLAGS) -o $(STRJOIN_NAME) $(STRJOIN_FILES) $(MAIN) $(LIBUNIT) $(LIBFT)

# strlen: $(STRLEN_FILES) $(LIBFT) $(LIBUNIT)
# 	$(CC) $(CFLAGS) -o $(STRLEN_NAME) $(STRLEN_FILES) $(MAIN) $(LIBUNIT) $(LIBFT)

.PHONY : all clean fclean re strlen