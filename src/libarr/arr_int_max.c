/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   arr_int_max.c                                           4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 18:10:15 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/13 13:31:06 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libarr.h"
#include"libftprintf.h"

static void	update(void *max, void *data)
{
	int	nbr;

	nbr = (int)((intptr_t) data);
	if (nbr > *((int *)max))
		*((int *)max) = nbr;
}

int	arr_int_max(void *self)
{
	int	max;

	max = arr_read_int_at(self, 0);
	arr_foreach(self, update, &max);
	return (max);
}
