/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order_normal_medium.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:25:06 by pde-varg          #+#    #+#             */
/*   Updated: 2025/01/27 14:42:03 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_medium_pa(t_stack **a, t_stack **b)
{
	t_stack	*temp;

	temp = *b;
	while (temp != NULL)
	{
		pa(a, b, 1);
		temp = *b;
	}
}

void	ft_order_medium(t_stack **a, t_stack **b)
{
	int		min;
	t_stack	*temp;

	min = ft_lowest_number(a);
	temp = *a;
	while (ft_count_elements(a) > 1)
	{
		min = ft_lowest_number(a);
		while (temp != NULL)
		{
			if (temp->data == min)
			{
				ft_up_a_push_b(a, b, temp->data);
				temp = *a;
			}
			else
				temp = temp->next;
		}
		temp = *a;
	}
	if (temp->data > temp->next->data)
		sa(a, 1);
	ft_medium_pa(a, b);
}

int	ft_order_normal_min(int range_max, int range_min, int range_value, int min)
{
	if ((range_max - range_value) > min)
		range_min = range_max - range_value;
	else
		range_min = min;
	return (range_min);
}

void	ft_order_normal_move(t_stack **a, t_stack **b, int range_min,
		int range_max)
{
	t_stack	*temp;

	temp = *a;
	while (temp != NULL)
	{
		if (temp->data >= range_min && temp->data <= range_max)
		{
			ft_up_a_push_b(a, b, temp->data);
			temp = *a;
		}
		else
			temp = temp->next;
	}
}

void	ft_order_normal(t_stack **a, t_stack **b)
{
	int		min;
	int		range_min;
	int		range_max;
	int		range_value;

	min = ft_lowest_number(a);
	range_min = ft_highest_number(a);
	range_max = ft_highest_number(a);
	range_value = ((ft_highest_number(a) - min + 1) / ft_calculate_blocks(a));
	while (range_min > min)
	{
		range_min = ft_order_normal_min(range_max, range_min, range_value, min);
		ft_order_normal_move(a, b, range_min, range_max);
		ft_order_b_push_a(a, b);
		range_max = range_min - 1;
	}
}
