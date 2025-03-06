/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:20:30 by pde-varg          #+#    #+#             */
/*   Updated: 2025/01/27 13:46:44 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atoi(const char *str)
{
	long	num;
	int		neg;
	int		i;

	num = 0;
	neg = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i + 1] == '+' || str[i + 1] == '-')
			return (0);
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i++] - '0');
	}
	return (num * neg);
}
/*
int	main(void)
{
	printf("main result %d \n",ft_atoi("  +475"));
	printf("\n result original atoi: %d \n", atoi("  +475"));
	return (0);
}
*/

/*

int	main(void)
{

	printf("Test 15: %d\n", ft_atoi("9999999999999999999999999"));
		// Expected: undefined number o INT_MAX
	printf("Expected: undefined numbe o INT_MAX\n");
	printf("\n original atoi: %d \n",
			atoi("9999999999999999999999999"));
	printf("---------------------------------\n");
	return (0);
}*/