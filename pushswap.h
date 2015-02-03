/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/03 05:09:52 by mfebvay           #+#    #+#             */
/*   Updated: 2015/02/03 05:45:03 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

#include <libft.h>

t_list  *make_list(int ac, char **av);

void	add_move(char *str, t_list **moves);
void	put_moves(t_list *moves);

void	push_a(t_list **dest, t_list **src, t_list **moves);
void	push_b(t_list **dest, t_list **src, t_list **moves);
void	swap_a(t_list **list, t_list **moves);
void	swap_b(t_list **list, t_list **moves);
void	swap_both(t_list **l_a, t_list **l_b, t_list **moves);
#endif
