#include"libgame.h"
#include"libarr.h"
#include<stdint.h>

void	game_split_stack(void **self, int target, int flag)
{
	intptr_t	top;
	int		push;
	int		rotate;
	int		i;
	int		len;

	if (target == a)
	{
		push = pb;
		rotate = ra;
	}
	else if (target == b)
	{
		push = pa;
		rotate = rb;
	}
	i = 0;
	len = arr_length(self[target]);
	while (i < len)
	{
		top = (intptr_t) arr_read_at(self[target], -1);
		if (flag * ((int) top) <= flag * ((int) arr_median(self[target])))
			game_execute(self, push);
		else
			game_execute(self, rotate);
		i++;
	}
}
