/*
** my_neb_len.c for my_nb_len in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Tue Sep 27 19:54:40 2016 BERNARD Robin
** Last update Wed Sep 28 01:11:40 2016 BERNARD Robin
*/
#include <unistd.h>
int	my_nb_len(int n)
{
  int	g;
  g = 0;

  while((n > 1)||(n < -1 )) 
    {
      n = n / 10;
      g++;
    }

return (g);
}



