/*
** my_strcmp.c for my_strcmp.c in /home/tang/Libmy/tang_g/libmy_01
** 
** Made by TANG gustin
** Login   <tang_g@etna-alternance.net>
** 
** Started on  Sat Oct  1 08:34:10 2016 TANG gustin
** Last update Sat Oct  1 15:13:07 2016 TANG gustin
*/

int	my_strcmp(char *s1, char *s2)
{
  int n;
  
  n = 0;
  while ((s1[n] == s2[n]) && (s1[n] != '\0') && (s2[n] != '\0'))
    {
      n = n + 1;
    }
  if (s1[n] - s2[n] > 0)
    {
      return (1);
    }
  else if (s1[n] - s2[n] == 0)
    {
      return (0);
    }
  else if (s1[n] - s2[n] < 0)
    {
      return (-1);
    }
  return (0);
}
