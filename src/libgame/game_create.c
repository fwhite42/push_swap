#include"libft.h"
#include"libarr.h"
#include"libgame.h"

void	*game_create(void)
{
	void	**self;

	self = ft_calloc(3, sizeof(void *));
	self[a] = arr_create_default();
	self[b] = arr_create_default();
	self[solution] = arr_create_default();
	return (self);
}
