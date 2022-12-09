/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:51:20 by aceralin          #+#    #+#             */
/*   Updated: 2022/12/09 17:50:53 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

/*void	ft_lstclear(t_p **lst, void (*del)(void*)) // a modifier le type
{
	t_pswap	*tmp;

	if (lst)
	{
		while (*lst)
		{	
			tmp = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = tmp;
		}
		*lst = NULL;
	}
}
*/

t_pswap	*ft_lstnew(int val)
{
	t_pswap	*new_element;

	new_element = malloc(sizeof(t_pswap));
	if (!new_element)
		return (NULL);
	new_element->val= val;
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

void	ft_lstadd_back(t_pswap **lst,t_pswap *new)
{	
	if (*lst)
	{
		ft_lstlast(*lst)->next = new;
		// printf("%d\n", (*lst) ->val);
	}
	else
		*lst = new;
	//ft_print_stack(*lst);
}