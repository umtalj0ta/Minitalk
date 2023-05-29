/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:52:19 by jgomes-v          #+#    #+#             */
/*   Updated: 2023/04/24 16:52:22 by jgomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *neww)
{
	t_list	*curr;

	if (!lst || !neww)
		return ;
	if (!*lst)
		*lst = neww;
	else
	{
		curr = *lst;
		while (curr->next)
			curr = curr->next;
		curr->next = neww;
	}
}
