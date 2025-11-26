/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snowp <snowp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 11:03:09 by ojin              #+#    #+#             */
/*   Updated: 2025/11/27 00:08:40 by snowp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char sp, va_list arg)
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
		count += ft_lower_nbr((long)va_arg(arg, int), 10);
	else if (sp == 'u')
		count += ft_lower_nbr(va_arg(arg, unsigned int), 10);
	else if (sp == 'x')
		count += ft_lower_nbr(va_arg(arg, unsigned int), 16);
	else if (sp == 'X')
		count += ft_upper_nbr(va_arg(arg, unsigned int), 16);
	else if (sp == '%')
		count += ft_putchar('%');
	else
		count += write(1, &sp, 1);
	return (count);
}
