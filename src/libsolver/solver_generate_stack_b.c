/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   solver_generate_stack_b.c                               4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 04:18:41 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 05:43:22 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libgame.h"
#include"libarr.h"
#include"liberror.h"
#include"libsolver.h"
#include"libftprintf.h"

static void	_push_one(void *game)
{
	int	i;
	int	median;
	int	counter;
	int	item;

	i = 0;
	median = solver_compute_median(game_stack(game, a));
	counter = arr_length(game_stack(game, a)) / 2;
	while (i < arr_length(game_stack(game, a)))
	{
		item = game_read_at(game, a, -1);
		if (counter == 0)
			break ;
		else if (item < median)
		{
			counter--;
			game_execute(game, pb);
		}
		else
			game_execute(game, ra);
		i++;
	}
}

void	solver_generate_stack_b(void *game, int technique)
{
	if (technique != 0)
		error_fatal("Invalid generate_b technique", 0);
	while (arr_length(game_stack(game, a)) > 3)
		_push_one(game);
}
