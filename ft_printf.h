/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalounic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 05:39:15 by yalounic          #+#    #+#             */
/*   Updated: 2023/05/14 08:47:59 by yalounic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

int		ft_printf(const char *yop, ...);
int		ft_t_c(va_list params);
int		ft_t_s(va_list params);
int		ft_t_i(va_list params);
int		ft_t_d(va_list params);
int		ft_t_u(va_list params);
int		ft_t_per(va_list params);
int		ft_t_x(va_list params);
int		ft_t_xx(va_list params);
int		ft_t_p(va_list params);
int		ft_strrev(char *src);
char	*ft_strrev_p(char *src);
int		ft_p_hexa(uintptr_t t);
int		ft_min_hexa(unsigned int t);
int		ft_up_hexa(unsigned int t);
int		ft_strlen(char *str);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int nbr, int fd);
void	ft_putunbr_fd(unsigned int n, int fd);

#endif
