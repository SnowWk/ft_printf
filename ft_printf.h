/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snowp <snowp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:09:18 by ojin              #+#    #+#             */
/*   Updated: 2025/11/27 01:21:36 by snowp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int			ft_printf(const char *fmt, ...);
size_t		ft_putchar(const char c);
size_t		ft_putstr(const char *str);
size_t		ft_putnbr(const int n);
size_t		ft_putuns(const unsigned int n);
size_t		ft_putptr(void *ptr);
size_t		ft_lower_hex(const unsigned int n);
size_t		ft_upper_hex(const unsigned int n);

#endif