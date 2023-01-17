/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:21:57 by aceralin          #+#    #+#             */
/*   Updated: 2023/01/17 18:15:25 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

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

int	ft_arg_is_nmb(char *s)
{
	int i;

	i = 0;
	if ((s[i] == '-' || s[i] == '+') && s[ i + 1])
		i++;
	while((s[i]) && ft_isdigit(s[i]))
		i++;
	if(s[i] && !ft_isdigit(s[i]))
		return(0);
	return(1);
}
/* verif si arg = nombre et si pas duplique*/
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
	/*si av est un nombre*/
	/*verifier overflow de int*/
	/*si av est duplique*/
}
void	ft_print_stack(t_pswap *stack)
{
	while(stack)
	{
		printf("%d\n", stack->val);
		stack = stack->next;
	}
}

int	main( int argc, char *argv[])
{
	t_pswap	*stack_a;
	t_pswap	*stack_b;
	stack_a = NULL;
	char	*element[4] = {"","4","5","6"};

	if(argc < 2)
		ft_error(NULL, NULL, ""); /*a verifier sinon return (0)*/
	if(!ft_check_arg_list(argv))	
		ft_error(stack_a, NULL, "Error");
	stack_a = ft_create_stack(argv, stack_a);/*****/
	ft_print_stack(stack_a);
	stack_b = NULL;
	stack_b = ft_create_stack(element, stack_b);
	
	
	//do_ss(stack_a,stack_b);
	printf("---stack_a---\n");
	do_rra(&stack_a);
	ft_print_stack(stack_a);
	printf("---stack_b---\n");
	do_rrb(&stack_b);
	ft_print_stack(stack_b);

	
	// recuperer les donner et mettre dans la stack a
	// initialiser la stack b a null
	// recuperer la taille de la stack
	// algorythme push swap
	// liberer la memoire de la stack a
	// liberer la memoire de la stack b
	
	return(0);
}