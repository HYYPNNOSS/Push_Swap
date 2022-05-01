/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hich <hel-hich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:32:18 by hel-hich          #+#    #+#             */
/*   Updated: 2021/11/22 18:33:20 by hel-hich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t				i;
	unsigned char		*s;

	i = 0;
	s = (unsigned char *) str;
	while (i < n)
	{
		if (s[i] == (unsigned char) c)
			return ((char *) s + i);
		i++;
	}
	return (0);
}
