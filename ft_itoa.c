/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhallab <arhallab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:05:15 by arhallab          #+#    #+#             */
/*   Updated: 2019/10/19 22:25:03 by arhallab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		*tens(int n)
{
	int		p;
	int		len;
	int		*l;

	p = 1;
	len = 0;
	while (n / p > 9 || n / p < -9)
	{
		p *= 10;
		len++;
	}
	if (!(l = (int *)malloc(2 * sizeof(int))))
		return (NULL);
	l[0] = len;
	l[1] = p;
	return (l);
}

static	int		ft_abs(int a)
{
	return (a > 0 ? a : -a);
}

char			*ft_itoa(int n)
{
	char			*sn;
	int				s;
	int				*l;

	s = 0;
	if (n < 0)
		s = 1;
	if (!(l = tens(n)))
		return (NULL);
	if (!(sn = (char *)malloc((l[0] + s + 2) * sizeof(char))))
		return (NULL);
	if (s)
		sn[0] = '-';
	while (l[1] != 0)
	{
		sn[s++] = (char)(ft_abs(n / l[1]) + 48);
		n %= l[1];
		l[1] /= 10;
	}
	sn[s] = '\0';
	return (sn);
}
