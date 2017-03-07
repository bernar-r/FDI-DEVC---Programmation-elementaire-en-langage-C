/*
** square.c for square in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Fri Sep 30 12:14:58 2016 BERNARD Robin
** Last update Fri Sep 30 15:48:10 2016 BERNARD Robin
*/

#include <unistd.h>

void my_putchar(char c);

void square15(int y);

void	premiereligne(int x)
{
  int	a;

  a = x;
  if (x == 2)
    {
      my_putchar('/');
      my_putchar('\\');
    }
  if (x > 2)
    {
      my_putchar('/');
      while (a != 2)
	{
	  my_putchar('*');
	  a--;
	}
      my_putchar('\\');
    }
}

void    entre_premiere_et_derniere(int x, int y)
{
  int	a;
  int	b;
  int	c;

  c = x;
  a = y;
  b = x;
  if (y > 2)
    {
      while (a - 2 != 0)
	{
	  my_putchar('\n');
	  my_putchar('*');
	  while (b - 2 != 0)
	    {
	      my_putchar(' ');
	      b--;
	    }
	  my_putchar('*');
	  a--;
	  b = c;
	}
    }
}

void	derniereligne(int x, int y)
{
  int	a;

  a = x;
  if (x == 2)
    {
      my_putchar('\\');
      my_putchar('/');
    }
  if ((x > 2) && (y >= 2))
    {
      my_putchar('\\');
      while (a != 2)
	{
	  my_putchar('*');
	  a--;
	}
      my_putchar('/');
    }
  my_putchar('\n');
}

void	premiereligne1(int x, int y)
{
  int a;

  a = x;
  if (x > 1)
    {
      while (a != 0)
	{
      my_putchar('*');
      a--;
	}
    }
  if (x == 1)
    {
  if (y != 0)
    {
      my_putchar('*');
      y--;
    }
    }
}

void	square(int x, int y)
{
    if ((x <= 0) || (y <= 0))
    {
      my_putchar('\n');
	}
    
  if ((x >= 2) && ( y >= 2))
    {
      premiereligne(x);
      entre_premiere_et_derniere(x, y);
      my_putchar('\n');
      derniereligne(x, y);
    }
  
  if ((x > 1) && (y == 1)) 
    {
      premiereligne1(x, y);
      entre_premiere_et_derniere(x, y);
      my_putchar('\n');
    }
  if ((x == 1) && (y > 0))
    {
      square15(y);
    }
}
