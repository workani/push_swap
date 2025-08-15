/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 19:06:10 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/15 19:21:26 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "../../include/push_swap.h"

//Stack *create_stack(int capacity)
//{
//	Stack *result;
	
//	if (capacity <= 0)
//		return (NULL);
//	result = malloc(sizeof(Stack));
//	if (!result)
//		return (NULL);
//	result->collection = malloc(sizeof(int) * capacity);
//	if (!result->collection) 
//		return (NULL);
//	result->capacity = capacity;
//	result->size = 0;
//	return (result);
//}
//void *destroy_stack(Stack *stack)
//{
//	if (!stack)
//		return;
//	free(stack->collection);
//	free(stack);
//}

//void push(Stack *stack, int item)
//{
//	size_t new_capacity;
	
//	if (stack->size >= stack->capacity)
//	{
//		new_capacity = stack->capacity * SCALE_BY;
//		stack->collection = ft_realloc(stack->collection, stack->capacity, new_capacity);
//		stack->capacity = new_capacity;
//	}
//	stack->collection[stack->size] = item;
//	stack->size++;
//}

//int pop(Stack *stack)
//{
//	if (stack->size == 0)
//		return (-1);
//	stack->size--;
//	return (stack->collection[size]);
//}