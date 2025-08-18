/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:52:39 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/18 13:31:43 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../libft/libft.h"

#define I_MAX 2147483647
#define I_MIN -2147483648

typedef struct List
{	
	int value;
	struct List *next;
} List;


bool ft_cst_atol(char *str, long *result);
bool is_valid_number(long x);
bool is_duplicate(List *head, int x);
void reverse_collection(int *collection, int len);
void exit_on_error(List *head);

void free_list(List *head);

void push(List **head, int item);
bool pop(List **head, int *item);
 
void parse_strs(List **head, char **strs, int len);

#endif