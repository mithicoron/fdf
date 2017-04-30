/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 21:52:38 by shicks            #+#    #+#             */
/*   Updated: 2016/11/09 19:44:11 by shicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*mem;

	if (!(mem = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_bzero(mem, size + 1);
	return (mem);
}
