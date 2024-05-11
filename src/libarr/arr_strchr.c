/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   arr_strchr.c                                            4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 16:22:27 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 16:23:48 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libarr.h"
#include"libft.h"
#include"libftprintf.h"
#include<stddef.h>

void	arr_strchr(void *self, char *string, char search)
{
	char	*cursor;
	size_t	offset;

	cursor = string;
	while (cursor != NULL)
	{
		offset = cursor - string;
		cursor = ft_strchr(string + offset, search);
		if (cursor != NULL)
		{
			arr_push(self, malloc(sizeof(size_t)));
			arr_write_at(self, -1, (void *)(cursor - string));
			cursor++;
		}
	}
}
