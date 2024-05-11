/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   arr_swap.c                                              4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 16:21:30 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 16:22:40 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libarr.h"

void	arr_swap(void *arr)
{
	void	*tmp;

	if (arr_length(arr) < 2)
		return ;
	tmp = arr_read_at(arr, -1);
	arr_write_at(arr, -1, arr_read_at(arr, -2));
	arr_write_at(arr, -2, tmp);
}
