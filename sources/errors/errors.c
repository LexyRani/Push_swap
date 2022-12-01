/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 13:58:45 by aceralin          #+#    #+#             */
/*   Updated: 2022/12/01 15:02:44 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_error(t_pushswap *stack_a, t_pushswap *stack_b, char *error)
{
    if( stack_a)
    {
        /*free*/
        //lstdelone ou lstclear?
    }
    if(stack_b)
        /*free*/
    /* free stucture*/
	ft_putendl_fd(error, 2);
	
    exit(EXIT_FAILURE);
}

