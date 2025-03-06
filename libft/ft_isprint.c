/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:46:00 by pde-varg          #+#    #+#             */
/*   Updated: 2024/10/24 17:35:58 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if ((c >= 32 && c <= 126))
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	int	num;

	num = 'h';
	if (ft_isprint(num))
	{
		printf(" %c is printable \n", num);
	}
	else
	{
		printf(" %c is not printable \n", num);
	}
	return (0);
}*/