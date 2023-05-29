/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:41:41 by jgomes-v          #+#    #+#             */
/*   Updated: 2023/04/11 14:48:46 by jgomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	letter;
	char	*string;
	int		i;

	string = (char *)s;
	letter = c;
	i = ft_strlen(string);
	if (letter == '\0')
		return (string + i);
	while (i != 0)
	{
		if (string[i] == (char)c)
			return (string + i);
	i--;
	}
	if (s[0] == (char)c)
		return (string);
	return (0);
}
