/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:21:57 by aceralin          #+#    #+#             */
/*   Updated: 2022/12/01 16:41:18 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int	ft_arg_is_nmb(char *argv[])
{
	int i;

	i = 0;
	while(argv[i])
	{
		
		i++;
	}
}

int	ft_check_ar_list(char *argv[])
{
	int	i;
	
	i = 0;
	while(argv[i])
	{
		if(!(ft_arg_is_nmb(argv[i])) )
	}
		
		// verifier la stack, si bon format et si pas de chiffre repetes
	
	/*si av est un nombre*/
	/*verifier overflow de int*/
	/*si av est duplique*/
}

int	main( int argc, char *argv[])
{
	t_pushswap	*stack_a;
	t_pushswap	*stack_b;
	
	if(argc < 2)
		ft_error(NULL, NULL, "");/*a verifier sinon return (0)*/
	if(ft_check_arg_list(argv))
		ft_error(stack_a, NULL, "Error");
	
	// Error si instruction n'existe pas ou est mal formate.	
	// recuperer les donner et mettre dans la stack a
	// initialiser la stack b a null
	// recuperer la taille de la stack
	// algorythme push swap
	// liberer la memoire de la stack a
	// liberer la memoire de la stack b
	return(0);
}