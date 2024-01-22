/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faboussa  <faboussa@student.42lyon.f>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:16:47 by faboussa          #+#    #+#             */
/*   Updated: 2024/01/22 18:00:56 by faboussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	main(int ac, char **av)
//int main(void)
{
	t_node_int	*b_stack;
	t_node_int	*a_stack;

	a_stack = NULL;
	b_stack = NULL;
	//	int ac = 5;
	//	char *av[] = {"1", "2", "5", "4"};
	if (ac < 2)
		return (ft_putstr_fd("Error\n", STDERR_FILENO));
	if (check_errors_and_init_stack(&a_stack, av, ac) == NOT_OK)
		return (ft_putstr_fd("Error\n", STDERR_FILENO));
	//    while (a_stack != NULL)
	//    {
	//        ft_printf("test\n");
	//        ft_printf("%d\n", a_stack->content);
	//        a_stack = a_stack->next;
	//    }
	//test pushshwap a
	//
	//
	//    ft_move_both(PUSH_HEAD, &a_stack, &b_stack);
	//    ft_move_both(PUSH_HEAD, &a_stack, &b_stack);
	//    ft_move_both(PUSH_HEAD, &a_stack, &b_stack);
	//    ft_move_both(PUSH_HEAD, &a_stack, &b_stack);
	// *******************testswap
	//
	//ft_move_one(ROTATE_ONE, &a_stack);
	//ft_move_one(ROTATE_ONE, &a_stack);
	//	ft_move_one(ROTATE_ONE, &a_stack);
	//    ft_move_both(REV_ROTATE_BOTH, &a_stack, &b_stack);
	//    ft_move_both(REV_ROTATE_BOTH, &a_stack, &b_stack);
	// ft_move_both(REV_ROTATE_BOTH, &a_stack, &b_stack);
	//    ft_move_both(ROTATE_BOTH, &a_stack, &b_stack);
	//    while (b_stack != NULL)
	//    {
	//        printf("bstack\n");
	//        printf("%d\n", b_stack->content);
	//        b_stack = b_stack->next;
	//    }
	//
	//    while (a_stack != NULL)
	//    {
	//        printf("test_astack\n");
	//        printf("%d\n", a_stack->content);
	//        a_stack = a_stack->next;
	//    }
	//    if (is_stack_sorted(a_stack))
	//        printf("%s", "sorted");
	//    else
	//        printf("%s", "not sorted");
	if ((is_stack_sorted(a_stack)) == OK)
		ft_printf("sorted");
	else if (ac == 3)
	{
		sort_3_elements(&a_stack);
		while (a_stack != NULL)
		{
			ft_printf("test_astack\n");
			ft_printf("%d\n", a_stack->content);
			a_stack = a_stack->next;
		}
		if ((is_stack_sorted(a_stack)) == OK)
			ft_printf("sorted");
	}
	else
	{
		init_index(&a_stack);
		radix_sort(&a_stack, &b_stack);
		while (a_stack != NULL)
		{
			ft_printf("test_astack\n");
			ft_printf("%d\n", a_stack->content);
			a_stack = a_stack->next;
		}
		//		if ((is_stack_sorted(a_stack)) == OK)
		//			ft_printf("sorted");
	}
	ft_lstclear(&a_stack);
	ft_lstclear(&b_stack);
	return (0);
}
