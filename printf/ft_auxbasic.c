/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_auxbasic.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 15:42:37 by jgomes-v          #+#    #+#             */
/*   Updated: 2023/05/24 15:09:49 by jgomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_printchar(int c)
{
	int	i;

	i = 0;
	write(1, &c, 1);
	i += 1;
	return (i);
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_printchar(s[i]);
		i++;
	}
}

int	ft_putpercent(void)
{
	return (ft_printchar('%'));
	return (1);
}

int	ft_printstr(char *s)
{
	int	i;

	if (!s)
	{
		ft_putstr("(null)");
		return (6);
	}
	i = 0;
	while (s[i])
	{
		ft_printchar(s[i]);
		i++;
	}
	return (i);
}

int	ft_printnbr(int n)
{
	int		len;
	char	*nbr;
	long	ln;

	len = 0;
	ln = n;
	nbr = ft_itoa(ln);
	len += ft_printstr(nbr);
	free(nbr);
	return (len);
}
