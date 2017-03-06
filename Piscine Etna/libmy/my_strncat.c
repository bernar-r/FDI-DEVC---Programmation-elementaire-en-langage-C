/*
** my_strncat.c for my_strncat in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Thu Sep 29 23:56:23 2016 BERNARD Robin
** Last update Sat Oct  1 21:36:03 2016 BERNARD Robin
*/

int	my_strlen(char *str);

char	*my_strncat(char *dest, char *src, int n)
{
  int	a;
  int	b;

  b = my_strlen(dest);
  a = 0;
  while (src[a] != src[n])
    {
      dest[b] = src[a];
      a++;
      b++;
    }
  dest[b] = '\0';
  return (dest);
}
