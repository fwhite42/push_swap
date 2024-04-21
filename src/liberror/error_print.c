/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   error_print.c                                      :+:      :+:    :+:   */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/02/22 01:35:48 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/04/04 15:54:49 by fwhite42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"error.h"
#include"libftprintf.h"

void error_print(void *self)
{
	t_error	*error;
	
	error = (t_error *)self;
	ft_printf(LIB_ERROR_HEADER);
	ft_printf("Value:\t\t%i\n", error->value);
	ft_printf("Message:\t%s\n", error->message);
}
