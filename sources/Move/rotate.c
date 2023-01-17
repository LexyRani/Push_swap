/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:36:14 by aceralin          #+#    #+#             */
/*   Updated: 2023/01/17 19:25:16 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

void	ft_rotate(t_pswap **stack)
{
	t_pswap *tmp;
    t_pswap *end;
    
    //if(*stack == NULL || *stack->next == NULL)
		//return;
    tmp = *stack;
    *stack = (*stack)->next;
    end = ft_stacklast(*stack);
    tmp->next = NULL;
    end->next = tmp;
}

// corriger .h avec les bons protypes
void	do_ra(t_pswap **stack_a)
{
    ft_rotate(stack_a);
    ft_putendl_fd("ra", 1);
}
void	do_rb(t_pswap **stack_b)
{
	ft_rotate(stack_b);
    ft_putendl_fd("rb", 1);
}

void	do_rr(t_pswap **stack_a, t_pswap **stack_b)
{
	ft_rotate(stack_a);
    ft_rotate(stack_b);
    ft_putendl_fd("rr", 1);
}
