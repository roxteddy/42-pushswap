/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/03 05:29:42 by mfebvay           #+#    #+#             */
/*   Updated: 2015/02/03 05:48:36 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void	push(t_list **dest, t_list **src)
{
	t_list	*to_push;

	to_push = *src;
	*src = (*src)->next;
	ft_lstadd(dest, to_push);
}

void		push_a(t_list **dest, t_list **src, t_list **moves)
{
	push(dest, src);
	add_move("pa", moves);
}

void		push_b(t_list **dest, t_list **src, t_list **moves)
{
	push(dest, src);
	add_move("pb", moves);
}


