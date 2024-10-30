/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:40:24 by diogribe          #+#    #+#             */
/*   Updated: 2024/10/30 14:40:24 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	**str;
	int		i;

	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str || !s)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
		str[i++] = s[start + i];
	str[i] = '\0';
	return (str);
}
