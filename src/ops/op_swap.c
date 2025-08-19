/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 16:55:15 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/18 17:27:18 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void do_sa(List *a)
{
	int tmp;

	ft_printf("sa\n");
	tmp = a->value;
	a->value = a->next->value;
	a->next->value = tmp;
}

void do_sb(List *b)
{
	int tmp;

	ft_printf("sb\n");
	tmp = b->value;
	b->value = b->next->value;
	b->next->value = tmp;
}

void do_ss(List *a, List *b)
{
	ft_printf("ss\n");
	do_sa(a);
	do_sb(b);
}