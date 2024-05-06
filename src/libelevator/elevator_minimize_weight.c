#include"libelevator.h"
#include"libsolver.h"
#include"libftprintf.h"

inline static int	_max(int a, int b)
{
	if (a < b)
		return (b);
	else
		return (a);
}

inline static int	_minimize(int x, int mod)
{
	if (x == 0 || mod == 0)
		return (0);
	x %= mod;
	if (x < 0)
		x += mod;
	if (2 * x < mod)
		return (x);
	else
		return (x - mod);
}

void	elevator_minimize_weight(void *self, int len_a, int len_b)
{
	int	r;
	int	a;
	int	b;

	r = _minimize(((t_elevator *)self)->r, _max(len_a, len_b));
	a = _minimize(((t_elevator *)self)->a, len_a);
	b = _minimize(((t_elevator *)self)->b, len_b);
	((t_elevator *) self)->r = r;
	((t_elevator *) self)->a = a;
	((t_elevator *) self)->b = b;
}
