/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:21:57 by aceralin          #+#    #+#             */
/*   Updated: 2022/12/05 22:06:47 by aceralin         ###   ########.fr       */
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

int	ft_check_arg_list(char *argv[])
{
	int	i;
	
	i = 0;
	while(argv[i])
	{
		if(!(ft_arg_is_nmb(argv[i])) )
			return(0);
		i++;
		
	}
	if (! num_is_duplicate(argv))
		return(0);
	return(1);	
	/*si av est un nombre*/
	/*verifier overflow de int*/
	/*si av est duplique*/
}

int	main( int argc, char *argv[])
{
	t_pswap	*stack_a;
	t_pswap	*stack_b;
	
	if(argc < 2)
		ft_error(NULL, NULL, "");/*a verifier sinon return (0)*/
	if(ft_check_arg_list(argv))
		ft_error(stack_a, NULL, "Error");
	//stack_a = ft_stack();
	// recuperer les donner et mettre dans la stack a
	// initialiser la stack b a null
	// recuperer la taille de la stack
	// algorythme push swap
	// liberer la memoire de la stack a
	// liberer la memoire de la stack b
	return(0);
}