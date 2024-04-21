#ifndef LIBARR_H
# define LIBARR_H

# define ARR_SAFE_MAX_LENGTH	2 >> 16
# define ARR_DEFAULT_STEPSIZE	1
# define ARR_DEFAULT_MAXSIZE	0

# include<stdbool.h>

//Struct
typedef struct s_arr
{
	void	**data;
	int	length;
	int	maxsize;
	int	stepsize;
}	t_arr;

//Construction
void	*arr_create_null(void);
void	*arr_copy(void *self);
void	*arr_create(int step_size, int max_size);
void	*arr_create_default(void);

//Destructors
void	arr_destroy(void *self, void (*fn)(), void *caller);

//Config
bool	arr_increase_max_size(void *self);
bool	arr_skim(void *self);

//Print
void	arr_print(void *self);
void	arr_printf(void *self, char *flags);

//Read Operations
void	*arr_read_at(void *self, int index);
void	*arr_pop(void *self);

//Write Operations
bool	arr_write_at(void *self, int index, void *item);
bool	arr_push(void *self, void *item);

//Getters
int	arr_length(void *self);
int	arr_maxsize(void *self);
int	arr_stepsize(void *self);
void	**arr_data(void *self);

// Setters
void	arr_bind_data(void *self, void **data);
void	arr_set_stepsize(void *self, int stepsize);
void	arr_set_length(void *self, int lengt);
void	arr_set_maxsize(void *self, int maxsize);

//Functional Programming
void	arr_foreach(void *self, void (*fn)(), void *caller);
void	arr_morph(void *self, void *(*fn)(), void *caller);
void	arr_reduce(void *self, void *(*fn)(), void *memory);
void	arr_strchr(void *self, char *string, char search);
void	arr_sort(void *self);
void	arr_swap(void *self);
void	arr_rev_rotate(void *self);
void	arr_rotate(void *self);
void	arr_reverse(void *self);
#include<stdint.h>
intptr_t	arr_median(void *self);
//Misc
void	**arr_copy_data(void *self);
#endif
