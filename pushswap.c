/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/03 05:00:13 by mfebvay           #+#    #+#             */
/*   Updated: 2015/02/03 05:48:51 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include <libft.h>

int		is_sorted(t_list *list)
{
	while (list->next && *((int*)list->content) < *((int*)list->next->content))
		list = list->next;
	if (list->next)
		return (0);
	return (1);
}

void	solve(t_list **list, t_list **moves)
{
	t_list	*l_a;
	t_list	*l_b;

	l_a = *list;
	l_b = NULL;

	while (!is_sorted(l_a) || l_b)
	{
		while (!is_sorted(l_a))
		{
			if (*((int*)l_a->content) > *((int*)l_a->next->content))
				swap_a(&l_a, moves);
			else
				push_b(&l_b, &l_a, moves);
		}
		if (l_b)
			push_a(&l_a, &l_b, moves);
	}
	*list = l_a;
}

int		main(int ac, char **av)
{
	t_list	*list;
	t_list	*moves;

	moves = NULL;
	if (ac < 2)
	{
		ft_putendl_fd("Usage: ./pushswap 2 3 1 ...", 2);
		exit(-1);
	}
	list = make_list(ac, av);
	solve(&list, &moves);
	put_moves(moves);
	return (0);
}
