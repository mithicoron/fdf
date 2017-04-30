/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 19:35:30 by shicks            #+#    #+#             */
/*   Updated: 2017/03/23 17:23:30 by shicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "get_next_line.h"

char		*move_buff(char **s_buff, char **r_buff)
{
	char	*tmp;

	tmp = NULL;
	tmp = *s_buff;
	*s_buff = ft_strjoin(*s_buff, *r_buff);
	free(tmp);
	return (*s_buff);
}

void		move_line(char **s_buff, int n, int len)
{
	int	i;

	i = 0;
	n = n + 1;
	while (i < len)
	{
		if (n - 1 >= len)
			while (i < len)
			{
				(*s_buff)[i] = '\0';
				i++;
				if (i == len)
					return ;
			}
		(*s_buff)[i] = (*s_buff)[n];
		i++;
		n++;
	}
}

int			chk_lines(char **line, char **s_buff)
{
	size_t	i;
	size_t	j;
	int		l_size;
	int		rem;

	i = 0;
	j = 0;
	rem = ft_strlen((*s_buff));
	if ((*s_buff)[0] == '\0')
		return (0);
	l_size = ft_memachr(*s_buff, '\n');
	if ((*s_buff)[0] == '\n')
	{
		move_line(s_buff, 0, rem);
		*line = ft_strnew(0);
		return (1);
	}
	if ((*s_buff)[0] != '\n')
	{
		*line = ft_strsub(*s_buff, 0, l_size);
		move_line(s_buff, l_size, rem);
	}
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	static char *s_buff = NULL;
	char		*r_buff;
	size_t		size;
	ssize_t		stat;

	size = BUFF_SIZE;
	r_buff = ft_strnew(BUFF_SIZE);
	if (fd < 0 || line == NULL || read(fd, r_buff, 0))
		return (-1);
	if (s_buff == NULL)
		s_buff = ft_strnew(BUFF_SIZE);
	stat = BUFF_SIZE;
	while (s_buff)
	{
		if (ft_memchr(s_buff, '\n', ft_strlen(s_buff)) || stat < BUFF_SIZE)
			break ;
		if ((stat = read(fd, r_buff, BUFF_SIZE)) == 0 && (s_buff[0] == '\0'))
			return (0);
		r_buff[stat] = '\0';
		s_buff = move_buff(&s_buff, &r_buff);
	}
	return (chk_lines(line, &s_buff));
}
