/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/03 21:33:52 by mfebvay           #+#    #+#             */
/*   Updated: 2015/02/03 21:37:13 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int		is_sorted(t_list *list)
{
	while (list->next && *((int*)list->content) < *((int*)list->next->content))
		list = list->next;
	if (list->next)
		return (0);
	return (1);
}

int		isthebiggest(t_list *list, int nb)
{
	while (list)
	{
		if (*((int*)list->content) > nb)
			return (0);
		list = list->next;
	}
	return (1);
}

int		lastint(t_list *list)
{
	if (!list)
		return (0);
	while (list->next)
		list = list->next;
	return (*((int*)list->content));
}

void	solve(t_list **list, t_list **moves)
{
	t_list  *l_a;
	t_list  *l_b;

	l_a = *list;
	l_b = NULL;

	while (!is_sorted(l_a) || l_b)
	{
		while (!is_sorted(l_a))
		{
			//  if (isthebiggest(*list, *((int*)l_a->content)))
			//      rotback_a(&l_a, moves);
			if (*((int*)l_a->content) > lastint(l_a))
				rot_a(&l_a, moves);
			else if (*((int*)l_a->content) > *((int*)l_a->next->content))
				swap_a(&l_a, moves);
			else
				push_b(&l_b, &l_a, moves);
		}
		if (l_b)
			push_a(&l_a, &l_b, moves);
	}
	*list = l_a;
}
