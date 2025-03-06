/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_ordered.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 12:49:22 by pde-varg          #+#    #+#             */
/*   Updated: 2025/01/27 13:41:12 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_is_ordered(t_stack **a)
{
	int		x;
	int		temp;
	t_stack	*temp_a;
	t_stack	*temp_t;

	x = 0;
	temp_a = *a;
	while (temp_a->next != NULL && x == 0)
	{
		temp = temp_a->data;
		temp_t = temp_a->next;
		while (temp_t->next != NULL)
		{
			if (temp > temp_t->data)
				x = 1;
			temp_t = temp_t->next;
		}
		if (temp > temp_t->data)
			x = 1;
		temp_a = temp_a->next;
	}
	return (x);
}
