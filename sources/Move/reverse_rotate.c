/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:39:08 by aceralin          #+#    #+#             */
/*   Updated: 2023/01/17 18:22:07 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

void	ft_reverse_rotate(t_pswap **stack)
{
    t_pswap *tmp;
    t_pswap *head;
    t_pswap *end;

    tmp = *stack;
    head = ft_stacklast(*stack); 
    end = *stack;
    while(end && end->next && end->next->next)
        end = end->next;
    *stack = head;
    end->next = NULL;
    head->next = tmp;  
}

void    do_rra(t_pswap **stack_a)
{
    ft_reverse_rotate(stack_a);
    ft_putendl_fd("rra", 1);
}
void	do_rrb(t_pswap **stack_b)
{
    ft_reverse_rotate(stack_b);
    ft_putendl_fd("rrb", 1);
}

void	do_rrr(t_pswap **stack_a, t_pswap **stack_b)
{
    ft_reverse_rotate(stack_a);
    ft_reverse_rotate(stack_b);
    ft_putendl_fd("rrr", 1);
}

// ft_rra(stack_a, stack_b);
// ft_rrb(stack_a, stack_b);
// ft_rrr(stack_a, stack_b);