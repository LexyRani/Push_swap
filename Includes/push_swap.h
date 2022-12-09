/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:47:45 by aceralin          #+#    #+#             */
/*   Updated: 2022/12/09 17:54:37 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct	s_pswap
{
	int					val;
   	struct	s_pswap	*next;
}						t_pswap;

/* ************************************************************************** */
/*									Parsing									  */
/* ************************************************************************** */

int		ft_check_arg_list(char *argv[]);
t_pswap	*ft_create_stack(char *argv[], t_pswap *stack);

/* ************************************************************************** */
/*									Move									  */
/* ************************************************************************** */



/* ************************************************************************** */
/*									Algo									  */
/* ************************************************************************** */


/* ************************************************************************** */
/*									Error									  */
/* ************************************************************************** */

void	ft_error(t_pswap *stack_a, t_pswap *stack_b, char *error);

/* ************************************************************************** */
/*									Utils									  */
/* ************************************************************************** */
int		ft_isdigit(int c);
void	ft_putendl_fd(char *s, int fd);
void	ft_putstr_fd(char *s, int fd);
int		ft_atoi(const char *nptr);
void	ft_putchar_fd(char c, int fd);
t_pswap	*ft_lstnew(int val);
t_pswap	*ft_lstlast(t_pswap *lst);
void	ft_lstadd_back(t_pswap **lst,t_pswap *new);
void	ft_print_stack(t_pswap *stack);
#endif