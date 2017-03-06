/*
** my_aff_params.c for my_aff_params in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Wed Sep 28 23:06:40 2016 BERNARD Robin
** Last update Thu Sep 29 00:19:33 2016 BERNARD Robin
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

void	my_aff_params(int nbr, char **arg)
{
  int	a;

  a = 0;
  while (a < nbr)
    {
      my_putstr(arg[a]);
      my_putstr("\n");
      a++;
    }
}
