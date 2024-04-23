#include"libarr.h"
#include"libftprintf.h"
#include"libgame.h"
#include"libsolver.h"
#include<stdlib.h>

void	solver_split_stack(void *self)
{
	int	median;
	int	len;
	int	counter;

	len = arr_length(game_stack(self, a));
	if (len < 4)
		return ;
	counter = 0;
	median = solver_compute_median(game_stack(self, a));
	while (len--)
	{
		ft_printf("median > %i\n", median);
		if (arr_read_int_at(game_stack(self, a), len) <= median)
			counter++;
	}
	ft_printf("counter > %i\n", counter);
	while (counter)
	{
		ft_printf("Comparing %i and %i\n", arr_read_int_at(game_stack(self, a), -1), median);
		if (arr_read_int_at(game_stack(self, a), -1) > median)
			game_execute(self, ra);
		else
		{
			game_execute(self, pb);
			counter--;
		}
	}
}
