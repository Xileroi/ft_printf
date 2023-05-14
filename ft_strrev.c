/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalounic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 05:38:41 by yalounic          #+#    #+#             */
/*   Updated: 2023/05/14 08:48:06 by yalounic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strrev(char *src)
{
	int		i;
	int		j;
	char	dest[100];
	int		size;

	size = 0;
	i = ft_strlen(src) - 1;
	j = -1;
	while (i > -1)
	{
		dest[++j] = src[i];
		ft_putchar_fd(dest[j], 1);
		i--;
		size++;
	}
	return (size);
}
