/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex_up.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 15:40:53 by jgomes-v          #+#    #+#             */
/*   Updated: 2023/04/29 15:49:48 by jgomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_gethexup(unsigned long long n)
{
	if (n >= 16)
	{
		ft_gethexup(n / 16);
		ft_gethexup(n % 16);
	}
	else
	{
		if (n <= 9)
			ft_printchar(n + '0');
		else
			ft_printchar(n - 10 + 'A');
	}
}

int	ft_printhexup(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
	{
		ft_printchar('0');
		return (1);
	}
	else
	{
		ft_gethexup(n);
		len += ft_hex_len(n);
	}
	return (len);
}
