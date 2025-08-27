/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 14:20:33 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/27 20:03:33 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

# define I_MAX 2147483647
# define I_MIN -2147483648

typedef struct s_list
{
	int				value;
	int				pos;
	int				pair_pos;
	int				cost_a;
	int				cost_b;
	struct s_list	*prev;
	struct s_list	*next;
}	t_list;

#endif