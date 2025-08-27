/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 14:33:18 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/27 19:57:13 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ops_base.h"
#include "../../include/push_swap.h"

void	do_rra(t_list *a)
{
	ft_printf("rra\n");
	reverse_rotate(a);
}

void	do_rrb(t_list *b)
{
	ft_printf("rra\n");
	reverse_rotate(b);
}

void	do_rrr(t_list *a, t_list *b)
{
	ft_printf("rrr\n");
	reverse_rotate(a);
	reverse_rotate(b);
}
