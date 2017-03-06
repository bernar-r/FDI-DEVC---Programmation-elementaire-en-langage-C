/*
** on_battle.c for on_battle.c in /home/tang/Colle/tang_g/battle
** 
** Made by TANG gustin
** Login   <tang_g@etna-alternance.net>
** 
** Started on  Fri Oct  7 11:42:54 2016 TANG gustin
** Last update Fri Oct  7 11:53:05 2016 TANG gustin
*/

#include "my.h"
#include "my_hero.h"

typedef struct  s_func
{
  char          *flags;
  void          (*funct)();
}               t_func;

t_func          *init2()
{
  t_func        *fc;

  if ((fc = malloc(sizeof(t_func) * 3)))
    {
      fc[0].flags = "army";
      fc[0].funct = &listarmy;
      fc[1].flags = "Quit";
      fc[1].funct = &my_return;
      fc[2].flags = NULL;
      fc[2].funct = &test;
    }
  return (fc);
}

int             on_battle(t_hero *hero)
{
  char          *command;
  int           n;
  t_func        *fc;

  n = 0;
  fc = init2();
  command = "pokemon";
  while (my_strcmp(command, "Quit") != 0)
    {
      my_putstr("Votre tour IBB> ");
      command = readline();
      while (fc[n].flags != NULL && my_strcmp(fc[n].flags, command) != 0)
	{
	  n = n + 1;
	}
      fc[n].funct(hero);
      n = 0;
      my_putchar('\n');
    }
  return (0);
}
