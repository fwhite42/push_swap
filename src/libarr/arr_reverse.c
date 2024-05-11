/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   arr_reverse.c                                           4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 16:29:32 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 17:59:12 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libarr.h"

void	arr_reverse(void *self)
{
	int		i;
	void	*first;
	void	*last;

	i = 0;
	while (i < arr_length(self) / 2)
	{
		first = arr_read_at(self, i);
		last = arr_read_at(self, (-1 * i - 1));
		arr_write_at(self, i, last);
		arr_write_at(self, (-1 * i - 1), first);
		i++;
	}
}
