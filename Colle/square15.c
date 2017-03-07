/*
** square15.c for square15 in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Fri Sep 30 15:36:00 2016 BERNARD Robin
** Last update Fri Sep 30 15:38:56 2016 BERNARD Robin
*/
void my_putchar(char c);

void square15(int y)
{
  while (y != 0)
    {
      my_putchar('*');
      my_putchar('\n');
      y--;
    }
}
