/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   libgame.h                                               4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 05:31:30 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 13:28:53 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBGAME_H
# define LIBGAME_H

// Types
typedef void			*t_game[3];
typedef enum e_opcode	t_opcode;
typedef enum e_stack_id	t_stack_id;

// Methods
void					*game_create(void);
void					game_destroy(void *self);
void					*game_stack(void *self, int id);
int						game_read_at(void *self, int target, int index);
void					game_bind_stack(void *self, int id, void *stack);
void					game_init(void *self, int ac, char **av);
void					game_print(void *self);
void					game_print_cmd(int cmd);
void					game_printf(void *self, char *flags);
void					game_execute(void *self, t_opcode opcode);

// Enums
enum e_opcode
{
	null,
	sa,
	sb,
	ss,
	pa,
	pb,
	ra,
	rb,
	rr,
	rra,
	rrb,
	rrr,
};

enum e_stack_id
{
	a,
	b,
	solution,
};

#endif
