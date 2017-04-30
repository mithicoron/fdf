/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 17:30:50 by shicks            #+#    #+#             */
/*   Updated: 2016/11/08 15:30:27 by shicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char			**arr;
	unsigned int	i;
	unsigned int	j;
	unsigned int	words;

	i = 0;
	j = 0;
	words = 0;
	if (!s || !c)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	if (!(arr = (char**)malloc(sizeof(char*) * (words + 1))))
		return (NULL);
	i = 0;
	while (i < words)
		arr[i++] = ft_splitwrds(s, c, &j);
	arr[i] = 0;
	return (arr);
}
