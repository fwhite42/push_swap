#include"libgame.h"
#include"libprintf.h"

int	game_print(void	**self)
{
	ft_printf("[Stack A] : ");
	arr_print(self[a]);
	ft_printf("[Stack B] : ");
	arr_print(self[b]);
	ft_printf("[Cmd Lst] : ");
	arr_printf(self[solution])
}
