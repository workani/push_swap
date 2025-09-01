/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 17:32:12 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/27 20:19:04 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ops_base.h"
#include "../../include/push_swap.h"

void	do_pa(t_list **a, t_list **b)
{
	if (push_src_to_dest(b, a))
		ft_printf("pa\n");
}

void	do_pb(t_list **a, t_list **b)
{
	if (push_src_to_dest(a, b))
		ft_printf("pb\n");
}
