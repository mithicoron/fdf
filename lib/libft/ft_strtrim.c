/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 17:09:46 by shicks            #+#    #+#             */
/*   Updated: 2016/11/09 19:45:29 by shicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*new;
	int		start;
	int		end;
	int		i;

	i = 0;
	end = 0;
	start = 0;
	if (!s)
		return (NULL);
	while ((s[start] <= ' ') && (s[start] != '\0'))
		start++;
	while (s[end] != '\0')
		end++;
	while ((s[end] <= ' ') && (end > start))
		end--;
	if (!(new = ft_strnew((end - start) + 1)))
		return (NULL);
	while (start <= end)
		new[i++] = s[start++];
	new[i] = '\0';
	return (new);
}
