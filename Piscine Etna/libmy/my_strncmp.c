/*
** my_strncmp.c for my_strncmp in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Thu Sep 29 19:30:37 2016 BERNARD Robin
** Last update Thu Sep 29 23:47:05 2016 BERNARD Robin
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	a;

  a = 0;
  while (n != a)
    {
      if (s1[a] < s2[a])
	{
	  return (-1);
	}
      else if (s1[a] > s2[a])
	{
	  return (1);
	}
      a++;
    }
  return (0);
}
