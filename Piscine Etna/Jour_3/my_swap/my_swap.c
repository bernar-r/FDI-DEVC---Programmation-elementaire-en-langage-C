/*
** my_swap.c for my_swap in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Wed Sep 28 14:07:33 2016 BERNARD Robin
** Last update Wed Sep 28 14:15:06 2016 BERNARD Robin
*/
void my_swap(int *a, int *b)
{
  int c;
  int d;

  c = *a;
  d = *b;
  *a = d;
  *b = c;
}
