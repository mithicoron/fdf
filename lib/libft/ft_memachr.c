/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memachr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 20:23:17 by shicks            #+#    #+#             */
/*   Updated: 2017/03/14 16:38:39 by shicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int			ft_memachr(const void *s, int c)
{
	unsigned char	*a;
	int				strlen;
	int				i;

	strlen = ft_strlen(s);
	a = (unsigned char *)s;
	i = 0;
	while (i < strlen)
	{
		if (*a == (unsigned char)c)
			return (i);
		a++;
		i++;
	}
	return (i);
}
