/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snowp <snowp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 01:05:24 by snowp             #+#    #+#             */
/*   Updated: 2025/11/27 01:08:26 by snowp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putuns(const unsigned int n)
{
	size_t	count;

	count = 0;
	if (n >= 10)
		count += ft_putuns(n / 10);
	count += ft_putchar((n % 10) + '0');
	return (count);
}
