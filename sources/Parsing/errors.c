/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 13:58:45 by aceralin          #+#    #+#             */
/*   Updated: 2023/01/18 18:11:53 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

void	ft_error(t_pswap *stack_a, t_pswap *stack_b, char *error)
{
	
	stack_a = NULL;
	stack_b = NULL;// /if( stack_a)
	// {
	// 	/*free*/
	// 	//lstdelone ou lstclear?
	// }
	// if(stack_b)
	// 	/*free*/
	/* free stucture*/
	// printf("hello?\n");
	if (error)
		ft_putendl_fd(error, 2);
	exit(0);//EXIT_FAILURE);
}  

void	ft_exit(t_pswap *stack_a, t_pswap *stack_b, char *msg)
{
	stack_a = NULL;
	stack_b = NULL;
	//ft_free_all(stack_a, stack_b);
	if (msg)
		ft_putendl_fd(msg, 1);
	exit(EXIT_SUCCESS);
}