#include"libgame.h"

void	game_bind_stack(void *self, int id, void *stack)
{

	((void **)self)[id] = stack;
}
