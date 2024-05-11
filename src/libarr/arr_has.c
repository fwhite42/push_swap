/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   arr_has.c                                               4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 18:10:56 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 18:11:05 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libarr.h"

int	arr_has(void *self, void *item)
{
	int	i;

	i = 0;
	while (i < arr_length(self))
	{
		if (arr_read_at(self, i))
			return (i);
	}
	return (-1);
}
