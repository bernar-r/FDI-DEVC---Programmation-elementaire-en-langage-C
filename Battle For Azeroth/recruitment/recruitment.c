/*
** recruitment.c for recruitment.c in /home/tang/Battle_For_Azeroth/bernar_r/recruitment
** 
** Made by TANG gustin
** Login   <tang_g@etna-alternance.net>
** 
** Started on  Fri Oct  7 02:38:48 2016 TANG gustin
** Last update Fri Oct  7 11:06:25 2016 TANG gustin
*/

#include "my.h"
#include "my_hero.h"
#include <stdlib.h>

t_soldat	*get_soldat();

void	test()
{
  my_putstr("Cette commande n'existe pas!!");
}


void	my_return()
{
  my_putstr("Good bye ;)");
}

void	my_leave()
{
  my_putstr("Vous avez fuit le combat");
}

void		my_recruitment(t_hero *hero)
{
  int		rnd;
  t_army	*army;
  t_soldat	*soldat;
  
  srand(time(NULL));
  rnd = rand() % 3;
  if (rnd == 1)
    {
      if (army = malloc(sizeof(t_army)))
	{
	  army->soldat = get_soldat();
	  army->next = hero->army;
	  hero->army = army;
	}
      recap_soldat(army->soldat);
    }
  else
    {
      my_putstr("Le soldat est furieux et vous charge, vous avez fuit");
    }
}
