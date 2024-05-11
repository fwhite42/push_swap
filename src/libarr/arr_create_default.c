/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   arr_create_default.c                                    4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 18:09:07 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 18:09:11 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libarr.h"

void	*arr_create_default(void)
{
	void	*ptr;

	ptr = arr_create(ARR_DEFAULT_STEPSIZE, ARR_DEFAULT_MAXSIZE);
	return (ptr);
}
