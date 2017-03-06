/*
** my_strlen.c for my_strlen.c in /home/tang/Libmy/tang_g/libmy_01
** 
** Made by TANG gustin
** Login   <tang_g@etna-alternance.net>
** 
** Started on  Sat Oct  1 08:13:48 2016 TANG gustin
** Last update Sat Oct  1 08:14:04 2016 TANG gustin
*/

int	my_strlen(char *str)
{
  int i;

  i = 0;
  while (*str != '\0')
    {
      i = i + 1;
      str = str + 1;
    }
  return (i);
}
