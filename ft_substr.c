/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhallab <arhallab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:18:59 by arhallab          #+#    #+#             */
/*   Updated: 2019/10/22 06:47:36 by arhallab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ns;

	if (!s)
		return (NULL);
	if (!len || start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	i = (size_t)start;
	if (!(ns = (char *)malloc(sizeof(s[i]) * (len + 1))))
		return (NULL);
	while (i < len + (size_t)start)
	{
		ns[i - (size_t)start] = s[i];
		i++;
	}
	*(ns + len) = '\0';
	return (ns);
}
