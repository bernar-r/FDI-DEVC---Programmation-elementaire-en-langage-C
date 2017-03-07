/*
** my_getnbr.c for  in /home/halli/devC05/halli_a/my_getnbr
** 
** Made by HALLI Assalas
** Login   <halli_a@etna-alternance.net>
** 
** Started on  Thu Sep 29 10:04:06 2016 HALLI Assalas
** Last update Thu Sep 29 12:59:06 2016 HALLI Assalas
*/

void	init(int *compteur, int *neg, int *fin, int *i);

int	my_getnbr(char *str)
{
  int	nb;
  int	compteurnb;
  int	neg;
  int	fin;
  int	i;

  nb = 0;
  init(&compteurnb, &neg, &fin, &i);
  while (str[i] == 43 || str[i] == 45 || (str[i] <= 57 && str[i] >= 48))
    {
      if (str[i] == '-' && compteurnb == 0)
	neg *= -1;
      else if (compteurnb > 0 && (str[i] == '-' || str[i] == '+'))
	{
	  fin = 1;
	}
      else if (str[i] <= '9' && str[i] >= '0' && fin == 0)
	{
	  compteurnb++;
	  nb = nb * 10 + str[i] - 48;
	}
      i++;
    }
  return (nb * neg);
}

void	init(int *compteur, int *neg, int *fin, int *i)
{
  *compteur = 0;
  *neg = 1;
  *fin = 0;
  *i = 0;
}
