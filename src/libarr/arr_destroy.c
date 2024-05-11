/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   arr_destroy.c                                           4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 18:09:38 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 18:09:39 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libarr.h"
#include"stdlib.h"

void	arr_destroy(void *self, void (*fn)(), void *caller)
{
	if (fn != NULL)
		arr_foreach(self, fn, caller);
	free(arr_data(self));
	free(self);
}
