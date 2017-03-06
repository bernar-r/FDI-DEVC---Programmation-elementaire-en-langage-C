/*
** my_strcpy.c for my_strcpy in /home/robinos/Documents/jour4/bernar_r/my_strcpy
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Thu Sep 29 13:40:32 2016 BERNARD Robin
** Last update Sat Oct  1 21:35:43 2016 BERNARD Robin
*/

char	*my_strcpy(char *dest, char *src)
{
  int	a;

  a = 0;
  while (src[a] != '\0')
    {
      dest[a] = src[a];
      a++;
    }
  dest[a] = '\0';
  return (dest);
}
