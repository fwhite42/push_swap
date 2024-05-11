/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   arr_int_min.c                                           4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 18:06:26 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 18:08:17 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libarr.h"
#include"libftprintf.h"

static void	update(void *min, void *data)
{
	int	nbr;

	nbr = (int)((intptr_t) data);
	if (nbr < *((int *)min))
		*((int *)min) = nbr;
}

int	arr_int_min(void *self)
{
	int	min;

	min = 0;
	arr_foreach(self, update, &max);
	return (max);
}
