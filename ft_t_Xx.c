/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_t_Xx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalounic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 05:37:34 by yalounic          #+#    #+#             */
/*   Updated: 2023/05/14 08:48:19 by yalounic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_up_hexa(unsigned int t)
{
	int				r;
	char			res[1000];
	int				rp;

	rp = -1;
	while (t > 0)
	{
		r = t % 16;
		if (r < 10)
			r = r + 48;
		else
			r = r + 55;
		res[++rp] = r;
		t = t / 16;
	}
	res[++rp] = '\0';
	return (ft_strrev(res));
}

int	ft_t_xx(va_list params)
{
	unsigned int	t;

	t = (unsigned int) va_arg(params, unsigned int);
	if (t == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	else
		return (ft_up_hexa(t));
}
