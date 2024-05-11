/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   game_printf.c                                           4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 05:37:32 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 05:42:40 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libgame.h"
#include"libarr.h"
#include"libftprintf.h"
#include"libft.h"

void	game_printf(void	*self, char *flags)
{
	int	i;

	if (ft_strchr(flags, 'a'))
	{
		ft_printf("[Stack A] : ");
		arr_print(game_stack(self, a));
	}
	if (ft_strchr(flags, 'b'))
	{
		ft_printf("[Stack B] : ");
		arr_print(game_stack(self, b));
	}
	if (ft_strchr(flags, 's'))
	{
		i = 0;
		while (i < arr_length(game_stack(self, solution)))
			game_print_cmd(game_read_at(self, solution, i++));
	}
}
