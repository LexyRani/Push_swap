/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:58:03 by aceralin          #+#    #+#             */
/*   Updated: 2023/01/20 16:24:23 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

//char	ft_

t_pswap	*ft_create_stack(char *argv[], t_pswap *stack)
{
    int			i;
    long int	val;
	
    i = 1;
	// gerer les - et + en focntion de la position dans la str
	
    while (argv[i])
    {	
		val = ft_atoi(argv[i]);
		if (val > INT_MAX || val < INT_MIN) // liberer la liste et erreur
			{
                write(1, "Error\n", 6);
                exit(0);
            }              
//            }ft_error(stack, NULL, "Error" ); // verif
        ft_lstadd_back(&stack, ft_lstnew(ft_atoi(argv[i++])));
    }
    return (stack);
}

int ft_stack_size(t_pswap *stack_a)
{
    int i;
    t_pswap *tmp;
    
    i = 0;
    tmp = stack_a;
    while(tmp)
    {
       tmp = tmp->next;
        i++;
    }
    return (i);
}

int	ft_check_arg_list(char *argv[])
{
	int	i;
	i = 1;
	while(argv[i])
	{
		if(!(ft_arg_is_nmb(argv[i])) )
			return(0);
		i++;
		
	}
	if (!num_is_duplicate(argv))
		return(0);
	return(1);	
}

int	ft_arg_is_nmb(char *s)
{
	int i;

	i = 0;
	if ((s[i] == '-' || s[i] == '+') && s[i + 1])
		i++;
	while((s[i]) && ft_isdigit(s[i]))
		i++;
	if(s[i] && !ft_isdigit(s[i]))
		return(0);
	return(1);
}

int	num_is_duplicate(char **s)
{
	int	i;
	int j;

	i = 0;
	while (s[i])
	{
		j = i + 1;
		while (s[j])
		{
			if(ft_atoi(s[i]) == ft_atoi(s[j]))
				return(0);
			j++;
		}
		i++;
	}
	return(1);
}