/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hich <hel-hich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:39:13 by hel-hich          #+#    #+#             */
/*   Updated: 2021/11/22 18:39:14 by hel-hich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	i = 0;
	if (!s || !f)
		return (NULL);
	result = ft_strdup(s);
	if (!result)
		return (NULL);
	while (result[i])
	{	
		result[i] = (*f)(i, result[i]);
		i++;
	}
	return (result);
}
