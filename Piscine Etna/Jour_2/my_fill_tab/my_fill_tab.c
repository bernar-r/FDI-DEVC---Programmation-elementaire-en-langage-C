/*
** my_fill_tab.c for my_fill_tab in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Tue Sep 27 14:21:23 2016 BERNARD Robin
** Last update Tue Sep 27 21:51:37 2016 BERNARD Robin
*/
int	*my_fill_tab()
{
  static int	tableau[100];
  int	a;

  a = 0;
  while (a < 100)
    {
      tableau[a] = a + 1;
      a++;
    }
  return (tableau);
}
