/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 17:13:15 by shicks            #+#    #+#             */
/*   Updated: 2016/11/09 19:43:09 by shicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;
	unsigned char	l;

	i = 0;
	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	l = (unsigned char)c;
	while (i < n)
	{
		a[i] = b[i];
		if (b[i] == l)
			return ((void *)&a[i + 1]);
		i++;
	}
	return (NULL);
}
