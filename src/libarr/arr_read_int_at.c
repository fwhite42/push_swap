/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   arr_read_int_at.c                                       4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 17:58:54 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 17:59:35 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libarr.h"

int	arr_read_int_at(void *self, int index)
{
	index %= arr_length(self);
	if (index < 0)
		index += arr_length(self);
	index %= arr_length(self);
	return ((int)((intptr_t) arr_data(self)[index]));
}
