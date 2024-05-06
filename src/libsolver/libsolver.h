#ifndef LIBSOLVER_H
# define LIBSOLVER_H

typedef struct s_split_stack_input 	t_split_stack_input;
typedef enum e_elevator_type		t_elevator_type;

int		solver_find_twin_index(void *game, int index_b);
void		solver_reinsert_stack_b(void *game, int technique);
void		solver_generate_stack_b(void *game, int techinique);
void		solver_solve3(void *game);
void		solver_solve5(void *game);
void		solver_final_rotate(void *game);
int		solver_compute_median(void *arr);
#endif
