/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/halli/devC07/halli_a/my_str_to_wordtab
** 
** Made by HALLI Assalas
** Login   <halli_a@etna-alternance.net>
** 
** Started on  Mon Oct  3 10:24:07 2016 HALLI Assalas
** Last update Tue Oct  4 22:12:35 2016 HALLI Assalas
*/

#include <stdlib.h>

int	str_to_nb_word(char *str);
int	nb_char(char *beg);
void	my_strncpy(char *dest, char *src, int n);
void	inita(int *a, int *b);

char	**my_str_to_wordtab(char *str)
{
  char	**my_str;
  int	i;
  int	j;

  inita(&i, &j);
  if ((my_str = malloc((str_to_nb_word(str) + 1) * sizeof(*my_str))))
    {
      while (str[i] != '\0')
	{
	  if ((str[i] >= 48 && str[i] <= 57) || (str[i] >= 65 && str[i] <= 90)
	      || (str[i] >= 97 && str[i] <= 122))
	    {
	      if ((my_str[j] = malloc((nb_char(&str[i]) + 1) * sizeof(**my_str))))
		{
		  my_strncpy(my_str[j], &str[i], nb_char(&str[i]));
		  j++;
		  i += nb_char(&str[i]);
		}
	    }
	  else
	    i++;
	}
      my_str[str_to_nb_word(str) + 1] = 0;
    }
  return (my_str);
}

int	str_to_nb_word(char *str)
{
  int	i;
  int	nb;

  i = 0;
  nb = 1;
  while (str[i] != '\0')
    {
      if ((str[i] >= 48 && str[i] <= 57) || (str[i] >= 65 && str[i] <= 90)
	  || (str[i] >= 97 && str[i] <= 122))
	{
	  if (!((str[i + 1] >= 48 && str[i + 1] <= 57)
		|| (str[i + 1] >= 65 && str[i + 1] <= 90)
		|| (str[i + 1] >= 97 && str[i + 1] <= 122)))
	    {
	      nb++;
	    }
	}
      i++;
    }
  return (nb);
}

int	nb_char(char *beg)
{
  int	i;

  i = 0;
  while ((beg[i] >= 48 && beg[i] <= 57) || (beg[i] >= 65 && beg[i] <= 90)
	|| (beg[i] >= 97 && beg[i] <= 122))
    {
      i++;
    }
  return (i);
}

void	inita(int *a, int *b)
{
  *a = 0;
  *b = 0;
}
