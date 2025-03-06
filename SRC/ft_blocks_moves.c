/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_blocks_moves.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:28:41 by pde-varg          #+#    #+#             */
/*   Updated: 2025/01/27 14:43:40 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push_all_b_to_a(t_stack **a, t_stack **b, int print)
{
	while (*b != NULL)
		pa(a, b, print);
}

void	ft_order_b_push_a(t_stack **a, t_stack **b)
{
	int	x;
	int	max;
	int	index;

	x = ft_count_elements(b);
	max = ft_highest_number(b);
	index = ft_index(b, max);
	while (x >= 0)
	{
		if (x == 1)
		{
			ft_two_elements(a, b, x);
			return ;
		}
		ft_up_b(b);
		index = ft_index(b, max);
		if (index == x)
		{
			pa(a, b, 1);
			x = ft_count_elements(b);
			max = ft_highest_number(b);
			index = ft_index(b, max);
		}
	}
}

void	ft_up_a_push_b(t_stack **a, t_stack **b, int value)
{
	ft_push_up_a(a, value);
	pb(a, b, 1);
}

int	ft_calculate_blocks(t_stack **a)
{
	int	blocks;
	int	elements;

	elements = ft_count_elements(a);
	blocks = 0;
	if (elements < 100)
		blocks = 4;
	else
		blocks = 11;
	return (blocks);
}
