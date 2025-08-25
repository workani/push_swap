/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 13:20:02 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/25 14:43:12 by dklepenk         ###   ########.fr       */
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

int get_list_size(List *a)
{
	int size;
	List *head;

	size = 0;
	head = a;
	while (head != NULL)
	{
		size++;
		head = head->next;	
	}
	return (size);	
}
