/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/03 05:04:10 by mfebvay           #+#    #+#             */
/*   Updated: 2015/02/03 05:16:44 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list	*make_list(int ac, char **av)
{
	t_list	*list;
	t_list	*current;
	t_list	*new;
	int		i;
	int		val;

	i = 0;
	list = NULL;
	while(++i < ac)
	{
		val = ft_atoi(av[i]);
		new = ft_lstnew(&val, sizeof(int));
		if (!list)
		{
			list = new;
			current = new;
		}
		else
		{
			current->next = new;
			current = current->next;
		}
	}
	return (list);
}
