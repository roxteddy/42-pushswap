/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/03 20:39:51 by mfebvay           #+#    #+#             */
/*   Updated: 2015/02/03 21:01:19 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	rot_a(t_list **list, t_list **moves)
{
	ft_lstrot(list);
	add_move("ra", moves);
}

void	rot_b(t_list **list, t_list **moves)
{
	ft_lstrot(list);
	add_move("rb", moves);
}

void	rot_both(t_list **l_a, t_list **l_b, t_list **moves)
{
	ft_lstrot(l_a);
	ft_lstrot(l_b);
	add_move("rr", moves);
}
