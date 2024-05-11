/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   arr_sort.c                                              4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 16:27:09 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 16:28:40 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libarr.h"
#include<stdint.h>

static void	recursion(void *arr, int length);
static void	swap(intptr_t *x, intptr_t *y);

void	arr_sort(void *self)
{
	recursion(self, arr_length(self));
}

//Static
static void	recursion(void *self, int length)
{
	intptr_t	*tab;
	int			i;

	tab = (intptr_t *)arr_data(self);
	i = 0;
	if (length == 0)
		return ;
	while (i < length - 1)
	{
		if (tab[i] > tab[i + 1])
			swap(&tab[i], &tab[i + 1]);
		i++;
	}
	recursion(self, length - 1);
}

static void	swap(intptr_t *x, intptr_t *y)
{
	if (x != y && *x != *y)
	{
		*x = *x ^ *y;
		*y = *x ^ *y;
		*x = *x ^ *y;
	}
}
