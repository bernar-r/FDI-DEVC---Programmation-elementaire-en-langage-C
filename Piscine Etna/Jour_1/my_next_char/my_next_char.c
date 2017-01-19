/*
** my_next_char.c for my_next_char in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Tue Sep 27 15:40:48 2016 BERNARD Robin
** Last update Wed Sep 28 01:11:59 2016 BERNARD Robin
*/
#include <unistd.h>
char	my_next_char(char c)
{
  if ((c >= 65) && (c < 90))
    {
      c= c + 1;
    }
  else if ((c >= 97) && (c < 122))
    {
      c = c + 1;
    }
  else if ((c == 122))
    {
      c = 97;
    }
  else if ((c ==  90))
    {
      c = 65;
    }
  else
    {
      c = 32;
    }
  return (c);
}
