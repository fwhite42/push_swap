/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   game_verify_solution.c                                  4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/13 14:39:02 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/13 14:39:03 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libgame.h"
#include"liberror.h"
#include"libarr.h"

int	game_verify_solution(t_game *game)
{
	int	i;
	int	x0;
	int	x1;

	i = 1;
	if (arr_length(game_stack(game, b)) != 0)
	{
		return (0);
	}
	while (i < arr_length(game_stack(game, a)))
	{
		x0 = game_read_at(game, a, i - 1);
		x1 = game_read_at(game, a, i);
		if (x0 < x1)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
