/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:32:26 by pde-varg          #+#    #+#             */
/*   Updated: 2024/10/24 17:34:27 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) || (c >= '0'
			&& c <= '9'))
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
	if (ft_isalnum(num))
	{
		printf(" %c is alphanum \n", num);
	}
	else
	{
		printf(" %c is not alphanum \n", num);
	}
	return (0);
}*/
