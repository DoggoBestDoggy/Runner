##
## RUNNER PROJECT, 23/05/2022 by bonhou_q
## /Users/zenom_/Documents
## File description:
##      makefile
##

CPPFLAGS = `sdl2-config --cflags`
LDLIBS = `sdl2-config --libs`

SRC = ./runner.c
OBJ = $(SRC:.c=.o)
CFLAGS += -Wall -Wextra -Werror
NAME = runner

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(LDLIBS)

all:	 $(NAME)

clean: 
	rm -f $(OBJ)

fclean:
	 rm -f $(NAME)

re: fclean all

.PHONY: clean fclean