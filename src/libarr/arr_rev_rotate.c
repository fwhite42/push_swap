/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   arr_rev_rotate.c                                        4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 17:58:27 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 17:58:29 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libarr.h"

void	arr_rev_rotate(void *self)
{
	void	*item;

	arr_reverse(self);
	item = arr_pop(self);
	arr_reverse(self);
	arr_push(self, item);
}
