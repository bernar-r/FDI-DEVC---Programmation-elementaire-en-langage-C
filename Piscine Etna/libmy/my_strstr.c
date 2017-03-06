/*
** my_strstr.c for my_strstr in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Sat Oct  1 17:55:22 2016 BERNARD Robin
** Last update Sat Oct  1 22:04:49 2016 BERNARD Robin
*/
char *my_strstr(char *str, char *to_find)
{
  int	a;

  if (str[0] != '\0')
    {
      a = 0;
      while (to_find[a] != '\0')
	{
	  if (str[a] != to_find[a])
	    {
	    return (my_strstr(str + 1, to_find));
	    }
	  a++;
	}
      return (str);
    }
  else
    {
    return (0);
    }
}
