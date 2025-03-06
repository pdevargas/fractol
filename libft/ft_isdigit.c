/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:28:08 by pde-varg          #+#    #+#             */
/*   Updated: 2024/10/24 17:35:31 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}

/*
int	main(void)
{
	int	num;

	num = '2';
	if (ft_isdigit(num))
	{
		printf(" %c is digit \n", num);
	}
	else
	{
		printf(" %c is not digit \n", num);
	}
	return (0);
}*/