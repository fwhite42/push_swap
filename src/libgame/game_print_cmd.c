/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   game_print_cmd.c                                        4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 05:29:03 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 05:29:05 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libgame.h"
#include"libftprintf.h"
#include"liberror.h"

static int	print_push(int cmd)
{
	if (cmd == pa)
		ft_printf("pa");
	else if (cmd == pb)
		ft_printf("pb");
	else
		return (0);
	ft_printf("\n");
	return (1);
}

static int	print_swap(int cmd)
{
	if (cmd == sa)
		ft_printf("sa");
	else if (cmd == sb)
		ft_printf("sb");
	else if (cmd == ss)
		ft_printf("ss");
	else
		return (0);
	ft_printf("\n");
	return (1);
}

static int	print_rotate(int cmd)
{
	if (cmd == ra)
		ft_printf("ra");
	else if (cmd == rb)
		ft_printf("rb");
	else if (cmd == rr)
		ft_printf("rr");
	else if (cmd == rra)
		ft_printf("rra");
	else if (cmd == rrb)
		ft_printf("rrb");
	else if (cmd == rrr)
		ft_printf("rrr");
	else
		return (0);
	ft_printf("\n");
	return (1);
}

void	game_print_cmd(int cmd)
{
	if (print_swap(cmd))
		return ;
	else if (print_push(cmd))
		return ;
	else if (print_rotate(cmd))
		return ;
	else
	{
		ft_printf("Command is invalid: %i\n", cmd);
		error_fatal("Invalid Command", 0);
	}
}
