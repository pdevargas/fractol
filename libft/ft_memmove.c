/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:24:38 by pde-varg          #+#    #+#             */
/*   Updated: 2024/10/25 13:49:10 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_temp(char *d, const char *o, size_t n)
{
	int	i;

	i = 0;
	while (i < (int)n)
	{
		d[i] = o[i];
		i++;
	}
	return ((void *)d);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int			i;
	char		*d;
	const char	*o;

	d = dest;
	o = src;
	if (!dest && !src)
		return (NULL);
	if (n > 0)
	{
		if ((o < d && (o + n) > d))
		{
			i = n - 1;
			while (i >= 0)
			{
				d[i] = o[i];
				i--;
			}
		}
		else
		{
			d = ft_temp(d, o, n);
		}
	}
	return (dest);
}

/*
#include <string.h>

int	main(void)
{
	char *destination;
	char source[20] = "hello";
	size_t x;
	size_t cont;

	//mine
	x = 4;
	cont = 0;
	destination = source + 2;
	ft_memmove(destination, source, x);
	printf("main \n");
	while (cont <= x)
	{
		printf("%c", source[cont]);
		printf("%c \n", destination[cont]);
		cont++;
	}
	printf("\n");
	//original
	char *destination2;
	char source2[20] = "hello";
	x = 4;
	cont = 0;
	destination2 = source2 + 2;
	memmove(destination2, source2, x);
	while (cont <= x)
	{
		printf("%c", source2[cont]);
		printf("%c \n", destination2[cont]);
		cont++;
	}
	return (0);
}*/