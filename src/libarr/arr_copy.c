/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   arr_copy.c                                              4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 18:07:41 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 18:07:46 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libarr.h"

// Creates a skimmed ccopy of self.
void	*arr_copy(void *self)
{
	int		i;
	void	*copy;

	copy = arr_create_null();
	arr_set_stepsize(copy, arr_stepsize(self));
	i = 0;
	while (i < arr_length(self))
		arr_push(copy, arr_read_at(self, i++));
	return (copy);
}
