/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 23:22:10 by aceralin          #+#    #+#             */
/*   Updated: 2023/01/23 18:44:32 by aceralin         ###   ########.fr       */
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
	median = ft_stack_size(*stack) / 2 + ft_stack_size(*stack) % 2;
	tmp = *stack;
	get_position(stack);
	while (tmp->index != max)
		tmp = tmp->next;
	pos = tmp->position;
	while ((*stack)->index != max)
	{
		if (pos <= median && ((*stack)->index) != max)
			do_rb(stack);
		else if (pos > median && ((*stack)->index) != max)
			do_rrb(stack);
	}
}

void	ft_push_into_a(t_pswap **stack_a, t_pswap **stack_b)
{
	while (ft_stack_size(*stack_b) > 0)
	{
		move_to_max(stack_b);
		do_pa(stack_b, stack_a);
	}
}

void	ft_pb_or_ra(t_pswap **s_a, t_pswap **s_b, int range, int div)
{
	if ((*s_a)->index <= range + div)
	{
		do_pb(s_a, s_b);
		if ((*s_b)->index <= range)
			do_rb(s_b);
	}
	else
		do_ra(s_a);
}

void	ft_sort_big(t_pswap **stack_a, t_pswap **stack_b, int div)
{
	int	range;
	int	i;
	int	size;
	int	size2;

	range = ft_stack_size(*stack_a) / div;
	ft_get_index(*stack_a);
	size2 = ft_stack_size(*stack_a);
	while (range <= size2 + div)
	{
		size = ft_stack_size(*stack_a);
		i = 0;
		while (i < size)
		{
			ft_pb_or_ra(stack_a, stack_b, range, div);
			i++;
		}
		range += div * 2;
	}
	ft_push_into_a(stack_a, stack_b);
}
