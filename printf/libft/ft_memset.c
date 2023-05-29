/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:39:01 by jgomes-v          #+#    #+#             */
/*   Updated: 2023/04/17 16:03:06 by jgomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*string;

	i = 0;
	string = s;
	while (n--)
	{
		string[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*int	main()
{
	char buffer[10];

	ft_memset(buffer, 48, 4);
	printf("%s", buffer);
}*/	
