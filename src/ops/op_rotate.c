/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 19:06:00 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/27 20:19:04 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ops_base.h"
#include "../../include/push_swap.h"

void	do_ra(t_list *a)
{
	ft_printf("ra\n");
	rotate(a);
}

void	do_rb(t_list *b)
{
	ft_printf("ra\n");
	rotate(b);
}

void	do_rr(t_list *a, t_list *b)
{
	ft_printf("rr\n");
	rotate(a);
	rotate(b);
}
