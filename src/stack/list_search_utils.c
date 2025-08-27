/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_search_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 18:47:01 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/27 19:03:49 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

List	*find_max(List *stack)
{
	List	*max;

	max = stack;
	while (stack != NULL)
	{
		if (stack->value > max->value)
			max = stack;
		stack = stack->next;
	}
	return (max);
}

List	*find_min(List *stack)
{
	List	*min;

	min = stack;
	while (stack != NULL)
	{
		if (stack->value < min->value)
			min = stack;
		stack = stack->next;
	}
	return (min);
}

List	*find_smaller_than(List *stack, int x)
{
	List	*result;
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


List	*find_larger_than(List *stack, int x)
{
	List	*result;
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