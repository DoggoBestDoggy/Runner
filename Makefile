##
## RUNNER PROJECT, 23/05/2022 by bonhou_q and rigoni_j
## File description:
##      makefile
##

NAME =     Runner

SRC    =    Main/main.c\
        Main/draw.c\
        Main/init.c\
        Main/input.c

CC =     gcc

OBJ =     $(SRC:.c=.o)

CFLAGS +=     -Wall -Wextra -Werror
CFLAGS +=     -I./The_Fenetre

LIBS +=     -lSDL2 -lSDL2_image

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(LIBS)

all: $(NAME)

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean