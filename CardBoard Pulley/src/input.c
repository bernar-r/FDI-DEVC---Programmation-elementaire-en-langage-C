/*
** input.c for CardBoard Pulley in 
** 
** Made by BERNARD Robin
** Login   <bernar_r@etna-alternance.net>
** 
** Started on  Tue Jan 17 04:40:01 2017 BERNARD Robin
** Last update Tue Jan 17 04:40:03 2017 BERNARD Robin
*/

#include "defs.h"

void init_inputs(t_input *inputs)
{
  int i;

  i = 0;
  while (i < 7)
  {
  	inputs->input[i] = 0;
  	i++;
  }

}

int 	get_input(t_input *inputs)
{
	char *user_input;
	char c;
	char tab[7] = {'D', 'W', 'A', 'S', 'C', ' ', 'E'};
	int i = 0;

	init_inputs(inputs);
	user_input = readline();
	c = my_upcase(user_input[0]);
	while (i < 7)
	{
		if (c == tab[i])
		{
			inputs->input[i] = 1;
			return 1;
		}
		i++;
	}
	if (c == 'H')
	  help();
	return 0;
}

char	my_upcase(char c)
{

  if (c >= 'a' && c <= 'z')
	  c -= 32;
  return (c);
}
