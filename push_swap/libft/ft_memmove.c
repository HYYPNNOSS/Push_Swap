/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hich <hel-hich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:33:56 by hel-hich          #+#    #+#             */
/*   Updated: 2021/11/22 18:33:57 by hel-hich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len )
{
	size_t	i;
	char	*strdst;
	char	*strsrc;

	i = 0;
	strdst = (char *)dst;
	strsrc = (char *)src;
	if (!strdst && !strsrc)
		return (NULL);
	if (src < dst)
	{
		while (len--)
		{
			strdst[len] = strsrc[len];
		}
	}
	else
	{
		while (i < len)
		{
			strdst[i] = strsrc[i];
			i++;
		}
	}
	return (strdst);
}
