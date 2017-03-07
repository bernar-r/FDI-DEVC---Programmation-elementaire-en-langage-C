##
## Makefile for libmy in /home/halli/Libmy/halli_a/libmy_02
## 
## Made by HALLI Assalas
## Login   <halli_a@etna-alternance.net>
## 
## Started on  Mon Oct  3 13:36:49 2016 HALLI Assalas
## Last update Tue Oct  4 00:20:46 2016 HALLI Assalas
##


NAME	=	not_mg
CC	=	gcc
SRC	=	src/draw.c \
		src/finders.c \
		src/head.c \
		src/help.c \
		src/input.c \
		src/move.c \
		src/readline.c \
		src/room.c \
		src/main.c

LIB	=	-Llibmy -lmy
FLAGS	=	-Wall -Werror -Wextra
RM	=	rm -f
OBJS	=	$(SRC: .c=.o)

.PHONEY		:	all fclean re

all		:	$(NAME)

$(NAME)		:	$(OBJS)
			$(CC) $(OBJS) -o $(NAME) $(CFLAGS) $(LIB)
clean		:
			$(RM) $(OBJS)

fclean		:	clean
			$(RM) $(NAME)

re		:	fclean all
