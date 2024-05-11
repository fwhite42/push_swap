/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   arr_zip.c                                               4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 16:21:00 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 16:21:02 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libarr.h"
#include"liberror.h"

void	*arr_zip(void *self, void *target, void *(*zip)())
{
	void	*zipped;
	int		i;
	void	*x;
	void	*y;

	if (arr_length(self) != arr_length(target))
		error_fatal("Cannot Zip Arrays of different length", 0);
	zipped = arr_create_default();
	i = 0;
	while (i < arr_length(zipped))
	{
		x = arr_read_at(self, i);
		y = arr_read_at(target, i);
		arr_push(zipped, zip(x, y));
		i++;
	}
	return (zipped);
}
