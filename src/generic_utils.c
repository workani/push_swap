/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generic_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 18:01:33 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/27 18:16:09 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int get_str_arr_len(char **strs)
{
	int len;

	len = 0;
	while (strs[len] != NULL)
		len++;
	return (len);
}

void free_str_array(char **strs)
{
	int i;

	i = 0;
 	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}
