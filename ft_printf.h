/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snowp <snowp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:09:18 by ojin              #+#    #+#             */
/*   Updated: 2025/11/27 00:12:09 by snowp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *fmt, ...);
size_t	ft_putchar(size_t c);
size_t	ft_putstr(const char *str);
int		ft_putptr(void *ptr);
int		ft_lower_nbr(long n, int base);
int		ft_upper_nbr(long n, int base);
int		ft_format(char sp, va_list arg);

#endif