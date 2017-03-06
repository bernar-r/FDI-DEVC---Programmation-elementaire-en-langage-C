/*
** my_trspos_tab.c for my_trspos_tab in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Wed Sep 28 17:53:17 2016 BERNARD Robin
** Last update Wed Sep 28 23:50:14 2016 BERNARD Robin
*/
#include <unistd.h>

void	my_putchar(char c);

void	my_trspos_tab(int c, int l,int tab[l][c])
{
  int	cc;
  int	ll;

  ll = 0;
  cc = 0;
  while (cc <= c - 1)
    {
      while (ll <= l - 1)
	{
	  my_putchar(tab[ll][cc] + 48);
	  ll++;
	}
      ll = 0;
      my_putchar('\n');
      cc++;
    }
}
