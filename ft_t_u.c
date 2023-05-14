/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_t_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalounic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 05:37:44 by yalounic          #+#    #+#             */
/*   Updated: 2023/05/14 08:48:16 by yalounic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_t_u(va_list params)
{
	unsigned int	udecimal;
	size_t			size;

	size = 0;
	udecimal = (unsigned int) va_arg(params, unsigned int);
	ft_putunbr_fd(udecimal, 1);
	if (udecimal == 0)
		return (1);
	while (udecimal != 0)
	{
		udecimal /= 10;
		size++;
	}
	return (size);
}
