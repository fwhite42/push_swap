typedef union	u__item
{
	int	nbr;
	void	*ptr;
	char	*str;
	int	*vec;
}	t__item;

typedef union u_item
{
	int	nbr;
	void	*ptr;
	char	*str;
	int	*vec;
	t__item	*(*fn)(t__item boh);
}	t_item;

#include<stdio.h>

int	main()
{
	printf("> %i\n", sizeof(t_item));
	printf("> %i\n", sizeof(void *));
	return (0);
}
