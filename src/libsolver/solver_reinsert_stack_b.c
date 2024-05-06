#include"libsolver.h"
#include"libelevator.h"
#include"libgame.h"
#include"libarr.h"
#include"liberror.h"
#include"libftprintf.h"

static void	compare(void *g, int i, t_elevator *best, int  *best_weight)
{
	int			weight;
	t_elevator		elevator;
	t_elevator_ccinput	config_cheapest_input;

	config_cheapest_input.x = solver_find_twin_index(g, i);
	config_cheapest_input.y = i;
	ft_printf("Looking for twins. Found : (%i, %i)\n", config_cheapest_input.x, config_cheapest_input.y);
	config_cheapest_input.len_a = arr_length(game_stack(g, a));
	config_cheapest_input.len_b = arr_length(game_stack(g, b));
	elevator_config_cheapest(&elevator, config_cheapest_input);
	ft_printf("Found cheap elevator fo these twins\n");
	weight = elevator_compute_weight(&elevator);
	if (i == 0 || weight < *best_weight)
	{
		*best = elevator;
		*best_weight = weight;
	}
}

static void	reinsert_one(void *game)
{
	int		index;
	t_elevator	best_elevator;
	int		best_weight;

	index = 0;
	game_print(game);
	while (index < arr_length(game_stack(game, b)))
	{
		ft_printf("Check %i\n", index);
		compare(game, index, &best_elevator, &best_weight);
		index++;
	}
	ft_printf("Executing (%i, %i, %i)\n", best_elevator.r, best_elevator.a, best_elevator.b);
	elevator_execute(&best_elevator, game);
	game_execute(game, pa);
	game_print(game);
}

void	solver_reinsert_stack_b(void *game, int technique)
{
	if (technique == 0)
	{
		while (arr_length(game_stack(game, b)) != 0)
			reinsert_one(game);
	}
	else
		error_fatal("Invalid reinsert_b techinque.", 0);
}
