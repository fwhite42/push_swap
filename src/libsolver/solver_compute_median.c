/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   solver_compute_median.c                                 4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 04:27:03 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 04:27:21 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libarr.h"
#include"liberror.h"
#include<stddef.h>

int	solver_compute_median(void *stack)
{
	int		nbr;
	void	*copy;

	if (arr_length(stack) < 1)
		error_fatal("Cannot compute median of 0 length arrays", 0);
	copy = arr_copy(stack);
	arr_sort(copy);
	nbr = arr_read_int_at(copy, arr_length(copy) / 2 - 1);
	arr_destroy(copy, NULL, NULL);
	return (nbr);
}
