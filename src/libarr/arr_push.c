/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   arr_push.c                                              4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 18:00:02 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 18:00:03 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libarr.h"
#include"libftprintf.h"

bool	arr_push(void *self, void *value)
{
	if (arr_length(self) == arr_maxsize(self))
	{
		if (!arr_increase_max_size(self))
			return (false);
	}
	arr_data(self)[arr_length(self)] = value;
	arr_set_length(self, arr_length(self) + 1);
	return (true);
}
