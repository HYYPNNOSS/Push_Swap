/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hich <hel-hich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 15:04:35 by hel-hich          #+#    #+#             */
/*   Updated: 2022/05/01 15:04:39 by hel-hich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_struct **a, int yes)
{
	t_struct	*tmp;
	t_struct	*tmp_2;

	if (!*a || !(*a)->next)
		return ;
	tmp = (*a);
	tmp_2 = tmp;
	while (tmp_2->next != NULL)
		tmp_2 = tmp_2->next;
	tmp_2->next = tmp;
	*a = (*a)->next;
	tmp->next = NULL;
	if (yes)
		write(1, "ra\n", 3);
}

void	rb(t_struct **b, int yes)
{
	t_struct	*tmp;
	t_struct	*tmp_2;

	if (!*b || !(*b)->next)
		return ;
	tmp = (*b);
	tmp_2 = tmp;
	while (tmp_2->next)
		tmp_2 = tmp_2->next;
	tmp_2->next = tmp;
	*b = (*b)->next;
	tmp->next = NULL;
	if (yes)
		write(1, "rb\n", 3);
}

void	rr(t_struct **a, t_struct **b)
{
	ra(a, 0);
	rb(b, 0);
	write(1, "rr\n", 3);
}
