#include"libgame.h"
#include"libarr.h"
#include"libftprintf.h"
#include<stddef.h>

static void	print_cmd(void 	*data)
{
	int	cmd;

	cmd = (int) ((intptr_t) data);
	if (cmd == null)
		ft_printf("null");
	if (cmd == pa)
		ft_printf("pa");
	else if (cmd == pb)
		ft_printf("pb");
	else if (cmd == sa)
		ft_printf("sa");
	else if (cmd == sb)
		ft_printf("sb");
	else if (cmd == ss)
		ft_printf("ss");
	else if (cmd == sa)
		ft_printf("sa");
	else if (cmd == sb)
		ft_printf("sb");
	else if (cmd == ss)
		ft_printf("ss");
	else if (cmd == ra)
		ft_printf("ra");
	else if (cmd == rb)
		ft_printf("rb");
	else if (cmd == rr)
		ft_printf("rr");
	else if (cmd == rra)
		ft_printf("rra");
	else if (cmd == rb)
		ft_printf("rrb");
	else if (cmd == rr)
		ft_printf("rrr");
	else
		ft_printf("invalid");
	ft_printf("\n");
}

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

int	game_print(void	*self)
{
	print_header();
	ft_printf("[Stack A]\t");
	arr_printf(game_stack(self, a), "i");
	ft_printf("[Stack B]\t");
	arr_printf(game_stack(self, b), "i");
	ft_printf("\n");
	ft_printf("[Cmd Lst]\n");
	arr_foreach(game_stack(self, solution), print_cmd, NULL);
	print_footer();
	return (0);
}
