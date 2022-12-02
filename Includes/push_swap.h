/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:47:45 by aceralin          #+#    #+#             */
/*   Updated: 2022/12/02 21:49:12 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>

typedef struct	s_pushswap
{
			int	val;
   			t_pushswap	*next;
}	t_pushswap;



/*Parsing*/
int		ft_check_ar_list(char *argv[]);
/*Move*/

/*Algo*/ 
/*Error*/
void	ft_error(t_pushswap *stack_a, t_pushswap *stack_b, char *error);

/*Utils*/
int		ft_isdigit(int c);
void	ft_putendl_fd(char *s, int fd);
void	ft_putstr_fd(char *s, int fd);
int		ft_atoi(const char *nptr);

#endif