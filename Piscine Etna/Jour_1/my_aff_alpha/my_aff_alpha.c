/*
** my_aff_alpha.c for my_aff_alpha in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Tue Sep 27 18:18:24 2016 BERNARD Robin
** Last update Wed Sep 28 01:16:17 2016 BERNARD Robin
*/
#include <unistd.h>
void	my_putchar(char c);

void	my_aff_alpha()
{
  char	lettre;

  lettre = 'a';
  while (lettre <= 'z')
    {
      my_putchar(lettre);
      lettre++;
    }
}

