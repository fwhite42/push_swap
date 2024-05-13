/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   elevator_config_cheapest.c                              4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 16:10:50 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/13 13:42:35 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"liberror.h"
#include"libsolver.h"
#include"libelevator.h"
#include"libarr.h"
#include"libftprintf.h"

void	elevator_config_cheapest(void *self, t_elevator_ccinput input)
{
	int			cursor_type;
	int			cursor_weight;
	t_elevator	cursor;

	if (self == 0)
		return ;
	elevator_config(self, 0, input.x, input.y);
	elevator_minimize_weight(self, input.len_a, input.len_b);
	cursor_type = 0;
	while (cursor_type < 3)
	{
		elevator_config(&cursor, cursor_type, input.x, input.y);
		elevator_minimize_weight(&cursor, input.len_a, input.len_b);
		cursor_weight = elevator_compute_weight(&cursor);
		if (cursor_weight < elevator_compute_weight(self) || cursor_type == 0)
		{
			elevator_config(self, cursor_type, input.x, input.y);
			elevator_minimize_weight(self, input.len_a, input.len_b);
		}
		cursor_type++;
	}
}
