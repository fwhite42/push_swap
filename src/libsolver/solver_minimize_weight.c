int	solver_minimize_weight(int x, int modulo)
{
	int	normalized;

	normalized = solver_normalize(x, modulo);
	if (2 * normalized < modulo)
		return (normalized);
	else
		return (modulo - normalized);
}


