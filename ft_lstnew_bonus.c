/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhallab <arhallab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 09:38:43 by arhallab          #+#    #+#             */
/*   Updated: 2019/10/19 05:44:24 by arhallab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *c)
{
	t_list	*l;

	if (!(l = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	l->content = c;
	l->next = NULL;
	return (l);
}
