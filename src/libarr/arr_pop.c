/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   arr_pop.c                                               4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 18:01:47 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 18:04:32 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libarr.h"
#include"stddef.h"

void	*arr_pop(void *self)
{
	void	*data;

	data = arr_data(self)[arr_length(self) - 1];
	arr_data(self)[arr_length(self) - 1] = NULL;
	arr_set_length(self, arr_length(self) - 1);
	return (data);
}
