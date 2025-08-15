/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 18:01:26 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/15 20:00:53 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int *parse_strs(char **strs, int len)
{
	int i;
	long value;
	int *result;
	
	i = 1;
	result = malloc(sizeof(int) * (len - 1));
	if (!result)
		return (NULL);
	while (i < len)
	{
		if (!ft_cst_atol(strs[i], &value))
			exit_on_error(result);
		if (!is_valid_number(value) || is_duplicate(result, i - 1, (int) value))
			exit_on_error(result);
		result[i - 1] = value;
		i++;
	}
	reverse_collection(result, len - 1);
	return (result);
}
