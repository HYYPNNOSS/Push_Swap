/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hich <hel-hich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:33:41 by hel-hich          #+#    #+#             */
/*   Updated: 2021/11/22 18:33:42 by hel-hich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*ds;
	const char	*sr;

	i = 0;
	ds = (char *)dst;
	sr = (const char *)src;
	if (ds == NULL && sr == NULL)
		return (NULL);
	while (i < n)
	{
		ds[i] = *(sr + i);
		i++;
	}
	return (ds);
}
