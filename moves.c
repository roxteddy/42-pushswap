/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/03 05:40:02 by mfebvay           #+#    #+#             */
/*   Updated: 2015/02/03 05:45:12 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	add_move(char *str, t_list **moves)
{
	ft_lstpushback(moves, ft_lstnew(str, (ft_strlen(str) + 1) * sizeof(char)));
}

void	put_moves(t_list *moves)
{
	if (moves)
	{
		ft_putstr((char*)moves->content);
		moves = moves->next;
		while (moves)
		{
			ft_putchar(' ');
			ft_putstr((char*)moves->content);
			moves = moves->next;
		}
		ft_putchar('\n');
	}
}
