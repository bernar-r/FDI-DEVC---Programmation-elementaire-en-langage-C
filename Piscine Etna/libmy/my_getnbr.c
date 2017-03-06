/*
** my_getnbr.c for my_getnbr in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Fri Sep 30 19:19:52 2016 BERNARD Robin
** Last update Sat Oct  1 14:50:21 2016 BERNARD Robin
*/

void	my_putchar(char c);

void	my_put_nbr(int n);

int	my_getnbr(char *str)
{
  int	a;
  int	b;

  b = 1;
  a = 0;

  while (*str == '-' || *str == '+')
    {
      if (*str == '-')
	{
	  b  = - b;
	}
      str++;
    }
  while (*str != '\0' && *str >= '0' && *str <= '9')
    {
      a = a * 10 + *str - 48;
      str = str + 1;
    }
  if (b == -1)
    {
      a = - a;
    }
  return (a);
}
