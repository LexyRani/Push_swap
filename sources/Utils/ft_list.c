/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:51:20 by aceralin          #+#    #+#             */
/*   Updated: 2023/01/22 23:19:10 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

t_pswap	*ft_stacklast(t_pswap *stack)
{
	//t_pswap	tmp;
	if (!stack)
		return (NULL);
	while (stack -> next)
		stack = stack -> next;
	return (stack);
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

t_pswap	*ft_lstlast(t_pswap *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	ft_lstadd_back(t_pswap **lst, t_pswap *new)
{	
	if (*lst)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}
