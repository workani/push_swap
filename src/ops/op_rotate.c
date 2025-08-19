/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 19:06:00 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/19 14:04:27 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void do_ra(List *a)
{
	int temp;
	
	ft_printf("ra\n");
	while (a != NULL && a->next != NULL)
	{
		temp = a->value;
		a->value = a->next->value;
		a->next->value = temp;
		a = a->next;
	}	
}

void do_rb(List *b)
{
	int temp;
	
	ft_printf("rb\n");
	while (b != NULL)
	{
		temp = b->value;
		b->value = b->next->value;
		b->next->value = temp;
		b = b->next;
	}	
}

void do_rra(List *a)
{
	int temp;
	
	ft_printf("rra\n");
	while (a->next != NULL)
	{
    	a = a->next;
	}
	while (a->previous != NULL)
	{
		temp = a->value;
		a->value = a->previous->value;
		a->previous->value = temp;
		a = a->previous;
	}
}

void do_rrb(List *b)
{
    int temp;

    ft_printf("rrb\n");
    while (b->next != NULL)
    {
        b = b->next;
    }
    while (b->previous != NULL)
    {
        temp = b->value;
        b->value = b->previous->value;
        b->previous->value = temp;
        b = b->previous;
    }
}

void do_rr(List *a, List *b)
{
	 ft_printf("rr\n");
	 do_ra(a);
	 do_rb(b);
}

void do_rrr(List *a, List *b)
{
	ft_printf("rrr\n");
	do_rra(a);
	do_rrb(b);
}
