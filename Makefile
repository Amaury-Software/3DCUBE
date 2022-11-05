##
## AMSOFT PROJECT, 2022
## 3DCUBE
## File description:
## Makefile
##

NAME	=	3dcube

FLAGS	=	-lcsfml-graphics -lcsfml-audio -lcsfml-window -lcsfml-system

SRC	=	src/main.c	\
		src/core.c

all:
	gcc -o $(NAME) $(SRC) $(FLAGS)

