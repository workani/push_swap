/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 14:20:33 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/22 23:06:42 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
#define LIST_H

typedef struct List
{	
	int value;
	int pos;
	int pair_pos;
	int cost;
	struct List *previous;
	struct List *next;
} List;

#endif