int	solver_dtop(int arr_length, int index)
{
	if (index < arr_length / 2)
		return (index + 1);
	else
		return (arr_length - (index + 1));
}
