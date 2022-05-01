/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hich <hel-hich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:32:05 by hel-hich          #+#    #+#             */
/*   Updated: 2021/11/23 01:41:31 by hel-hich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)
{
	if (n >= 0)
		return (n);
	return (-n);
}

char	*ft_itoa(int n)
{
	char	tmp[12];
	char	*cursor;
	int		neg;

	neg = 0;
	cursor = tmp + 11;
	*cursor = '\0';
	if (n < 0)
		neg = 1;
	if (n == 0)
		*(--cursor) = '0';
	while (n)
	{
		*(--cursor) = ft_abs(n % 10) + 48;
		n /= 10;
	}
	if (neg == 1)
		*(--cursor) = '-';
	return (ft_strdup(cursor));
}
