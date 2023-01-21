/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:21:57 by aceralin          #+#    #+#             */
/*   Updated: 2023/01/21 22:35:39 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"
/*
void	ft_print_stack(t_pswap *stack)
{
	while(stack)
	{
		printf("%d -> index: %d\n", stack->val, stack->index);
		stack = stack->next;
	}
	ft_putstr_fd("\n",1);
}*/

int	main(int argc, char **argv)
{
	t_pswap	*stack_a;
	t_pswap	*stack_b;
	int		size;

	if (argc < 2)
		return (0);
	//ft_error(NULL, NULL, NULL); /*a verifier sinon return (0)*/
	// if (!ft_check_arg_list(argv))	
	//  	ft_error(NULL, NULL, "Error");
		//return (write(1, "Error\n", 6), 0);
	//printf("hello?\n");
	stack_a = NULL;
	stack_a = ft_create_stack(argv, stack_a);/*****/
	stack_b = NULL;
	size = ft_stack_size(stack_a);
	if (stack_issorted(stack_a))
		ft_exit(stack_a, stack_b, NULL);
	if (size == 2)
		ft_exit(stack_a, stack_b, "sa");
	else if(size == 3)
		ft_sort_three(&stack_a);
	else if (size <= 5)
	{
		ft_sort_small(&stack_a, &stack_b);	
	}
	else if (size <= 100 )
	{
		ft_sort_big(&stack_a, &stack_b, 10);
	}
	else if (size <= 500)
		ft_sort_big(&stack_a, &stack_b, 25);
	ft_free_all(stack_a, stack_b);
	return (0);
}

