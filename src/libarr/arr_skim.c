/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   arr_skim.c                                              4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 16:28:07 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 16:29:05 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libarr.h"
#include<stdlib.h>

bool	arr_skim(void *self)
{
	int		maxsize;
	void	**data;

	maxsize = 0;
	while (maxsize < arr_length(self))
		maxsize += arr_stepsize(self);
	if (arr_maxsize(self) > maxsize)
	{
		data = arr_copy_data(self);
		free(arr_data(self));
		arr_bind_data(self, data);
		arr_set_maxsize(self, maxsize);
		return (true);
	}
	return (true);
}
