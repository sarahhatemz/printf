CC=cc
CFLAGS=-Wall -Wextra -Werror 
SRC=functions.c printf.c 
OBJ=$(SRC:.c=.o)

NAME=libftprintf.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs  $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 
