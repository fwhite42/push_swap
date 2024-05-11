/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   game_read_at.c                                          4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 04:44:25 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 04:44:32 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libgame.h"
#include"libarr.h"
#include"stdint.h"

int	game_read_at(void *self, int target, int index)
{
	return (arr_read_int_at(game_stack(self, target), index));
}
