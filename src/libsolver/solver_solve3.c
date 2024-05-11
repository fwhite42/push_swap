/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   solver_solve3.c                                         4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 04:14:57 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 04:27:58 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libgame.h"
#include"libarr.h"
#include"liberror.h"
#include"libftprintf.h"

static void	put_three_at_bottom(void **game)
{
	if (game_read_at(game, a, 1) == arr_int_max(game[a]))
		game_execute(game, rra);
	else if (game_read_at(game, a, -1) == arr_int_max(game[a]))
		game_execute(game, ra);
}

static void	sort_top(void *game, t_stack_id id)
{
	int	op;

	if (id == a)
		op = sa;
	else if (id == b)
		op = sb;
	else
		error_fatal("Invalid Stack Id", 0);
	if (game_read_at(game, a, -1) > game_read_at(game, a, -2))
		game_execute(game, op);
}

void	solver_solve3(void *game)
{
	if (arr_length(game_stack(game, a)) == 3)
		put_three_at_bottom(game);
	if (arr_length(game_stack(game, a)) >= 2)
		sort_top(game, a);
	if (arr_length(game_stack(game, a)) > 3)
		error_fatal("called solve 3 when stack a length > 3", 0);
}
