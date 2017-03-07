/*
** main.c for CardBoard Pulley in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Tue Jan 17 04:40:29 2017 BERNARD Robin
** Last update Tue Jan 17 04:40:30 2017 BERNARD Robin
*/

#include "defs.h"

int   main (int argc, char **argv)
{
  t_room *room;
  t_room *tmp;
  t_input *inputs;
  t_player *player;
  t_player *  ennemy;
  t_friend *friend;
  int nb;
  int turn;
  int index;

  index = 0;
  turn = 1;
  player = NULL;
  ennemy = NULL;
  friend = NULL;
  if (argc != 1 || argv[1])
    {
      my_putstr("Aucun parametre n'est autorise\n");
      return 0;
    }

  room = init_rooms();
  head();
  
  player = malloc(sizeof(*player));
  friend = malloc(sizeof(*friend));
  friend->pos = malloc(sizeof(t_pos));
  friend->pos->x = -1;
  friend->speed = 2;
  friend->max_moves = 0;
  find_friend(*room, friend->pos);
  friend->main_pos = malloc(sizeof(t_pos *) * 500);
  ennemy = malloc(sizeof(*ennemy));

  init_player(player, room->begin_pos, 'O', 1);
  init_player(ennemy, NULL, '?', 2);
  
  inputs = malloc(sizeof(*inputs));
  ennemy->pos = malloc(sizeof(t_pos));
  while (room != NULL)
    {
      nb = find_ennemy(*room, ennemy->pos);
      if (nb)
	{
	  if (ennemy->form != '?')
	    room->map[ennemy->pos->y][ennemy->pos->x] = ennemy->form;
	  else
	    ennemy->form = room->map[ennemy->pos->y][ennemy->pos->x];
	}
      if (player->lied && player->form != 'i')
	player->form = '_';      
      room->map[player->pos->y][player->pos->x] = player->form;
      draw_room(*room, player, ennemy);
      if (check_loss(room, player, ennemy->pos, nb))
	{
	  if (player->master_key == 1)
	    {
	      my_putstr("You'll go straight to JAIL\n");
	      room->map[player->pos->y][player->pos->x] = ' ';
	      tmp = room;
	      room = load_jail();
	      room->next = tmp;
	      player->key = 0;
	      init_player(player, room->begin_pos, 'O', 1);
	      draw_room(*room, player, ennemy);
	    }
	  else
	    {
	      my_putstr("You loooooooooose\n");
	      return 0;
	    }
	}
      my_putstr("Your move : ");
      if (get_input(inputs))
	{
	  if (check_win(room, inputs, player))
	    {
 	      if (friend->pos->x != -1 && player->friend == 0 && player->master_key == 0)
		my_putstr("You must save your friend first\n");
	      else
		{
		  my_putstr("To be continued...\n");
		  room = room->next;
		  if (room != NULL)
		    {
		      free_friend_pos(friend);
		      find_friend(*room, friend->pos);
		      init_player(player, room->begin_pos, 'O', 1);
		      friend->max_moves = 0;
		      index = 0;
		    }
		  else
		    return 0;
		}
	    }
	  else
	    {
	      if(!collision(room, inputs, player, friend))
		return 0;
	    }
	}
      if (friend->max_moves == 1)
	turn = 1;
      if (player->friend && index < friend->max_moves &&  turn % friend->speed == 0)
	{
	  if (room->map[friend->main_pos[index]->y][friend->main_pos[index]->x] == ' ')
	    {
	      room->map[friend->main_pos[index]->y][friend->main_pos[index]->x] = '!';
	      room->map[friend->pos->y][friend->pos->x] = ' ';
	      friend->pos->x = friend->main_pos[index]->x;
	      friend->pos->y = friend->main_pos[index]->y;
	      index++;
	    }
	  else
	    return 0;
	  if (room->map[3][friend->main_pos[index - 1]->x + 1] == 'R' && friend->main_pos[index]->y == 3)
	    {
	      player->master_key = 1;
	      player->friend = 0;
	      room->map[friend->main_pos[index - 1]->y][friend->main_pos[index - 1]->x] = ' ';
	      friend->max_moves = 0;
	      my_putstr("Rooster is safe and gave you the master key so go and escape from this hell\n");
	    }
	}
      if ((nb > 0) && (turn % ennemy->speed == 0))
	move_ennemy(room, ennemy);
      turn++;
    }
  return 0;
} 

void free_friend_pos(t_friend *friend)
{
  int i;

  i = 0;
  while(i < friend->max_moves)
  {
    free(friend->main_pos[i]);
    i++;
  }
}

t_room *load_jail()
{
  t_room *room;
  t_pos *exits;

  exits = malloc(sizeof(t_pos));
  exits[0].x = 12;
  exits[0].y = 8;
  room = load_room("maps/holding_cells3.map");
  room->begin_pos = malloc(sizeof(t_pos));
  room->begin_pos->x = 8;
  room->begin_pos->y = 1;
  room->nb_exits = 1;
  room->exits = exits;

  return room;
}
