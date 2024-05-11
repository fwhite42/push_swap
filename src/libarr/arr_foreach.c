/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   arr_foreach.c                                           4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 18:09:50 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 18:10:47 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libarr.h"
#include<stddef.h>

// for x in array, do fn(caller, x, i) or fn(x, i) (or even f(x)) 
// the caller can actually be used to hold any param
void	arr_foreach(void *self, void (*fn)(), void *caller)
{
	int	i;

	i = 0;
	while (i < arr_length(self))
	{
		if (caller == NULL)
			fn(arr_read_at(self, i), i);
		else
			fn(caller, arr_read_at(self, i), i);
		i++;
	}	
}
