/*
** my_tablen.c for my_tablen in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Tue Sep 27 13:55:42 2016 BERNARD Robin
** Last update Wed Sep 28 12:40:13 2016 BERNARD Robin
*/
int	my_tablen(char tab[])
{
  int	a;

  a = 0;
  while (tab[a] != '\0')
    {
      a++;
    }
  return (a);
}
