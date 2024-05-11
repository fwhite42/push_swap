/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   game_create.c                                           4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 13:25:20 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 13:25:32 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include"libarr.h"
#include"libgame.h"

void	*game_create(void)
{
	void	*self;

	self = ft_calloc(3, sizeof(void *));
	game_bind_stack(self, a, arr_create_default());
	game_bind_stack(self, b, arr_create_default());
	game_bind_stack(self, solution, arr_create_default());
	return (self);
}
