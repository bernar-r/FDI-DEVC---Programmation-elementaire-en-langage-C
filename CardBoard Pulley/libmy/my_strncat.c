/*
** my_strncat.c for my_strncat in /home/halli/devC04/halli_a/my_strncat
** 
** Made by HALLI Assalas
** Login   <halli_a@etna-alternance.net>
** 
** Started on  Wed Sep 28 16:35:44 2016 HALLI Assalas
** Last update Thu Sep 29 17:29:08 2016 HALLI Assalas
*/

int	my_strlen(char *str);

char	*my_strncat(char *dest, char *src, int n)
{
  int	i;
  int	len;

  i = 0;
  len = my_strlen(dest);
  while (src[i] != '\0' && i < n)
    {
      dest[len + i] = src[i];
      i++;
    }
  dest[len + i] = '\0';
  return (dest);
}
