/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/29 15:06:50 by shicks            #+#    #+#             */
/*   Updated: 2017/04/29 20:19:23 by shicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fdf.h>

int		my_key_funct(int keycode, void *param)
{
	if (keycode == 53)
		exit(1);
	param = 0;
	ft_putstr("key event");
	ft_putnbr(keycode);
	return (0);
}

int			main(void)
{
	void *server;
	void *window;

	server = mlx_init();
	window = mlx_new_window(server, 400, 400, "test");
	mlx_key_hook(window, my_key_funct, 0);
	mlx_loop(server);
	return (0);
}
