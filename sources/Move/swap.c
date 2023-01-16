/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:35:53 by aceralin          #+#    #+#             */
/*   Updated: 2023/01/16 21:14:52 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

void	ft_swap(t_pswap *stack)
{
	int tmp;
    
    if(stack == NULL || stack->next == NULL)
		return; //ou ft_error
    tmp = stack->val;
    stack->val = stack->next->val; 
    stack->next->val = tmp;
    
}

void	do_sb(t_pswap *stack_b)
{
	ft_swap(stack_b);
	ft_putendl_fd("sb", 1);
}

void    do_sa(t_pswap *stack_a)
{
	ft_swap(stack_a);
    ft_putendl_fd("sa", 1);    
}
void	do_ss(t_pswap *stack_a, t_pswap *stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
	ft_putendl_fd("ss", 1);
}