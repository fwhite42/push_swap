#include"libarr.h"
#include"libgame.h"
#include"libft.h"

void	*game_copy(void *self, int copy_solution)
{
	void	*copy;

	copy = ft_calloc(3, sizeof(void *));
	game_bind_stack(copy, a, arr_copy(game_stack(self, a)));
	game_bind_stack(copy, b, arr_copy(game_stack(self, b)));
	if (copy_solution == true)
		game_bind_stack(copy, b, arr_copy(game_stack(self, solution)));
	else
		game_bind_stack(copy, b, arr_create_default());
	return (copy);
}
