/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 16:07:11 by obeedril          #+#    #+#             */
/*   Updated: 2021/05/08 15:00:12 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_space(const char *s, int i)
{
	while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\t' || s[i] == '\v'
			|| s[i] == '\r' || s[i] == '\n' || s[i] == '\f'))
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	minus;

	i = 0;
	res = 0;
	minus = 1;
	i = ft_space(str, i);
	if (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			minus = -minus;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= 48 && str[i] <= 57))
	{
		if (res < INT_MIN / 10)
			return (0);
		else if (res > INT_MAX / 10)
			return (-1);
		else
			res = res * 10 + minus * (str[i] - 48);
		i++;
	}
	return (res);
}
