/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hich <hel-hich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:35:38 by hel-hich          #+#    #+#             */
/*   Updated: 2021/11/23 02:04:58 by hel-hich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*copy;
	size_t	len_src;

	len_src = ft_strlen(src);
	copy = malloc(len_src + 1);
	if (copy == NULL)
		return (NULL);
	ft_strlcpy(copy, src, len_src + 1);
	return (copy);
}
