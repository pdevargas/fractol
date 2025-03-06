/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 12:46:16 by pde-varg          #+#    #+#             */
/*   Updated: 2025/01/27 13:42:32 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_stack **a, int print)
{
	t_stack	*head;
	t_stack	*temp;
	t_stack	*pos;

	head = *a;
	temp = (*a)->next;
	while (temp->next != NULL)
	{
		pos = temp;
		temp = temp->next;
	}
	temp->next = head;
	pos->next = NULL;
	*a = temp;
	ft_reindex(a);
	if (print == 1)
		ft_printf("rra\n");
}

void	rrb(t_stack **b, int print)
{
	t_stack	*head;
	t_stack	*temp;
	t_stack	*pos;

	head = *b;
	temp = (*b)->next;
	while (temp->next != NULL)
	{
		pos = temp;
		temp = temp->next;
	}
	temp->next = head;
	pos->next = NULL;
	*b = temp;
	ft_reindex(b);
	if (print == 1)
		ft_printf("rrb\n");
}

void	rrr(t_stack **a, t_stack **b)
{
	rra(a, 0);
	rrb(b, 0);
	ft_printf("rrr\n");
}
