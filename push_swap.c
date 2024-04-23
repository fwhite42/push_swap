#include"libgame.h"
#include"libftprintf.h"
#include"libarr.h"
#include"libsolver.h"
#include<stddef.h>

int	main(int ac, char **av)
{
	void	**self;
	
	self = game_create();
	game_init(self, ac, av);
	solver_split_stack(self);
	solver_split_stack(self);
	solver_split_stack(self);
	solver_split_stack(self);
	solver_split_stack(self);
	solver_split_stack2(self);
	solver_split_stack2(self);
	solver_split_stack2(self);
	solver_split_stack2(self);
	game_print(self);
	game_destroy(self);
	return (0);
}
