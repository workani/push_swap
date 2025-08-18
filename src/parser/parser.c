/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 18:01:26 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/18 15:16:50 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void parse_strs(List **head, char **strs, int len)
{
	int i;
	int j;
	long value;

	i = len;
	j = 0;
	while (--i > 0)
	{
		if (!ft_cst_atol(strs[i], &value))
			exit_on_error(*head);
		if (!is_valid_number(value) || is_duplicate(*head , (int) value))
			exit_on_error(*head);
		push(head, (int) value);
		j++;
	}
}
