/*
** my.h for my.h in /home/tang/Battle_For_Azeroth/bernar_r/recruitment
** 
** Made by TANG gustin
** Login   <tang_g@etna-alternance.net>
** 
** Started on  Thu Oct  6 19:46:31 2016 TANG gustin
** Last update Fri Oct  7 11:07:28 2016 TANG gustin
*/

#ifndef MY_H
#define MY_H

#include "my_hero.h"
#include <stdlib.h>
#include <unistd.h>

void	my_put_nbr(int nb);
void	my_putchar(char c);
void	my_putstr(char *str);
int	my_strcmp(char *s1, char *s2);
int	my_strlen(char *str);
char	*readline();
void	my_recruitment(t_hero *);
void	test();
void	recap_soldat(t_soldat *soldat);
void	my_return();
void	my_leave();

#endif
