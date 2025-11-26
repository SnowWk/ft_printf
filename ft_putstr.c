/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojin <ojin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 10:44:27 by ojin              #+#    #+#             */
/*   Updated: 2025/11/21 10:59:59 by ojin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putstr(const char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		ft_putchar((int)*str);
		count++;
		str++;
	}
	return (count);
}
