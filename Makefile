# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/04 16:26:03 by gtroiano          #+#    #+#              #
#    Updated: 2023/08/14 15:39:54 by gtroiano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c \
	   ft_putchar.c \
	   ft_putstr.c \
	   ft_putptr.c \
	   ft_putnbr.c \
	   ft_putuint.c \
	   ft_puthex.c \

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

AR = ar crs

${NAME}: $(OBJS)
			$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
