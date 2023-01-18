/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:21:57 by aceralin          #+#    #+#             */
/*   Updated: 2023/01/18 20:34:42 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

void	ft_print_stack(t_pswap *stack)
{
	while(stack)
	{
		printf("%d -> index: %d\n", stack->val, stack->index);
		stack = stack->next;
	}
}

int	main(int argc, char **argv)
{
	t_pswap	*stack_a;
	t_pswap	*stack_b;
	int		size;

	if (argc < 2)
		return (0);//ft_error(NULL, NULL, NULL); /*a verifier sinon return (0)*/
	if (!ft_check_arg_list(argv))	
	 	ft_error(NULL, NULL, "Error");
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
		ft_sort_small(&stack_a, &stack_b);
	// printf("---stack_a---\n");
	// ft_print_stack(stack_a);
	ft_get_index(stack_a);
	printf("---stack_a---\n");
	ft_print_stack(stack_a);
	// printf("%d\n", ft_stack_size(stack_a));
	// printf("---stack_a---\n");
	// ft_print_stack(stack_a);
	// printf("---stack_b---\n");
	// ft_print_stack(stack_b);
	//do_pa(&stack_a, &stack_b);
	//do_ra(&stack_a);
	//do_sa(stack_a);
	// attribuer des index selon si la valeur est plus grande ou plus petite
	// algorithme push swap
	// liberer la memoire de la stack a
	// liberer la memoire de la stack b
	return (0);
}

//char	*element[4] = {"11","22","33","44"};
//stack_b = ft_create_stack(element, stack_b);
//ft_print_stack(stack_a);
	/*printf("%d\n", ft_stack_size(stack_a));
	printf("---stack_a---\n");
	do_pa(&stack_a, &stack_b);
	do_ra(&stack_a);
	do_sa(stack_a);
	ft_print_stack(stack_a);
	printf("---stack_b---\n");
	do_pb(&stack_b, &stack_a);
	ft_print_stack(stack_b);*/