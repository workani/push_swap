/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 19:06:00 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/19 14:33:35 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "../../include/ops_base.h"

void do_ra(List *a)
{
	ft_printf("ra\n");
	rotate(a);
}

void do_rb(List *b)
{
	ft_printf("ra\n");
	rotate(b);
}

void do_rr(List *a, List *b)
{
	 ft_printf("rr\n");
	 do_ra(a);
	 do_rb(b);
}
