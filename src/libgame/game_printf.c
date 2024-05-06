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
