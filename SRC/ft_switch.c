/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 12:39:56 by pde-varg          #+#    #+#             */
/*   Updated: 2025/01/27 13:43:06 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack **a, int print)
{
	t_stack	*temp;

	if (a != NULL && (*a)->next != NULL)
	{
		temp = (*a)->next;
		(*a)->next = (*a)->next->next;
		temp->next = *a;
		*a = temp;
	}
	if (print == 1)
		ft_printf("sa\n");
	ft_reindex(a);
}

void	sb(t_stack **b, int print)
{
	int	val;

	val = 0;
	if (*b != NULL && (*b)->next != NULL)
	{
		val = (*b)->data;
		(*b)->data = (*b)->next->data;
		(*b)->next->data = val;
	}
	if (print == 1)
		ft_printf("sb\n");
	ft_reindex(b);
}

void	ss(t_stack **a, t_stack **b)
{
	sa(a, 0);
	sb(b, 0);
	ft_printf("ss\n");
}
