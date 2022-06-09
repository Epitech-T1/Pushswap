##
## EPITECH PROJECT, 2020
## delivery
## File description:
## Makefile
##

SRC =	src/pushswap.c \
		src/sort.c \
		src/permutation.c \
		src/get_position.c \
		src/utilities.c \

OBJ = 	$(SRC:.c=.o)

NAME = 	push_swap

CFLAGS = -g

all: 	$(NAME)

$(NAME): 	$(OBJ)
		gcc $(CFLAGS) -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
