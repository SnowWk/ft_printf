/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snowp <snowp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 00:02:35 by snowp             #+#    #+#             */
/*   Updated: 2025/11/27 01:36:31 by snowp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	size_t	ft_puthex(const unsigned long n)
{
	size_t	count;
	char	*hex;

	count = 0;
	hex = "0123456789abcdef";
	if (n >= 16)
		count += ft_puthex(n / 16);
	count += ft_putchar(hex[n % 16]);
	return (count);
}

size_t	ft_putptr(void *ptr)
{
	if (!ptr)
		return (ft_putstr("(nil)"));
	ft_putstr("0x");
	return (ft_puthex((unsigned long)ptr) + 2);
}
