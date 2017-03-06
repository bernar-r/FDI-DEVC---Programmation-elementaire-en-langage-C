/*
** my_putstr.c for my_putstr in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Wed Sep 28 12:08:53 2016 BERNARD Robin
** Last update Thu Sep 29 00:18:53 2016 BERNARD Robin
*/
#include <unistd.h>

void	my_putchar(char c);

void	my_putstr(char *str)
{
  int	a;

  a = 0;
  while(*(str + a) != '\0')
    {
      my_putchar(*(str + a));
      a++;
    }
}
