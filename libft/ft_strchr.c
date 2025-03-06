/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:48:01 by pablo.devar       #+#    #+#             */
/*   Updated: 2024/10/24 17:44:13 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		pos;
	const char	*o;

	pos = 0;
	o = s;
	while (pos <= ft_strlen(o))
	{
		if (o[pos] == (char)c)
		{
			return ((char *)&o[pos]);
		}
		pos++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	c[20] = "hello";
    int     x = 101;

	printf("value: %c \n", *ft_strchr(c, x));
    printf("-------------------------");
    printf("value original: %c \n", *strchr(c, x));
	return (0);
}*/