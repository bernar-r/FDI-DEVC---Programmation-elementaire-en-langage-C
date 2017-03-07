/*
** my_strcpy.c for my_strcpy in /home/halli/devC04/halli_a/my_strcpy
** 
** Made by HALLI Assalas
** Login   <halli_a@etna-alternance.net>
** 
** Started on  Wed Sep 28 13:27:16 2016 HALLI Assalas
** Last update Thu Sep 29 01:10:48 2016 HALLI Assalas
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
