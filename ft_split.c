/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:00:43 by diogribe          #+#    #+#             */
/*   Updated: 2024/10/29 17:00:43 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char const *s, char c)
{
	int	i;

	i = 1;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			i++;
		while (*s && *s != c)
			s++;
	}
	return (i);
}

static void	*ft_free(char **words, int i)
{
	while (i--)
		free(words[i]);
	free(words);
	return (NULL);
}

static char	**ft_fill_words(char **words, char *s, char c)
{
	int	i;
	int	j;

	j = 0;
	while (*s)
	{
		if (*s != c && *s)
		{
			if (!ft_strchr(s, c))
				i = ft_strlen(s);
			else
				i = ft_strchr(s, c) - s;
			words[j++] = ft_substr(s, 0, i);
			if (!words[j - 1])
				return (ft_free(words, j - 1));
			s += i;
		}
		while (*s == c && *s)
			s++;
	}
	words[j] = NULL;
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**words;

	words = (char **)malloc((ft_word_count(s, c) + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	return (ft_fill_words(words, s, c));
}
