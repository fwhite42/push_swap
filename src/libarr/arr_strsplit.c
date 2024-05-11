/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   arr_strsplit.c                                          4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 16:22:16 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 16:22:18 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*arr_strsplit(char *str, char separator)
{
	char	**split;

	self = arr_create_default();
	split = ft_split(str, separator);
	while (split)
		arr_push(self, split++);
	return (self);
}
