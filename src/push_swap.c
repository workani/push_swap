/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:56:12 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/15 19:57:37 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"


int main(int argc, char **argv)
{
	int *parsed_numbers;

	if (argc == 1)
		return (1);
	parsed_numbers = parse_strs(argv, argc);

	for (int i = 0; i < argc - 1; i++)
		printf("%d ", parsed_numbers[i]);
	printf("\n");
	
}
