/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 14:42:49 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/25 19:10:15 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include <math.h>

static void	set_cost(List *item, bool is_a, int cost)
{
	if (is_a)
		item->cost_a = cost;
	else
		item->cost_b = cost;
}

void	assign_cost_and_position(List *stack, bool is_a)
{
	int		len;
	int		idx;
	List	*cur;
		int pos;

	len = get_list_size(stack);
	idx = 0;
	cur = stack;
	while (cur)
	{
		if (idx <= len / 2)
			pos = idx; // rotate forward
		else
			pos = idx - len; // rotate backward (negative)
		cur->pos = pos;
		set_cost(cur, is_a, (pos < 0) ? -pos : pos);
		cur = cur->next;
		idx++;
	}
}

List	*find_max(List *stack)
{
	List	*max;

	max = stack;
	while (stack != NULL)
	{
		if (stack->value > max->value)
			max = stack;
		stack = stack->next;
	}
	return (max);
}
