/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/03 05:09:52 by mfebvay           #+#    #+#             */
/*   Updated: 2015/02/03 21:38:25 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

#include <libft.h>

int		make_list(t_list **list, int ac, char **av);

void	add_move(char *str, t_list **moves);
void	put_moves(t_list *moves);

int		checkdoubles(t_list *list);

int		is_sorted(t_list *list);
int		isthebiggest(t_list *list, int nb);
int		lastint(t_list *list);
void	solve(t_list **list, t_list **moves);

void	push_a(t_list **dest, t_list **src, t_list **moves);
void	push_b(t_list **dest, t_list **src, t_list **moves);
void	rot_a(t_list **list, t_list **moves);
void	rot_b(t_list **list, t_list **moves);
void	rot_both(t_list **l_a, t_list **l_b, t_list **moves);
void	rotback_a(t_list **list, t_list **moves);
void	rotback_b(t_list **list, t_list **moves);
void	rotback_both(t_list **l_a, t_list **l_b, t_list **moves);
void	swap_a(t_list **list, t_list **moves);
void	swap_b(t_list **list, t_list **moves);
void	swap_both(t_list **l_a, t_list **l_b, t_list **moves);
#endif
