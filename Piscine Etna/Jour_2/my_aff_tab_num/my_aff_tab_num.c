/*
** my_aff_tab_num.c for my_aff_tab_num.c in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Tue Sep 27 12:41:58 2016 BERNARD Robin
** Last update Wed Sep 28 12:40:59 2016 BERNARD Robin
*/
#include <unistd.h>
void	my_putchar(char c);

void	my_aff_tab_num(int tab[], int size)
{
  int	a;
  char	b;

  a = 0;
  while (a < size)
    {
      b = tab[a] + '0';
      my_putchar(b);
      my_putchar('\n');
      a++;
    }
}
