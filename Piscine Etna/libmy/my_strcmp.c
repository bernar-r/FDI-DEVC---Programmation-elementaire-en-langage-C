/*
** my_strcmp.c for my_strcmp in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Thu Sep 29 17:38:21 2016 BERNARD Robin
** Last update Sat Oct  1 21:36:46 2016 BERNARD Robin
*/

int	my_strcmp(char *s1, char *s2)
{
  int	a;

  a = 0;
  while ((s1[a] != '\0') || (s2[a] != '\0'))
    {
      if (s1[a] < s2[a])
	{
	  return (-1);
	}
      else if (s1[a] > s2[a])
	{
	  return (1);
	}
      a++;
    }
  return (0);
}
