/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:54:40 by pdv               #+#    #+#             */
/*   Updated: 2024/10/24 17:36:31 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdio.h>

int	positions(int n)
{
	int	x;

	x = 0;
	if (n == INT_MIN)
		return (11);
	if (n <= 0)
	{
		x++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		x++;
	}
	return (x);
}

char	*ft_itoa(int n)
{
	int				x;
	unsigned int	num;
	char			*d;

	x = positions(n);
	d = malloc((x + 1) * sizeof(char));
	if (!d)
		return (NULL);
	d[x] = '\0';
	num = n;
	if (n < 0)
	{
		d[0] = '-';
		num = -n;
	}
	while (num > 0)
	{
		d[--x] = (num % 10) + '0';
		num /= 10;
	}
	if (n == 0)
		d[0] = '0';
	return (d);
}
/*
int	main(void)
{
    printf("  -------main ----------- \n");
    printf("value %s \n", ft_itoa(-24));
    return(0);
}
*/
