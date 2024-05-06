#include"libelevator.h"
#include"libarr.h"
#include"libgame.h"

static int	find_min(void *game)
{
	int	min;
	int	argmin;
	int	index;
	int	item;

	index = 0;
	while (index < arr_length(game_stack(game, a)))
	{
		item = game_read_at(game, a, index);
		if (index == 0 || item < min)
		{
			argmin = index;
			min = item;
		}
		index++;
	}
	return (argmin);
}

void	solver_final_rotate(void *game)
{
	t_elevator	elevator;
	int		index;
	int		la;
	int		lb;

	index = find_min(game);
	elevator_config(&elevator, 0, index, 0);
	la = arr_length(game_stack(game, a));
	lb = arr_length(game_stack(game, b));
	elevator_minimize_weight(&elevator, la, lb);
	elevator_execute(&elevator, game);
}
