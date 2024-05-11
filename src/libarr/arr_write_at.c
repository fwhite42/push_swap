/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   arr_write_at.c                                          4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 16:21:14 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 16:21:15 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libarr.h"

bool	arr_write_at(void *self, int index, void *value)
{
	if (index >= 0 && index < arr_length(self))
		arr_data(self)[index] = value;
	else if (index < 0)
		arr_write_at(self, arr_length(self) + index, value);
	return (true);
}
