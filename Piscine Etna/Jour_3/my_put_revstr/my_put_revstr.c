/*
** my_put_revstr.c for my_put_revstr in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Wed Sep 28 14:22:35 2016 BERNARD Robin
** Last update Wed Sep 28 23:50:41 2016 BERNARD Robin
*/
#include <unistd.h>

void	my_putchar(char c);

int	my_strlen(char *str)
{
  int	a;

  a = 0;
  while (*(str + a) != '\0')
    {
      a++;
    }
  return (a);
}
  
void	my_put_revstr(char *str)
{
  int	d;    

  d = my_strlen(str) - 1;
  while (d != -1)
    {
      my_putchar(str[d]);
      d--;
    }
}
