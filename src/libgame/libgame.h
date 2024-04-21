#ifndef LIBGAME_H
# define LIBGAME_H

typedef enum e_stack_id
{
	a,
	b,
	solution,
	metadata,
}	t_stack_id;

// Getters
void	**game_stack(void *self);
void	*game_solution(void *self);

// List of push swap opcodes, plus "null" (which is means "no operation")
typedef enum e_opcodes
{
	null,
	sa,
	sb,
	ss,
	pa,
	pb,
	ra,
	rb,
	rr,
	rra,
	rrb,
	rrr,
}	t_opcodes;

// Constructor
void	*game_create(void);

// Deconstructor
int	game_destroy(void *self);

// Printer
int	game_print(void **self);

// Executes a command
int	game_execute(void **self, int opcode);

int	game_init(void **self, int ac, char **av);

// ??
void	game_split_stack(void **self, int target, int flag);
#endif
