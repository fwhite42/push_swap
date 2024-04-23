#include"libft.h"
#include"libarr.h"
#include"libgame.h"

void	*game_create(void)
{
	void	*self;

	self = ft_calloc(3, sizeof(void *));
	game_bind_stack(self, a, arr_create_default());
	game_bind_stack(self, b, arr_create_default());
	game_bind_stack(self, solution, arr_create_default());
	return (self);
}
