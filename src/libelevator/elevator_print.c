/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   elevator_print.c                                        4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 16:05:57 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 16:06:00 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libelevator.h"
#include"libftprintf.h"

void	elevator_print(void *self)
{
	t_elevator	*this;

	this = self;
	ft_printf("Elevator -> (%i:%i:%i)\n", this->r, this->a, this->b);
}
