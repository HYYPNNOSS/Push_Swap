/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hich <hel-hich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 15:07:24 by hel-hich          #+#    #+#             */
/*   Updated: 2022/05/01 15:07:26 by hel-hich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_pos(t_struct *a, t_struct *tmp)
{
	int	i;

	i = 0;
	while (a)
	{
		if (a == tmp)
			return (i);
		a = a->next;
		i++;
	}
	return (-1);
}

void	ft_send_to_b(t_struct **a, t_struct **b)
{
	int			len;
	t_struct	*tmp;

	while (a)
	{
		tmp = *a;
		while (tmp && tmp->markup)
			tmp = tmp->next;
		len = ft_lstsize(*a);
		if (!tmp)
			return ;
		if (find_pos(*a, tmp) <= len / 2)
			while ((*a)->markup)
				ra(a, 1);
		else
			while ((*a)->markup)
				rra(a, 1);
		pb(a, b);
	}
}
