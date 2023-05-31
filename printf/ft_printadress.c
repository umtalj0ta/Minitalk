/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printadress.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 15:46:52 by jgomes-v          #+#    #+#             */
/*   Updated: 2023/04/29 15:48:06 by jgomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_gethex(unsigned long long n)
{
	if (n >= 16)
	{
		ft_gethex(n / 16);
		ft_gethex(n % 16);
	}
	else
	{
		if (n <= 9)
			ft_printchar(n + '0');
		else
			ft_printchar(n - 10 + 'a');
	}
}

int	ft_adress_len(unsigned long long n)
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

int	ft_printadress(unsigned long long n)
{
	int	len;

	len = 0;
	if (n == 0)
		len += ft_printstr("(nil)");
	else
	{
		ft_putstr("0x");
		len += 2;
		ft_gethex(n);
		len += ft_adress_len(n);
	}
	return (len);
}
