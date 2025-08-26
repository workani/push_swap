/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 14:29:55 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/26 15:57:20 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void small_sort(List *stack, int len)
{
	List *max;

	max = find_max(stack);
	if (len == 1)
		return ;
	if (len == 2)
	{
		if (stack->value > stack->next->value)
			do_ra(stack);
	}
	if (len == 3)
	{
		if (stack == max)
			do_ra(stack);
		else if (stack->next == max)
			do_rra(stack);
		if (stack->value > stack->next->value)
			do_sa(stack);
	}
}

List *find_smaller_than(List *stack, int x)
{
	List *result;
	int min_value;

	result = NULL;
	min_value = INT_MIN;
	while (stack != NULL)
	{
		if (stack->value < x && stack->value > min_value)
		{
			result = stack;
			min_value = stack->value;
		}
		stack = stack->next;
	}
	return (result);
}

void find_and_set_pairs(List *a, List *b)
{
	List *pair;
	
	while (a != NULL)
	{
		pair = find_smaller_than(b, a->value);
		if (!pair)
			pair = find_max(b);
		a->pair_pos = pair->pos;
		a->cost_b = pair->cost_b;
		a = a->next;
	}
}

List *get_cheapest_element(List *a)
{
	List *result;
	int cheapest_cost;
	int new_cost;

	cheapest_cost = INT_MAX;
	while (a != NULL)
	{
		new_cost = a->cost_a + a->cost_b;
		if (new_cost < cheapest_cost)
		{
			cheapest_cost = new_cost;
			result = a;
		}
		a = a->next;
	}
	return (result);
}

void execute_moves(List *a, List *b, List *target)
{
	if (!a || !b || !target)
		return ;
	execute_move_on_a(a, target->pos);
	execute_move_on_b(b, target->pair_pos);
	target->pos = 0;
	target->pair_pos = 0;
}


void put_max_on_top(List *b)
{
	List *max;

	max = find_max(b);
	execute_move_on_b(b, max->pos);
}

void set_cost_and_pairs(List *a, List *b)
{
	assign_cost_and_position(a, true);
    assign_cost_and_position(b, false);
	find_and_set_pairs(a, b);
}

void sort(List **a, List **b, int a_len)
{
	List *cheapest_element;

	if (a_len <= 3)
		return (small_sort(*a, a_len));
	do_pb(a, b);
	do_pb(a, b);
	a_len -= 2;
	while (a_len > 3)
	{
		set_cost_and_pairs(*a, *b);
		cheapest_element = get_cheapest_element(*a);
		execute_moves(*a, *b, cheapest_element);
		do_pb(a, b);
		a_len--;
	}
	set_cost_and_pairs(*a, *b);
	put_max_on_top(*b);
	small_sort(*a, 3);
}
