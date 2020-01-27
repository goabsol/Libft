/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhallab <arhallab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:24:27 by arhallab          #+#    #+#             */
/*   Updated: 2019/10/24 02:08:01 by arhallab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	unsigned int	*list2int(unsigned int a, unsigned int b)
{
	unsigned int		*l;

	if (!(l = (unsigned int *)malloc(2 * sizeof(unsigned int))))
		return (NULL);
	l[0] = a;
	l[1] = b;
	return (l);
}

static	unsigned int	*ni(char const *s1, char const *set)
{
	unsigned int		i;
	unsigned int		j;
	unsigned int		i1;
	unsigned int		i2;

	i = 0;
	i1 = 0;
	i2 = 0;
	j = ft_strlen(s1) - 1;
	while (i1 < ft_strlen(set) || i2 < ft_strlen(set))
	{
		if (i >= j)
			return (list2int(1, 0));
		if (i1 < ft_strlen(set) && set[i1++] == s1[i])
		{
			i++;
			i1 = 0;
		}
		if (i2 < ft_strlen(set) && set[i2++] == s1[j])
		{
			j--;
			i2 = 0;
		}
	}
	return (list2int(i, j));
}

char					*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	*l;
	char			*ns;

	if (!s1)
		return (NULL);
	if (!(set && *s1))
		return (ft_strdup(s1));
	l = ni(s1, set);
	if (!l)
		return (NULL);
	ns = ft_substr(s1, l[0], l[1] - l[0] + 1);
	return (ns);
}
