/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:52:40 by pde-varg          #+#    #+#             */
/*   Updated: 2025/01/27 13:47:46 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	x;

	x = 0;
	while (s[x] != '\0')
	{
		f(x, &s[x]);
		x++;
	}
}

/* void  upper2(unsigned int num, char *string)
{
	(void)num;
	// printf("Carcter --> %c\n", *string);
	(*string) -= 32;
}

#include <string.h>

int	main(void)
{
    char    *s1 = strdup("hello");
    // char    *s1 = "hello";

    printf("value %s \n", s1);
    ft_striteri(s1, upper2);
    printf("value %s \n", s1);

	free(s1);
    return(0);
} */