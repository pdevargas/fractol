/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:27:34 by pablo.devar       #+#    #+#             */
/*   Updated: 2024/10/24 17:50:13 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		pos;
	int			temp;
	int			temp2;
	const char	*o;

	pos = 0;
	temp = 0;
	temp2 = 0;
	o = s;
	while (pos <= ft_strlen(o))
	{
		if (o[pos] == (char)c)
		{
			temp = pos;
			temp2 = 1;
		}
		pos++;
	}
	if (temp2 == 1)
		return ((char *)&o[temp]);
	return (NULL);
}
/*
int	main(void)
{
	char	c[20] = "cadene";
    int     x = 97;

	printf("value: %c \n", *ft_strrchr(c, x));

	printf("value original: %c \n", *strrchr(c, x));
	return (0);
}*/