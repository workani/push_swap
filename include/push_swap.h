/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:52:39 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/27 19:34:06 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../libft/libft.h"
#include "list.h"


bool ft_cst_atol(char *str, long *result);
bool is_valid_number(long x);
bool is_duplicate(List *head, int x);
void exit_on_error(List *head);

void free_list(List *head);
int get_list_size(List *a);

void do_sa(List *a);
void do_sb(List *b);
void do_ss(List *a, List *b);

void do_pa(List **a, List **b);
void do_pb(List **a, List **b);

void do_ra(List *a);
void do_rb(List *b);
void do_rr(List *a, List *b);
void do_rra(List *a);
void do_rrb(List *b);
void do_rrr(List *a, List *b);

void execute_move_on_a(List *a, int pos);
void execute_move_on_b(List *b, int pos);


void push(List **head, int item);
bool pop(List **head, int *item);

List *find_min(List *stack);
List *find_max(List *stack);
List *find_smaller_than(List *stack, int x);
List *find_larger_than(List *stack, int x);

void	put_max_on_top(List *b);
void	put_min_on_top(List *a);


int	caculate_cost(List *item);
void execute_moves(List *a, List *b, List *target, bool sorting_a);
void assign_cost_and_position(List *stack, bool is_a);

void sort(List **a, List **b, int len);
 
void parse_strs(List **head, char **strs, int len, bool is_single_str);

int		get_str_arr_len(char **strs);
void 	free_str_array(char **strs);
int 	ft_abs(int x);
bool	is_sorted(List *stack);


List	*get_cheapest_element(List *stack);
void	find_and_set_pairs_a(List *a, List *b);
void	find_and_set_pairs_b(List *a, List *b);
void	set_cost_and_pairs(List *a, List *b, bool sorting_a);


void print_stack(List *stack, char *label);

#endif
