#include"libgame.h"

void	*game_stack(void *self, int target)
{
	return (((void **)self)[target]);
}
