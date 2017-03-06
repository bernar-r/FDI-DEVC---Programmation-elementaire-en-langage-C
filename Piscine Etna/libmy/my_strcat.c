/*
** my_strcat.c for my_strcat in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Thu Sep 29 21:47:09 2016 BERNARD Robin
** Last update Thu Sep 29 23:45:41 2016 BERNARD Robin
*/
int	my_strlen(char *str);

char	*my_strcat(char *dest, char *src)
{
  int	a;
  int	b;

  b = my_strlen(dest);
  a = 0;
  while(src[a] != '\0')
    {
      dest[b] = src[a];
      a++;
      b++;
    }
  dest[b] = '\0';
  return (dest);
}
