/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 18:32:56 by shicks            #+#    #+#             */
/*   Updated: 2017/03/13 20:52:23 by shicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_realloc(void *ptr, size_t *size)
{
	void	*tmp;
	int		prev_size;

	prev_size = *size;
	*size = *size * *size;
	tmp = ft_memalloc(*size);
	ft_memmove(tmp, ptr, prev_size);
	ft_memdel(&ptr);
	return (tmp);
}
