/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   game_bind_stack.c                                       4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 14:43:03 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 14:43:18 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libgame.h"

void	game_bind_stack(void *self, int id, void *stack)
{
	((void **)self)[id] = stack;
}
