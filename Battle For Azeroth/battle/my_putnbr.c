/*
** my_putnbr.c for my_putnbr.c in /home/tang/Colle/tang_g/recruitment
** 
** Made by TANG gustin
** Login   <tang_g@etna-alternance.net>
** 
** Started on  Fri Oct  7 08:08:08 2016 TANG gustin
** Last update Fri Oct  7 08:08:49 2016 TANG gustin
*/

#include "my.h"

void	my_put_nbr(int nb)
{
  unsigned int i;

  i = nb;
  if (nb < 0)
    {
      my_putchar('-');
      i = nb * (- 1);
    }
  if (i > 9)
    {
      my_put_nbr(i / 10);
    }
  my_putchar((i % 10) + '0');
}
