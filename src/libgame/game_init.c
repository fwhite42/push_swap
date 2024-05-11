/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   game_init.c                                             4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 05:41:48 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 13:24:59 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libgame.h"
#include"libarr.h"
#include"libft.h"
#include"liberror.h"
#include"libftprintf.h"

void	verify_is_number(char *nbr)
{
	char	*valid;

	valid = "01234567890";
	if (ft_strlen(nbr) > 1 && ft_atoi(nbr) == 0)
		error_fatal("Int Overflow", -42);
	if (*nbr == '+' || *nbr == '-')
		nbr++;
	while (*nbr)
	{
		if (ft_strchr(valid, *(nbr++)) == NULL)
			error_fatal("Arg must be a list of int. Received string", -42);
	}
}

void	verify_doubles(void *arr)
{
	void	*copy;
	int		item;

	copy = arr_copy(arr);
	arr_sort(copy);
	while (arr_length(copy) > 1)
	{
		item = (int)((intptr_t) arr_pop(copy));
		if (arr_read_int_at(copy, -1) == item)
		{
			error_fatal("Arg cannot contain doubles", 0);
		}
	}
	arr_destroy(copy, NULL, NULL);
}

void	game_init(void *self, int ac, char **av)
{
	int		i;
	int		j;
	char	**nbrs;

	i = 1;
	j = 0;
	while (i < ac)
	{
		nbrs = ft_split(av[i], ' ');
		while (nbrs[j])
		{
			verify_is_number(nbrs[j]);
			arr_push_int(game_stack(self, a), ft_atoi(nbrs[j]));
			free(nbrs[j]);
			j++;
		}
		free(nbrs);
		j = 0;
		i++;
	}
	verify_doubles(game_stack(self, a));
	arr_reverse(game_stack(self, a));
}
