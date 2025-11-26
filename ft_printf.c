/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojin <ojin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:10:49 by ojin              #+#    #+#             */
/*   Updated: 2025/11/21 11:52:58 by ojin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *fmt, ...)
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
