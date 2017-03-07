/*
** my_put_nbr.c for my_put_nbr in /home/halli/devC05/halli_a/my_put_nbr
** 
** Made by HALLI Assalas
** Login   <halli_a@etna-alternance.net>
** 
** Started on  Thu Sep 29 06:23:05 2016 HALLI Assalas
** Last update Tue Oct  4 17:47:19 2016 HALLI Assalas
*/

void		my_putchar(char c);

void		my_put_nbr(int n)
{
  int		i;
  unsigned int	nb;

  i = 1;
  if (n < 0)
    {
      my_putchar('-');
      nb = -n;
    }
  else
    nb = n;
  if (nb < 10)
    my_putchar(nb + 48);
  else
    {
      while (nb / 10 >= i)
	{
	  i *= 10;
	}
      while (i >= 1)
	{
	  my_putchar((nb / i) % 10 + 48);
	  i /= 10;
	}
    }
}
