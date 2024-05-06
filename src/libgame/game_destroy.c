#include<stddef.h>
#include"libarr.h"
#include"libgame.h"

void	game_destroy(void *self)
{
	arr_destroy(((void **)self)[a], NULL, NULL);
	arr_destroy(((void **)self)[b], NULL, NULL);
	arr_destroy(((void **)self)[solution], NULL, NULL);
}
