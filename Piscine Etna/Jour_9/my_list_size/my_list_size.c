/*
** my_params_in_list.c for my_params_in_list in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Wed Oct  5 13:11:45 2016 BERNARD Robin
** Last update Wed Oct  5 20:03:46 2016 BERNARD Robin
*/

#include <stdlib.h>
#include "my_list.h"

int		my_list_size(t_list *begin)
{
  int		a;

  a = 0;
    while (begin != NULL)
    {
      begin = begin->next;
      a++;
    }
  return (a);
}
