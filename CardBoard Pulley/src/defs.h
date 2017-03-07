/*
** defs.h for CardBoard Pulley in /home/robinos/Documents/halli_a/src
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Tue Jan 17 04:37:58 2017 BERNARD Robin
** Last update Tue Jan 17 04:38:05 2017 BERNARD Robin
*/
#ifndef  _DEFS_H_
#define  _DEFS_H_

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <time.h>

#include "libmy.h"
#include "structs.h"

enum {RIGHT, UP, LEFT, DOWN, LIE, PICK, USE};

char     *open_room(char *path);
t_room   *load_room(char *path);
t_room   *init_rooms();
void     draw_room(t_room room, t_player *player, t_player *ennemy);
char     *readline();
int      get_input(t_input *input);
int      room_heigth(char *path);
void     init_player(t_player *player, t_pos *pos, char form, int speed);
int 	 find_ennemy(t_room room, t_pos *res);
t_pos    *find_exit(t_room room);
void     init_inputs(t_input *inputs);
void     move(t_room *room, t_player *player, t_pos *to);
void 	 move_ennemy(t_room *room, t_player *ennemy);
int      collision(t_room *room, t_input *inputs, t_player *player, t_friend *friend);
t_pos    *read_move(t_room *room, t_input *inputs, t_pos player_pos);
int      check_win(t_room *room, t_input *inputs, t_player *player);
int 	 check_loss(t_room *room, t_player *player, t_pos *enemies, int nb);
void     pick_up(t_room *room, t_player *player, t_friend *friend);
void     use_key(t_room *room, t_player *player);
void     lie_down(t_player *player);
void 	 head();
char	 my_upcase(char c);
int 	 check_ennemy_right(t_room *room, t_player *player, t_pos *enemies);
int 	 check_ennemy_left(t_room *room, t_player *player, t_pos *enemies);
int 	 check_ennemy_up(t_room *room, t_player *player, t_pos *enemies);
int 	 check_ennemy_down(t_room *room, t_player *player, t_pos *enemies);
void     find_friend(t_room room, t_pos *res);
void     free_friend_pos(t_friend *friend);
t_room   *load_jail();
void 	 help();
#endif
