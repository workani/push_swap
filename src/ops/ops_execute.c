/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_execute.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 21:12:18 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/27 18:49:40 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ops_base.h"
#include "../../include/push_swap.h"

void	execute_move_on_a(List *a, int pos)
{
	execute_move(a, pos, 'a');
}

void	execute_move_on_b(List *b, int pos)
{
	execute_move(b, pos, 'b');
}

void	execute_moves(List *a, List *b, List *target, bool sorting_a)
{
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
	if (sorting_a)
	{
		execute_move_on_a(a, target->pair_pos);
		execute_move_on_b(b, target->pos);
	}
	else
	{
		execute_move_on_a(a, target->pos);
		execute_move_on_b(b, target->pair_pos);
	}
	target->pos = 0;
	target->pair_pos = 0;
}