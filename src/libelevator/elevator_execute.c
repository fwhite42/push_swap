/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   elevator_execute.c                                      4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/07 14:14:21 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 16:29:56 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libgame.h"
#include"libftprintf.h"
#include"libelevator.h"

static void	_execute(int op1, int op2, int n, void *game)
{
	int	op;

	if (n == 0)
		return ;
	if (n < 0)
	{
		op = op2;
		n *= -1;
	}
	else
		op = op1;
	while (n--)
		game_execute(game, op);
}

void	elevator_execute(void *self, void *game)
{
	t_elevator	*this;

	this = self;
	_execute(rr, rrr, this->r, game);
	_execute(ra, rra, this->a, game);
	_execute(rb, rrb, this->b, game);
}
