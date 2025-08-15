/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:52:39 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/15 19:54:01 by dklepenk         ###   ########.fr       */
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

typedef struct Stack
{
	int *collection;
	int capacity;
	int size;
} Stack;

bool ft_cst_atol(char *str, long *result);
bool is_valid_number(long x);
bool is_duplicate(int *collection, int len, int x);
void reverse_collection(int *collection, int len);
void exit_on_error(int *collection);

Stack *create_stack(int capacity);
void *destroy_stack(Stack *stack);
void push(Stack *stack, int item);

int *parse_strs(char **strs, int len);

#endif