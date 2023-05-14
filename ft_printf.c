/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalounic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 05:39:22 by yalounic          #+#    #+#             */
/*   Updated: 2023/05/14 08:47:55 by yalounic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_tflags(char yop, va_list arg)
{
	if (yop == 'c')
		return (ft_t_c(arg));
	if (yop == 's')
		return (ft_t_s(arg));
	if (yop == 'p')
		return (ft_t_p(arg));
	if (yop == 'd')
		return (ft_t_d(arg));
	if (yop == 'i')
		return (ft_t_i(arg));
	if (yop == 'u')
		return (ft_t_u(arg));
	if (yop == 'x')
		return (ft_t_x(arg));
	if (yop == 'X')
		return (ft_t_xx(arg));
	if (yop == '%')
		return (ft_t_per(arg));
	return (0);
}

int	ft_printf(const char *yop, ...)
{
	va_list	arg;
	int		size;
	int		i;

	i = 0;
	size = 0;
	va_start(arg, yop);
	while (yop[i])
	{
		if (yop[i] == '%')
		{
			i++;
			size += ft_tflags(yop[i], arg);
		}
		else
		{
			ft_putchar_fd(yop[i], 1);
			size++;
		}
		i++;
	}
	va_end(arg);
	return (size);
}
