/*
** my_strcat.c for my_strcat in /home/halli/devC04/halli_a/my_strcat
** 
** Made by HALLI Assalas
** Login   <halli_a@etna-alternance.net>
** 
** Started on  Wed Sep 28 15:43:54 2016 HALLI Assalas
** Last update Thu Sep 29 17:28:45 2016 HALLI Assalas
*/

int	my_strlen(char *str);

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	len;

  i = 0;
  len = my_strlen(dest);
  while (src[i] != '\0')
    {
      dest[len + i] = src[i];
      i++;
    }
  dest[len + i] = '\0';
  return (dest);
}
