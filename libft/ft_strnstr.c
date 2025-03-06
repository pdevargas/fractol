/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:55:27 by pde-varg          #+#    #+#             */
/*   Updated: 2024/10/24 17:49:49 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	x;

	x = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (x < len && big[x] != '\0')
	{
		if (big[x] == little[0])
		{
			if (len < (x + ft_strlen(little)))
				return (NULL);
			if (ft_strncmp(&big[x], little, ft_strlen(little)) == 0)
				return ((char *)big + x);
		}
		x++;
	}
	return (NULL);
}
/*
int	main(void)
{
	size_t	positions;
	char	prin[20] = "aaabcabcd";
	char	sec[10] = "ab";

	positions = -1;
	printf("value %s \n", ft_strnstr(prin, sec,
				positions));
	return (0);
}*/
