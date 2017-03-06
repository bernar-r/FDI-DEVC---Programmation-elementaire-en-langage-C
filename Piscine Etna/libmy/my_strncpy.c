/*
** my_strncpy.c for my_strncpy in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Thu Sep 29 16:46:39 2016 BERNARD Robin
** Last update Thu Sep 29 23:47:56 2016 BERNARD Robin
*/

int	my_strlen(char tab[]);

char	*my_strncpy(char *dest, char *src, int n)
{
  int	a;
  int	b;

  b = my_strlen(src);
  a = 0;
  while((a < b) && (a < n))
    {
      dest[a] = src[a];
      a++;
    }
  while (b < n)
    {
      dest[b] = '\0';
      b++;
    }
  return (dest);
}
