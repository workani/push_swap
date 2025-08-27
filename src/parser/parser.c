/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 18:01:26 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/27 20:13:35 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	set_stop_point( bool is_single_str)
{
	if (is_single_str)
		return (0);
	return (1);
}

void	parse_strs(t_list **head, char **strs, int len, bool is_single_str)
{
	int		i;
	int		j;
	long	value;
	int		stop;

	i = len;
	j = 0;
	stop = set_stop_point(is_single_str);
	while (--i >= stop)
	{
		if (!ft_cst_atol(strs[i], &value))
			exit_on_error(*head);
		if (!is_valid_number(value) || is_duplicate(*head, (int)value))
			exit_on_error(*head);
		push(head, (int)value);
		j++;
	}
}
