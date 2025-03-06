/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 12:42:08 by pde-varg          #+#    #+#             */
/*   Updated: 2025/01/27 13:41:49 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_stack **a, t_stack **b, int print)
{
	t_stack	*temp;

	temp = *a;
	if (*b != NULL)
	{
		*a = *b;
		*b = (*b)->next;
		(*a)->next = temp;
	}
	if (print == 1)
		ft_printf("pa\n");
	ft_reindex(a);
	ft_reindex(b);
}

void	pb(t_stack **a, t_stack **b, int print)
{
	t_stack	*temp;

	temp = *b;
	if (*a != NULL)
	{
		*b = *a;
		*a = (*a)->next;
		(*b)->next = temp;
	}
	if (print == 1)
		ft_printf("pb\n");
	ft_reindex(a);
	ft_reindex(b);
}
