/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 15:40:32 by jgomes-v          #+#    #+#             */
/*   Updated: 2023/04/29 15:49:32 by jgomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_gethexlow(unsigned long long n)
{
	if (n >= 16)
	{
		ft_gethexlow(n / 16);
		ft_gethexlow(n % 16);
	}
	else
	{
		if (n <= 9)
			ft_printchar(n + '0');
		else
			ft_printchar(n - 10 + 'a');
	}
}

int	ft_hex_len(unsigned long long n)
{
	int	count;

	count = 0;
	while (n)
	{
		count++;
		n /= 16;
	}
	return (count);
}

int	ft_printhexlow(unsigned int n)
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
		ft_gethexlow(n);
		len += ft_hex_len(n);
	}
	return (len);
}
