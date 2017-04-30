# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shicks <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/19 21:09:16 by shicks            #+#    #+#              #
#    Updated: 2017/03/13 22:12:07 by shicks           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a
FILES		=	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c
FILES		+=	ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c
FILES		+=	ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c
FILES		+=	ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c
FILES		+=	ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c
FILES		+=	ft_isprint.c ft_toupper.c ft_tolower.c ft_putchar.c
FILES		+=	ft_putstr.c ft_putendl.c ft_putnbr.c ft_memalloc.c  ft_memdel.c
FILES		+=	ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c
FILES		+=	ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c
FILES		+=	ft_strjoin.c ft_strtrim.c ft_strsplit.c ft_itoa.c
FILES		+=	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
FILES		+=	ft_splitwrds.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c
FILES		+=	ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_isupper.c
FILES		+=	ft_islower.c ft_makepos.c ft_isprime.c ft_realloc.c ft_memachr.c

CC			= gcc -Wall -Werror -Wextra
AR			= ar

SRCS		= $(FILES)
OBJS		= $(addprefix build/, $(FILES:.c=.o))

all: $(NAME)

clean:
	rm -rf build/

fclean: clean
	rm -rf $(NAME)

re: fclean all

build:
	mkdir build/

$(NAME): $(SRCS) | $(OBJS)
	$(AR) crs $@ $(OBJS)

build/%.o: %.c | build
	$(CC) -c $^ -o $@

.PHONY: all clean fclean re
