/*
** my_params_in_list.c for my_params_in_list in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Wed Oct  5 13:11:45 2016 BERNARD Robin
** Last update Wed Oct  5 18:02:11 2016 BERNARD Robin
*/

#include <stdlib.h>
#include "my_list.h"

int		add_item(t_list **list, void *data)
{
  t_list	*node;

  node = malloc(sizeof(*node));
  node->data = data;
  node->next = *list;
  *list = node;
  return (0);
}

t_list		*my_params_in_list(int argc, char **argv)
{
  t_list	*list;
  int		a;

  list = NULL;
  a = 0;
  while (a < argc)
    {
      add_item(&list, argv[a]);
      a++;
    }
  return (list);
}
