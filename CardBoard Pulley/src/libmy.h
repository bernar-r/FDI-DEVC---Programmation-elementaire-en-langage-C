/*
** libmy.h for CardBoard Pulley in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Tue Jan 17 04:40:13 2017 BERNARD Robin
** Last update Tue Jan 17 04:40:15 2017 BERNARD Robin
*/

#ifndef LIBMY_H_
#define LIBMY_H_

void    my_putchar(char c);
int     my_isneg(int n);
void    my_put_nbr(int nb);
void    my_swap(int *a, int *b);
void    my_putstr(char *str);
int     my_strlen(char *str);
int     my_getnbr(char *str);
char    *my_strcpy(char *dest, char *src);
char    *my_strncpy(char *dest, char *src, int n);
int     my_strcmp(char *s1, char *s2);
int     my_strncmp(char *s1, char *s2, int n);
char    *my_strcat(char *str1, char *str2);
char    *my_strncat(char *str1, char *str2, int n);
char    *my_strstr(char *str, char *to_find);
char    *my_strdup(char *str);
char    **my_str_to_wordtab(char *str);

#endif
