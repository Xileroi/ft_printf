/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalounic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 05:38:50 by yalounic          #+#    #+#             */
/*   Updated: 2023/05/14 08:48:04 by yalounic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_filter(unsigned int n, int fd)
{
	if (n == 2147483648)
		ft_putstr_fd("2147483648", fd);
	else
		ft_putchar_fd('0', fd);
}

void	ft_putunbr_fd(unsigned int n, int fd)
{
	int		i;
	char	c[10];

	if (fd < 0)
		return ;
	if (n == 0 || n == 2147483648)
	{
		ft_filter(n, fd);
		return ;
	}
	i = 0;
	while (n > 0)
	{
		c[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	i--;
	while (i >= 0)
		ft_putchar_fd(c[i--], fd);
}
