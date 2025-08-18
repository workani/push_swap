/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 13:20:02 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/18 13:32:12 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void free_list(List *head)
{
	List *temp;
	
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}