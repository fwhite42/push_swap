/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   arr_set_maxsize.c                                       4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 18:54:41 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 18:54:41 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libarr.h"

void	arr_set_maxsize(void *self, int maxsize)
{
	((t_arr *)self)->maxsize = maxsize;
}
