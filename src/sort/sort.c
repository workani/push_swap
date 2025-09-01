/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 14:29:55 by dklepenk          #+#    #+#             */
/*   Updated: 2025/09/01 16:01:49 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	small_sort(t_list *stack, int len)
{
	t_list	*max;

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

void	sort_a(t_list **a, t_list **b)
{
	t_list	*cheapest_element;
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

void	sort_b(t_list **a, t_list **b, int a_len)
{
	t_list	*cheapest_element;

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
}

void	sort(t_list **a, t_list **b, int a_len)
{
	if (is_sorted(*a))
		return ;
	if (a_len <= 3)
		return (small_sort(*a, a_len));
	sort_b(a, b, a_len);
	sort_a(a, b);
}
