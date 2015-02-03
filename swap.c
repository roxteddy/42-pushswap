/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/03 05:34:45 by mfebvay           #+#    #+#             */
/*   Updated: 2015/02/03 05:38:12 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	swap_a(t_list **list, t_list **moves)
{
	ft_lstswap(list);
	add_move("sa", moves);
}

void	swap_b(t_list **list, t_list **moves)
{
	ft_lstswap(list);
	add_move("sb", moves);
}

void	swap_both(t_list **l_a, t_list **l_b, t_list **moves)
{
	ft_lstswap(l_a);
	ft_lstswap(l_b);
	add_move("ss", moves);
}
