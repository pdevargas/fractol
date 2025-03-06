/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calculate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 12:37:38 by pde-varg          #+#    #+#             */
/*   Updated: 2025/01/27 13:40:53 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lowest_number(t_stack **x)
{
	int		temp;
	t_stack	*list;

	list = *x;
	temp = list->data;
	while (list->next != NULL)
	{
		if (list->data < temp)
			temp = list->data;
		list = list->next;
	}
	if (list->data < temp)
		temp = list->data;
	return (temp);
}

int	ft_highest_number(t_stack **x)
{
	int		temp;
	t_stack	*list;

	if (*x != NULL)
	{
		list = *x;
		temp = list->data;
		while (list->next != NULL)
		{
			if (list->data > temp)
				temp = list->data;
			list = list->next;
		}
		if (list->data > temp)
			temp = list->data;
		return (temp);
	}
	return (-1);
}

int	ft_index(t_stack **x, int val)
{
	int		total;
	t_stack	*temp;

	if (*x != NULL)
	{
		total = ft_count_elements(x);
		temp = *x;
		while (total > 0)
		{
			if (temp->data == val)
				return (total);
			temp = temp->next;
			total--;
		}
		if (temp->data == val)
			return (total);
		else
			return (-1);
	}
	return (-1);
}

void	ft_reindex(t_stack **x)
{
	int		total;
	t_stack	*temp;

	if (*x != NULL)
	{
		total = ft_count_elements(x);
		temp = *x;
		while (total > 0)
		{
			temp->index = total;
			temp = temp->next;
			total--;
		}
		temp->index = total;
	}
}
