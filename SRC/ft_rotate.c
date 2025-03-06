/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 12:43:47 by pde-varg          #+#    #+#             */
/*   Updated: 2025/01/27 13:42:44 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stack **a, int print)
{
	t_stack	*head;
	t_stack	*temp;

	head = *a;
	temp = (*a)->next;
	*a = temp;
	while (temp->next != NULL)
		temp = temp->next;
	head->next = NULL;
	temp->next = head;
	ft_reindex(a);
	if (print == 1)
		ft_printf("ra\n");
}

void	rb(t_stack **b, int print)
{
	t_stack	*head;
	t_stack	*temp;

	head = *b;
	temp = (*b)->next;
	*b = temp;
	while (temp->next != NULL)
		temp = temp->next;
	head->next = NULL;
	temp->next = head;
	ft_reindex(b);
	if (print == 1)
		ft_printf("rb\n");
}

void	rr(t_stack **a, t_stack **b)
{
	ra(a, 0);
	rb(b, 0);
	ft_printf("rr\n");
}
