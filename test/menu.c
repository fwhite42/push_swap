#include"libmlx.h"
#include<stddef.h>

int	main(void)
{
	void	*ctx;
	void	*win;
	
	ctx = mlx_init();
	win = mlx_new_window(ctx, 640, 640, "Menu");
	if (win == NULL)
		return (1);
	mlx_string_put(ctx, win, 0, 0, 0, "Hello");
	mlx_loop(ctx);
	return (0);
}
