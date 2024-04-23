#include"libarr.h"
#include"libftprintf.h"
#include"libgame.h"
#include"libsolver.h"
#include<stdlib.h>

void	solver_split_stack2(void *self)
{
	int	median;
	int	len;
	int	counter;

	len = arr_length(game_stack(self, b));
	if (len < 4)
		return ;
	counter = 0;
	median = solver_compute_median(game_stack(self, b));
	while (len--)
	{
		ft_printf("median > %i\n", median);
		if (arr_read_int_at(game_stack(self, b), len) > median)
			counter++;
	}
	ft_printf("counter > %i\n", counter);
	while (counter)
	{
		ft_printf("Comparing %i and %i\n", arr_read_int_at(game_stack(self, b), -1), median);
		if (arr_read_int_at(game_stack(self, b), -1) <= median)
			game_execute(self, rb);
		else
		{
			game_execute(self, pa);
			counter--;
		}
	}
}
