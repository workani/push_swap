/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_cost_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 20:01:07 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/27 20:14:24 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	calculate_cost(t_list *item)
{
	int	cost;
	int	pos;
	int	pair_pos;

	cost = item->cost_a + item->cost_b;
	pos = item->pos;
	pair_pos = item->pair_pos;
	while (pos < 0 && pair_pos < 0)
	{
		pos++;
		pair_pos++;
		cost--;
	}
	while (pos > 0 && pair_pos > 0)
	{
		pos--;
		pair_pos--;
		cost--;
	}
	return (cost);
}

void	find_and_set_pairs_b(t_list *a, t_list *b)
{
	t_list	*pair;

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

void	find_and_set_pairs_a(t_list *a, t_list *b)
{
	t_list	*pair;

	while (b != NULL)
	{
		pair = find_larger_than(a, b->value);
		if (!pair)
			pair = find_min(a);
		b->pair_pos = pair->pos;
		b->cost_a = pair->cost_a;
		b = b->next;
	}
}

t_list	*get_cheapest_element(t_list *stack)
{
	t_list	*result;
	int		cheapest_cost;
	int		new_cost;

	cheapest_cost = INT_MAX;
	while (stack != NULL)
	{
		new_cost = calculate_cost(stack);
		if (new_cost < cheapest_cost)
		{
			cheapest_cost = new_cost;
			result = stack;
		}
		stack = stack->next;
	}
	return (result);
}

void	set_cost_and_pairs(t_list *a, t_list *b, bool sorting_a)
{
	assign_cost_and_position(a, true);
	assign_cost_and_position(b, false);
	if (sorting_a)
		find_and_set_pairs_a(a, b);
	else
		find_and_set_pairs_b(a, b);
}
