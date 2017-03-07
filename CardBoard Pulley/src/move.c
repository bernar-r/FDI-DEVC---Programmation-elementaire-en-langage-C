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

void 	move(t_room *room, t_player *player, t_pos *to)
{
  t_pos *from = player->pos;
  if (room->map[to->y][to->x] == 'K')
    player->form = 'i';
  else
    player->form = 'I';

  if (room->map[from->y][from->x] == 'i' && player->key != 1)
      room->map[from->y][from->x] = 'K';
  else
    room->map[from->y][from->x] = ' ';
  from->x = to->x;
  from->y = to->y;
}

int    collision(t_room *room, t_input *inputs, t_player *player, t_friend *friend)
{
  t_pos *to;
  t_pos *player_pos;
  
  player_pos = player->pos;
  if ((to = read_move(room, inputs, *player_pos))) 
    {
      if ((room->map[to->y][to->x] == ' ') || (room->map[to->y][to->x] == 'K'))
	     {
	       move(room, player, to);
	       if (player->friend)
	         {
	           friend->main_pos[friend->max_moves] = malloc(sizeof(t_pos));
	           friend->main_pos[friend->max_moves] = to;
	           friend->max_moves++;
	         }
	     }
      else if (room->map[to->y][to->x] == '!')
        return 0;
    }
  else
  {
    if (inputs->input[PICK])
      pick_up(room, player, friend);
    else if (inputs->input[USE] && player->key == 1)
      use_key(room, player);
    else if (inputs->input[LIE])
      lie_down(player);
  }
  return 1;
}

t_pos *read_move(t_room *room, t_input *inputs, t_pos player_pos)
{
  t_pos *res;

  res = malloc(sizeof(*res));    
  res->x = player_pos.x + inputs->input[RIGHT] - inputs->input[LEFT];
  res->y = player_pos.y + inputs->input[DOWN] - inputs->input[UP];

  if ((room->map[res->y][res->x] == 'H') &&
      (room->map[player_pos.y][player_pos.x] == '_'))
    {
      res->x += inputs->input[RIGHT] - inputs->input[LEFT];
      res->y += inputs->input[DOWN] - inputs->input[UP];
    }

  if ((res->x == player_pos.x) && (res->y == player_pos.y))
    return 0;
  return res;
}

void pick_up(t_room *room, t_player *player, t_friend *friend)
{
  t_pos *player_pos;

  player_pos = player->pos;
  if (room->map[player_pos->y][player_pos->x] == 'i')
  {
    my_putstr("You get a key\n");
    player->key = 1;
  }
  else if ((player_pos->y + 2 < room->heigth) &&
	   (room->map[player_pos->y + 2][player_pos->x] == '<' ||
            room->map[player_pos->y + 2][player_pos->x] == '>' ||
            room->map[player_pos->y + 2][player_pos->x] == 'V' ||
            room->map[player_pos->y + 2][player_pos->x] == '^') &&
            player->master_key == 1)
  {
    player->key = 1;
my_putstr("You stole a key\n");
}

  if (room->map[player_pos->y][player_pos->x + 1] == '!')
    player->friend = 1;
  else if (room->map[player_pos->y][player_pos->x - 1] == '!')
    player->friend = 1;
  else if (room->map[player_pos->y + 1][player_pos->x] == '!')
    player->friend = 1;
  else if (room->map[player_pos->y - 1][player_pos->x] == '!')
    player->friend = 1;

  if (player->friend == 1)
    {
      my_putstr("Rooster Joined You Take care of him\n");
      friend->main_pos[0] = malloc(sizeof(t_pos));
      friend->main_pos[0]->x = player->pos->x;
      friend->main_pos[0]->y = player->pos->y;
      friend->max_moves = 1;
    }
}

void use_key(t_room *room, t_player *player)
{
  t_pos *player_pos;

  player_pos = player->pos;
  if (room->map[player_pos->y][player_pos->x + 1] == 'x')
    room->map[player_pos->y][player_pos->x + 1] = ' ';
  else if (room->map[player_pos->y][player_pos->x - 1] == 'x')
    room->map[player_pos->y][player_pos->x - 1] = ' ';
  else if (room->map[player_pos->y + 1][player_pos->x] == 'x')
    room->map[player_pos->y + 1][player_pos->x] = ' ';
  else if (room->map[player_pos->y - 1][player_pos->x] == 'x')
    room->map[player_pos->y - 1][player_pos->x] = ' ';
}

void lie_down(t_player *player)
{
  if (player->lied == 1)
    {
      player->lied = 0;
      player->form = 'I';
    }
  else
    {
      player->lied = 1;
      player->form = '_';
    }
}

void move_ennemy(t_room *room, t_player *ennemy)
{
  int rnd_value;
  char form[4];
  t_pos *to;
  
  srand(time(NULL));
  rnd_value = rand() % 2;
  if (rnd_value)
    {
      to = malloc(sizeof(*to));
      rnd_value = rand() % 2;
      to->x = ennemy->pos->x;
      to->y = ennemy->pos->y;
      if (rnd_value)
	{
	  rnd_value = (rand() % 3) - 1;
	  to->x += rnd_value;
	}
      else
	{
	  rnd_value = (rand() % 3) - 1;
	  to->y += rnd_value;
	}
      if (room->map[to->y][to->x] == ' ')
	{
	  room->map[to->y][to->x] = ennemy->form;
	  room->map[ennemy->pos->y][ennemy->pos->x] = ' ';
	  ennemy->pos->x = to->x;
	  ennemy->pos->y = to->y;
	}
    }
  else
    {
      form [0] = '>';
      form [1] = '<';
      form [2] = 'V';
      form [3] = '^';
      rnd_value = rand() % 4;
      ennemy->form = form[rnd_value];
    }
}
