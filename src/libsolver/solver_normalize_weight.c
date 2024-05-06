int	solver_normalize_weight(int x, int modulo)
{
	x %= modulo;
	if (x < 0)
		x += modulo;
	return (x);
}
