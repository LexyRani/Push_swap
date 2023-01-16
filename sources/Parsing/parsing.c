/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:58:03 by aceralin          #+#    #+#             */
/*   Updated: 2023/01/16 13:24:40 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

t_pswap	*ft_create_stack(char *argv[], t_pswap *stack)
{
    int			i;
    long int	val;
	
    i = 1;
    while (argv[i])
    {	
		val = ft_atoi(argv[i]);
		if (val > INT_MAX || val < INT_MIN) // liberer la liste et erreur
			ft_error(stack, NULL, "Error : Overflow" ); // verif
        ft_lstadd_back(&stack, ft_lstnew(ft_atoi(argv[i++])));
    }
    return (stack);
}
