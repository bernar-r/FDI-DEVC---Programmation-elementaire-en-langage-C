/*
** my_putchar.c for my_putchar in /home/halli/devC01/halli_a/my_putchar
** 
** Made by HALLI Assalas
** Login   <halli_a@etna-alternance.net>
** 
** Started on  Mon Sep 26 10:28:26 2016 HALLI Assalas
** Last update Mon Sep 26 12:53:33 2016 HALLI Assalas
*/

#include <unistd.h>

void   my_putchar(char c)
{
  write(1, &c, 1);
}
