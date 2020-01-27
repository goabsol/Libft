/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhallab <arhallab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 10:43:39 by arhallab          #+#    #+#             */
/*   Updated: 2019/10/25 04:08:00 by arhallab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t s)
{
	size_t			i;
	size_t			len;

	i = 0;
	if (!dst && !src)
		return (ft_strlen(src));
	len = ft_strlen(dst);
	if (s < len)
		return (ft_strlen(src) + s);
	while (i + len + 1 < s && src[i] != '\0')
	{
		dst[i + len] = src[i];
		i++;
	}
	if (s)
		dst[i + len] = '\0';
	if (len < s)
		return (len + ft_strlen(src));
	return (ft_strlen(src) + s);
}
