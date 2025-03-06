/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 19:30:59 by pablo.devar       #+#    #+#             */
/*   Updated: 2025/01/27 13:47:20 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_char(char type, va_list args)
{
	if (type == 'c')
	{
		ft_putchar_fd(va_arg(args, int), 1);
	}
	else if (type == 's')
	{
		ft_putstr_fd(va_arg(args, char *), 1);
	}
}

int	ft_printf(char const *s, ...)
{
	va_list	args;

	va_start(args, s);
	while (*s != '\0')
	{
		if (*s == '%' && *(s + 1) != '\0')
		{
			s++;
			if (*s == '%')
				ft_putchar_fd('%', 1);
			else if (*s == 'c')
				ft_putchar_fd(va_arg(args, int), 1);
			else if (*s == 's')
				ft_putstr_fd(va_arg(args, char *), 1);
			else if (*s == 'd')
				ft_putnbr_fd(va_arg(args, int), 1);
		}
		else
			write(1, s, 1);
		s++;
	}
	va_end(args);
	return (0);
}
