/*
** my_aff_tab.c for my_aff_tab in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Tue Sep 27 12:26:26 2016 BERNARD Robin
** Last update Wed Sep 28 12:41:24 2016 BERNARD Robin
*/
#include <unistd.h>
void	my_putchar(char c);

void	my_aff_tab(char str[])
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      my_putchar(str[a]);
      a++;
    }
}
