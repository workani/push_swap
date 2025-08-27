/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_base.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 21:11:42 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/27 16:07:50 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ops_base.h"
#include "../../include/push_swap.h"

bool	push_src_to_dest(List **src, List **dest)
{
	int	item;

	if (!pop(src, &item))
		return (false);
	push(dest, item);
	return (true);
}

void	swap_value(List *src)
{
	int	tmp;

	tmp = src->value;
	src->value = src->next->value;
	src->next->value = tmp;
}

void	rotate(List *src)
{
	int	temp;

	while (src != NULL && src->next != NULL)
	{
		temp = src->value;
		src->value = src->next->value;
		src->next->value = temp;
		src = src->next;
	}
}

void	reverse_rotate(List *src)
{
	int	temp;

	while (src->next != NULL)
	{
		src = src->next;
	}
	while (src->prev != NULL)
	{
		temp = src->value;
		src->value = src->prev->value;
		src->prev->value = temp;
		src = src->prev;
	}
}

void	execute_move(List *stack, int pos, char stack_name)
{
	while (pos != 0)
	{
		if (pos > 0)
		{
			ft_printf("r%c\n", stack_name);
			rotate(stack);
			pos--;
		}
		else
		{
			ft_printf("rr%c\n", stack_name);
			reverse_rotate(stack);
			pos++;
		}
	}
}