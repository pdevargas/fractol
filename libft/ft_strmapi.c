/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:43:58 by pde-varg          #+#    #+#             */
/*   Updated: 2024/10/24 17:48:46 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	x;
	char			*d;

	x = 0;
	d = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!d)
		return (NULL);
	while (s[x] != '\0')
	{
		d[x] = f(x, s[x]);
		x++;
	}
	d[x] = '\0';
	return (d);
}
/*
int	main(void)
{
    char    s1 = "hello";
    char    *dest;

    dest = ft_strmapi(s1);
    printf("value %s \n", dest);
    return(0);
}*/