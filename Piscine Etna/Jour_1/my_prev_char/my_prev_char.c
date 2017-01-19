/*
** my_prev_char.c for my_prev_char in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Tue Sep 27 15:40:48 2016 BERNARD Robin
** Last update Wed Sep 28 01:10:57 2016 BERNARD Robin
*/
#include <unistd.h>
char	my_prev_char(char c)
{
  if ((c > 65) && (c <= 90))
    {
      c = c - 1;
    }
  else if ((c > 97) && (c <= 122))
    {
      c = c - 1;
    }
  else if ((c ==  97))
    {
      c = 122;
    }
  else if ((c ==  65))
    {
      c = 90;
    }
  else
    {
      c = 32;
    }
  return (c);
}
