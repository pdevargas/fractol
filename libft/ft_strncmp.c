/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 20:10:21 by pablo.devar       #+#    #+#             */
/*   Updated: 2024/10/24 17:49:15 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*o;
	const unsigned char	*d;
	size_t				i;

	i = 0;
	o = (const unsigned char *)s1;
	d = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n && o[i] != '\0' && d[i] != '\0')
	{
		if (o[i] != d[i])
		{
			return (o[i] - d[i]);
		}
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (o[i] - d[i]);
}
/*
int	main(void)
{
	char a[20] = "test\200";
	char b[20] = "test\0";
	size_t x = 6;

	printf("value: %c \n", ft_strncmp(a, b, x));
	printf("value original: %c \n", strncmp(a, b, x));
	return (0);
}*/