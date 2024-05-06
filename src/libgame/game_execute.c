#include"libgame.h"
#include"libarr.h"
#include<stdint.h>

//1
static int	game_execute_push(void **self, int cmd)
{
	if (cmd == pa && arr_length(self[b]) > 0)
		arr_push(self[a], arr_pop(self[b]));
	else if (cmd == pb && arr_length(self[a]) > 0)
		arr_push(self[b], arr_pop(self[a]));
	return (0);
}

//2
static int	game_execute_rotation(void **self, int cmd)
{
	if (cmd == ra)
		arr_rotate(self[a]);
	else if (cmd == rb)
		arr_rotate(self[b]);
	else if (cmd == rr)
	{
		arr_rotate(self[a]);
		arr_rotate(self[b]);
	}
	return (0);
}

//3
static int	game_execute_rev_rotation(void **self, int cmd)
{
	if (cmd == rra)
		arr_rev_rotate(self[a]);
	else if (cmd == rrb)
		arr_rev_rotate(self[b]);
	else if (cmd == rrr)
	{
		arr_rev_rotate(self[a]);
		arr_rev_rotate(self[b]);
	}
	return (0);
}

//4
static int	game_execute_swap(void **self, int cmd)
{	
	if (cmd == sa)
		arr_swap(self[a]);
	if (cmd == sb)
		arr_swap(self[b]);
	else if (cmd == ss)
	{
		arr_swap(self[a]);
		arr_swap(self[b]);
	}
	return (0);
}

//5
void	game_execute(void *game, t_opcode cmd)
{
	void	**self;

	self = (void **) game;
	if (cmd == rra || cmd == rrb || cmd == rrr)
		game_execute_rev_rotation(self, cmd);
	else if (cmd == ra || cmd == rb || cmd == rr)
		game_execute_rotation(self, cmd);
	else if (cmd == sa || cmd == sb || cmd == ss)
		game_execute_swap(self, cmd);
	else if (cmd == pa || cmd == pb)
		game_execute_push(self, cmd);
	arr_push(self[solution], (void *)((intptr_t) cmd));
}
