/*
** my_strdup.c for my_strdup in /home/halli/devC07/halli_a/my_strdup
** 
** Made by HALLI Assalas
** Login   <halli_a@etna-alternance.net>
** 
** Started on  Mon Oct  3 09:51:02 2016 HALLI Assalas
** Last update Tue Oct  4 22:09:28 2016 HALLI Assalas
*/

#include <stdlib.h>

void	my_strcpy(char *dest, char *src);
int	my_strlen(char *str);

char	*my_strdup(char *str)
{
  int	len;
  char	*my_str;

  len = my_strlen(str);
  if ((my_str = malloc((len + 1) * sizeof(*str))))
    {
      if (my_str != 0)
	{
	  my_strcpy(my_str, str);
	}
    }
  return (my_str);
}
