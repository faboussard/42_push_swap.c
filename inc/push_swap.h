#ifndef PUSH_SWAP_PUSH_SWAP_H
#define PUSH_SWAP_PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <limits.h>
#include "../libft/inc/libft.h"

//suppr pour evakl
#include <stdio.h>

enum sort_one {SWAP_ONE, PUSH_ONE, ROTATE_ONE, REV_ROTATE_ONE};
enum sort_both {SWAP_BOTH, PUSH_BOTH, ROTATE_BOTH, REV_ROTATE_BOTH};

//***Handle errors
void	check_errors_and_init_stack(t_node **a_stack, const char **av, int ac);
int				error_syntax(const char *str_n);
int				error_duplicate(t_node *a, int n);
void	    free_errors(t_node **a_stack);
void    del(void *content);

//***sorting
void    sort_3_int(t_node **a);
void ft_move_one(enum sort_one command, t_node **one_stack);
void ft_sort_both(enum sort_both command, t_node **first_stack, t_node **second_stack);

//***utils
t_node	*get_stack_bottom(t_node *stack);
t_node	*get_stack_before_bottom(t_node *stack);

//***commands
void swap_one(t_node **head);
void swap_both(t_node **first_stack_head, t_node **second_stack_head);
void rotate_one(t_node **head);
void rotate_both(t_node **first_stack_head, t_node **second_stack_head);
void rev_rotate_one(t_node **list);

//***utils
//int check_exceed_int_limit(long argument);
//int check_is_int(int argument);
//char *ft_push_swap(long *table_element, int table_size);
//int check_errors(long table[], int table_size);

#endif //PUSH_SWAP_PUSH_SWAP_H
