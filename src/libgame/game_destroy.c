/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   game_destroy.c                                          4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 05:33:39 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 05:33:53 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include"libarr.h"
#include"libgame.h"

void	game_destroy(void *self)
{
	arr_destroy(((void **)self)[a], NULL, NULL);
	arr_destroy(((void **)self)[b], NULL, NULL);
	arr_destroy(((void **)self)[solution], NULL, NULL);
	free(self);
}
