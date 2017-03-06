/*
** my_str_to_wordtab.c for my_str_to_wordtab in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Mon Oct  3 15:48:41 2016 BERNARD Robin
** Last update Thu Oct  6 14:34:32 2016 BERNARD Robin
*/
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char	*my_strcpy(char *dest, char *src);

int	my_strlen(char *str);

char	*my_strdup(char *str);

int	count_word(char *str)
{
  int   a;
  int   count_word;

  a = 0;
  count_word = 0;
  while (str[a] != '\0')
    {
      if ((str[a] >= 'a' && str[a] <= 'z') || (str[a] >= 'A' && str[a] <= 'Z') 
|| (str[a] >= '0' && str[a] <= '9'))
        {
          count_word++;
          while (str[a] != '\0' && ((str[a] >= 'a' && str[a] <= 'z')
 || (str[a] >= 'A' && str[a] <= 'Z') || (str[a] >= '0' && str[a] <= '9')))
            a++;
        }
      a++;
    }
  return (count_word);
}

int	count_c(char *str, int *a)
{
  int   count_c;

  count_c = 0;
  while (str[*a] != '\0' && ((str[*a] >= 'a' && str[*a] <= 'z') 
|| (str[*a] >= 'A' && str[*a] <= 'Z') 
|| (str[*a] >= '0' && str[*a] <= '9')))
    {
      count_c++;
      *a = *a + 1;
    }
  return (count_c);
}

char    **my_str_to_wordtab(char *str)
{
  char  **tab;
  int   word;
  int   a;
  int   b;

  a = 0;
  b = 0;
  word = count_word(my_strdup(str));
  tab = (char **) malloc(sizeof(char *) * word);
  while (str[a] != '\0' && word > 0)
    {
      if ((str[a] >= 'a' && str[a] <= 'z') || (str[a] >= 'A' && str[a] <= 'Z')
 || (str[a] >= '0' && str[a] <= '9'))
        {
          tab[b] = my_strdup(str + a);
          tab[b][count_c(str, &a)] = '\0';
          b++;
          word++;
        }
      a++;
    }
  tab[count_word(my_strdup(str))] = 0;
  return (tab);
}
