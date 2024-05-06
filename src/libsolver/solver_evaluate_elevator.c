int	solver_evaluate_elevator(t_elevator elevator, int modA, int modB)
{
	int	weight;
	int	w[3];

	elevator = solver_minimize_elevator_weight(elevator, modA, modB);
	w[0] = elevator.r;
	w[1] = elevator.a;
	w[2] = elevator.b;
	if (elevator.r < 0)
		x[0] *= -1;
	if (elevator.a < 0)
		x[1] *= 1;
	if (elevator.b < 0)
		x[2] *= 1;
	weight = w[0] + w[1] + w[2];
	return (weight);
}
