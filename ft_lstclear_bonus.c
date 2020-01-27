/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhallab <arhallab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 19:54:21 by arhallab          #+#    #+#             */
/*   Updated: 2019/11/05 08:39:36 by arhallab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *l;

	if (!lst || !(*lst))
		return (NULL);
	while (*lst)
	{
		l = (*lst)->next;
		if ((*lst)->content && del)
			del((*lst)->content);
		free(*lst);
		*lst = l;
	}
}
