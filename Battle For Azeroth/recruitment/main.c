/*
** main.c for main.c in /home/tang/Battle_For_Azeroth/bernar_r/recruitment
** 
** Made by TANG gustin
** Login   <tang_g@etna-alternance.net>
** 
** Started on  Thu Oct  6 19:42:11 2016 TANG gustin
** Last update Fri Oct  7 11:05:57 2016 TANG gustin
*/

#include "my.h"
#include "my_hero.h"

typedef struct	s_func
{
  char		*flags;
  void		(*funct)();  
}		t_func;

t_func		*init()
{
  t_func	*fc;
  
  if ((fc = malloc(sizeof(t_func) * 4)))
    {
      fc[0].flags = "recruitment";
      fc[0].funct = &my_recruitment;
      fc[1].flags = "leave";
      fc[1].funct = &my_leave;
      fc[2].flags = "Quit";
      fc[2].funct = &my_return;
      fc[3].flags = NULL;
      fc[3].funct = &test;
    }
  return (fc);
}

int		start_game(t_hero *hero)
{
  char		*command;
  int		n;
  t_func	*fc;
  
  n = 0;
  fc = init();
  command = "pokemon";
  while (my_strcmp(command, "Quit") != 0)
    {
      my_putstr("Votre tour> ");
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

int		main(int ac, char **av)
{
  t_hero	hero;
  
  if (ac == 3)
    {
      if (my_strcmp(av[1], "-n") == 0)
	{
	  hero.name = av[2];
	  hero.army = NULL;
	  start_game(&hero);
	}
      else
	{
	  my_putstr("ERREUR HEROS INCONNU");
	  my_putchar('\n');
	}
    }
  else
    {
      my_putstr("Achetes toi des doigts!!!");
      my_putchar('\n');
    }
  return (0);
}
