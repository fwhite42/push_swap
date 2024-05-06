#include"liberror.h"
#include"libsolver.h"
#include"libelevator.h"
#include"libarr.h"
#include"libftprintf.h"

void	elevator_config_cheapest(void *self, t_elevator_ccinput input)
{
	int		cursor_type;
	int		cursor_weight;
	t_elevator	cursor;

	if (self == 0)
		return ;
	elevator_config(self, 0, input.x, input.y);
	elevator_minimize_weight(self, input.len_a, input.len_b);
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
