/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_base.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 14:18:35 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/27 20:05:08 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPS_BASE_H
# define OPS_BASE_H

# include "list.h"
# include <stdbool.h>

bool	push_src_to_dest(t_list **src, t_list **dest);
void	swap_value(t_list *src);
void	rotate(t_list *src);
void	reverse_rotate(t_list *src);
void	execute_move(t_list *stack, int pos, char stack_name);

#endif