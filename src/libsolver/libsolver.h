#ifndef LIBSOLVER_H
# define LIBSOLVER_H

typedef struct s_split_stack_input
{
	void	*game;
	int	target;
	int	th;
	int	push;
	int	rot;
}	t_split_stack_input;


int	solver_compute_median(void *stack);
void	solver_split_stack(void *game);
void	solver_split_stack2(void *game);
#endif
