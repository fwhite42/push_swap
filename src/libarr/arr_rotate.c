/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   arr_rotate.c                                            4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 16:29:18 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 17:58:19 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libarr.h"

void	arr_rotate(void *self)
{
	void	*item;

	item = arr_pop(self);
	arr_reverse(self);
	arr_push(self, item);
	arr_reverse(self);
}
