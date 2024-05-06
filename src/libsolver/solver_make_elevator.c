t_elevator	solver_make_elevator(t_elevator_type type, int x, int y)
{
	t_elevator	elevator;

	if (type == SYNC_ELEVATOR)
		elevator = (t_elevator) {0, -(x + 1), - (y + 1)};
	else if (type == ASYNC_ELEVATOR_A)
		elevator = (t_elevator) {- (x + 1), 0, - (y - x)};
	else if (type == ASYNC_ELEVATOR_B)
		elevator = (t_elevator) {-(y + 1), -(x - y), 0};
	else
		error_fatal("Invalid elevator type", 0);
	return (elevator);
}
