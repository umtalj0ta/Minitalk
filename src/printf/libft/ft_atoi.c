/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 11:05:28 by jgomes-v          #+#    #+#             */
/*   Updated: 2023/04/24 16:01:07 by jgomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *npr)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (npr[i] == ' ' || npr[i] == '\t'
		|| npr[i] == '\n'
		|| npr[i] == '\r' || npr[i] == '\v' || npr[i] == '\f')
	i++;
	if (npr[i] == '\0')
		return (0);
	if (npr[i] == '-')
		sign *= -1;
	if (npr[i] == '-' || npr[i] == '+')
		i++;
	while (npr[i] && npr[i] >= '0' && npr[i] <= '9')
	{
		res = res * 10 + npr[i] - '0';
		i++;
	}
	return (res * sign);
}
