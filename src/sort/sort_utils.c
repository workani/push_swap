/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 14:42:49 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/27 20:19:04 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	put_max_on_top(t_list *b)
{
	t_list	*max;

	max = find_max(b);
	execute_move_on_b(b, max->pos);
}

void	put_min_on_top(t_list *a)
{
	t_list	*min;

	min = find_min(a);
	execute_move_on_a(a, min->pos);
}

static void	set_cost(t_list *item, bool is_a, int cost)
{
	if (is_a)
		item->cost_a = cost;
	else
		item->cost_b = cost;
}

void	assign_cost_and_position(t_list *stack, bool is_a)
{
	int		len;
	int		i;
	int		pos;

	len = get_list_size(stack);
	i = 0;
	while (stack)
	{
		if (i <= len / 2)
			pos = i;
		else
			pos = i - len;
		stack->pos = pos;
		set_cost(stack, is_a, ft_abs(pos));
		stack = stack->next;
		i++;
	}
}
