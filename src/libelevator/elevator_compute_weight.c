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
	int		weight;

	this = self;
	weight = 0;
	weight += _abs(this->r);
	weight += _abs(this->a);
	weight += _abs(this->b);
	return (weight);
}
