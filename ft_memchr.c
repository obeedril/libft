/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 15:39:14 by obeedril          #+#    #+#             */
/*   Updated: 2021/05/03 13:48:17 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	c1;

	str = (unsigned char *)s;
	c1 = (unsigned char)c;
	while (n > 0)
	{
		n--;
		if (*str == c1)
			return (str);
		str++;
	}
	return (NULL);
}
