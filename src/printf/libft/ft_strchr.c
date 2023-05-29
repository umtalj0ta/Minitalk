/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:09:37 by jgomes-v          #+#    #+#             */
/*   Updated: 2023/04/11 14:39:23 by jgomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	letter;
	char	*string;
	int		i;

	string = (char *)s;
	letter = c;
	i = 0;
	while (string[i] != letter)
	{
		if (s[i] == '\0')
		{
			return (NULL);
		}
	i++;
	}
	return (string + i);
}
