/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 19:06:10 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/18 16:53:32 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"


void push(List **head, int value)
{
	List *node;
	node = malloc(sizeof(List));
	if (!node)
		return;
	node->value = value;
	node->next = *head;
	node->previous = NULL;
	if (*head)
		(*head)->previous = node;
	*head = node;
}

bool pop(List **head, int *item)
{
	List *temp;
	
	if (!(*head))
		return (false);
	temp = *head;
	*item = temp->value; 
	*head = temp->next;
	if (*head)
		(*head)->previous = NULL;
	free(temp);
	return (true);	
}


