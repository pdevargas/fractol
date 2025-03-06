/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:48:01 by pablo.devar       #+#    #+#             */
/*   Updated: 2024/10/24 17:51:13 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	int	i;

	i = c;
	if (c >= 65 && c <= 90)
	{
		i = c + 32;
	}
	return (i);
}
/*
int	main(void)
{
	char	c = 'x';
	printf("value: %c \n", ft_tolower(c));
	return (0);
}*/