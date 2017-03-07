/*
** structs.h for CardBoard Pulley in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Tue Jan 17 04:41:03 2017 BERNARD Robin
** Last update Tue Jan 17 04:41:04 2017 BERNARD Robin
*/

#ifndef _STRUCTS_H_
#define _STRUCTS_H_

typedef struct  s_pos
{
  int x;
  int y;
}               t_pos;


typedef struct  s_player
{
  t_pos         *pos;
  char		      form;
  int           lied;
  int           key;
  int           master_key;
  int		        friend;
  int           speed;
}               t_player;

typedef struct  s_friend
{
  t_pos         *pos;
  t_pos		**main_pos;
  int		max_moves;
  int           speed;
}               t_friend;

typedef struct   s_room
{
  char           **map;
  int            heigth;
  int            nb_exits;
  t_pos          *exits;
  t_pos          *begin_pos;
  struct s_room  *next;
}                t_room;

typedef struct  s_input
{
  int           input[7];
}               t_input;

#endif
