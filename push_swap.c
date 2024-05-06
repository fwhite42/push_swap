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
	solver_generate_stack_b(self, 0);
	solver_solve3(self);
	solver_reinsert_stack_b(self, 0);
	solver_final_rotate(self);
	game_print(self);
	game_destroy(self);
	return (0);
}
