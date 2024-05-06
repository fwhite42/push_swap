#include"libarr.h"
#include"libft.h"
#include"libftprintf.h"
#include"libtest.h"
#include<stdio.h>

int	test1(void)
{
	void	*arr;

	arr = arr_create_default();
	if (arr_stepsize(arr) != ARR_DEFAULT_STEPSIZE)
		return (1);
	if (arr_maxsize(arr) != ARR_DEFAULT_MAXSIZE)
		return (1);
	if (arr_length(arr) != 0)
		return (1);
	arr_push(arr, NULL);
	arr_push(arr, NULL);
	if (arr_length(arr) != 2)
		return (1);
	arr_print(arr);
	arr_destroy(arr, NULL, NULL);
	return (0);
}

int	test2(void)
{
	void	*arr;
	char	*str;

	arr = arr_create_default();
	arr_print(arr);
	str = "Fuck You Sucker";
	arr_strchr(arr, str, 'u');
	arr_print(arr);
	if (arr_length(arr) != 3)
		return (1);
	if (arr_read_at(arr, 0) != (char *) 1)
		return (1);
	if (arr_read_at(arr, 1) != (char *) 7)
		return (1);
	if (arr_pop(arr) != (void *) 10)
		return (1);
	arr_print(arr);
	if (arr_length(arr) != 2)
		return (1);
	if (arr_maxsize(arr) != 3)
		return (1);
	arr_skim(arr);
	arr_print(arr);
	if (arr_maxsize(arr) != 2)
		return (1);
	arr_strchr(arr, str, ' ');
	arr_print(arr);
	if (arr_length(arr) != 4)
		return (1);
	arr_destroy(arr, NULL, NULL);
	return (0);
}


void	*_morph(char *str)
{
	return ((void *)ft_strlen(str));
}

int	test3(void)
{
	void	*arr;

	arr = arr_create_default();
	arr_push(arr, "Hello World");
	arr_push(arr, "Suck My Dick");
	arr_push(arr, "");
	arr_morph(arr, _morph, NULL);
	arr_print(arr);
	arr_sort(arr);
	arr_print(arr);
	return (0);
}

int	test4(void)
{
	void	*arr;

	arr = arr_create_default();
	arr_push_int(arr, 184);
	if (arr_read_int_at(arr, -1) != 184)
		return (1);
	arr_push_int(arr, 69420);
	if (arr_read_int_at(arr, -1) !=  69420)
		return (2);
	arr_print(arr);
	arr_destroy(arr, NULL, NULL);
	return (0);
}

int	main(void)
{
	test_run(1, test1);
	test_run(2, test2);
	test_run(3, test3);
	test_run(4, test4);
	return (0);
}
