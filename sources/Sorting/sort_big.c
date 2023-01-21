/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 23:22:10 by aceralin          #+#    #+#             */
/*   Updated: 2023/01/21 22:47:30 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

void	move_to_max(t_pswap **stack)
{
	t_pswap	*tmp;
	int		pos;
	int		median;
	int		max;

	max = ft_stack_size(*stack);
	median = ft_stack_size(*stack)/2 + ft_stack_size(*stack) % 2;
	tmp = *stack;
	get_position(stack);
	while(tmp->index != max)
		tmp = tmp->next;
	pos = tmp->position;
	while ((*stack)->index != max)
	{
		if(pos <= median && ((*stack)->index) != max)
			do_rb(stack);
		else if (pos > median && ((*stack)->index) != max)		
			do_rrb(stack);
	}
}

void    ft_push_into_a(t_pswap **stack_a, t_pswap **stack_b)
{
	while (ft_stack_size(*stack_b) > 0)
	{
		move_to_max(stack_b);
		do_pa(stack_b, stack_a);

	}
}

void    ft_push_or_rotate(t_pswap **stack_a, t_pswap **stack_b, int range, int div)
{
    if((*stack_a)->index <= range + div)
	{
        do_pb(stack_a, stack_b);
		if ((*stack_b)->index <= range)
			do_rb(stack_b);
	}
    else
        do_ra(stack_a);
}

void    ft_sort_big(t_pswap **stack_a, t_pswap **stack_b, int div)
{
    int range;
    int i;
    int size;
    int size2;
    
    range = ft_stack_size(*stack_a) / div;
    ft_get_index(*stack_a);
    size2 = ft_stack_size(*stack_a);
    while(range <= size2 + div)
    {
        size = ft_stack_size(*stack_a);
        i = 0;
        while(i < size)
        {
            ft_push_or_rotate(stack_a, stack_b, range, div);
            i++;
        }
        range += div * 2;
    }
	ft_push_into_a(stack_a, stack_b);
}
 	// creer les divisions avec les index  
	// mettre les chiffres dont l index est < med + 10
	// push ou rotate les element de toute la stack dans l ordre par portion de 10 (selon index)
	// push les element de la stack b dans lordre du plus grand au plus petit