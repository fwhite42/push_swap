/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   arr_increase_max_size.c                                 4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 18:10:27 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 18:11:15 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include "libarr.h"
#include"libft.h"
#include"liberror.h"

bool	arr_increase_max_size(void *self)
{
	int		i;
	int		new_maxsize;
	void	**data;

	new_maxsize = arr_stepsize(self) + arr_maxsize(self);
	data = ft_calloc(sizeof(void *), new_maxsize);
	if (data == NULL)
		error_fatal("ft_calloc returned NULL", 0);
	i = 0;
	while (i < arr_length(self))
	{
		data[i] = arr_data(self)[i];
		i++;
	}
	free(arr_data(self));
	arr_bind_data(self, data);
	arr_set_maxsize(self, new_maxsize);
	return (true);
}
