/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   arr_morph.c                                             4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 18:02:25 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 18:06:10 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libarr.h"
#include<stddef.h>

void	arr_morph(void *self, void *(*fn)(), void *caller)
{
	int	i;

	if (fn == NULL)
		return ;
	i = 0;
	while (i < arr_length(self))
	{
		if (caller != NULL)
			(arr_data(self))[i] = fn(caller, (arr_data(self))[i], i);
		else
			(arr_data(self))[i] = fn((arr_data(self))[i], i);
		i++;
	}
}
