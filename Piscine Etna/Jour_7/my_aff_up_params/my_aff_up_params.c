/*
** my_aff_up_params.c for my_aff_up_params in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Wed Sep 28 23:06:40 2016 BERNARD Robin
** Last update Mon Oct  3 19:43:47 2016 BERNARD Robin
*/
#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	a;

  a = 0;
  while (*(str + a) != '\0')
    {
      my_putchar(*(str + a));
      a++;
    }
}

void	my_aff_params(int nbr, char **arg)
  {
  int	a;

  a = 0;
  while (a != nbr)
    {
      my_putstr(arg[a]);
      a++;
    }
}

char	*my_strupcase(char str[])
  {
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      if (str[a] >= 'a' && str[a] <= 'z')
	str[a] = str[a] - 32;
      a++;
    }
  return (str);
}

void	my_aff_up_params(int nbr, char **arg)
{
  int	a;

  a = (0);
  while (a != nbr)
    {
      my_putstr(my_strupcase(arg[a]));
      my_putchar('\n');
      a++;
    }
}

int	main(int argc, char **argv)
{
 my_aff_up_params(argc, argv);
 return (0);
}
