/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   arr_stepsize.c                                          4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 18:55:18 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 18:55:18 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libarr.h"

int	arr_stepsize(void *self)
{
	return (((t_arr *)self)->stepsize);
}
