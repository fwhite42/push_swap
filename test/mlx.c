#include"libmlx.h"
#include"libmap.h"
#include"libpos.h"
#include"libft.h"
#include"libftprintf.h"
#include<stdlib.h>

enum {
	ON_KEYDOWN = 2,
	ON_KEYUP = 3,
	ON_MOUSEDOWN = 4,
	ON_MOUSEUP = 5,
	ON_MOUSEMOVE = 6,
	ON_EXPOSE = 12,
	ON_DESTROY = 17
};

int	main(void)
{
	int	width;
	int	height;
	int	player_index;

	void	*pos;
	void	*ctx;
	void	*win;
	void	*map;

	map = map_create_null();
	map_load(map, "./assets/map/simple.ber");
	map_print(map);
	player_index = (int) (ft_strchr(map_buff(map), 'P') - map_buff(map));
	
	pos = pos_from_index(map, player_index);
	pos_print(pos);
	pos_move(pos, 3, 0);
	pos_print(pos);
	//Config
	width = 987;
	height = 610;

	ft_printf("Creating MLX context.\n");
	ctx = mlx_init();
	ft_printf("Done.\nctx = %p\n", ctx);

	ft_printf("Creating MLX window.\n");
	win = mlx_new_window(ctx, width, height, "Test");
	ft_printf("Done.\nwin = %p\n", win);

	mlx_key_hook(win, pos_on_command, pos);
	ft_printf("Starting MLX loop");
	mlx_loop(ctx);
	ft_printf("MLX loop ended.");

	return (0);
}
