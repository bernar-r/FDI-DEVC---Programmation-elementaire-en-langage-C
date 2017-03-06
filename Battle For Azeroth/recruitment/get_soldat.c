#include <stdlib.h>
#include <string.h>

#define NBCREA 5

typedef struct  s_soldat
{
  char		*name;
  int           lvl;
  int           pv;
  int           pvmax;
  int           pm;
  int           pmmax;
}               t_soldat;

static t_soldat g_soldats[] =
  {
    {"Dracaufeu", 35, 600, 1400, 500, 1300},
    {"Carapuce", 5, 15, 130, 10, 20},
    {"Herbizarre", 20, 150, 250, 60, 140},
    {"Pikachu", 2, 10, 10, 20, 20},
    {"Noctali", 25, 160, 300, 70, 160},
    {NULL, 0, 0, 0, 0, 0}    
  };

t_soldat	*get_soldat()
{
  int		rnd;
  t_soldat	*soldat;
  time_t	t;

  srand((unsigned) time(&t));
  rnd = rand() % NBCREA;
  if ((soldat = malloc(sizeof(t_soldat))) == NULL)
    return (NULL);
  soldat->name = strdup(g_soldats[rnd].name);
  if (!soldat->name)
    return (NULL);
  soldat->lvl = g_soldats[rnd].lvl;
  soldat->pv = g_soldats[rnd].pv;
  soldat->pvmax = g_soldats[rnd].pvmax;
  soldat->pm = g_soldats[rnd].pm;
  soldat->pmmax = g_soldats[rnd].pmmax;
  return (soldat);
}
