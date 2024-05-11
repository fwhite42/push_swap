/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   elevator_compute_weight.c                               4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 16:17:28 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 16:17:49 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libelevator.h"

static int	_abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

int	elevator_compute_weight(void *self)
{
	t_elevator	*this;
	int			weight;

	this = self;
	weight = 0;
	weight += _abs(this->r);
	weight += _abs(this->a);
	weight += _abs(this->b);
	return (weight);
}
