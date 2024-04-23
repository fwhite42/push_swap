#ifndef LIBGAME_H
# define LIBGAME_H

typedef enum e_stack_id
{
	a,
	b,
	solution,
}	t_stack_id;

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

// Definition
typedef void *t_game[3];

// Constructor
void	*game_create(void);
void	*game_copy(void *self, int include_solution);

// Parse Input Arguments
int	game_init(void *self, int ac, char **av);

// Getters
void	*game_stack(void *self, int id);
int	game_read_at(void *self, int target, int index);

// Setters
void	game_bind_stack(void *self, int id, void *stack);

// Deconstructor
int	game_destroy(void *self);

// Printer
int	game_print(void *self);

// Executes a command
void	game_execute(void *self, int opcode);

#endif
