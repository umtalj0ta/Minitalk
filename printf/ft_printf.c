/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 15:41:11 by jgomes-v          #+#    #+#             */
/*   Updated: 2023/04/29 15:41:13 by jgomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formats(va_list args, char c)
{
	int	buffer;

	buffer = 0;
	if (c == 'c')
		buffer += ft_printchar(va_arg(args, int));
	else if (c == '%')
		buffer += ft_putpercent();
	else if (c == 's')
		buffer += ft_printstr(va_arg(args, char *));
	else if (c == 'i' || c == 'd')
		buffer += ft_printnbr(va_arg(args, int));
	else if (c == 'u')
		buffer += ft_printuns(va_arg(args, int));
	else if (c == 'p')
		buffer += ft_printadress(va_arg(args, unsigned long long));
	else if (c == 'x')
		buffer += ft_printhexlow(va_arg(args, unsigned int));
	else if (c == 'X')
		buffer += ft_printhexup(va_arg(args, unsigned int));
	return (buffer);
}

int	ft_printf(const char *str, ...)
{
	va_list			args;
	int				buffer;
	unsigned int	i;

	i = 0;
	buffer = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			buffer += ft_formats(args, str[i]);
		}
		else
		{
			ft_printchar(str[i]);
			buffer++;
		}
		i++;
	}
	va_end(args);
	return (buffer);
}

// int	main(void)
// {
//  int teste = -40;

//   printf("printf original: %x\n",teste);
//   ft_printf("my printf: %x\n",teste);
// }
