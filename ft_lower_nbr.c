/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lower_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojin <ojin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 10:50:17 by ojin              #+#    #+#             */
/*   Updated: 2025/11/26 11:57:24 by ojin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lower_nbr(long n, int base)
{
	int		count;
	char	*hex;

	hex = "0123456789abcdef";
	if (n < 0)
	{
		write (1, "-", 1);
		return (ft_lower_nbr(-n, base) + 1);
	}
	else if (n < base)
		return (ft_putchar(hex[n]));
	else
	{
		count = ft_lower_nbr(n / base, base);
		return (count + ft_lower_nbr(n % base, base));
	}
}
