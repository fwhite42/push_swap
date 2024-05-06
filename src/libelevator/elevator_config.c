#include"libelevator.h"
#include"liberror.h"

void	elevator_config(void *self, int type, int x, int y)
{
	t_elevator	*this;

	this = self;
	if (type == ASYNC_ELEVATOR)
		*this = (t_elevator) {0, -(x + 1), - (y + 1)};
	else if (type == SYNC_ELEVATOR_A)
		*this = (t_elevator) {- (x + 1), 0, - (y - x)};
	else if (type == SYNC_ELEVATOR_B)
		*this = (t_elevator) {-(y + 1), -(x - y), 0};
	else
		error_fatal("Invalid elevator type", 0);
	elevator_print(this);
}
