/*
** my_putstr.c for my_putstr in /home/halli/devC03/halli_a/my_putstr
** 
** Made by HALLI Assalas
** Login   <halli_a@etna-alternance.net>
** 
** Started on  Tue Sep 27 23:25:22 2016 HALLI Assalas
** Last update Thu Sep 29 18:09:21 2016 HALLI Assalas
*/

void	my_putchar(char c);

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (*(str + i) != '\0' && str != 0)
    {
      my_putchar(*(str + i));
      i++;
    }
}
