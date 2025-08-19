/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_base.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklepenk <dklepenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 14:18:35 by dklepenk          #+#    #+#             */
/*   Updated: 2025/08/19 14:34:32 by dklepenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPS_BASE_H
# define OPS_BASE_H

#include "list.h"

bool push_src_to_dest(List **src, List **dest);
void swap_value(List *src);
void rotate(List *src);
void reverse_rotate(List *src);

#endif