# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/04 16:26:03 by gtroiano          #+#    #+#              #
#    Updated: 2023/08/10 11:18:44 by gtroiano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -g -03

SRCS = ft_printf.c \
	   ft_putstr.c \


all: $(NAME)

clean: 

fclean:

re: fclean all

.PHONY: all, clean, fclean, re
