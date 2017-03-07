/*
** my_swap.c for my_swap in /home/halli/devC03/halli_a/my_swap
** 
** Made by HALLI Assalas
** Login   <halli_a@etna-alternance.net>
** 
** Started on  Wed Sep 28 00:28:18 2016 HALLI Assalas
** Last update Wed Sep 28 00:49:12 2016 HALLI Assalas
*/

void	my_swap(int *a, int *b)
{
  int	c;

  c = *a;
  *a = *b;
  *b = c;
}
