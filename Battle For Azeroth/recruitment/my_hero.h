/*
** my_hero.h for my_hero.h in /home/tang/Battle_For_Azeroth/bernar_r/recruitment
** 
** Made by TANG gustin
** Login   <tang_g@etna-alternance.net>
** 
** Started on  Thu Oct  6 20:06:28 2016 TANG gustin
** Last update Fri Oct  7 05:51:57 2016 TANG gustin
*/

#ifndef MY_HERO
#define MY_HERO

typedef struct  s_soldat
{
  char		*name;
  int           lvl;
  int           pv;
  int           pvmax;
  int           pm;
  int           pmmax;
}               t_soldat;

typedef struct	s_army
{
  t_soldat	*soldat;
  struct s_army	*next;
}		t_army;

typedef struct my_hero
{
  char 		*name;
  t_army	*army;
}		t_hero;

#endif
