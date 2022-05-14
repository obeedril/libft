/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 13:50:51 by obeedril          #+#    #+#             */
/*   Updated: 2021/05/09 13:10:15 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;
	size_t	subs_len;
	size_t	n;

	if (!s)
		return (NULL);
	subs_len = ft_strlen(s) - start;
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (subs_len <= len)
		subs = (char *)malloc(sizeof(char) * (subs_len + 1));
	else
		subs = (char *)malloc(sizeof(char) * (len + 1));
	if (!subs)
		return (NULL);
	i = start;
	n = 0;
	while (i < ft_strlen(s) && n < len)
	{
		subs[n++] = s[i++];
	}
	subs[n] = '\0';
	return (subs);
}
