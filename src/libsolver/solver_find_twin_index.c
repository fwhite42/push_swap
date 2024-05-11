/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   solver_find_twin_index.c                                4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 04:16:29 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 05:26:20 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libgame.h"
#include"libftprintf.h"
#include"libarr.h"

int	solver_find_twin_index(void *game, int index_b)
{
	int	item_b;
	int	index_a;
	int	item_a;
	int	index_twin;
	int	item_twin;

	item_b = game_read_at(game, b, index_b);
	index_a = 0;
	index_twin = 0;
	while (index_a < arr_length(game_stack(game, a)))
	{
		item_a = game_read_at(game, a, index_a);
		item_twin = game_read_at(game, a, index_twin);
		if (item_a > item_b)
		{
			if (item_a < item_twin || item_twin < item_b)
			{
				index_twin = index_a;
			}
		}
		index_a++;
	}
	item_twin = game_read_at(game, a, index_twin);
	return (index_twin);
}
