/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:56:12 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/27 19:41:38 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"


int	main(int argc, char **argv)
{
	List	*a;
	List	*b;
	char **strs;
	int len;

	if (argc == 1)
		return (0);
	a = NULL;
	b = NULL;
	len = argc - 1;
	if (argc == 2)
	{
		strs = ft_split(argv[1], ' ');
		len = get_str_arr_len(strs);
		parse_strs(&a, strs, len, true);
		free_str_array(strs);
	}
	else
		parse_strs(&a, argv, argc, false);
	sort(&a, &b, len);
	free_list(a);
	free_list(b);
}

//void	print_stack(List *stack, char *label)
//{
//	List	*head;
//	int		len;

//	head = stack;
//	len = get_list_size(stack);
//	printf("\n=== %s (size=%d) ===\n", label, len);
//	printf("  pos  | pos_pair | cost_a | cost_b | value\n"
//			"-------+--------+--------+------\n");
//	while (head != NULL)
//	{
//		printf("%6d | %6d  | %6d | %6d | %6d\n", head->pos, head->pair_pos,
//			head->cost_a, head->cost_b, head->value);
//		head = head->next;
//	}
//	printf("\n");
//}