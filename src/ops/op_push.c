/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 17:32:12 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/19 14:37:19 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "../../include/ops_base.h"

void do_pa(List **a, List **b)
{
	if (push_src_to_dest(b, a))
		ft_printf("pa\n");
}

void do_pb(List **a, List **b)
{
	if (push_src_to_dest(a, b))
		ft_printf("pb\n");
}