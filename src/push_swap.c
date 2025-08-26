/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:56:12 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/26 15:55:57 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

//void print_stack(List **stack, char *label)
//{
//	int item = 0;
//	printf("%s", label);
//	while (pop(stack, &item))
//	{
//		printf("%d\n", item);
//	}
//	printf("\n");
//}

void print_stack(List **stack, char *label)
{
	List *head = *stack;
	int len = get_list_size(*stack);

	printf("\n=== %s (size=%d) ===\n", label, len);
    printf("  pos  | pos_pair | cost_a | cost_b | value\n"
           "-------+--------+--------+------\n");
	while (head != NULL)
	{
		 printf("%6d | %6d  | %6d | %6d | %6d\n", head->pos, head->pair_pos, head->cost_a, head->cost_b, head->value);
        head = head->next;  
	}
	printf("\n");
}


int main(int argc, char **argv)
{
	List *a;
	List *b;

	if (argc == 1)
		return (1);

	a = NULL;
	b = NULL;
	parse_strs(&a, argv, argc);
	sort(&a, &b, argc - 1);
	print_stack(&a,  "Stack A");
	print_stack(&b,  "Stack B");
}



//int main(void)
//{
//    List *a;
//    List *b;

//    char *numbers[10] = {"push_swap", "5", "2", "7", "1", "6", "3", "9", "4", "8"};

//    a = NULL;
//    b = NULL;
//    parse_strs(&a, numbers, 9);
//    start_sorting(&a, &b, 9);
//    print_stack(&a, "Stack A");
//    print_stack(&b, "Stack B");

//    return 0;
//}