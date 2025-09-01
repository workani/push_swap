/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 19:06:10 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/27 20:19:04 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	push(t_list **head, int value)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return ;
	node->value = value;
	node->next = *head;
	node->prev = NULL;
	if (*head)
		(*head)->prev = node;
	*head = node;
}

bool	pop(t_list **head, int *item)
{
	t_list	*temp;

	if (!(*head))
		return (false);
	temp = *head;
	*item = temp->value;
	*head = temp->next;
	if (*head)
		(*head)->prev = NULL;
	free(temp);
	return (true);
}
