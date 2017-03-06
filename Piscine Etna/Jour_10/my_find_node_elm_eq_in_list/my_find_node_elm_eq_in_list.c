/*
** my_find_node_elm_eq_in_list.c for my_find_node_elm_eq_in_list in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Thu Oct  6 17:33:57 2016 BERNARD Robin
** Last update Thu Oct  6 18:04:09 2016 BERNARD Robin
*/

#include <stdlib.h>
#include "my_list.h"

void	*my_find_node_elm_eq_in_list(t_list *begin, void *data_ref, int (*cmp)())
{
  while (begin != 0)
    {
      if (cmp(begin->data, data_ref) == 0)
	{
	  return (begin);
	}
      begin = begin->next;
    }
  return (0);
}
