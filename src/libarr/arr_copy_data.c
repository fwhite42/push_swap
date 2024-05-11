/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   arr_copy_data.c                                         4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 18:08:01 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 18:08:26 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libarr.h"
#include"libft.h"

// Like arr_copy, but returns only the data. The consumer of the returned buff
// needs to know the arr_length to correctly read the buff.
void	**arr_copy_data(void *self)
{
	void	**data;
	int		max_size;
	int		i;

	max_size = arr_length(self);
	max_size /= arr_stepsize(self);
	max_size++;
	max_size *= arr_stepsize(self);
	data = ft_calloc(sizeof(void *), max_size);
	i = 0;
	while (i++ < arr_length(self))
		data[i - 1] = arr_read_at(self, i - 1);
	return (data);
}
