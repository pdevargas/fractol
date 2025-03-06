/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arguments.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 12:34:23 by pde-varg          #+#    #+#             */
/*   Updated: 2025/01/27 16:44:06 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_check_argv_iqual(int argc, char **argv)
{
	int	x;
	int	y;

	x = 0;
	while (x < argc)
	{
		y = x + 1;
		while (y < argc)
		{
			if (ft_atoi(argv[x]) == ft_atoi(argv[y]))
				return (1);
			y++;
		}
		x++;
	}
	return (0);
}

int	ft_check_argv_int(int argc, char **argv)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x < argc)
	{
		y = 0;
		if (ft_atoi(argv[x]) > INT_MAX || ft_atoi(argv[x]) < INT_MIN)
			return (1);
		while (argv[x][y] != '\0')
		{
			if ((argv[x][y] == '+' || argv[x][y] == '-') && (argv[x][y
					+ 1] == '+' || argv[x][y + 1] == '-'))
				return (1);
			if ((argv[x][y] < '0' || argv[x][y] > '9') && (argv[x][y] != '+'
					&& argv[x][y] != '-'))
				return (1);
			y++;
		}
		x++;
	}
	return (0);
}

int	ft_arg(int argc, char **argv)
{
	if (ft_check_argv_int(argc, argv) == 1)
		return (1);
	if (ft_check_argv_iqual(argc, argv) == 1)
		return (1);
	else
		return (0);
}

char	**ft_arguments(int *argc, char **argv, int *alloc)
{
	int	x;

	x = -1;
	if (*argc == 2)
	{
		argv = ft_split(argv[1], 32);
		if (!argv || argv[0] == NULL)
		{
			if (argv)
				free(argv);
			exit(0);
		}
		*alloc = 1;
	}
	if (*argc > 2)
	{
		while (++x < *argc - 1)
			argv[x] = argv[x + 1];
		argv[x] = NULL;
	}
	x = 0;
	while (argv[x] != NULL)
		x++;
	*argc = x;
	return (argv);
}
