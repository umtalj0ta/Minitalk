/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:35:22 by jgomes-v          #+#    #+#             */
/*   Updated: 2023/04/27 11:16:28 by jgomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp;
	char	*dest_copy;

	temp = (char *)src;
	dest_copy = (char *)dest;
	if (temp < dest_copy)
	{
		while (n--)
		{
			dest_copy[n] = temp[n];
		}
	}
	else
		ft_memcpy(dest_copy, temp, n);
	return (dest);
}
