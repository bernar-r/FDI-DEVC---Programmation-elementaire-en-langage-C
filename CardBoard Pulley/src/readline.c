/*
** readline.c for CardBoard Pulley in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Tue Jan 17 04:40:48 2017 BERNARD Robin
** Last update Tue Jan 17 04:40:49 2017 BERNARD Robin
*/


#include "defs.h"

char		  *readline()
{
  size_t	ret;
  char		*buff;

  if ((buff = malloc(sizeof(*buff) * (50 + 1))) == NULL)
  {
    return (NULL);
  }
  if ((ret = read(0, buff, 50)) > 1)
  {
    buff[ret - 1] = '\0';
    return (buff);
  }
  buff[0] = '\0';
  return (buff);
}
