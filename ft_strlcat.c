/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 12:15:40 by obeedril          #+#    #+#             */
/*   Updated: 2021/05/01 13:48:36 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d;
	size_t	s;

	d = 0;
	while (dst[d] != '\0' && d < dstsize)
		d++;
	s = d;
	while (src[d - s] && d + 1 < dstsize)
	{
		dst[d] = src[d - s];
		d++;
	}
	if (s < dstsize)
		dst[d] = '\0';
	return (s + ft_strlen(src));
}
