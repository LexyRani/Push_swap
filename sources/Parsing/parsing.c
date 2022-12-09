/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:58:03 by aceralin          #+#    #+#             */
/*   Updated: 2022/12/09 17:57:44 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

t_pswap *ft_create_stack(char *argv[], t_pswap *stack)
{
    int i;
  
    i = 1;
    while(argv[i])
    {
        ft_lstadd_back(&stack, ft_lstnew(ft_atoi(argv[i++])));
    }
    return (stack);
}
