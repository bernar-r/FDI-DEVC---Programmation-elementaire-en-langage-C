/*
** my_strupcase.c for my_strupcase in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Tue Sep 27 14:47:08 2016 BERNARD Robin
** Last update Tue Sep 27 18:06:37 2016 BERNARD Robin
*/
#include <unistd.h>
char	*my_strupcase(char str[])
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      if (str[a] >= 97 && str[a] <= 122)
	str[a] = str[a] - 32;
      a++;
    }
  return (str);
}
