/*
** my_strstr.c for my_strstr in /home/halli/devC04/halli_a/my_strstr
** 
** Made by HALLI Assalas
** Login   <halli_a@etna-alternance.net>
** 
** Started on  Wed Sep 28 18:26:38 2016 HALLI Assalas
** Last update Thu Sep 29 17:27:46 2016 HALLI Assalas
*/

int	my_strncmp(char *s1, char *s2, int n);
int	my_strlen(char *str);

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	length;
  int	len;

  i = 0;
  length = my_strlen(str);
  len = my_strlen(to_find);
  while (i < (length - len) + 1)
    {
      if (my_strncmp(str + i, to_find, len) == 0)
	{
	  return (str + i);
	}
      i++;
    }
  return (0);
}
