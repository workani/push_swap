/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_base.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 14:18:35 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/27 14:58:40 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPS_BASE_H
# define OPS_BASE_H

#include "list.h"
#include <stdbool.h>

bool push_src_to_dest(List **src, List **dest);
void swap_value(List *src);
void rotate(List *src);
void reverse_rotate(List *src);
void execute_move(List *stack, int pos, char stack_name);

#endif