/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 12:32:20 by shicks            #+#    #+#             */
/*   Updated: 2016/11/10 18:35:11 by shicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_atoi(const char *str)
{
	int					i;
	int					j;
	int					sign;
	unsigned long long	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		j = ++i;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		j = ++i;
	while (str[i] == '0')
		j = ++i;
	while (str[i] >= '0' && str[i] <= '9')
		res = (res * 10) + (-'0' + str[i++]);
	if (i - j > 19 || res >= 9223372036854775808ULL)
		return (sign == 1 ? -1 : 0);
	return (res * sign);
}
