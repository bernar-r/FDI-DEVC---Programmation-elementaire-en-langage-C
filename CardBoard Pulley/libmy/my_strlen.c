/*
** my_strlen.c for my_strlen in /home/halli/devC03/halli_a/my_strlen
** 
** Made by HALLI Assalas
** Login   <halli_a@etna-alternance.net>
** 
** Started on  Tue Sep 27 23:36:58 2016 HALLI Assalas
** Last update Tue Sep 27 23:45:01 2016 HALLI Assalas
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (*(str + i) != '\0')
    {
      i++;
    }
  return (i);
}
