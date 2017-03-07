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

char  *open_room(char *path)
{
  int 	 file;
  int 	 file_read;
  char 	 *tmp;

  tmp = malloc(sizeof(char) * 600);
  file = open(path ,O_RDONLY);
  if ((file_read = read(file, tmp, 600)))
    tmp[file_read] = '\0';

  
  return tmp;
}

int  room_heigth(char *path)
{
  char *map ;
  int i;
  int heigth;
  
  i = 0;
  heigth = 0;
  map = malloc(sizeof(char) * my_strlen(open_room(path)));
  map = open_room(path);
  while (map[i] != '\0')
    {
      if (map[i] == '\n')
	heigth++;
      i++;
    }
  free(map);
  return heigth;
}


t_room *load_room(char *path)
{
  char *map ;
  int i;
  int tmp;
  t_room *res;
  int j;
  int index;
  char tmp_str[20];
  
  i = 0;
  j = 0;
  tmp = 0;
  index = 0;
  map = open_room(path);
  res = malloc(sizeof(*res));
  res->heigth = room_heigth(path);
  res->map = malloc(sizeof(char *) * res->heigth);
  while (map[i] != '\0')
    {
      if (map[i] == '\n')
	{
	  res->map[j] = malloc(sizeof(char) * (i - tmp));
	  my_strncpy(res->map[j], tmp_str, i - tmp);
	  (res->map)[j][index] = '\0';
	  index = 0;
	  tmp = i;
	  j++;
	}
      else
	{
	  tmp_str[index] = map[i];
	  index++;
	}
      i++;
    }
  free(map);
  return res;
}

t_room *init_rooms()
{
  t_room *room;
  t_room *first;
  t_pos *exits;
  t_room *tmp;
  //-------------------------------------------------
  exits = malloc(sizeof(t_pos));
  exits[0].x = 8;
  exits[0].y = 0;
  room = load_room("maps/cargo_dock.map");
  room->begin_pos = malloc(sizeof(t_pos));
  room->begin_pos->x = 2;
  room->begin_pos->y = 9;
  room->nb_exits = 1;
  room->exits = exits;
  first = room;
  //-------------------------------------------------
  exits = malloc(sizeof(t_pos) * 2);
  exits[0].x = 11;
  exits[0].y = 0;
  exits[1].x = 19;
  exits[1].y = 0;
    
  room = load_room("maps/holding_cells.map");
  room->begin_pos = malloc(sizeof(t_pos));
  room->begin_pos->x = 0;
  room->begin_pos->y = 3;
  room->nb_exits = 2;
  room->exits = exits;
  tmp = room;

  first->next = room;
  //---------------------------------------------------
  exits = malloc(sizeof(t_pos));
  exits[0].x = 17;
  exits[0].y = 0;
    
  room = load_room("maps/holding_cells2.map");
  room->begin_pos = malloc(sizeof(t_pos));
  room->begin_pos->x = 0;
  room->begin_pos->y = 6;
  room->nb_exits = 1;
  room->exits = exits;

  tmp->next = room;
  tmp = room;
   //---------------------------------------------------
  exits = malloc(sizeof(t_pos));
  exits[0].x = 5;
  exits[0].y = 0;
    
  room = load_room("maps/warehouse.map");
  room->begin_pos = malloc(sizeof(t_pos));
  room->begin_pos->x = 8;
  room->begin_pos->y = 8;
  room->nb_exits = 1;
  room->exits = exits;

  tmp->next = room;
  tmp = room;


   //---------------------------------------------------
  exits = malloc(sizeof(t_pos));
  exits[0].x = 5;
  exits[0].y = 0;
    
  room = load_room("maps/warehouse3.map");
  room->begin_pos = malloc(sizeof(t_pos));
  room->begin_pos->x = 8;
  room->begin_pos->y = 9;
  room->nb_exits = 1;
  room->exits = exits;

  tmp->next = room;
  room->next = NULL;
  tmp = room;

  return first;
}
