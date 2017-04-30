# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shicks <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/29 16:10:30 by shicks            #+#    #+#              #
#    Updated: 2017/04/29 19:25:35 by shicks           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	fdf

FILES		=	fdf.c

LIBDIR		=	./lib
MLX			=	./lib/minilibx
LIBFT		=	./lib/libft

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror -framework OpenGL -framework AppKit
LFLAGS		=	-L lib/ -lft -lmlx
INC			=	-I includes -I $(LIBFT) -I $(MLX)

all: $(NAME)

clean:
	make -C $(MLX) clean
	make -C $(LIBFT) clean

fclean: clean
	rm -rf $(NAME)
	rm -rf $(LIBDIR)/libft.a
	rm -rf $(LIBDIR)/libmlx.a
	make -C $(LIBFT) fclean

re : fclean all

$(LIBDIR)/libmlx.a:
	make -C $(MLX)
	cp $(MLX)/libmlx.a $(LIBDIR)

$(LIBDIR)/libft.a:
	make -C $(LIBFT)
	cp $(LIBFT)/libft.a $(LIBDIR)

$(NAME): $(LIBDIR)/libmlx.a $(LIBDIR)/libft.a
	$(CC) $(CFLAGS) $(LFLAGS) $(INC) $(FILES) -o $(NAME)

.PHONY: all clean fclean re
