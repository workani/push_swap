/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:56:12 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/19 13:55:52 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void print_stack(List **stack, char *label)
{
	int item = 0;
	printf("%s", label);
	while (pop(stack, &item))
	{
		printf("%d\n", item);
	}
	printf("\n");
}


int main(int argc, char **argv)
{
	List *a;
	//List *b;

	if (argc == 1)
		return (1);

	a = NULL;
	parse_strs(&a, argv, argc);
	do_rra(a);
	print_stack(&a,  "*** Stack A ***\n");
	//print_stack(&b,  "*** Stack B ***\n");
	
}



//int main()
//{
//	List *a;
//	//List *b;

//	char *numbers[9] = {"dfsdfd", "5", "1", "2", "3", "4", "6", "7", "8"};

//	a = NULL;
//	parse_strs(&a, numbers, 9);
//	do_ra(a);
//	print_stack(&a,  "*** Stack A ***\n");
//	//print_stack(&b,  "*** Stack B ***\n");
	
//}