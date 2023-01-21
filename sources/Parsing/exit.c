/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 13:58:45 by aceralin          #+#    #+#             */
/*   Updated: 2023/01/21 23:17:47 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

void	ft_free_all(t_pswap *stack_a, t_pswap *stack_b)
{
	t_pswap		*tmp;

	while (stack_a)
	{
		tmp = stack_a;
		stack_a = stack_a->next;
		free(tmp);
	}
	while (stack_b)
	{
		tmp = stack_b;
		stack_b = stack_b->next;
		free(tmp);
	}
}

void	ft_exit(t_pswap *stack_a, t_pswap *stack_b, char *msg)
{
	ft_free_all(stack_a, stack_b);
	if (msg)
		ft_putendl_fd(msg, 1);
	exit(EXIT_SUCCESS);
}
