#include"libgame.h"
#include"libarr.h"
#include"stdint.h"

int	game_read_at(void *self, int target, int index)
{
	return (arr_read_int_at(game_stack(self, target), index));
}
