/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:20:44 by pde-varg          #+#    #+#             */
/*   Updated: 2024/10/24 17:38:04 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				x;
	const unsigned char	*o;
	const unsigned char	*d;

	x = 0;
	o = s1;
	d = s2;
	if (n == 0)
		return (0);
	while (x < n - 1)
	{
		if (o[x] != d[x])
		{
			return (o[x] - d[x]);
		}
		x++;
	}
	return (o[x] - d[x]);
}
/*
int	main(void)
{
    int     res;
	char s[] = {-128, 0, 127, 0};
	char s2[] = {0, 0, 127, 0};
    //char	source_1[20] = "hello my friend";
    //char    source_2[20] = "hello my friend";


    res = ft_memcmp(s, s2, 4);
	printf("main \n");
    printf("value %d \n", res);
    printf("---------------------- \n");
   // res = memcmp(source_1, source_2, sizeof(source_1));
	//printf("main \n");
   // printf("value %d \n", res);
    
	return (0);
}*/
