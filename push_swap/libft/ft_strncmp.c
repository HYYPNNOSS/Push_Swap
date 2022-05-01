/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hich <hel-hich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:39:23 by hel-hich          #+#    #+#             */
/*   Updated: 2021/11/22 18:39:24 by hel-hich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		value;
	size_t	i;

	value = 0;
	i = 0;
	while ((i < n) && (!value) && (s1[i] != '\0' || s2[i] != '\0'))
	{
		value = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	return (value);
}
