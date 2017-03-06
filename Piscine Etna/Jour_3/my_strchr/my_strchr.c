/*
** my_strchr.c for my_strchr in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Wed Sep 28 13:04:33 2016 BERNARD Robin
** Last update Thu Sep 29 00:18:05 2016 BERNARD Robin
*/
char*	my_strchr(char *str, int c)
{
  int	a;
  
  a = 0;
  while (*(str + a) != '\0')
    {
      if (*(str + a) == c)
	{
	  return ((str + a));
	}
      a++;
    }
  return ((str + a));
}
