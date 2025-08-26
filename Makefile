CC=cc
NAME=libftprintf.a
CFLAGS=-Wall -Wextra -Werror 
SRC=functions.c ft_printf.c
OBJ=$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs  $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 
