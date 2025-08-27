/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_execute.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 21:12:18 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/27 20:12:07 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ops_base.h"
#include "../../include/push_swap.h"

void	execute_move_on_a(t_list *a, int pos)
{
	execute_move(a, pos, 'a');
}

void	execute_move_on_b(t_list *b, int pos)
{
	execute_move(b, pos, 'b');
}

void	execute_moves(t_list *a, t_list *b, t_list *target, bool sorting_a)
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
