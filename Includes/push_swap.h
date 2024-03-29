/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:47:45 by aceralin          #+#    #+#             */
/*   Updated: 2023/01/23 18:35:17 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_pswap
{
	int				val;
	int				index;
	int				position;
	struct s_pswap	*next;
}					t_pswap;

/* ************************************************************************** */
/*									Parsing									  */
/* **************************************************************** ********* */

int			ft_check_arg_list(char *argv[]);
t_pswap		*ft_create_stack(char *argv[], t_pswap *stack);
int			ft_stack_size(t_pswap *stack_a);
int			ft_arg_is_nmb(char *s);
int			num_is_duplicate(char **s);
void		ft_get_index(t_pswap *stack);
void		get_position(t_pswap **stack);
/* ************************************************************************** */
/*									Move									  */
/* ************************************************************************** */
/* swap*/
void		ft_swap(t_pswap *stack);
void		do_ss(t_pswap *stack_a, t_pswap *stack_b);
void		do_sa(t_pswap *stack_a);
void		do_sb(t_pswap *stack_b);
/*push*/	
void		ft_push(t_pswap **stack1, t_pswap **stack2);
void		do_pa(t_pswap **stack_b, t_pswap **stack_a);
void		do_pb(t_pswap **stack_a, t_pswap **stack_b);
/* rotate*/
void		ft_rotate(t_pswap **stack_a);
void		do_ra(t_pswap **stack_a);
void		do_rb(t_pswap **stack_b);
void		do_rr(t_pswap **stack_a, t_pswap **stack_b);
/*reverse_rotate*/
void		ft_reverse_rotate(t_pswap **stack);
void		do_rrb(t_pswap **stack_b);
void		do_rra(t_pswap **stack_a);
void		do_rrr(t_pswap **stack_a, t_pswap **stack_b);
/* ************************************************************************** */
/*									Sort									  */
/* ************************************************************************** */
void		push_swap(t_pswap **stack_a, t_pswap **stack_b);
int			stack_issorted(t_pswap *stack_a);
void		ft_sort_three(t_pswap **stack_a);
void		ft_sort_small(t_pswap **stack_a, t_pswap **stack_b);
void		ft_pa_or_rb(t_pswap **s_a, t_pswap **s_b);
void		ft_sort_big(t_pswap **stack_a, t_pswap **stack_b, int div);
void		ft_pb_or_ra(t_pswap **s_a, t_pswap **s_b, int range, int div);
void		ft_push_into_a(t_pswap **stack_a, t_pswap **stack_b);
void		move_to_max(t_pswap **stack);
/* ************************************************************************** */
/*									Error									  */
/* ************************************************************************** */
void		ft_free_all(t_pswap *stack_a, t_pswap *stack_b);
void		ft_exit(t_pswap *stack_a, t_pswap *stack_b, char *msg);	
/* ************************************************************************** */
/*									Utils									  */
/* ************************************************************************** */
int			ft_isdigit(int c);
void		ft_putendl_fd(char *s, int fd);
void		ft_putstr_fd(char *s, int fd);
long int	ft_atoi(const char *nptr);
void		ft_putchar_fd(char c, int fd);
t_pswap		*ft_lstnew(int val);
void		ft_lstadd_back(t_pswap **lst, t_pswap *new);
//void			ft_print_stack(t_pswap *stack);
t_pswap		*ft_stacklast(t_pswap *stack);
#endif