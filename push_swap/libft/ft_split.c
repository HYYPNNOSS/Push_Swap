/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hich <hel-hich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:35:14 by hel-hich          #+#    #+#             */
/*   Updated: 2021/11/22 21:46:58 by hel-hich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strword(const char **s, char sep)
{
	char		*word;
	const char	*start;
	size_t		len;

	if (*s == NULL)
		return (NULL);
	word = NULL;
	start = *s;
	len = 0;
	while (*start && *start == sep)
		start++;
	while (start[len] && start[len] != sep)
		len++;
	if (len != 0)
		word = ft_substr(start, 0, len);
	if (start[len] == '\0')
		*s = NULL;
	else
		*s = start + len + 1;
	return (word);
}

static size_t	ft_strwc(const char *s, char sep)
{
	size_t	counter;
	size_t	i;

	counter = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != sep && (i == 0 || s[i - 1] == sep))
			counter++;
		i++;
	}
	return (counter);
}

static void	ft_free_words(char	**words)
{
	char	**alias;

	alias = words;
	while (*alias)
		free(*alias++);
	free(words);
}

void	ft_free(char **s)
{
	int	i;

	i = 0;
	while (s[i])
		free(s[i++]);
	free(s);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	word_count;
	char	**words;

	if (s == NULL)
		return (NULL);
	word_count = ft_strwc(s, c);
	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);
	i = 0;
	words[i] = ft_strword(&s, c);
	while (words[i])
		words[++i] = ft_strword(&s, c);
	if (i == word_count)
		return (words);
	ft_free_words(words);
	return (NULL);
}
