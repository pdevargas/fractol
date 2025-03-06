/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:41:12 by pde-varg          #+#    #+#             */
/*   Updated: 2024/10/24 17:35:09 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	int	num;

	num = 15;
	if (ft_isascii(num))
	{
		printf(" %c is ascii \n", num);
	}
	else
	{
		printf(" %c is not ascii \n", num);
	}
	return (0);
}*/