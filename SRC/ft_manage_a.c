/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 12:53:30 by pde-varg          #+#    #+#             */
/*   Updated: 2025/01/27 14:32:18 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_charge_a(t_stack **a, int argc, char **argv)
{
	int	x;

	x = argc - 1;
	while (x >= 0)
	{
		ft_push(a, ft_atoi(argv[x]));
		x--;
	}
}

int	ft_count_elements(t_stack **a)
{
	int		x;
	t_stack	*temp;

	x = 0;
	temp = *a;
	while (temp)
	{
		x++;
		temp = (temp)->next;
	}
	return (x - 1);
}

int	ft_free_a(t_stack **pos)
{
	t_stack	*temp;

	if (*pos == NULL)
		return (-1);
	while (*pos != NULL)
	{
		temp = (*pos)->next;
		free(*pos);
		*pos = temp;
	}
	return (0);
}
