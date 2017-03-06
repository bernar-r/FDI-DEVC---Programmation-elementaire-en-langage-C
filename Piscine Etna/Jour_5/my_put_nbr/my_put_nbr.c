/*
** my_put_nbr.c for my_put_nbr in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Fri Sep 30 16:57:46 2016 BERNARD Robin
** Last update Sat Oct  1 21:50:30 2016 BERNARD Robin
*/
#include <unistd.h>

void	my_putchar(char c);

void	my_put_nbr(int n)
{
  int	a;

  a = 0;
   if (n == -2147483647 - 1)
    {
      my_putchar('-');
      my_putchar('2');
      n = 147483648;
    }
  if (n < 0)
    {
      my_putchar('-');
      n =- n;
    }
  if (n > 9)
    {
      my_put_nbr(n / 10);
    }
  a = n % 10;
  my_putchar(a + '0');
}
