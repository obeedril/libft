/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 13:02:34 by obeedril          #+#    #+#             */
/*   Updated: 2021/05/06 19:50:32 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	size_t	i;

	s2 = NULL;
	if (s1 && set)
	{
		while (*s1 && ft_strchr(set, *s1))
			s1++;
		i = ft_strlen(s1);
		while (i && ft_strchr(set, s1[i]))
			i--;
		s2 = ft_substr(s1, 0, i + 1);
	}
	return (s2);
}
