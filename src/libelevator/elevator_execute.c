/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   elevator_execute.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwhite42 <FUCK THE NORM>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 17:59:46 by fwhite42          #+#    #+#             */
/*   Updated: 2024/05/06 13:23:23 by fwhite42         ###   ########.fr       */
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
