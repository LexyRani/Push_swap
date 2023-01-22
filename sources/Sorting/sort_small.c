/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:31:19 by aceralin          #+#    #+#             */
/*   Updated: 2023/01/22 22:51:19 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

int	stack_issorted(t_pswap *stack_a)
{
	while (stack_a->next)
	{
		if (stack_a->val > stack_a->next->val)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}

void	ft_sort_three(t_pswap **stack_a)
{
	int	nbr1;
	int	nbr2;
	int	nbr3;

	nbr1 = (*stack_a)->val;
	nbr2 = (*stack_a)->next->val;
	nbr3 = (*stack_a)->next->next->val;
	if (nbr1 < nbr2 && nbr2 > nbr3 && nbr1 < nbr3)
	{
		do_rra(stack_a);
		do_sa(*stack_a);
	}
	else if (nbr1 > nbr2 && nbr1 > nbr3)
	{
		do_ra(stack_a);
		if (nbr3 < nbr2)
			do_sa(*stack_a);
	}
	else if (nbr1 < nbr2 && nbr1 > nbr3)
		do_rra(stack_a);
	else if (nbr1 > nbr2 && nbr1 < nbr3)
		do_sa(*stack_a);
}

void	ft_pa_or_rb(t_pswap **s_a, t_pswap **s_b)
{
	if ((*s_b)->next == NULL)
		do_pa(s_b, s_a);
	if ((ft_stack_size(*s_b) == 2) && (*s_b)-> val < (*s_b)->next->val)
		do_rb(s_b);
	while (ft_stack_size(*s_b) > 0)
		do_pa(s_b, s_a);
}

void	ft_sort_small(t_pswap **stack_a, t_pswap **stack_b)
{
	ft_get_index(*stack_a);
	if (ft_stack_size(*stack_a) == 5)
	{
		while (ft_stack_size(*stack_a) > 3)
		{
			if ((*stack_a)-> index == 1 || (*stack_a)-> index == 2)
				do_pb(stack_a, stack_b);
			else
				do_ra(stack_a);
		}
	}
	else if (ft_stack_size(*stack_a) == 4)
	{
		while (ft_stack_size(*stack_a) > 3)
		{
			if ((*stack_a)-> index == 1)
				do_pb(stack_a, stack_b);
			else
				do_ra(stack_a);
		}
	}
	ft_sort_three(stack_a);
	ft_pa_or_rb(stack_a, stack_b);
}
