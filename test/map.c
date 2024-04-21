#include"librwf.h"
#include"libmap.h"
#include"libtest.h"
#include<stdlib.h>

int test1(void)
{
	void	*map;
	char	*buff;

	buff = rwf_read("./assets/map/simple.ber");
	map = map_create(buff);
	if (map_width(map) != 80)
		return (1);
	if (map_height(map) != 20)
		return (2);
	map_destroy(map, free);
	return (0);
}

int main(void)
{
	test_run(1, test1);
	return (0);
}
