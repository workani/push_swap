/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 14:29:55 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/20 14:55:31 by dklepenk         ###   ########.fr       */
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

void start_sorting(List *a, List *b, int len)
{
	(void) b;

	if (len <= 3)
		return (small_sort(a, len));
}