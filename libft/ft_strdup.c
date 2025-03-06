/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 19:39:24 by pde-varg          #+#    #+#             */
/*   Updated: 2024/10/24 17:45:13 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	size_t	large;
	size_t	x;

	x = 0;
	large = ft_strlen(s) + 1;
	new = (char *)ft_calloc(large, sizeof(char));
	if (!new)
		return (NULL);
	while (x < large)
	{
		new[x] = s[x];
		x++;
	}
	new[x] = '\0';
	return (new);
}
/*
int	main(void)
{
    char cad[20] = "Hello my friend";
    char *gen;
    
    generada = ft_strdup(cad);
    printf("new string %s: \n", gen);
    printf("------------- \n");
    generada = strdup(cad);
    printf("new string original %s: \n", gen);
    return (0);
}*/
