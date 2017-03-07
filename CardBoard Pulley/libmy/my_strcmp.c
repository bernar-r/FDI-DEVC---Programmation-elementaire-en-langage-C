/*
** my_strcmp.c for my_strcmp in /home/halli/devC04/halli_a/my_strcmp
** 
** Made by HALLI Assalas
** Login   <halli_a@etna-alternance.net>
** 
** Started on  Wed Sep 28 14:06:50 2016 HALLI Assalas
** Last update Thu Sep 29 01:12:04 2016 HALLI Assalas
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] != '\0')
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
  if (s2[i] == s1[i])
    {
      return (0);
    }
  return (-1);
}
