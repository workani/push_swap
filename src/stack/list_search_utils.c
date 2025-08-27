/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_search_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 18:47:01 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/27 20:11:18 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

t_list	*find_max(t_list *stack)
{
	t_list	*max;

	max = stack;
	while (stack != NULL)
	{
		if (stack->value > max->value)
			max = stack;
		stack = stack->next;
	}
	return (max);
}

t_list	*find_min(t_list *stack)
{
	t_list	*min;

	min = stack;
	while (stack != NULL)
	{
		if (stack->value < min->value)
			min = stack;
		stack = stack->next;
	}
	return (min);
}

t_list	*find_smaller_than(t_list *stack, int x)
{
	t_list	*result;
	int		min_value;

	result = NULL;
	min_value = INT_MIN;
	while (stack != NULL)
	{
		if (stack->value < x && stack->value > min_value)
		{
			result = stack;
			min_value = stack->value;
		}
		stack = stack->next;
	}
	return (result);
}

t_list	*find_larger_than(t_list *stack, int x)
{
	t_list	*result;
	int		min_value;

	result = NULL;
	min_value = INT_MAX;
	while (stack != NULL)
	{
		if (stack->value > x && stack->value < min_value)
		{
			result = stack;
			min_value = stack->value;
		}
		stack = stack->next;
	}
	return (result);
}
