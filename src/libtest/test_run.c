#include"libftprintf.h"

void	test_run(int nbr, int (*test)())
{
	int	test_code;
	char	*test_message;

	ft_printf("\n... TEST %04i ......................\n", nbr);
	test_code = test();
	if (test_code == 0)
		test_message = "Passed";
	else
		test_message = "Failed";
	ft_printf("....................................\n", nbr);
	ft_printf("Error Code:\t%x\n", test_code);
	ft_printf("Test Result:\t%s\n", test_message);
}
