/*
** my_strlowcase.c for my_strlowcase in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Tue Sep 27 14:47:08 2016 BERNARD Robin
** Last update Tue Sep 27 23:09:25 2016 BERNARD Robin
*/
#include <unistd.h>

char	*my_strlowcase(char str[])
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      if (str[a] >= 'A' && str[a] <= 'Z')
	str[a] = str[a] + 32;
      a++;
    }
  return (str);
}
