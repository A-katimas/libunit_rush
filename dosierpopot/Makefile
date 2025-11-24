NAME = test.a

CC = cc

CFLAGS = -Werror -Wextra -Wall -g3

SOURCES =	test_strlen.c \
			test_atoi.c

MAKEBASE = libunit_rush/Makefile

OBJ = $(SOURCES: .c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $@ $(OBJ)
#$(NAME): $(MAKEBASE) $(OBJ)
#	cp -rf $(MAKEBASE) $(NAME)
#	ar -rcs $@ $(OBJ)
#$(MAKEBASE):
#	make -C ..

la: 
clean:
	rm -rf $(OBJ)
	make -C .. clean

fclean: clean
	rm -rf $(NAME)
	make -C .. fclean

re: fclean all

.PHONY : all clean fclean re

