/*
** my_sort_int_tab.c for my_sort_int_tab in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Thu Sep 29 12:06:22 2016 BERNARD Robin
** Last update Thu Sep 29 23:45:06 2016 BERNARD Robin
*/

void	my_sort_int_tab(int *tab, int size)
{
  int	a;
  int	b;
  int	c;

  a = 0;
  b = 1;
  while (b != size)
    {
      if(tab[b] < tab[a])
	{
	  c = tab[b];
	  tab[b] = tab[a];
	  tab[a] = c;
	  a = 0;
	  b = 0;
	}
      else
	{
	  a++;
	}
      b++;
    }
}
