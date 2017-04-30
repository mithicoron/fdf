/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 22:51:21 by shicks            #+#    #+#             */
/*   Updated: 2016/11/09 19:42:31 by shicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void		ft_striter(char *s, void (*f)(char *))
{
	if (s && f)
	{
		while (s != NULL && *s)
		{
			(*f)(s);
			s++;
		}
	}
}