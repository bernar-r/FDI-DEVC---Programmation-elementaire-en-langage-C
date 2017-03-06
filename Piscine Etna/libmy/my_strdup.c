/*
** my_strdup.c for my_strdup in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Mon Oct  3 13:50:38 2016 BERNARD Robin
** Last update Thu Oct  6 13:52:04 2016 BERNARD Robin
*/
#include <stdlib.h>

int	my_strlen(char *str);

char	*my_strcpy(char *dest, char *src);

char	*my_strdup(char *str)
{
  char	*b;
  int	size;

  size = my_strlen(str);
  b = malloc((size + 1) * sizeof(char));
  if (b == 0)
    {
      return (0);
    }
  my_strcpy (b, str);
  return(b);
}
