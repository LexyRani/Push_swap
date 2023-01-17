/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:36:22 by aceralin          #+#    #+#             */
/*   Updated: 2023/01/17 19:43:53 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

void	ft_push(t_pswap **stack1, t_pswap **stack2)
{
	t_pswap *tmp;
	if(stack1 == NULL)
		return;
	tmp = (*stack1)->next;
	(*stack1)->next = *stack2;
	*stack2 = *stack1;
	*stack1 = tmp;
}

void	do_pa(t_pswap **stack_a, t_pswap **stack_b)
{
	ft_push(stack_a, stack_b);
	ft_putendl_fd("pa", 1);
}

void	do_pb(t_pswap **stack_b, t_pswap **stack_a)
{
	ft_push(stack_b, stack_a);
	ft_putendl_fd("pb", 1);
}
