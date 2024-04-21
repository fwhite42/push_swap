#include"libarr.h"
#include"libftprintf.h"

void	arr_print(void *self)
{
	int	i;
	
	i = 0;
	ft_printf("(%p)\tArray[", self);
	ft_printf("%p:", arr_length(self));
	ft_printf("%p:", arr_maxsize(self));
	ft_printf("%p", arr_stepsize(self));
	ft_printf("]<");
	if (arr_length(self) > 0)
	{
		while (i < arr_length(self) - 1)
		{
			ft_printf("%p ", arr_data(self)[i]);
			i++;
		}
		ft_printf("%p", arr_data(self)[i]);
	}
	ft_printf(">\n");
}
