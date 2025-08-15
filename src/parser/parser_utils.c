/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 18:03:45 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/15 19:31:46 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

bool ft_cst_atol(char *str, long *result)
{
	int i;
	int sign;

	i = 0;
	sign = 1;
	*result = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		if (!(str[i + 1] >= '0' && str[i + 1] <= '9'))
			return (false);
		i++;
	}
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (false);
		*result = (*result * 10) + (str[i] - '0');
		i++;
	}
	*result = *result * sign;
	return (true);
}
bool is_valid_number(long x)
{
	if (x < INT_MIN || x > INT_MAX)
		return (false);
	return (true);
	}

bool is_duplicate(int *collection, int len, int x)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (collection[i] == x)
			return (true);
		i++;
	}
	return (false);
}

void reverse_collection(int *collection, int len)
{
	int temp;
	int l;
	int r;

	l = 0;
	r = len - 1;
	while (l < r)
	{
		temp = collection[l];
		collection[l] = collection[r];
		collection[r] = temp;
		l++;
		r--;
	}
}

void exit_on_error(int *collection)
{
	free(collection);
	ft_printf("\033[0;31mERROR: Invalid input detected. Terminating...\033[0m\n");
	exit(1);
}