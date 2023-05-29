/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:43:13 by jgomes-v          #+#    #+#             */
/*   Updated: 2023/04/20 15:54:17 by jgomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joinstring;
	int		s1len;
	int		count;

	s1len = ft_strlen(s1);
	joinstring = malloc(sizeof(char) * ((s1len + ft_strlen(s2)) + 1));
	if (!joinstring)
		return (NULL);
	count = 0;
	if (!s1 | !s2)
		return (NULL);
	while (count < s1len)
	{
		joinstring[count] = s1[count];
		count++;
	}
	count = 0;
	while (count < (int)ft_strlen(s2))
	{	
		joinstring[s1len + count] = s2[count];
		count++;
	}
	joinstring[s1len + ft_strlen(s2)] = '\0';
	return (joinstring);
}
