/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 14:29:55 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/27 19:12:57 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	small_sort(List *stack, int len)
{
	List	*max;

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


void	sort_a(List **a, List **b)
{
	List	*cheapest_element;
	int		b_len;

	b_len = get_list_size(*b);
	while (b_len--)
	{
		set_cost_and_pairs(*a, *b, true);
		cheapest_element = get_cheapest_element(*b);
		execute_moves(*a, *b, cheapest_element, true);
		do_pa(a, b);
	}
	set_cost_and_pairs(*a, *b, true);
	put_min_on_top(*a);
}


void	sort(List **a, List **b, int a_len)
{
	List	*cheapest_element;

	if (is_sorted(*a))
		return ;
	if (a_len <= 3)
		return (small_sort(*a, a_len));
	do_pb(a, b);
	do_pb(a, b);
	a_len -= 2;
	while (a_len > 3)
	{
		set_cost_and_pairs(*a, *b, false);
		cheapest_element = get_cheapest_element(*a);
		execute_moves(*a, *b, cheapest_element, false);
		do_pb(a, b);
		a_len--;
	}
	set_cost_and_pairs(*a, *b, false);
	put_max_on_top(*b);
	small_sort(*a, 3);
	sort_a(a, b);
}
