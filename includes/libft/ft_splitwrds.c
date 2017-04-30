/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitwrds.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 15:15:30 by shicks            #+#    #+#             */
/*   Updated: 2016/11/09 19:46:42 by shicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_splitwrds(char const *s, char c, unsigned int *index)
{
	unsigned	i;
	unsigned	start;
	char		*word;

	i = 0;
	if (!s || !c || !index)
		return (NULL);
	while (s[*index] == c && s[*index] != '\0')
		(*index)++;
	start = *index;
	while (s[*index] != c && s[*index] != '\0')
		(*index)++;
	if (!(word = ft_strnew(*index - start)))
		return (NULL);
	while (start < *index)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}
