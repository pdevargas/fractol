/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:15:07 by pde-varg          #+#    #+#             */
/*   Updated: 2024/10/24 17:46:11 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	x;
	int		i;
	size_t	elements;
	char	*dest;

	x = 0;
	i = 0;
	elements = ft_strlen(s1) + ft_strlen(s2) + 1;
	dest = ft_calloc(elements, sizeof(char));
	if (!s1 || !s2 || !dest)
		return (NULL);
	while (x < ft_strlen(s1))
	{
		dest[x] = s1[x];
		x++;
	}
	while (x < (ft_strlen(s1) + ft_strlen(s2)))
	{
		dest[x] = s2[i];
		x++;
		i++;
	}
	dest[x] = '\0';
	return (dest);
}
/*
int	main(void)
{
    const char  s1[20] = "hello ";
    const char  s2[20] = "my friend";
    char        *d;

    d = ft_strjoin(s1, s2);
    printf("s1: %s \n", s1);
    printf("s2: %s \n", s2);
    printf("------------------");
    printf("value: %s \n", d);
    return (0);
}*/