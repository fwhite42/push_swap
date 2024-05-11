/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   push_swap.c                                             4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 16:18:25 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 20:19:28 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libgame.h"
#include"libsolver.h"

int	main(int ac, char **av)
{
	void	*self;

	self = game_create();
	game_init(self, ac, av);
	solver_generate_stack_b(self, 0);
	solver_solve3(self);
	solver_reinsert_stack_b(self, 0);
	solver_final_rotate(self);
	game_printf(self, "s");
	game_destroy(self);
	return (0);
}
