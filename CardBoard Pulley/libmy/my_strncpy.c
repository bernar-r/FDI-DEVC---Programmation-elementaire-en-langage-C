/*
** my_strncpy.c for my_strncpy in /home/halli/devC04/halli_a/my_strncpy
** 
** Made by HALLI Assalas
** Login   <halli_a@etna-alternance.net>
** 
** Started on  Wed Sep 28 13:48:20 2016 HALLI Assalas
** Last update Thu Sep 29 01:11:24 2016 HALLI Assalas
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (src[i] != '\0' && i < n)
    {
      dest[i] = src[i];
      i++;
    }
  while (i < n)
    {
      dest[i] = '\0';
      i++;
    }
  return (dest);
}
