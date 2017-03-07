##
## Makefile for libmy in /home/halli/Libmy/halli_a/libmy_02
## 
## Made by HALLI Assalas
## Login   <halli_a@etna-alternance.net>
## 
## Started on  Mon Oct  3 13:36:49 2016 HALLI Assalas
## Last update Tue Oct  4 00:20:46 2016 HALLI Assalas
##


NAME	=	libmy.a
OBJS	=	my_putchar.o my_putstr.o\
		my_put_nbr.o my_getnbr.o\
		my_strstr.o my_strlen.o\
		my_swap.o my_isneg.o\
		my_strcpy.o my_strncpy.o\
		my_strcat.o my_strncat.o\
		my_strcmp.o my_strncmp.o\
		my_strdup.o my_str_to_wordtab.o
CC	=	gcc
FLAGS	=	-Wall -Werror
RM	=	rm -f

.PHONEY		:	all clean fclean re

all		:	$(OBJS)
			ar r $(NAME) $(OBJS)
			ranlib $(NAME)

my_putchar.o	:	my_putchar.c
			$(CC) $(FLAGS) -c my_putchar.c

my_putstr.o	:	my_putstr.c
			$(CC) $(FLAGS) -c my_putstr.c

my_put_nbr.o	:	my_put_nbr.c
			$(CC) $(FLAGS) -c my_put_nbr.c

my_getnbr.o	:	my_getnbr.c
			$(CC) $(FLAGS) -c my_getnbr.c

my_strstr.o	:	my_strstr.c
			$(CC) $(FLAGS) -c my_strstr.c

my_strlen.o	:	my_strlen.c
			$(CC) $(FLAGS) -c my_strlen.c

my_swap.o	:	my_swap.c
			$(CC) $(FLAGS) -c my_swap.c

my_isneg.o	:	my_isneg.c
			$(CC) $(FLAGS) -c my_isneg.c

my_strcpy.o	:	my_strcpy.c
			$(CC) $(FLAGS) -c my_strcpy.c

my_strncpy.o	:	my_strncpy.c
			$(CC) $(FLAGS) -c my_strncpy.c

my_strcat.o	:	my_strcat.c
			$(CC) $(FLAGS) -c my_strcat.c

my_strncat.o	:	my_strncat.c
			$(CC) $(FLAGS) -c my_strncat.c

my_strcmp.o	:	my_strcmp.c
			$(CC) $(FLAGS) -c my_strcmp.c 

my_strncmp.o	:	my_strncmp.c
			$(CC) $(FLAGS) -c my_strncmp.c 

my_strdup.o	:	my_strdup.c
			$(CC) $(FLAGS) -c my_strdup.c

my_str_to_wordtab.o:	my_str_to_wordtab.c
			$(CC) $(FLAGS) -c my_str_to_wordtab.c -c 

clean		:
			$(RM) $(OBJS)

fclean		:	clean
			$(RM) $(NAME)

re		:	fclean all
