/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:35:53 by aceralin          #+#    #+#             */
/*   Updated: 2023/01/16 18:19:20 by aceralin         ###   ########.fr       */
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

void	ft_ss(t_pswap *stack_a,t_pswap *stack_b)
{
	int tmpa;
    int tmpb;
    
    tmpa = stack_a->val;
    stack_a->val = stack_a->next->val; 
    stack_a->next->val = tmpa;

    
    tmpb = stack_b->val;
    stack_b->val = stack_b->next->val; 
    stack_b->next->val = tmpb;
}

void    do_sa(t_pswap *stack_a)
{
        ft_swap(stack_a);
        ft_putendl_fd("sa", 1);    
}