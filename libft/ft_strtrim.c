/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:38:02 by pde-varg          #+#    #+#             */
/*   Updated: 2024/10/24 17:50:25 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start ++;
	end = ft_strlen(s1) - 1;
	while (end > 0 && ft_strchr(set, s1[end]))
		end --;
	if (end < start)
		return (ft_calloc(1, sizeof(char)));
	return (ft_substr(s1, start, end - start + 1));
}
/*
int	main(void)
{
	const char	src[20] = "   xxx   xxx";
	char		car[5] = " x";

	printf("value %s \n", ft_strtrim(src, car));
	return (0);
}*/
