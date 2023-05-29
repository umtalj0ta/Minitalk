/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:06:46 by jgomes-v          #+#    #+#             */
/*   Updated: 2023/04/24 16:51:18 by jgomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tpn;

	if (lst && del)
	{
		while (*lst)
		{
			tpn = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = tpn;
		}
		*lst = NULL;
	}
}
