/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 18:03:45 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/18 17:26:57 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

bool	ft_cst_atol(char *str, long *result)
{
	int	i;
	int	sign;

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
bool	is_valid_number(long x)
{
	if (x < INT_MIN || x > INT_MAX)
		return (false);
	return (true);
}

bool	is_duplicate(List *head, int x)
{
	while (head != NULL)
	{
		if (head->value == x)
			return (true);
		head = head->next;
	}
	return (false);
}

void	exit_on_error(List *head)
{
	free_list(head);
	ft_printf("\033[0;31mERROR: Invalid input detected. Terminating...\033[0m\n");
	exit(1);
}