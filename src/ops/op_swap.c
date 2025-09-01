/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 16:55:15 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/27 20:19:04 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ops_base.h"
#include "../../include/push_swap.h"

void	do_sa(t_list *a)
{
	ft_printf("sa\n");
	swap_value(a);
}

void	do_sb(t_list *b)
{
	ft_printf("sb\n");
	swap_value(b);
}

void	do_ss(t_list *a, t_list *b)
{
	ft_printf("ss\n");
	swap_value(a);
	swap_value(b);
}
