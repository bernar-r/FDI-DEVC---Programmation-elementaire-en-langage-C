CC =	gcc

NAME =	sulfuras

SRC =	my_strcmp.c	\
	my_strlen.c	\
	main.c		\
	readline.c	\
	affichage.c	\
	recruitment.c	\
	get_soldat.c	\
	recap_soldat.c	\
	my_putnbr.c	\
	lister.c	\
	on_battle.c

OBJ = 	$(SRC:%.c=%.o)

RM =	rm -f

$(NAME)	:	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)

all	:
		$(NAME)

clean	:
		$(RM) $(OBJ)

fclean	:
		$(RM) $(NAME) $(OBJ)

.PHONY	:	all clean fclean
