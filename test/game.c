#include "libgame.h"

int	main(int ac, char **av)
{
	void	*game;

	game = game_create();

	game_init(game, ac, av);
	game_print(game);

	game_execute(game, sa);
	game_print(game);

	game_execute(game, sb);
	game_print(game);

	game_execute(game, ra);
	game_print(game);

	game_execute(game, pb);
	game_print(game);

	game_execute(game, rra);
	game_print(game);

	game_execute(game, pb);
	game_print(game);

	game_execute(game, rrr);
	game_execute(game, rr);
	game_execute(game, ss);
	game_print(game);

	game_destroy(game);
	return (0);
}
