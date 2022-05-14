/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 11:53:21 by obeedril          #+#    #+#             */
/*   Updated: 2021/05/04 18:15:25 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*src1;
	unsigned char	*dst1;

	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	if (!dst1 && !src1)
		return (NULL);
	if (dst1 < src1)
	{
		while (len--)
			*dst1++ = *src1++;
		return (dst);
	}
	else
	{
		dst1 += len;
		src1 += len;
		while (len--)
		{
			*--dst1 = *--src1;
		}
		return (dst);
	}
	return (dst);
}
