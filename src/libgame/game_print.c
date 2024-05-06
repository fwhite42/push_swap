#include"libgame.h"
#include"libarr.h"
#include"libftprintf.h"
#include<stddef.h>
/*
static void	print_header(void)
{
	ft_printf("-------------------------------------------------------\n");
	ft_printf("| GAME STATE                                          |\n");
	ft_printf("-------------------------------------------------------\n");
}

static void	print_footer(void)
{
	ft_printf("\n\n");
	ft_printf("-------------------------------------------------------\n");
}
*/
void	game_print(void	*self)
{
	ft_printf("-------------------------------------------------------\n");
	ft_printf("[Stack A]\t");
	arr_printf(game_stack(self, a), "i");
	ft_printf("[Stack B]\t");
	arr_printf(game_stack(self, b), "i");
	ft_printf("[Cmd Lst Len]\t");
	ft_printf("%i\n", arr_length(game_stack(self, solution)));
	ft_printf("-------------------------------------------------------\n");
}
