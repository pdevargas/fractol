/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:48:17 by pde-varg          #+#    #+#             */
/*   Updated: 2024/10/24 17:43:09 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(const char *cad, char car)
{
	int	x;
	int	cont;

	cont = 0;
	if (!cad)
		return (0);
	x = 0;
	while (cad[x] != '\0')
	{
		if (cad[x] == car)
			x++;
		else
		{
			while (cad[x] != '\0' && cad[x] != car)
				x++;
			cont++;
		}
	}
	return (cont);
}

char	**free_split(char **d)
{
	int	x;

	x = 0;
	while (d[x] != NULL)
	{
		free(d[x]);
		x++;
	}
	free(d);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i[3];
	char	**dest;

	dest = (char **)ft_calloc(ft_count(s, c) + 1, sizeof(char *));
	if (!dest || !s)
		return (NULL);
	i[0] = 0;
	i[2] = 0;
	while (s[i[0]] != '\0')
	{
		if (s[i[0]] == c)
			i[0]++;
		else
		{
			i[1] = i[0];
			while (s[i[0]] != '\0' && s[i[0]] != c)
				i[0]++;
			dest[i[2]] = ft_substr(s, i[1], i[0] - i[1]);
			if (!dest[i[2]])
				return (free_split(dest));
			i[2]++;
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	int x;
// 	char **d;
//i = i[0] pos = i[1]  start[2]
// 	printf("back of  ft_split in main \n");

// 	//d = ft_split(NULL, 'z');
// 	d = ft_split("hello!", ' ');

// 	printf("---m1 \n");

// 	if (!d)
// 	{
// 		printf("d NULL");
// 		exit(0);
// 	}

// 	printf("---m2 \n");

// 	x = 0;
// 	while (d[x] != NULL)
// 	{
// 		printf("cad %i: <%s> \n", x, d[x]);
// 		x++;
// 	}
//     if (d[x] == NULL)
// 		printf("cad %i NULL", x);

// 	//free memory
// 	free_split(d);
// 	return (0);
// }