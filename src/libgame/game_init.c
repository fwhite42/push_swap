#include"libgame.h"
#include"libarr.h"
#include"libft.h"

static inline void *parse(char *data)
{
	intptr_t	nbr;

	nbr = ft_atoi(data);
	return ((void *)nbr);
}

int	game_init(void **self, int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
		arr_push(self[a], av[ac - i++]);
	arr_morph(self[a], parse, NULL);
	return (0);
}
