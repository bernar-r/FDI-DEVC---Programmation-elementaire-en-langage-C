/*
** recap_soldat.c for recap_soldat.c in /home/tang/Colle/tang_g/recruitment
** 
** Made by TANG gustin
** Login   <tang_g@etna-alternance.net>
** 
** Started on  Fri Oct  7 08:00:22 2016 TANG gustin
** Last update Fri Oct  7 08:43:32 2016 TANG gustin
*/

#include "my.h"
#include "my_hero.h"

void	recap_soldat(t_soldat *soldat)
{
  my_putstr("Vous aves recrutez :");
  my_putstr(soldat->name);
  my_putchar('\n');
  my_putstr("lvl :");
  my_put_nbr(soldat->lvl);
  my_putchar('\n');
  my_putstr("pv :");
  my_put_nbr(soldat->pv);
  my_putchar('\n');
  my_putstr("pvmax :");
  my_put_nbr(soldat->pvmax);
  my_putchar('\n');
  my_putstr("pm :");
  my_put_nbr(soldat->pm);
  my_putchar('\n');
  my_putstr("pvmax :");
  my_put_nbr(soldat->pmmax);
}
