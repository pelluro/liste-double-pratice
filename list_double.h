/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_double.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 15:05:55 by mipham            #+#    #+#             */
/*   Updated: 2018/01/10 16:00:39 by mipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_DOUBLE_H
#define LIST_DOUBLE_H

#include <stdio.h>
#include "libft/libft.h"

typedef struct	s_list
{
	int val;
	struct s_list *next;
	struct s_list *prec;
}				t_list;

#endif
