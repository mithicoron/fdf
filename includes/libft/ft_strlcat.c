/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/03 19:42:02 by shicks            #+#    #+#             */
/*   Updated: 2016/11/09 19:40:51 by shicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (size > 0)
	{
		while (i < size && dst[i] != '\0')
			i++;
		j = i;
		while (src[i - j] && (i < (size - 1)))
		{
			dst[i] = src[i - j];
			i++;
		}
	}
	if (j < size)
		dst[i] = '\0';
	return (j + ft_strlen(src));
}
