# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phbasin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/21 14:59:20 by phbasin           #+#    #+#              #
#    Updated: 2021/01/04 16:06:53 by phbasin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME	= ft_hexdump
OBJS	= $(SRCS:.c=.o)
SRCS	= $(wildcard *.c)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

all:		$(NAME)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

.PHONY:		fclean clean all
