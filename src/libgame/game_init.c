/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   game_init.c                                             4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 05:41:48 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/28 13:37:04 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libgame.h"
#include"libarr.h"
#include"libft.h"
#include"liberror.h"
#include"libftprintf.h"

static inline void	verify_is_number(char *nbr)
{
	if (ft_strlen(nbr) == 0)
		error_fatal("Found some empty string in the arguments", -42);
	if (*nbr == '+' || *nbr == '-')
		nbr++;
	if (ft_strlen(nbr) == 0)
		error_fatal("Found some empty string in the arguments", -42);
	while (*nbr)
	{
		if (!ft_isdigit(*(nbr++)))
			error_fatal("Found forbidden characters in the arguments", -42);
	}
}
static inline void	verify_overflow(char *nbr)
{
	if (ft_strlen(nbr) > 1)
	{
		while (*nbr == '0' && ft_strlen(nbr) > 1)
			nbr++;
	}
	if (ft_strlen(nbr) > 1 && ft_atoi(nbr) == 0)
		error_fatal("Provided arguments will overflow", -42);
}

static inline void	verify_doubles(void *arr)
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
			error_fatal("Found some doubles in the arguments", 0);
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
	while (i < ac)
	{
		j = 0;
		nbrs = ft_split(av[i], ' ');
		if (i == 1 && nbrs[0] == NULL)
			error_fatal("First arguments looks like the empty string", -42);
		while (nbrs[j])
		{
			verify_is_number(nbrs[j]);
			verify_overflow(nbrs[j]);
			arr_push_int(game_stack(self, a), ft_atoi(nbrs[j]));
			free(nbrs[j]);
			j++;
		}
		free(nbrs);
		i++;
	}
	verify_doubles(game_stack(self, a));
	arr_reverse(game_stack(self, a));
}
