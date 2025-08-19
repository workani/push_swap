/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 17:32:12 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/19 14:00:25 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void do_pa(List **a, List **b)
{
	int item;
	
	if (!pop(b, &item))
		return;
	push(a, item);
	ft_printf("pa\n");
}

void do_pb(List **a, List **b)
{
	int item;
	
	if (!pop(a, &item))
		return;
	push(b, item);
	ft_printf("pb\n");
}