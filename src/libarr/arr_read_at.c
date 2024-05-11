/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   arr_read_at.c                                           4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 17:59:48 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 17:59:49 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libarr.h"

void	*arr_read_at(void *self, int index)
{
	index %= arr_length(self);
	if (index < 0)
		index += arr_length(self);
	index %= arr_length(self);
	return (arr_data(self)[index]);
}
