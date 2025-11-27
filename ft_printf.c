/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snowp <snowp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:10:49 by ojin              #+#    #+#             */
/*   Updated: 2025/11/27 01:11:11 by snowp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	size_t	ft_format(char sp, va_list arg)
{
	int	count;

	count = 0;
	if (sp == 'c')
		count += ft_putchar(va_arg(arg, int));
	else if (sp == 's')
		count += ft_putstr(va_arg(arg, char *));
	else if (sp == 'p')
		count += ft_putptr(va_arg(arg, void *));
	else if (sp == 'd' || sp == 'i')
		count += ft_putnbr(va_arg(arg, int));
	else if (sp == 'u')
		count += ft_putuns(va_arg(arg, unsigned int));
	else if (sp == 'x')
		count += ft_lower_hex(va_arg(arg, int));
	else if (sp == 'X')
		count += ft_upper_hex(va_arg(arg, int));
	else if (sp == '%')
		count += ft_putchar('%');
	else
		count += write(1, &sp, 1);
	return (count);
}

size_t	ft_printf(const char *fmt, ...)
{
	va_list	arg;
	int		res;
	int		i;

	res = 0;
	i = 0;
	va_start(arg, fmt);
	while (fmt[i])
	{
		if (fmt[i] == '%')
			res += ft_format(fmt[++i], arg);
		else
			res += write(1, &fmt[i], 1);
		i++;
	}
	va_end(arg);
	return (res);
}
