/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hich <hel-hich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:39:55 by hel-hich          #+#    #+#             */
/*   Updated: 2021/11/23 02:00:20 by hel-hich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(const char *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (s == NULL)
		return (NULL);
	start = ft_strnlen(s, start);
	len = ft_strnlen(s + start, len);
	sub = malloc(len + 1);
	if (sub != NULL)
		ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
