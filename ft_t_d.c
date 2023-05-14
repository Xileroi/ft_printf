/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_t_d.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalounic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 05:38:23 by yalounic          #+#    #+#             */
/*   Updated: 2023/05/14 08:48:08 by yalounic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_t_d(va_list params)
{
	size_t	size;
	int		d;

	size = 0;
	d = (int) va_arg(params, int);
	ft_putnbr_fd(d, 1);
	if (d == 0)
		return (1);
	if (d < 0)
		size++;
	while (d != 0)
	{
		d /= 10;
		size++;
	}
	return (size);
}
