#include"libelevator.h"
#include"libftprintf.h"

void	elevator_print(void *self)
{
	t_elevator	*this;

	this = self;
	ft_printf("Elevator -> (%i:%i:%i)\n", this->r, this->a, this->b);
}
