/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:06:32 by pde-varg          #+#    #+#             */
/*   Updated: 2024/10/24 17:31:33 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*p;

	i = 0;
	p = s;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
/*
int	main(void)
{
	char	s[20] = "hello";
	size_t	x;
	size_t	cont;

	x = 4;
	cont = 0;
	ft_bzero(s, x);
	while (cont < x)
	{
		printf("value : %c \n", s[cont]);
		cont++;
	}
	return (0);
}*/