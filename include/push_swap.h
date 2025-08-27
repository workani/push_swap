/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:52:39 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/27 20:08:01 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include "../libft/libft.h"
# include "list.h"

bool	ft_cst_atol(char *str, long *result);
bool	is_valid_number(long x);
bool	is_duplicate(t_list *head, int x);
void	exit_on_error(t_list *head);

void	free_list(t_list *head);
int		get_list_size(t_list *a);
bool	is_sorted(t_list *stack);

void	do_sa(t_list *a);
void	do_sb(t_list *b);
void	do_ss(t_list *a, t_list *b);
void	do_pa(t_list **a, t_list **b);
void	do_pb(t_list **a, t_list **b);
void	do_ra(t_list *a);
void	do_rb(t_list *b);
void	do_rr(t_list *a, t_list *b);
void	do_rra(t_list *a);
void	do_rrb(t_list *b);
void	do_rrr(t_list *a, t_list *b);

void	execute_move_on_a(t_list *a, int pos);
void	execute_move_on_b(t_list *b, int pos);

void	push(t_list **head, int item);
bool	pop(t_list **head, int *item);

t_list	*find_min(t_list *stack);
t_list	*find_max(t_list *stack);
t_list	*find_smaller_than(t_list *stack, int x);
t_list	*find_larger_than(t_list *stack, int x);

void	put_max_on_top(t_list *b);
void	put_min_on_top(t_list *a);

int		calculate_cost(t_list *item);
void	execute_moves(t_list *a, t_list *b, t_list *target, bool sorting_a);
void	assign_cost_and_position(t_list *stack, bool is_a);

void	sort(t_list **a, t_list **b, int len);

void	parse_strs(t_list **head, char **strs, int len, bool is_single_str);

int		get_str_arr_len(char **strs);
void	free_str_array(char **strs);
int		ft_abs(int x);

t_list	*get_cheapest_element(t_list *stack);
void	find_and_set_pairs_a(t_list *a, t_list *b);
void	find_and_set_pairs_b(t_list *a, t_list *b);
void	set_cost_and_pairs(t_list *a, t_list *b, bool sorting_a);

#endif
