/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   solver_solve3.c                                         4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 04:14:57 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/13 14:03:33 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libgame.h"
#include"libarr.h"
#include"liberror.h"
#include"libftprintf.h"

static void	put_three_at_bottom(void *game)
{
	if (game_read_at(game, a, 1) == arr_int_max(game_stack(game, a)))
		game_execute(game, rra);
	else if (game_read_at(game, a, -1) == arr_int_max(game_stack(game, a)))
		game_execute(game, ra);
}

static void	sort_top(void *game)
{
	int	swap_a;
	int	swap_b;

	swap_a = 0;
	swap_b = 0;
	if (arr_length(game_stack(game, b)) > 1)
	{
		if (game_read_at(game, b, -1) < game_read_at(game, b, -2))
			swap_b = 1;
	}
	if (game_read_at(game, a, -1) > game_read_at(game, a, -2))
		swap_a = 1;
	if (swap_a && swap_b)
		game_execute(game, ss);
	else if (swap_a)
		game_execute(game, sa);
}

void	solver_solve3(void *game)
{
	if (arr_length(game_stack(game, a)) == 3)
		put_three_at_bottom(game);
	if (arr_length(game_stack(game, a)) >= 2)
		sort_top(game);
	if (arr_length(game_stack(game, a)) > 3)
		error_fatal("called solve 3 when stack a length > 3", 0);
}
