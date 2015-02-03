/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/03 21:37:22 by mfebvay           #+#    #+#             */
/*   Updated: 2015/02/03 21:38:12 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int		checkdoubles(t_list *list)
{
	t_list	*current;

	if (list && list->next)
	{
		current = list;
		while (current->next)
		{
			if (*((int*)list->content) == *((int*)current->next->content))
				return (1);
			current = current->next;
		}
		return (checkdoubles(list->next));
	}
	return (0);
}
