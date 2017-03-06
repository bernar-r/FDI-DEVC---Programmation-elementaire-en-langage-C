/*
** my_strlen.c for my_strlen in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Wed Sep 28 12:27:41 2016 BERNARD Robin
** Last update Wed Sep 28 14:04:40 2016 BERNARD Robin
*/
int	my_strlen(char *str)
{
  int	a;

  a = 0;
  while (*(str + a) != '\0')
    {
      a++;
    }
  return (a);
}
