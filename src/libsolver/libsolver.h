/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   libsolver.h                                             4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 04:19:49 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 05:43:22 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBSOLVER_H
# define LIBSOLVER_H

int			solver_find_twin_index(void *game, int index_b);
void		solver_reinsert_stack_b(void *game, int technique);
void		solver_generate_stack_b(void *game, int techinique);
void		solver_solve3(void *game);
void		solver_final_rotate(void *game);
int			solver_compute_median(void *arr);
#endif
