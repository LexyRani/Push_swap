/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:39:08 by aceralin          #+#    #+#             */
/*   Updated: 2023/01/19 15:17:39 by aceralin         ###   ########.fr       */
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
    get_position(stack_a);
}
void	do_rrb(t_pswap **stack_b)
{
    ft_reverse_rotate(stack_b);
    ft_putendl_fd("rrb", 1);
    get_position(stack_b);
}

void	do_rrr(t_pswap **stack_a, t_pswap **stack_b)
{
    ft_reverse_rotate(stack_a);
    ft_reverse_rotate(stack_b);
    ft_putendl_fd("rrr", 1);
    get_position(stack_a);
    get_position(stack_b);
}