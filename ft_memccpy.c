/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 18:49:35 by obeedril          #+#    #+#             */
/*   Updated: 2021/04/25 11:51:35 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*src1;
	unsigned char	*dest1;
	unsigned char	c1;

	dest1 = (unsigned char *)dest;
	src1 = (unsigned char *)src;
	c1 = (unsigned char)c;
	while (n > 0)
	{
		*dest1++ = *src1++;
		n--;
		if (*(dest1 - 1) == c1)
			return (dest1);
	}
	return (NULL);
}
