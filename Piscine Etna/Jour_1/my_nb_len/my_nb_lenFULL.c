/*
** my_neb_len.c for my_nb_len in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Tue Sep 27 19:54:40 2016 BERNARD Robin
** Last update Tue Sep 27 20:50:24 2016 BERNARD Robin
*/
#include <unistd.h>
int   my_nb_len(int n)
{
  if(n >= 1000000000) return 10;
  if(n >= 100000000) return 9;
  if(n >= 10000000) return 8;
  if(n >= 1000000) return 7;
  if(n >= 100000) return 6;
  if(n >= 10000) return 5;
  if(n >= 1000) return 4;
  if(n >= 100) return 3;
  if(n >= 10) return 2;
  if(n >= -10) return 1;
  if(n >= -100) return 2;
  if(n >= -1000) return 3;
  if(n >= -10000) return 4;
  if(n >= -100000) return 5;
  if(n >= -1000000) return 6;
  if(n >= -10000000) return 7;
  if(n >= -100000000) return 8;
  if(n >= -1000000000) return 9;
  if(n >= -10000000000) return 10;
  return (1);  
}
