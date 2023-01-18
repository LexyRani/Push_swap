/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:15:29 by aceralin          #+#    #+#             */
/*   Updated: 2023/01/18 20:37:51 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

void    ft_get_index(t_pswap *stack)
{
    t_pswap *i;
    t_pswap *j;
    t_pswap *tmp;

    tmp = stack;
    while (tmp)
    {
        tmp->index = 1;
        tmp = tmp->next;
    }
    i = stack;
    while (i)
    {
        j = stack;
        while (j)
        {
            if (i->val > j->val)
                i->index++;
            j = j->next;
        }
        i = i->next;
    }
}

