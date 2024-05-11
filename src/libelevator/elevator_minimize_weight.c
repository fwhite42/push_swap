/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   elevator_minimize_weight.c                              4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 16:06:22 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 16:06:39 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libelevator.h"
#include"libsolver.h"
#include"libftprintf.h"
/*
inline static int	_max(int a, int b)
{
	if (a < b)
		return (b);
	else
		return (a);
}
*/
inline static int	_minimize(int x, int mod)
{
	if (x == 0 || mod == 0)
		return (0);
	x %= mod;
	if (x < 0)
		x += mod;
	if (2 * x < mod)
		return (x);
	else
		return (x - mod);
}

void	elevator_minimize_weight(void *self, int len_a, int len_b)
{
	int	a;
	int	b;

	a = _minimize(((t_elevator *)self)->a, len_a);
	b = _minimize(((t_elevator *)self)->b, len_b);
	((t_elevator *) self)->a = a;
	((t_elevator *) self)->b = b;
}
