/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:51:20 by aceralin          #+#    #+#             */
/*   Updated: 2023/01/23 15:03:13 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

t_pswap	*ft_stacklast(t_pswap *stack)
{
	t_pswap	*tmp;

	tmp = stack;
	if (!tmp)
		return (NULL);
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}

t_pswap	*ft_lstnew(int val)
{
	t_pswap	*new_element;

	new_element = malloc(sizeof(t_pswap));
	if (!new_element)
		return (NULL);
	new_element->val = val;
	new_element->index = 1;
	new_element->next = NULL;
	return (new_element);
}

void	ft_lstadd_back(t_pswap **lst, t_pswap *new)
{	
	if (*lst)
		ft_stacklast(*lst)->next = new;
	else
		*lst = new;
}
