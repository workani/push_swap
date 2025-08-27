/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_execute.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 21:12:18 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/25 21:12:19 by dklepenk         ###   ########.fr       */
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