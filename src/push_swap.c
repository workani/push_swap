/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:56:12 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/18 15:17:41 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"



int main(int argc, char **argv)
{
	List *a;

	if (argc == 1)
		return (1);

	a = NULL;
	parse_strs(&a, argv, argc);
	int item = 0;
	for (int i = 0; i < argc - 1; i++)
	{
		pop(&a, &item);
		printf("%d ", item);
	}

	printf("\n");
	
}


//int main()
//{
//	List *a;

//	//if (argc == 1)
//	//	return (1);
//	//parsed_numbers = parse_strs(argv, argc);\

//	int arr[] = {3, 2, 1};
	
//	for (int i = 0; i < 3; i++)
//		push(&a, arr[i]);

//	int item = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		pop(&a, &item);
//		printf("%d ", item);
//	}
//	printf("\n");
	
//}