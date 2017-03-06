#include "my_hero.h"
#include "my.h"

void		listarmy(t_hero *hero)
{
  t_army	*army;
  t_soldat	*soldat;

  while (soldat != NULL)
    {
      recap_soldat(army->soldat);
      my_putchar('\n');
      soldat = army->next;
    }
}
