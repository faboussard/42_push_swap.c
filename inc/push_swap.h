/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faboussa  <faboussa@student.42lyon.f>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:16:47 by faboussa          #+#    #+#             */
/*   Updated: 2024/01/22 18:00:14 by faboussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../lib/libft/inc/libft.h"
# include <limits.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

enum		e_status
{
	NOK,
	OK
};

//***Handle errors
int			check_errors_and_init_stack(t_node_int **a, char **av, int ac);

//***commands
void		swap_one(t_node_int **head);
void		do_sa(t_node_int **head);
void		do_sb(t_node_int **head);
void		rotate_one(t_node_int **head);
void		do_ra(t_node_int **head);
void		do_rb(t_node_int **head);
void		rev_rotate_one(t_node_int **head);
void		do_rra(t_node_int **head);
void		do_rrb(t_node_int **head);
void		push_head(t_node_int **src_stack_head,
				t_node_int **dest_stack_head);
void		do_pa(t_node_int **a_stack, t_node_int **b_stack);
void		do_pb(t_node_int **a_stack, t_node_int **b_stack);

//***sorting
void		sort_3_elements(t_node_int **a_stack);
void		sort_twenty(t_node_int **a_stack, t_node_int **b_stack);
void		radix_sort(t_node_int **a_stack, t_node_int **b_stack);

//***utils
t_node_int	*find_node_with_max_value(t_node_int *head);
int			is_stack_sorted(t_node_int *one_stack);
void		init_index(t_node_int **stack);
void		free_split(char **split);
int			find_min(t_node_int *stack);

#endif //PUSH_SWAP_H
