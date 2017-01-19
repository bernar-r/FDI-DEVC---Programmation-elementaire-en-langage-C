/*
** my_putchar.c for my_putchar in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Tue Sep 27 12:55:42 2016 BERNARD Robin
** Last update Wed Sep 28 01:10:05 2016 BERNARD Robin
*/
#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
