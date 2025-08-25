/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 14:29:55 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/25 20:48:48 by dklepenk         ###   ########.fr       */
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

	int pos = target->pos;
	int pair_pos = target->pair_pos;

	while (pos > 0)
	{
		do_ra(a);
		pos--;
	}
	while (pos < 0)
	{
		do_rra(a);
		pos++;
	}
	while (pair_pos > 0)
	{
		do_rb(b);
		pair_pos--;
	}
	while (pair_pos < 0)
	{
		do_rrb(b);
		pair_pos++;
	}
}

void start_sorting(List **a, List **b, int len)
{
	List *cheapest_element;

	if (len <= 3)
		return (small_sort(*a, len));
	do_pb(a, b);
	do_pb(a, b);
	len -= 2;
	while (len > 3)
	{
		assign_cost_and_position(*a, true);
		assign_cost_and_position(*b, false);
		find_and_set_pairs(*a, *b);
		cheapest_element = get_cheapest_element(*a);
		execute_moves(*a, *b, cheapest_element);
		do_pb(a, b);	
		len--;
	}
	assign_cost_and_position(*a, true);
	assign_cost_and_position(*b, false);
	List *max_b = find_max(*b);
	while (max_b->pos < 0)
	{
		do_rrb(*b);
		max_b->pos++;
	}
	while (max_b->pos > 0)
	{
		do_rb(*b);
		max_b->pos--;
	}
	small_sort(*a, 3);
}
