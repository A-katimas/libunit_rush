# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vsyutkin <vsyutkin@student.42mulhouse.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/26 10:22:06 by vsyutkin          #+#    #+#              #
#    Updated: 2025/11/26 10:23:52 by vsyutkin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAIN = main.c
NAME = tests.exe
CC = cc
CFLAGS = -Wall -Werror -Wextra -g3

LIBFT = ../resource/libft.a
LIBFT_DIR = ../resource/

LIBUNIT = ../libunit.a
LIBUNIT_DIR = ../

SOURCE = 	bus_error.c \
			ko.c \
			ok.c \
			segfault.c

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