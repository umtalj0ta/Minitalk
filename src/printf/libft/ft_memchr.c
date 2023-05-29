/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-v <jgomes-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:07:24 by jgomes-v          #+#    #+#             */
/*   Updated: 2023/04/20 13:16:07 by jgomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ps;
	size_t	i;
	size_t	count;

	ps = (char *)s;
	i = 0;
	count = n;
	while (i < count)
	{
		if (ps[i] == (signed char)c)
		{
			return (&ps[i]);
		}
	i++;
	}
	return (NULL);
}

/* int main()
 {
     printf("%p\n",ft_memchr("zla", 'a' , 3));
     int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	printf("%p", (char *)ft_memchr(tab, -1, 7));

 }*/
