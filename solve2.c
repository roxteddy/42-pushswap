/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/03 21:33:52 by mfebvay           #+#    #+#             */
/*   Updated: 2015/03/06 03:02:34 by mfebvay          ###   ########.fr       */
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

int		isthesmallest(t_list *list, int nb)
{
	while (list)
	{
		if (*((int*)list->content) < nb)
			return (0);
		list = list->next;
	}
	return (1);
}

int		mediane(t_list *list)
{
	int		sum;
	int		count;

	sum = 0;
	count = 0;
	while (list)
	{
		sum += *((int*)list->content);
		count++;
		list = list->next;
	}
	if (!count)
		return (0);
	if (sum % count < 5)
		return (sum / count);
	else
		return (sum / count + 1);
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
		if (!is_sorted(l_a))
		{
			if (*((int*)l_a->content) > lastint(l_a))
			{
				if (isthesmallest(l_a, lastint(l_a)))
					rot_a(&l_a, moves);
				else if (isthebiggest(l_a, *((int*)l_a->content)))
					rotback_a(&l_a, moves);
				else if (lastint(l_a) < mediane(l_a))
					rot_a(&l_a, moves);
				else if (*((int*)l_a->content) > mediane(l_a))
					rotback_a(&l_a, moves);
			}
			else if (*((int*)l_a->content) > *((int*)l_a->next->content))
				swap_a(&l_a, moves);
			else
				push_b(&l_b, &l_a, moves);
		}
		if (l_b)
		{
			if (*((int*)l_b->content) < lastint(l_b))
			{
				if (isthebiggest(l_b, lastint(l_b)))
					rot_b(&l_b, moves);
				else if (isthesmallest(l_a, *((int*)l_b->content)))
					rotback_b(&l_b, moves);
				else if (lastint(l_b) > mediane(l_b))
					rot_b(&l_b, moves);
				else if (*((int*)l_b->content) < mediane(l_b))
					rotback_b(&l_b, moves);
			}
			else if (l_b->next && *((int*)l_b->content) < *((int*)l_b->next->content))
				swap_b(&l_b, moves);
			else if (is_sorted(l_a))
				push_a(&l_a, &l_b, moves);
		}
	}
	*list = l_a;
}
