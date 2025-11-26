/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upper_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojin <ojin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 10:45:22 by ojin              #+#    #+#             */
/*   Updated: 2025/11/21 11:02:34 by ojin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_upper_nbr(long n, int base)
{
	int		count;
	char	*hex;

	hex = "0123456789ABCDEF";
	if (n < 0)
	{
		write (1, "-", 1);
		return (ft_upper_nbr(-n, base) + 1);
	}
	else if (n < base)
		return (ft_putchar(hex[n]));
	else
	{
		count = ft_upper_nbr(n / base, base);
		return (count + ft_upper_nbr(n % base, base));
	}
}
