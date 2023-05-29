/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:38:44 by jgomes-v          #+#    #+#             */
/*   Updated: 2023/04/17 17:52:18 by jgomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*strdup;
	size_t	n;

	n = ft_strlen(s);
	strdup = (char *)malloc(sizeof(char) * (n + 1));
	if (!strdup)
		return (NULL);
	ft_memcpy(strdup, s, n);
	strdup[n] = '\0';
	return (strdup);
}
/*int	main()
{	
	char	*string = ft_strdup("ola");
				
	printf("%s", string);
	free(string);
}*/
