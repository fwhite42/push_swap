#include"libgame.h"
#include"libftprintf.h"
#include"libarr.h"

int	main(int ac, char **av)
{
	void	*self;
	
	self = game_create();
	game_init(self, ac, av);
	game_print(self);

	game_split_stack(self, a, 1);
	game_split_stack(self, a, 1);
	game_split_stack(self, a, 1);
	game_split_stack(self, b, -1);
	game_split_stack(self, b, -1);
	game_split_stack(self, b, -1);
	game_split_stack(self, a, 1);
	game_print(self);

	game_destroy(self);
	return (0);
}
