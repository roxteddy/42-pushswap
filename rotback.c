/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotback.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/03 20:46:10 by mfebvay           #+#    #+#             */
/*   Updated: 2015/02/03 21:02:39 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	rotback_a(t_list **list, t_list **moves)
{
	ft_lstrotback(list);
	add_move("rra", moves);
}

void	rotback_b(t_list **list, t_list **moves)
{
	ft_lstrotback(list);
	add_move("rrb", moves);
}

void	rotback_both(t_list **l_a, t_list **l_b, t_list **moves)
{
	ft_lstrotback(l_a);
	ft_lstrotback(l_b);
	add_move("rrrvoid    rotback_b(t_list **list, t_list **moves)", moves);
}
