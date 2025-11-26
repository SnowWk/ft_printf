/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojin <ojin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:09:18 by ojin              #+#    #+#             */
/*   Updated: 2025/11/21 11:43:52 by ojin             ###   ########.fr       */
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
int		ft_lower_nbr(long n, int base);
int		ft_upper_nbr(long n, int base);
int		ft_format(char sp, va_list arg);

#endif