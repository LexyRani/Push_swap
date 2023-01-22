/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:21:57 by aceralin          #+#    #+#             */
/*   Updated: 2023/01/22 22:28:47 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_pswap	*stack_a;
	t_pswap	*stack_b;

	if (argc < 2)
		return (0);
	if (!ft_check_arg_list(argv))
		ft_exit(NULL, NULL, "Error");
	stack_a = NULL;
	stack_a = ft_create_stack(argv, stack_a);
	stack_b = NULL;
	push_swap(stack_a, stack_b);
	ft_free_all(stack_a, stack_b);
	return (0);
}

// fix stack_last 