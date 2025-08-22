/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 14:42:49 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/23 00:01:08 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

List *find_max(List *stack)
{
	List *max;
	
	max = stack;
	while (stack != NULL)
	{
		if (stack->value > max->value)
			max = stack;
		stack = stack->next;
	}
	return (max);
}

void execute_moves(List *a, List *b, List *target)
{
	if (!a || !b || target)
		return ;
	while (target->pos < 0 && target->pair_pos < 0)
	{
		do_rrr(a, b);
		target->pos++;
		target->pair_pos++;
	}
	while (target->pos > 0 && target->pair_pos > 0)
	{
		do_rr(a, b);
		target->pos--;
		target->pair_pos--;
	}
	if (target->pos > 0)
		execute_moves_helper(a, target->pos, false);
	else if (target->pos < 0)
		execute_moves_helper(a, (target->pos * -1), false);
	if (target->pair_pos > 0)
		execute_moves_helper(b, target->pair_pos, true);
	else if (target->pair_pos < 0)
		execute_moves_helper(b, (target->pair_pos * -1), true);
	target->pos = 0;
	target->pair_pos = 0;
}

static void execute_moves_helper(List *stack, int moves_count, bool is_a)
{
    while (moves_count--)
    {
        if (is_a)
            do_ra(stack);
        else
            do_rb(stack);
    }
}
