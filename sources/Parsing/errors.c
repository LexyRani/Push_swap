/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 13:58:45 by aceralin          #+#    #+#             */
/*   Updated: 2022/12/07 22:16:46 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

void	ft_error(t_pswap *stack_a, t_pswap *stack_b, char *error)
{
	// /if( stack_a)
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
