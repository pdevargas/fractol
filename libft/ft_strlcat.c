/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:54:27 by pablo.devar       #+#    #+#             */
/*   Updated: 2024/10/24 17:47:17 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	const char	*o;
	size_t		i;
	size_t		x;
	size_t		temp;

	i = 0;
	x = 0;
	o = src;
	temp = ft_strlen(src) + ft_strlen(dest);
	if (size <= ft_strlen(dest))
		return (ft_strlen(src) + size);
	while (dest[x] != '\0')
	{
		x++;
	}
	while ((x < size - 1) && o[i] != '\0')
	{
		dest[x] = o[i];
		i++;
		x++;
	}
	dest[x] = '\0';
	return (temp);
}
/*
int	main(void)
{
	char source[20] = "pepe_perez";
	char destination[10] = "hello_";

	printf("main \n");
	printf("sizeof (destination) %zu \n", sizeof(destination));
	printf("value %zu \n", ft_strlcat(destination, source,
				sizeof(destination)));
	printf("%s \n", destination);
	printf("---------------- \n");
	return (0);
}*/