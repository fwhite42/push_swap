#include"libgame.h"
#include"libarr.h"
#include"libft.h"
#include"libftprintf.h"

static inline void *parse(char *data)
{
	intptr_t	nbr;

	nbr = ft_atoi(data);
	return ((void *)nbr);
}

void	game_init(void *self, int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
		arr_push_int(game_stack(self, a), ft_atoi(av[ac - (i++)]));
}
