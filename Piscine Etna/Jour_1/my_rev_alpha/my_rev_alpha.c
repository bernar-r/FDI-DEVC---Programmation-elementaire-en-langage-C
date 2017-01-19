/*
** my_rev_alpha.c for my_rev_alpha in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Tue Sep 27 18:18:24 2016 BERNARD Robin
** Last update Wed Sep 28 01:07:59 2016 BERNARD Robin
*/
#include <unistd.h>
void	my_putchar(char c);

void	my_rev_alpha()
{
  char	lettre;

  lettre = 'z';
  while (lettre >= 'a')
    {
      my_putchar(lettre);
      lettre--;
    }
}
