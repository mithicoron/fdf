/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 17:32:03 by shicks            #+#    #+#             */
/*   Updated: 2016/11/09 19:44:44 by shicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_numstr(int n, char *str, unsigned int pos)
{
	unsigned int	num;

	pos--;
	num = n;
	if (n < 0)
	{
		num = -n;
		str[0] = '-';
	}
	if (num >= 10)
		ft_numstr((num / 10), str, pos);
	str[pos] = ((num % 10) + '0');
	return (str);
}

char		*ft_itoa(int n)
{
	char			*str;
	int				num;
	unsigned int	len;

	len = 1;
	num = n;
	if (n < 0)
		len++;
	while (num /= 10)
		len++;
	if (!(str = ft_strnew(len)))
		return (NULL);
	str = ft_numstr(n, str, len);
	return (str);
}
