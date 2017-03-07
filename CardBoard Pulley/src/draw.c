/*
** draw.c for CardBoard Pulley in /home/robinos/Documents/halli_a/src
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Tue Jan 17 04:38:21 2017 BERNARD Robin
** Last update Tue Jan 17 04:38:25 2017 BERNARD Robin
*/
#include "defs.h"

void 	 draw_room(t_room room, t_player *player, t_player *ennemy)
{
  int    i;
  int    j;

  i = 0;
  while (i < room.heigth)
    {
      j = 0;
      while (room.map[i][j] != '\0')
	{
      	  if ((player->pos->x == j && player->pos->y == i) || (room.map[i][j] == '!' && player->friend == 1))
	    {
	      my_putstr("\x1B[32m");
	  	      my_putchar(room.map[i][j]);
	      my_putstr("\x1B[34m");
	    }
	  else if (ennemy->pos->x == j && ennemy->pos->y == i)
	    {
	      my_putstr("\x1B[31m");
	      my_putchar(room.map[i][j]);
	      my_putstr("\x1B[0m");
	    }
	  else if (room.map[i][j] == 'H')
	    {
	      my_putstr("\x1B[36m");
	      my_putchar(room.map[i][j]);
	      my_putstr("\x1B[34m");
	    }
	  else if (room.map[i][j] == 'x')
	    {
	      my_putstr("\x1B[37m");
	      my_putchar(room.map[i][j]);
	      my_putstr("\x1B[34m");
	    }
	  else if (room.map[i][j] == 'K')
	    {
	      my_putstr("\x1B[33m");
	      my_putchar(room.map[i][j]);
	      my_putstr("\x1B[34m");
	    }
	  else if (room.map[i][j] == 'Y' || room.map[i][j] == 'R')
	    {
	      my_putstr("\x1B[35m");
	      my_putchar(room.map[i][j]);
	      my_putstr("\x1B[34m");
	    }
	  else
	    {
	      my_putstr("\x1B[34m");
	      my_putchar(room.map[i][j]);
	      my_putstr("\x1B[0m");
	    }	  
	  j++;
	}
      my_putchar('\n');
      i++;
    }
}

