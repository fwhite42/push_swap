#include"libgame.h"
#include"libarr.h"
#include"stdint.h"

int	game_read_at(void *self, int target, int index)
{
	intptr_t	nbr;

	nbr = (intptr_t) arr_read_at(game_stack(self, target), index);
	return (nbr);
}
