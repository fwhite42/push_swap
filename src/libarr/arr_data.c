/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   arr_data.c                                              4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 18:53:53 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 18:53:53 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libarr.h"

void	**arr_data(void *self)
{
	return (((t_arr *)self)->data);
}
