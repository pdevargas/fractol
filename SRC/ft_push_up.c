/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_up.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 12:59:38 by pde-varg          #+#    #+#             */
/*   Updated: 2025/01/27 14:36:16 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push_up_a(t_stack **a, int value)
{
	int	x;
	int	index;

	if (*a != NULL)
	{
		x = ft_count_elements(a);
		index = ft_index(a, value);
		if (index < (x / 2))
		{
			while (index != x)
			{
				rra(a, 1);
				index = ft_index(a, value);
			}
		}
		else
		{
			while (index != x)
			{
				ra(a, 1);
				index = ft_index(a, value);
			}
		}
	}
}

void	ft_two_elements(t_stack **a, t_stack **b, int x)
{
	int	max;
	int	index;

	max = ft_highest_number(b);
	index = ft_index(b, max);
	if (x == 1)
	{
		if (ft_index(b, max) == 0)
			rb(b, 1);
		pa(a, b, 1);
		pa(a, b, 1);
	}
}

void	ft_up_b(t_stack **b)
{
	int	x;
	int	max;
	int	index;

	x = ft_count_elements(b);
	max = ft_highest_number(b);
	index = ft_index(b, max);
	while (index != x)
	{
		if (index <= (x / 2))
			rrb(b, 1);
		else
			rb(b, 1);
		index = ft_index(b, max);
	}
}
