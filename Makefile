# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/30 18:07:12 by oumondad          #+#    #+#              #
#    Updated: 2023/12/02 20:43:38 by oumondad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_print_address.c ft_putstr.c ft_put_u_nbr.c \
	ft_putchar.c ft_puthex.c ft_putnbr.c #ft_printf.c
OBJECTS = $(SRCS:.c=.o)
CC = cc 
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

all : ${NAME}

${NAME} : ${OBJECTS}
	ar rcs ${NAME} ${OBJECTS}

clean:
	rm -f ${OBJECTS}

fclean : clean
	rm -f ${NAME}

re:
	fclean all

.PHONY : all clean fclean re