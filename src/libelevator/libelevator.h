#ifndef LIBELEVATOR_H
# define LIBELEVATOR_H
typedef struct s_elevator		t_elevator;
typedef enum e_elevator_type		t_elevator_type;
typedef struct s_config_cheapest_input	t_elevator_ccinput;

void		*elevator_create_null(void);
void		elevator_destroy(void *self);
void		elevator_config(void *self, int type, int x, int j);
void		elevator_minimize_weight(void *self, int len_a, int len_b);
int		elevator_compute_weight(void *self);
void		elevator_config_cheapest(void *self, t_elevator_ccinput input);
void		elevator_execute(void *self, void *game);
void		elevator_print(void *self);

struct s_elevator
{
	int	r;
	int	a;
	int	b;
};

enum e_elevator_type
{
	ASYNC_ELEVATOR,
	SYNC_ELEVATOR_A,
	SYNC_ELEVATOR_B,
};

struct s_config_cheapest_input
{
	int	x;
	int	y;
	int	len_a;
	int	len_b;
};
#endif
