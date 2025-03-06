/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:32:07 by pablo.devar       #+#    #+#             */
/*   Updated: 2024/10/24 17:51:22 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	int	i;

	i = c;
	if (c >= 97 && c <= 122)
	{
		i = c - 32;
	}
	return (i);
}
/*
int	main(void)
{
	char	c = 'A';
	printf("value : %d \n", ft_toupper(c));
	return (0);
}*/