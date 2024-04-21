#include"libgame.h"
#include"libarr.h"
#include"libftprintf.h"

int	game_print(void	**self)
{
	ft_printf("[Stack A] :\n");
	arr_print(self[a]);
	ft_printf("[Stack B] :\n");
	arr_print(self[b]);
	ft_printf("[Cmd Lst] :\n");
	arr_print(self[solution]);
	return (0);
}
