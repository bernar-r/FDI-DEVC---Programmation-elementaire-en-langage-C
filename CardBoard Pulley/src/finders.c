/*
** room.c for CardBoard Pulley in /home/robinos/Documents/halli_a/src
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Tue Jan 17 04:39:14 2017 BERNARD Robin
** Last update Tue Jan 17 04:39:16 2017 BERNARD Robin
*/
#include "defs.h"

int  find_ennemy(t_room room, t_pos *res)
{
  int i;
  int j;
  int nb;
  t_pos tmp[10];

  i = 0;
  nb = 0;
  while (i < room.heigth)
    {
      j = 0;
      while (room.map[i][j] != '\0')
	{
	  if ((room.map[i][j] == '>') || (room.map[i][j] == '<') ||
	      (room.map[i][j] == 'V') || (room.map[i][j] == '^'))
	    {
	      tmp[nb].x = j;
	      tmp[nb].y = i;
	      nb++;
	    }
	  j++;
	}
      i++;
    }
    if (nb)
    { 
      i = 0;
      while (i < nb)
        {
         res->x = tmp[i].x;
         res->y = tmp[i].y;
         i++;
        }
    }
    return nb;
}

void  find_friend(t_room room, t_pos *res)
{
  int i;
  int j;

  i = 0;
  while (i < room.heigth)
    {
      j = 0;
      while (room.map[i][j] != '\0')
  {
    if (room.map[i][j] == '!')
      {
        res->x = j;
        res->y = i;
      }
    j++;
  }
      i++;
    }
}

void    init_player(t_player *player, t_pos *pos, char form, int speed)
{
  if (pos != NULL)
    {
      player->pos = malloc(sizeof(t_pos));
      player->pos->x = pos->x;
      player->pos->y = pos->y;
    }
  else
    player->pos = NULL;
  player->form = form;
  player->lied = 0;
  player->friend = 0;
  if (!player->master_key)
    player->master_key = 0;
  if (!player->key)
    player->key = 0;
  player->speed = speed;
}

int check_win(t_room *room, t_input *inputs,t_player *player)
{
  int i;
  t_pos *player_pos;

  player_pos = player->pos;
  i = 0;
  while (i < room->nb_exits)
    {
      if ((player_pos->x == room->exits[i].x) && (player_pos->y == room->exits[i].y))
	{
	  if (player_pos->y == 0 && inputs->input[UP] == 1)
	    return 1;
	  else if (player_pos->y == room->heigth - 1 && inputs->input[DOWN] == 1)
	    return 1;
	  else if (player_pos->x == 0 && inputs->input[LEFT] == 1)
	    return 1;
	  else if (player_pos->x != 0 && player_pos->y == room->heigth &&
		   player_pos->y == 0 && inputs->input[RIGHT] == 1)
	    return 1;
	}
      i++;
    }
  if (room->map[player->pos->y - 1][player->pos->x] == 'Y' && player->master_key == 1)
    return 1;
  return 0;
}

int check_loss(t_room *room, t_player *player, t_pos *enemies, int nb)
{
  int i;

  i = 0;
  if (nb)
  {
    i = check_ennemy_right(room, player, enemies) +
        check_ennemy_left(room, player, enemies) +
        check_ennemy_up(room, player, enemies) +
        check_ennemy_down(room, player, enemies) ;
        if (i)
          return 1;
        else
          return 0;
  }
  return 0;
}

int check_ennemy_right(t_room *room, t_player *player, t_pos *enemies)
{
      if ((room->map[enemies->y][enemies->x] == '<') &&
        (room->map[enemies->y][enemies->x + 1] != 'X') &&
        (room->map[enemies->y][enemies->x + 1] != 'x') &&
        ((player->pos->x == enemies->x + 1 && player->pos->y == enemies->y) ||
        (player->pos->x == enemies->x + 2 && player->pos->y == enemies->y) ||
        (player->pos->x == enemies->x + 2 && player->pos->y == enemies->y + 1) ||

        (player->pos->x == enemies->x + 2 && player->pos->y == enemies->y - 1)) &&
        (room->map[enemies->y][enemies->x + 1] != 'H' || player->form != '_'))
        return 1;
      else
        return 0;
}


int check_ennemy_left(t_room *room, t_player *player, t_pos *enemies)
{
       if ((room->map[enemies->y][enemies->x] == '>') &&
        (room->map[enemies->y][enemies->x - 1] != 'X') &&
        (room->map[enemies->y][enemies->x - 1] != 'x') &&
        ((player->pos->x == enemies->x - 1 && player->pos->y == enemies->y) ||
        (player->pos->x == enemies->x - 2 && player->pos->y == enemies->y) ||
        (player->pos->x == enemies->x - 2 && player->pos->y == enemies->y + 1) ||
        (player->pos->x == enemies->x - 2 && player->pos->y == enemies->y - 1)) &&
        (room->map[enemies->y][enemies->x - 1] != 'H' || player->form != '_'))
        return 1;
      else
        return 0;
}


int 	check_ennemy_up(t_room *room, t_player *player, t_pos *enemies)
{

     if ((room->map[enemies->y][enemies->x] == 'V') &&
        (room->map[enemies->y - 1][enemies->x] != 'X') &&
        (room->map[enemies->y - 1][enemies->x] != 'x') &&
        ((player->pos->x == enemies->x && player->pos->y == enemies->y - 1) ||
        (player->pos->x == enemies->x && player->pos->y == enemies->y - 2) ||
        (player->pos->x == enemies->x + 1 && player->pos->y == enemies->y - 2) ||
        (player->pos->x == enemies->x - 1 && player->pos->y == enemies->y - 2)) &&
        (room->map[enemies->y - 1][enemies->x] != 'H' || player->form != '_'))
      return 1;
    else
      return 0;
  }


int 	check_ennemy_down(t_room *room, t_player *player, t_pos *enemies)
{

     if ((room->map[enemies->y][enemies->x] == '^') &&
        (room->map[enemies->y + 1][enemies->x] != 'X') &&
        (room->map[enemies->y + 1][enemies->x] != 'x') &&
        ((player->pos->x == enemies->x && player->pos->y == enemies->y + 1) ||
        (player->pos->x == enemies->x && player->pos->y == enemies->y + 2) ||
        (player->pos->x == enemies->x + 1 && player->pos->y == enemies->y + 2) ||
        (player->pos->x == enemies->x - 1 && player->pos->y == enemies->y + 2)) &&
        (room->map[enemies->y + 1][enemies->x] != 'H' || player->form != '_'))
      return 1;
    else
      return 0;
}
