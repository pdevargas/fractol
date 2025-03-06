/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 12:23:30 by pde-varg          #+#    #+#             */
/*   Updated: 2025/01/27 14:30:13 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push(t_stack **next, int val)
{
	t_stack	*new_t_stack;

	new_t_stack = (t_stack *)malloc(sizeof(t_stack));
	if (!new_t_stack)
		return ;
	new_t_stack->data = val;
	new_t_stack->next = *next;
	*next = new_t_stack;
}
