#include"libgame.h"
#include"libftprintf.h"
#include"libarr.h"

int solver_find_twin_index(void *game, int index_b)
{
	int	item_b;
	int	index_a;
	int	item_a;
	int	index_twin;
	int	item_twin;
	
	item_b = game_read_at(game, b, index_b);
	ft_printf("Computing twin index for %i (%i)\n", item_b, index_b);
	index_a = 0;
	index_twin = 0;
	while (index_a < arr_length(game_stack(game, a)))
	{
		item_a = game_read_at(game, a, index_a);
		item_twin = game_read_at(game, 	a, index_twin);
		ft_printf("\tComparing a: %i (%i)\twith b: %i (%i)\n", item_a, index_a, item_b, index_b);
		if (item_a > item_b)
		{
			ft_printf("\t\tComparing a: %i (%i)\twith best: %i (%i)\n", item_a, index_a, item_twin, index_twin);
			if (item_a < item_twin || item_twin < item_b)
			{
				ft_printf("\t\t\t Update !\n");
				index_twin = index_a;
			}

		}
		index_a++;
	}
	item_twin = game_read_at(game, 	a, index_twin);
	ft_printf("Found %i (%i)\n", item_twin, index_twin);
	return (index_twin);
}
