/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 22:19:06 by aceralin          #+#    #+#             */
/*   Updated: 2023/01/22 22:27:25 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

void	push_swap(t_pswap *stack_a, t_pswap *stack_b)
{
	int	size;

	size = ft_stack_size(stack_a);
	if (stack_issorted(stack_a))
		ft_exit(stack_a, stack_b, NULL);
	if (size == 2)
		ft_exit(stack_a, stack_b, "sa");
	else if (size == 3)
		ft_sort_three(&stack_a);
	else if (size <= 5)
		ft_sort_small(&stack_a, &stack_b);
	else if (size <= 100)
		ft_sort_big(&stack_a, &stack_b, 10);
	else if (size <= 500)
		ft_sort_big(&stack_a, &stack_b, 25);
}
