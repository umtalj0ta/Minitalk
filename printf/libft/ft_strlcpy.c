/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 11:07:21 by jgomes-v          #+#    #+#             */
/*   Updated: 2023/04/27 11:28:43 by jgomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size)
	{	
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
	dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*int	main()
{	
	char	dst[100];
	printf("%zu\n",ft_strlcpy(dst, "teste", 15));
	printf("%s\n", dst);

	printf("%zu",ft_strlcpy(dst, "", 15));
	printf("%s\n", dst);
	
	printf("%zu",ft_strlcpy(dst, "teste e coisas", 3));
	printf("%s\n", dst);

	printf("%zu",ft_strlcpy(dst, "teste e coisas e mais coisas", 15));
	printf("%s\n", dst);

	printf("%zu",ft_strlcpy(dst, "lorem ipsum dolor sit amet", 0));
	printf("%s\n", dst);
}*/	
