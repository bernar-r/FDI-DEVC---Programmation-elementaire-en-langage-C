/*
** my_strncmp.c for my_strncmp in /home/halli/devC04/halli_a/my_strncmp
** 
** Made by HALLI Assalas
** Login   <halli_a@etna-alternance.net>
** 
** Started on  Wed Sep 28 14:47:28 2016 HALLI Assalas
** Last update Thu Sep 29 01:12:53 2016 HALLI Assalas
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  while (s1[i] != '\0' && i < n)
    {
      if (s1[i] > s2[i])
	{
	  return (1);
	}
      else if (s1[i] < s2[i])
	{
	  return (-1);
	}
      i++;
    }
  if (s2[i] == '\0')
    {
      return (0);
    }
  else if (s1[i] < s2[i])
    {
      return (-1);
    }
  return (0);
}
