#include"libarr.h"
#include<stddef.h>

intptr_t	arr_median(void *self)
{
	intptr_t	median;
	void		*copy;

	copy = arr_copy(self);
	arr_sort(copy);
	median = (intptr_t) arr_read_at(copy, arr_length(self) / 2);
	arr_destroy(copy, NULL, NULL);
	return (median);
}
