/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 14:29:55 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/22 22:47:53 by dklepenk         ###   ########.fr       */
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

void start_sorting(List **a, List **b, int len)
{
	List *cheapest_element;

	if (len <= 3)
		return (small_sort(a, len));
	do_pb(a, b);
	do_pb(a, b);
	while (len > 3)
	{
		cheapest_element = get_cheapest_element(a, b);
		execute_moves(a, b, cheapest_element);
		len--;
	}
}
