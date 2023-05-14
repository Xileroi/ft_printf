/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_t_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalounic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 05:38:12 by yalounic          #+#    #+#             */
/*   Updated: 2023/05/14 08:48:13 by yalounic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strrev_p(char *src)
{
	int		i;
	int		j;
	char	dest[100];
	char	*size;

	size = 0;
	i = ft_strlen(src) - 1;
	j = -1;
	write(1, "0x", 2);
	while (i > -1)
	{
		dest[++j] = src[i];
		ft_putchar_fd(dest[j], 1);
		i--;
		size++;
	}
	return (size + 2);
}

int	ft_p_hexa(uintptr_t t)
{
	int		r;
	char	res[1000];
	int		rp;

	rp = -1;
	while (t > 0)
	{
		r = t % 16;
		if (r < 10)
			r = r + 48;
		else
			r = r + 87;
		res[++rp] = r;
		t = t / 16;
	}
	res[++rp] = '\0';
	return ((uintptr_t)ft_strrev_p(res));
}

int	ft_t_p(va_list params)
{
	uintptr_t	t;
	void		*ptr;

	ptr = (void *) va_arg(params, void *);
	t = (uintptr_t) ptr;
	if (t == 0)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	else
		return (ft_p_hexa(t));
}
