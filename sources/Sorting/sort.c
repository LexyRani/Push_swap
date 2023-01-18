/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:31:19 by aceralin          #+#    #+#             */
/*   Updated: 2023/01/18 21:12:08 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

int	stack_issorted(t_pswap *stack_a)
{
	while(stack_a->next)
	{
		if(stack_a->val > stack_a->next->val)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}

void	ft_sort_three(t_pswap **stack_a)
{
	int	nbr1;
	int nbr2;
	int	nbr3;
	
	nbr1 = (*stack_a)->val;
	nbr2 = (*stack_a)->next->val;
	nbr3 = (*stack_a)->next->next->val;
	//1 3 2
	if(nbr1 < nbr2 && nbr1 < nbr3)
	{
		do_rra(stack_a);
		do_sa(*stack_a);
	}
	//3 1 2 -> ra
	//3 2 1 -> ra -> sa
	else if (nbr1 > nbr2 && nbr1 > nbr3)
	{
		do_ra(stack_a);
		if (nbr3 < nbr2)
			do_sa(*stack_a);
	}
	//2 3 1 -> rra
	else if (nbr1 < nbr2 && nbr1 > nbr3)
		do_rra(stack_a);
	//2 1 3 -> sa
	else
		do_sa(*stack_a);
}

void	ft_sort_small(t_pswap **stack_a, t_pswap **stack_b)
{
	(void)stack_b;
	while (ft_stack_size(*stack_a) > 3)
	{
		ft_get_index(*stack_a);
		while ((*stack_a)->index != 1)
			do_ra(stack_a);//i++;
		do_pb(stack_a, stack_b);
		//ft_move_to()
		// ft_print_stack(*stack_a);
		// return ;
	}
	ft_sort_three(stack_a);
	while (ft_stack_size(*stack_b) > 0)
		do_pa(stack_b, stack_a);
}