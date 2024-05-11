/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   arr_create_null.c                                       4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 18:09:26 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 18:09:27 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libarr.h"
#include"libft.h"

void	*arr_create_null(void)
{
	void	*ptr;

	ptr = ft_calloc(1, sizeof(t_arr));
	return (ptr);
}
