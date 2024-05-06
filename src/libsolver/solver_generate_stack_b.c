#include"libgame.h"
#include"libarr.h"
#include"liberror.h"
#include"libsolver.h"
#include"libftprintf.h"

void	solver_generate_stack_b(void *game, int technique)
{
	int	median;
	int	i;
	int	item;
	int	counter;

	game_print(game);
	if (technique != 0)
		error_fatal("Invalid generate_b technique", 0);
	while (arr_length(game_stack(game, a)) > 3)
	{
		i = 0;
		median = solver_compute_median(game_stack(game, a));
		counter = arr_length(game_stack(game, a)) / 2;
		while (i < arr_length(game_stack(game, a)))
		{
			item = game_read_at(game, a, - 1);
			ft_printf("\t> %i\n", item);
			if (item < median)
			{
				ft_printf("\tPop!\n");
				counter--;
				game_execute(game, pb);
				if (counter == 0)
					break ;
			}
			else
			{
				ft_printf("\tRot!\n");
				game_execute(game, ra);
			}
			i++;
			ft_printf("Size of a: %i\n", arr_length(game_stack(game, a)));
		}
	}
}
