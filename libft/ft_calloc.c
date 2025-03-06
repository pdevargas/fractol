/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:28:25 by pde-varg          #+#    #+#             */
/*   Updated: 2024/10/24 17:33:56 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t size)
{
	void	*mem;

	if (nelem * size > ULONG_MAX)
		return (NULL);
	mem = malloc(nelem * size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, nelem * size);
	return (mem);
}
/*
int	main(void)
{
	size_t x;
	size_t elements;
	size_t type;
	int *pos;

	elements = 10;
	x = 0;
	type = sizeof(int);
	pos = (int *)ft_calloc(elements, type);
	printf("value %p \n", pos);
	while (x < elements)
	{
		printf("position x =  %zu value %d \n", x, pos[x]);
		x++;
	}

	pos = (int *)calloc(elements, type);
	printf("-----------%p \n", pos);
	x = 0;
	while (x < elements)
	{
		printf("position x =  %zu value %d \n", x, pos[x]);
		x++;
	}
	return (0);
}*/