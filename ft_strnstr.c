/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhallab <arhallab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 10:56:54 by arhallab          #+#    #+#             */
/*   Updated: 2019/10/25 04:26:49 by arhallab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *x, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (x[0] == '\0')
		return ((char *)h);
	while (i < len && h[i])
	{
		j = 0;
		while (h[i + j] == x[j] && i + j < len)
		{
			if (x[j + 1] == '\0')
				return ((char *)h + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
