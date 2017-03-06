/*
** my_isneg.c for my_isneg in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Tue Sep 27 17:24:23 2016 BERNARD Robin
** Last update Sat Oct  1 21:34:39 2016 BERNARD Robin
*/
int	my_isneg(int n)
{
  if (( n < 0))
    {
      n = 1;
    }
  else if (( n >= 0 ))
    {
      n = 0;
    }
  return (n);
}
