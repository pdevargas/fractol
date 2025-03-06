/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:57:32 by pde-varg          #+#    #+#             */
/*   Updated: 2024/10/24 17:15:06 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*o;

	i = 0;
	d = dest;
	o = src;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		d[i] = o[i];
		i++;
	}
	return ((void *)dest);
}
/*
int	main(void)
{
	const char	source[20] = "Hola";
	char		destination[20];
	size_t		x;
	size_t		cont;

	x = 4;
	cont = 0;
	ft_memcpy(destination, source, x);
	printf("main \n");
	while (cont <= x)
	{
		printf("%c", source[cont]);
		printf("%c \n", destination[cont]);
		cont++;
	}
	return (0);
}*/