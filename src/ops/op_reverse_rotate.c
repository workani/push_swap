/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 14:33:18 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/19 14:39:26 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "../../include/ops_base.h"

void do_rra(List *a)
{
	ft_printf("rra\n");
	reverse_rotate(a);
}

void do_rrb(List *b)
{
    ft_printf("rra\n");
	reverse_rotate(b);
}

void do_rrr(List *a, List *b)
{
	ft_printf("rrr\n");
	do_rra(a);
	do_rrb(b);
}
