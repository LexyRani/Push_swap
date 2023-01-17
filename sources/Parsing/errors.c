/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 13:58:45 by aceralin          #+#    #+#             */
/*   Updated: 2023/01/17 18:33:36 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

void	ft_error(t_pswap *stack_a, t_pswap *stack_b, char *error)
{
	
	stack_a = NULL;
	stack_b= NULL;// /if( stack_a)
	// {
	// 	/*free*/
	// 	//lstdelone ou lstclear?
	// }
	// if(stack_b)
	// 	/*free*/
	/* free stucture*/
	ft_putendl_fd(error, 2);
	exit(EXIT_FAILURE);
}  
